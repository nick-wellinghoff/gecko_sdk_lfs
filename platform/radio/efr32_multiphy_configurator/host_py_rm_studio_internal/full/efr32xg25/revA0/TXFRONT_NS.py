
# -*- coding: utf-8 -*-

__all__ = [ 'RM_Peripheral_TXFRONT_NS' ]

from . static import Base_RM_Peripheral
from . TXFRONT_NS_register import *

class RM_Peripheral_TXFRONT_NS(Base_RM_Peripheral):
    def __init__(self, rmio, label):
        self.__dict__['zz_frozen'] = False
        super(RM_Peripheral_TXFRONT_NS, self).__init__(rmio, label,
            0xB8048000, 'TXFRONT_NS',
            u"",
            [])
        self.IPVERSION = RM_Register_TXFRONT_NS_IPVERSION(self.zz_rmio, self.zz_label)
        self.zz_rdict['IPVERSION'] = self.IPVERSION
        self.EN = RM_Register_TXFRONT_NS_EN(self.zz_rmio, self.zz_label)
        self.zz_rdict['EN'] = self.EN
        self.SWRST = RM_Register_TXFRONT_NS_SWRST(self.zz_rmio, self.zz_label)
        self.zz_rdict['SWRST'] = self.SWRST
        self.DISCLK = RM_Register_TXFRONT_NS_DISCLK(self.zz_rmio, self.zz_label)
        self.zz_rdict['DISCLK'] = self.DISCLK
        self.INT1CFG = RM_Register_TXFRONT_NS_INT1CFG(self.zz_rmio, self.zz_label)
        self.zz_rdict['INT1CFG'] = self.INT1CFG
        self.INT1COEF01 = RM_Register_TXFRONT_NS_INT1COEF01(self.zz_rmio, self.zz_label)
        self.zz_rdict['INT1COEF01'] = self.INT1COEF01
        self.INT1COEF23 = RM_Register_TXFRONT_NS_INT1COEF23(self.zz_rmio, self.zz_label)
        self.zz_rdict['INT1COEF23'] = self.INT1COEF23
        self.INT1COEF45 = RM_Register_TXFRONT_NS_INT1COEF45(self.zz_rmio, self.zz_label)
        self.zz_rdict['INT1COEF45'] = self.INT1COEF45
        self.INT1COEF67 = RM_Register_TXFRONT_NS_INT1COEF67(self.zz_rmio, self.zz_label)
        self.zz_rdict['INT1COEF67'] = self.INT1COEF67
        self.INT1COEF89 = RM_Register_TXFRONT_NS_INT1COEF89(self.zz_rmio, self.zz_label)
        self.zz_rdict['INT1COEF89'] = self.INT1COEF89
        self.INT1COEF1011 = RM_Register_TXFRONT_NS_INT1COEF1011(self.zz_rmio, self.zz_label)
        self.zz_rdict['INT1COEF1011'] = self.INT1COEF1011
        self.INT1COEF1213 = RM_Register_TXFRONT_NS_INT1COEF1213(self.zz_rmio, self.zz_label)
        self.zz_rdict['INT1COEF1213'] = self.INT1COEF1213
        self.INT1COEF1415 = RM_Register_TXFRONT_NS_INT1COEF1415(self.zz_rmio, self.zz_label)
        self.zz_rdict['INT1COEF1415'] = self.INT1COEF1415
        self.INT2CFG = RM_Register_TXFRONT_NS_INT2CFG(self.zz_rmio, self.zz_label)
        self.zz_rdict['INT2CFG'] = self.INT2CFG
        self.SRCCFG = RM_Register_TXFRONT_NS_SRCCFG(self.zz_rmio, self.zz_label)
        self.zz_rdict['SRCCFG'] = self.SRCCFG
        self.TXIQIMB = RM_Register_TXFRONT_NS_TXIQIMB(self.zz_rmio, self.zz_label)
        self.zz_rdict['TXIQIMB'] = self.TXIQIMB
        self.TXDCOFFSET = RM_Register_TXFRONT_NS_TXDCOFFSET(self.zz_rmio, self.zz_label)
        self.zz_rdict['TXDCOFFSET'] = self.TXDCOFFSET
        self.TXRAMPUP = RM_Register_TXFRONT_NS_TXRAMPUP(self.zz_rmio, self.zz_label)
        self.zz_rdict['TXRAMPUP'] = self.TXRAMPUP
        self.TXDCRAMPUP = RM_Register_TXFRONT_NS_TXDCRAMPUP(self.zz_rmio, self.zz_label)
        self.zz_rdict['TXDCRAMPUP'] = self.TXDCRAMPUP
        self.TXGAIN = RM_Register_TXFRONT_NS_TXGAIN(self.zz_rmio, self.zz_label)
        self.zz_rdict['TXGAIN'] = self.TXGAIN
        self.TXCLIP = RM_Register_TXFRONT_NS_TXCLIP(self.zz_rmio, self.zz_label)
        self.zz_rdict['TXCLIP'] = self.TXCLIP
        self.TXPREDIST = RM_Register_TXFRONT_NS_TXPREDIST(self.zz_rmio, self.zz_label)
        self.zz_rdict['TXPREDIST'] = self.TXPREDIST
        self.DAC = RM_Register_TXFRONT_NS_DAC(self.zz_rmio, self.zz_label)
        self.zz_rdict['DAC'] = self.DAC
        self.__dict__['zz_frozen'] = True