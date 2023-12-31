
# -*- coding: utf-8 -*-

__all__ = [ 'RM_Peripheral_RAC_S' ]

from . static import Base_RM_Peripheral
from . RAC_S_register import *

class RM_Peripheral_RAC_S(Base_RM_Peripheral):
    def __init__(self, rmio, label):
        self.__dict__['zz_frozen'] = False
        super(RM_Peripheral_RAC_S, self).__init__(rmio, label,
            0xA8020000, 'RAC_S',
            u"",
            [])
        self.IPVERSION = RM_Register_RAC_S_IPVERSION(self.zz_rmio, self.zz_label)
        self.zz_rdict['IPVERSION'] = self.IPVERSION
        self.EN = RM_Register_RAC_S_EN(self.zz_rmio, self.zz_label)
        self.zz_rdict['EN'] = self.EN
        self.RXENSRCEN = RM_Register_RAC_S_RXENSRCEN(self.zz_rmio, self.zz_label)
        self.zz_rdict['RXENSRCEN'] = self.RXENSRCEN
        self.STATUS = RM_Register_RAC_S_STATUS(self.zz_rmio, self.zz_label)
        self.zz_rdict['STATUS'] = self.STATUS
        self.CMD = RM_Register_RAC_S_CMD(self.zz_rmio, self.zz_label)
        self.zz_rdict['CMD'] = self.CMD
        self.CTRL = RM_Register_RAC_S_CTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['CTRL'] = self.CTRL
        self.FORCESTATE = RM_Register_RAC_S_FORCESTATE(self.zz_rmio, self.zz_label)
        self.zz_rdict['FORCESTATE'] = self.FORCESTATE
        self.IF = RM_Register_RAC_S_IF(self.zz_rmio, self.zz_label)
        self.zz_rdict['IF'] = self.IF
        self.IEN = RM_Register_RAC_S_IEN(self.zz_rmio, self.zz_label)
        self.zz_rdict['IEN'] = self.IEN
        self.TESTCTRL = RM_Register_RAC_S_TESTCTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['TESTCTRL'] = self.TESTCTRL
        self.SEQIF = RM_Register_RAC_S_SEQIF(self.zz_rmio, self.zz_label)
        self.zz_rdict['SEQIF'] = self.SEQIF
        self.SEQIEN = RM_Register_RAC_S_SEQIEN(self.zz_rmio, self.zz_label)
        self.zz_rdict['SEQIEN'] = self.SEQIEN
        self.STIMER = RM_Register_RAC_S_STIMER(self.zz_rmio, self.zz_label)
        self.zz_rdict['STIMER'] = self.STIMER
        self.STIMERCOMP = RM_Register_RAC_S_STIMERCOMP(self.zz_rmio, self.zz_label)
        self.zz_rdict['STIMERCOMP'] = self.STIMERCOMP
        self.SEQCTRL = RM_Register_RAC_S_SEQCTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['SEQCTRL'] = self.SEQCTRL
        self.PRESC = RM_Register_RAC_S_PRESC(self.zz_rmio, self.zz_label)
        self.zz_rdict['PRESC'] = self.PRESC
        self.SR0 = RM_Register_RAC_S_SR0(self.zz_rmio, self.zz_label)
        self.zz_rdict['SR0'] = self.SR0
        self.SR1 = RM_Register_RAC_S_SR1(self.zz_rmio, self.zz_label)
        self.zz_rdict['SR1'] = self.SR1
        self.SR2 = RM_Register_RAC_S_SR2(self.zz_rmio, self.zz_label)
        self.zz_rdict['SR2'] = self.SR2
        self.SR3 = RM_Register_RAC_S_SR3(self.zz_rmio, self.zz_label)
        self.zz_rdict['SR3'] = self.SR3
        self.STCTRL = RM_Register_RAC_S_STCTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['STCTRL'] = self.STCTRL
        self.FRCTXWORD = RM_Register_RAC_S_FRCTXWORD(self.zz_rmio, self.zz_label)
        self.zz_rdict['FRCTXWORD'] = self.FRCTXWORD
        self.FRCRXWORD = RM_Register_RAC_S_FRCRXWORD(self.zz_rmio, self.zz_label)
        self.zz_rdict['FRCRXWORD'] = self.FRCRXWORD
        self.EM1PCSR = RM_Register_RAC_S_EM1PCSR(self.zz_rmio, self.zz_label)
        self.zz_rdict['EM1PCSR'] = self.EM1PCSR
        self.SYNTHENCTRL = RM_Register_RAC_S_SYNTHENCTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['SYNTHENCTRL'] = self.SYNTHENCTRL
        self.SYNTHREGCTRL = RM_Register_RAC_S_SYNTHREGCTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['SYNTHREGCTRL'] = self.SYNTHREGCTRL
        self.VCOCTRL = RM_Register_RAC_S_VCOCTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['VCOCTRL'] = self.VCOCTRL
        self.CHPCTRL = RM_Register_RAC_S_CHPCTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['CHPCTRL'] = self.CHPCTRL
        self.SYNTHCTRL = RM_Register_RAC_S_SYNTHCTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['SYNTHCTRL'] = self.SYNTHCTRL
        self.RFSTATUS = RM_Register_RAC_S_RFSTATUS(self.zz_rmio, self.zz_label)
        self.zz_rdict['RFSTATUS'] = self.RFSTATUS
        self.STATUS2 = RM_Register_RAC_S_STATUS2(self.zz_rmio, self.zz_label)
        self.zz_rdict['STATUS2'] = self.STATUS2
        self.IFPGACTRL = RM_Register_RAC_S_IFPGACTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['IFPGACTRL'] = self.IFPGACTRL
        self.PAENCTRL = RM_Register_RAC_S_PAENCTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['PAENCTRL'] = self.PAENCTRL
        self.APC = RM_Register_RAC_S_APC(self.zz_rmio, self.zz_label)
        self.zz_rdict['APC'] = self.APC
        self.AUXADCTRIM = RM_Register_RAC_S_AUXADCTRIM(self.zz_rmio, self.zz_label)
        self.zz_rdict['AUXADCTRIM'] = self.AUXADCTRIM
        self.AUXADCEN = RM_Register_RAC_S_AUXADCEN(self.zz_rmio, self.zz_label)
        self.zz_rdict['AUXADCEN'] = self.AUXADCEN
        self.AUXADCCTRL0 = RM_Register_RAC_S_AUXADCCTRL0(self.zz_rmio, self.zz_label)
        self.zz_rdict['AUXADCCTRL0'] = self.AUXADCCTRL0
        self.AUXADCCTRL1 = RM_Register_RAC_S_AUXADCCTRL1(self.zz_rmio, self.zz_label)
        self.zz_rdict['AUXADCCTRL1'] = self.AUXADCCTRL1
        self.AUXADCOUT = RM_Register_RAC_S_AUXADCOUT(self.zz_rmio, self.zz_label)
        self.zz_rdict['AUXADCOUT'] = self.AUXADCOUT
        self.CLKMULTEN0 = RM_Register_RAC_S_CLKMULTEN0(self.zz_rmio, self.zz_label)
        self.zz_rdict['CLKMULTEN0'] = self.CLKMULTEN0
        self.CLKMULTEN1 = RM_Register_RAC_S_CLKMULTEN1(self.zz_rmio, self.zz_label)
        self.zz_rdict['CLKMULTEN1'] = self.CLKMULTEN1
        self.CLKMULTCTRL = RM_Register_RAC_S_CLKMULTCTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['CLKMULTCTRL'] = self.CLKMULTCTRL
        self.CLKMULTSTATUS = RM_Register_RAC_S_CLKMULTSTATUS(self.zz_rmio, self.zz_label)
        self.zz_rdict['CLKMULTSTATUS'] = self.CLKMULTSTATUS
        self.IFADCDBG = RM_Register_RAC_S_IFADCDBG(self.zz_rmio, self.zz_label)
        self.zz_rdict['IFADCDBG'] = self.IFADCDBG
        self.IFADCTRIM0 = RM_Register_RAC_S_IFADCTRIM0(self.zz_rmio, self.zz_label)
        self.zz_rdict['IFADCTRIM0'] = self.IFADCTRIM0
        self.IFADCTRIM1 = RM_Register_RAC_S_IFADCTRIM1(self.zz_rmio, self.zz_label)
        self.zz_rdict['IFADCTRIM1'] = self.IFADCTRIM1
        self.IFADCCAL = RM_Register_RAC_S_IFADCCAL(self.zz_rmio, self.zz_label)
        self.zz_rdict['IFADCCAL'] = self.IFADCCAL
        self.IFADCSTATUS = RM_Register_RAC_S_IFADCSTATUS(self.zz_rmio, self.zz_label)
        self.zz_rdict['IFADCSTATUS'] = self.IFADCSTATUS
        self.LNAMIXDEBUG = RM_Register_RAC_S_LNAMIXDEBUG(self.zz_rmio, self.zz_label)
        self.zz_rdict['LNAMIXDEBUG'] = self.LNAMIXDEBUG
        self.LNAMIXTRIM0 = RM_Register_RAC_S_LNAMIXTRIM0(self.zz_rmio, self.zz_label)
        self.zz_rdict['LNAMIXTRIM0'] = self.LNAMIXTRIM0
        self.LNAMIXTRIM1 = RM_Register_RAC_S_LNAMIXTRIM1(self.zz_rmio, self.zz_label)
        self.zz_rdict['LNAMIXTRIM1'] = self.LNAMIXTRIM1
        self.LNAMIXCAL = RM_Register_RAC_S_LNAMIXCAL(self.zz_rmio, self.zz_label)
        self.zz_rdict['LNAMIXCAL'] = self.LNAMIXCAL
        self.LNAMIXEN = RM_Register_RAC_S_LNAMIXEN(self.zz_rmio, self.zz_label)
        self.zz_rdict['LNAMIXEN'] = self.LNAMIXEN
        self.PRECTRL = RM_Register_RAC_S_PRECTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['PRECTRL'] = self.PRECTRL
        self.PATRIM0 = RM_Register_RAC_S_PATRIM0(self.zz_rmio, self.zz_label)
        self.zz_rdict['PATRIM0'] = self.PATRIM0
        self.PATRIM1 = RM_Register_RAC_S_PATRIM1(self.zz_rmio, self.zz_label)
        self.zz_rdict['PATRIM1'] = self.PATRIM1
        self.PATRIM2 = RM_Register_RAC_S_PATRIM2(self.zz_rmio, self.zz_label)
        self.zz_rdict['PATRIM2'] = self.PATRIM2
        self.PATRIM3 = RM_Register_RAC_S_PATRIM3(self.zz_rmio, self.zz_label)
        self.zz_rdict['PATRIM3'] = self.PATRIM3
        self.PACTRL = RM_Register_RAC_S_PACTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['PACTRL'] = self.PACTRL
        self.PGADEBUG = RM_Register_RAC_S_PGADEBUG(self.zz_rmio, self.zz_label)
        self.zz_rdict['PGADEBUG'] = self.PGADEBUG
        self.PGATRIM = RM_Register_RAC_S_PGATRIM(self.zz_rmio, self.zz_label)
        self.zz_rdict['PGATRIM'] = self.PGATRIM
        self.PGACAL = RM_Register_RAC_S_PGACAL(self.zz_rmio, self.zz_label)
        self.zz_rdict['PGACAL'] = self.PGACAL
        self.PGACTRL = RM_Register_RAC_S_PGACTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['PGACTRL'] = self.PGACTRL
        self.RFBIASCAL = RM_Register_RAC_S_RFBIASCAL(self.zz_rmio, self.zz_label)
        self.zz_rdict['RFBIASCAL'] = self.RFBIASCAL
        self.RFBIASCTRL = RM_Register_RAC_S_RFBIASCTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['RFBIASCTRL'] = self.RFBIASCTRL
        self.RADIOEN = RM_Register_RAC_S_RADIOEN(self.zz_rmio, self.zz_label)
        self.zz_rdict['RADIOEN'] = self.RADIOEN
        self.RFPATHEN = RM_Register_RAC_S_RFPATHEN(self.zz_rmio, self.zz_label)
        self.zz_rdict['RFPATHEN'] = self.RFPATHEN
        self.RX = RM_Register_RAC_S_RX(self.zz_rmio, self.zz_label)
        self.zz_rdict['RX'] = self.RX
        self.TX = RM_Register_RAC_S_TX(self.zz_rmio, self.zz_label)
        self.zz_rdict['TX'] = self.TX
        self.SYDEBUG = RM_Register_RAC_S_SYDEBUG(self.zz_rmio, self.zz_label)
        self.zz_rdict['SYDEBUG'] = self.SYDEBUG
        self.SYTRIM0 = RM_Register_RAC_S_SYTRIM0(self.zz_rmio, self.zz_label)
        self.zz_rdict['SYTRIM0'] = self.SYTRIM0
        self.SYTRIM1 = RM_Register_RAC_S_SYTRIM1(self.zz_rmio, self.zz_label)
        self.zz_rdict['SYTRIM1'] = self.SYTRIM1
        self.SYCAL = RM_Register_RAC_S_SYCAL(self.zz_rmio, self.zz_label)
        self.zz_rdict['SYCAL'] = self.SYCAL
        self.SYEN = RM_Register_RAC_S_SYEN(self.zz_rmio, self.zz_label)
        self.zz_rdict['SYEN'] = self.SYEN
        self.SYLOEN = RM_Register_RAC_S_SYLOEN(self.zz_rmio, self.zz_label)
        self.zz_rdict['SYLOEN'] = self.SYLOEN
        self.SYMMDCTRL = RM_Register_RAC_S_SYMMDCTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['SYMMDCTRL'] = self.SYMMDCTRL
        self.DIGCLKRETIMECTRL = RM_Register_RAC_S_DIGCLKRETIMECTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['DIGCLKRETIMECTRL'] = self.DIGCLKRETIMECTRL
        self.DIGCLKRETIMESTATUS = RM_Register_RAC_S_DIGCLKRETIMESTATUS(self.zz_rmio, self.zz_label)
        self.zz_rdict['DIGCLKRETIMESTATUS'] = self.DIGCLKRETIMESTATUS
        self.XORETIMECTRL = RM_Register_RAC_S_XORETIMECTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['XORETIMECTRL'] = self.XORETIMECTRL
        self.XORETIMESTATUS = RM_Register_RAC_S_XORETIMESTATUS(self.zz_rmio, self.zz_label)
        self.zz_rdict['XORETIMESTATUS'] = self.XORETIMESTATUS
        self.XOSQBUFFILT = RM_Register_RAC_S_XOSQBUFFILT(self.zz_rmio, self.zz_label)
        self.zz_rdict['XOSQBUFFILT'] = self.XOSQBUFFILT
        self.SPARE = RM_Register_RAC_S_SPARE(self.zz_rmio, self.zz_label)
        self.zz_rdict['SPARE'] = self.SPARE
        self.AGCOVERWRITE = RM_Register_RAC_S_AGCOVERWRITE(self.zz_rmio, self.zz_label)
        self.zz_rdict['AGCOVERWRITE'] = self.AGCOVERWRITE
        self.SCRATCH0 = RM_Register_RAC_S_SCRATCH0(self.zz_rmio, self.zz_label)
        self.zz_rdict['SCRATCH0'] = self.SCRATCH0
        self.SCRATCH1 = RM_Register_RAC_S_SCRATCH1(self.zz_rmio, self.zz_label)
        self.zz_rdict['SCRATCH1'] = self.SCRATCH1
        self.SCRATCH2 = RM_Register_RAC_S_SCRATCH2(self.zz_rmio, self.zz_label)
        self.zz_rdict['SCRATCH2'] = self.SCRATCH2
        self.SCRATCH3 = RM_Register_RAC_S_SCRATCH3(self.zz_rmio, self.zz_label)
        self.zz_rdict['SCRATCH3'] = self.SCRATCH3
        self.SCRATCH4 = RM_Register_RAC_S_SCRATCH4(self.zz_rmio, self.zz_label)
        self.zz_rdict['SCRATCH4'] = self.SCRATCH4
        self.SCRATCH5 = RM_Register_RAC_S_SCRATCH5(self.zz_rmio, self.zz_label)
        self.zz_rdict['SCRATCH5'] = self.SCRATCH5
        self.SCRATCH6 = RM_Register_RAC_S_SCRATCH6(self.zz_rmio, self.zz_label)
        self.zz_rdict['SCRATCH6'] = self.SCRATCH6
        self.SCRATCH7 = RM_Register_RAC_S_SCRATCH7(self.zz_rmio, self.zz_label)
        self.zz_rdict['SCRATCH7'] = self.SCRATCH7
        self.THMSW = RM_Register_RAC_S_THMSW(self.zz_rmio, self.zz_label)
        self.zz_rdict['THMSW'] = self.THMSW
        self.DIAGAALTEN = RM_Register_RAC_S_DIAGAALTEN(self.zz_rmio, self.zz_label)
        self.zz_rdict['DIAGAALTEN'] = self.DIAGAALTEN
        self.DIAGAALTSEL = RM_Register_RAC_S_DIAGAALTSEL(self.zz_rmio, self.zz_label)
        self.zz_rdict['DIAGAALTSEL'] = self.DIAGAALTSEL
        self.DIAGAALTBRIDGECTRL = RM_Register_RAC_S_DIAGAALTBRIDGECTRL(self.zz_rmio, self.zz_label)
        self.zz_rdict['DIAGAALTBRIDGECTRL'] = self.DIAGAALTBRIDGECTRL
        self.RFLOCK0 = RM_Register_RAC_S_RFLOCK0(self.zz_rmio, self.zz_label)
        self.zz_rdict['RFLOCK0'] = self.RFLOCK0
        self.RFLOCK1 = RM_Register_RAC_S_RFLOCK1(self.zz_rmio, self.zz_label)
        self.zz_rdict['RFLOCK1'] = self.RFLOCK1
        self.__dict__['zz_frozen'] = True