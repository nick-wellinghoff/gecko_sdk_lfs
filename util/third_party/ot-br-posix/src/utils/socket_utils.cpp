/*
 *  Copyright (c) 2021, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

#include "utils/socket_utils.hpp"

#if __linux__
#include <linux/netlink.h>
#include <linux/rtnetlink.h>
#endif

#include "common/code_utils.hpp"

int SocketWithCloseExec(int aDomain, int aType, int aProtocol, SocketBlockOption aBlockOption)
{
    int rval = 0;
    int fd   = -1;

#ifdef __APPLE__
    VerifyOrExit((fd = socket(aDomain, aType, aProtocol)) != -1, perror("socket(SOCK_CLOEXEC)"));

    VerifyOrExit((rval = fcntl(fd, F_GETFD, 0)) != -1, perror("fcntl(F_GETFD)"));
    rval |= aBlockOption == kSocketNonBlock ? O_NONBLOCK | FD_CLOEXEC : FD_CLOEXEC;
    VerifyOrExit((rval = fcntl(fd, F_SETFD, rval)) != -1, perror("fcntl(F_SETFD)"));
#else
    aType |= aBlockOption == kSocketNonBlock ? SOCK_CLOEXEC | SOCK_NONBLOCK : SOCK_CLOEXEC;
    VerifyOrExit((fd = socket(aDomain, aType, aProtocol)) != -1, perror("socket(SOCK_CLOEXEC)"));
#endif

exit:
    if (rval == -1)
    {
        VerifyOrDie(close(fd) == 0, "close(fd) failed");
        fd = -1;
    }

    return fd;
}

#if __linux__
int CreateNetLinkRouteSocket(uint32_t aNlGroups)
{
    int                sock;
    int                rval = 0;
    struct sockaddr_nl addr;

    sock = SocketWithCloseExec(AF_NETLINK, SOCK_DGRAM, NETLINK_ROUTE, kSocketBlock);
    VerifyOrExit(sock != -1);

    memset(&addr, 0, sizeof(addr));
    addr.nl_family = AF_NETLINK;
    addr.nl_groups = aNlGroups; // e.g. RTMGRP_LINK | RTMGRP_IPV6_IFADDR;

    rval = bind(sock, reinterpret_cast<struct sockaddr *>(&addr), sizeof(addr));

exit:
    if (rval != 0)
    {
        close(sock);
        sock = -1;
    }

    return sock;
}
#endif
