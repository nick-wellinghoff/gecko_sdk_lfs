
import os
from host_py_rm_studio_internal import rm_dynamic_import

_PKG_PATH = os.path.dirname(os.path.realpath(__file__))


class RM_SIXG300XIL300_Info(object):
    short_name = 'sixg300xil300'
    val_die_name = 'SIXG300XIL300XFULL'
    arm_core_revs = []
    rtl_revs = ['A0']
    di_revs = []
    pte_revs = []
    pkg_path = _PKG_PATH
    all_revs = arm_core_revs + rtl_revs + di_revs + pte_revs


def RM_Factory(rev_name):
    return rm_dynamic_import('LPW300', rev_name)


def RM_GetInfo():
    return RM_SIXG300XIL300_Info
