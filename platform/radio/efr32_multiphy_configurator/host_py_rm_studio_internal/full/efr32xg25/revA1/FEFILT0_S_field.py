
# -*- coding: utf-8 -*-

from . static import Base_RM_Field


class RM_Field_FEFILT0_S_IPVERSION_IPVERSION(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IPVERSION_IPVERSION, self).__init__(register,
            'IPVERSION', 'FEFILT0_S.IPVERSION.IPVERSION', 'read-only',
            u"",
            0, 32)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_EN_EN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_EN_EN, self).__init__(register,
            'EN', 'FEFILT0_S.EN.EN', 'read-write',
            u"",
            0, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_EN_DISABLING(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_EN_DISABLING, self).__init__(register,
            'DISABLING', 'FEFILT0_S.EN.DISABLING', 'read-only',
            u"",
            1, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_SWRST_SWRST(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_SWRST_SWRST, self).__init__(register,
            'SWRST', 'FEFILT0_S.SWRST.SWRST', 'write-only',
            u"",
            0, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_SWRST_RESETTING(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_SWRST_RESETTING, self).__init__(register,
            'RESETTING', 'FEFILT0_S.SWRST.RESETTING', 'read-only',
            u"",
            1, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_STATUS_FEFILTLOCKSTATUS(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_STATUS_FEFILTLOCKSTATUS, self).__init__(register,
            'FEFILTLOCKSTATUS', 'FEFILT0_S.STATUS.FEFILTLOCKSTATUS', 'read-only',
            u"",
            0, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_LOCK_FEFILTLOCKKEY(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_LOCK_FEFILTLOCKKEY, self).__init__(register,
            'FEFILTLOCKKEY', 'FEFILT0_S.LOCK.FEFILTLOCKKEY', 'write-only',
            u"",
            0, 16)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CFG_LOSYNCRESETENABLE(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CFG_LOSYNCRESETENABLE, self).__init__(register,
            'LOSYNCRESETENABLE', 'FEFILT0_S.CFG.LOSYNCRESETENABLE', 'read-write',
            u"",
            0, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CMD_SWGAINCHANGE(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CMD_SWGAINCHANGE, self).__init__(register,
            'SWGAINCHANGE', 'FEFILT0_S.CMD.SWGAINCHANGE', 'write-only',
            u"",
            0, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CF_DEC0(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CF_DEC0, self).__init__(register,
            'DEC0', 'FEFILT0_S.CF.DEC0', 'read-write',
            u"",
            0, 3)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CF_DEC1(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CF_DEC1, self).__init__(register,
            'DEC1', 'FEFILT0_S.CF.DEC1', 'read-write',
            u"",
            3, 14)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CF_ADCBITORDERI(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CF_ADCBITORDERI, self).__init__(register,
            'ADCBITORDERI', 'FEFILT0_S.CF.ADCBITORDERI', 'read-write',
            u"",
            30, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CF_ADCBITORDERQ(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CF_ADCBITORDERQ, self).__init__(register,
            'ADCBITORDERQ', 'FEFILT0_S.CF.ADCBITORDERQ', 'read-write',
            u"",
            31, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_SRC_SRCRATIO(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_SRC_SRCRATIO, self).__init__(register,
            'SRCRATIO', 'FEFILT0_S.SRC.SRCRATIO', 'read-write',
            u"",
            0, 20)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_SRC_UPGAPS(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_SRC_UPGAPS, self).__init__(register,
            'UPGAPS', 'FEFILT0_S.SRC.UPGAPS', 'read-write',
            u"",
            22, 3)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_SRC_SRCENABLE(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_SRC_SRCENABLE, self).__init__(register,
            'SRCENABLE', 'FEFILT0_S.SRC.SRCENABLE', 'read-write',
            u"",
            27, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_SRC_SRCSRD(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_SRC_SRCSRD, self).__init__(register,
            'SRCSRD', 'FEFILT0_S.SRC.SRCSRD', 'read-write',
            u"",
            28, 2)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DIGIGAINCTRL_DIGIGAINEN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DIGIGAINCTRL_DIGIGAINEN, self).__init__(register,
            'DIGIGAINEN', 'FEFILT0_S.DIGIGAINCTRL.DIGIGAINEN', 'read-write',
            u"",
            0, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DIGIGAINCTRL_DIGIGAIN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DIGIGAINCTRL_DIGIGAIN, self).__init__(register,
            'DIGIGAIN', 'FEFILT0_S.DIGIGAINCTRL.DIGIGAIN', 'read-write',
            u"",
            1, 8)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DIGIGAINCTRL_DEC0GAIN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DIGIGAINCTRL_DEC0GAIN, self).__init__(register,
            'DEC0GAIN', 'FEFILT0_S.DIGIGAINCTRL.DEC0GAIN', 'read-write',
            u"",
            9, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DIGIGAINCTRL_DEC1GAIN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DIGIGAINCTRL_DEC1GAIN, self).__init__(register,
            'DEC1GAIN', 'FEFILT0_S.DIGIGAINCTRL.DEC1GAIN', 'read-write',
            u"",
            10, 2)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DIGIGAINCTRL_BBSS(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DIGIGAINCTRL_BBSS, self).__init__(register,
            'BBSS', 'FEFILT0_S.DIGIGAINCTRL.BBSS', 'read-write',
            u"",
            12, 4)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE00_SET0COEFF0(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE00_SET0COEFF0, self).__init__(register,
            'SET0COEFF0', 'FEFILT0_S.CHFCOE00.SET0COEFF0', 'read-write',
            u"",
            0, 10)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE00_SET0COEFF1(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE00_SET0COEFF1, self).__init__(register,
            'SET0COEFF1', 'FEFILT0_S.CHFCOE00.SET0COEFF1', 'read-write',
            u"",
            10, 10)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE00_SET0COEFF2(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE00_SET0COEFF2, self).__init__(register,
            'SET0COEFF2', 'FEFILT0_S.CHFCOE00.SET0COEFF2', 'read-write',
            u"",
            20, 10)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE01_SET0COEFF3(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE01_SET0COEFF3, self).__init__(register,
            'SET0COEFF3', 'FEFILT0_S.CHFCOE01.SET0COEFF3', 'read-write',
            u"",
            0, 11)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE01_SET0COEFF4(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE01_SET0COEFF4, self).__init__(register,
            'SET0COEFF4', 'FEFILT0_S.CHFCOE01.SET0COEFF4', 'read-write',
            u"",
            11, 11)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE02_SET0COEFF5(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE02_SET0COEFF5, self).__init__(register,
            'SET0COEFF5', 'FEFILT0_S.CHFCOE02.SET0COEFF5', 'read-write',
            u"",
            0, 11)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE02_SET0COEFF6(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE02_SET0COEFF6, self).__init__(register,
            'SET0COEFF6', 'FEFILT0_S.CHFCOE02.SET0COEFF6', 'read-write',
            u"",
            11, 12)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE03_SET0COEFF7(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE03_SET0COEFF7, self).__init__(register,
            'SET0COEFF7', 'FEFILT0_S.CHFCOE03.SET0COEFF7', 'read-write',
            u"",
            0, 12)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE03_SET0COEFF8(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE03_SET0COEFF8, self).__init__(register,
            'SET0COEFF8', 'FEFILT0_S.CHFCOE03.SET0COEFF8', 'read-write',
            u"",
            12, 12)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE04_SET0COEFF9(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE04_SET0COEFF9, self).__init__(register,
            'SET0COEFF9', 'FEFILT0_S.CHFCOE04.SET0COEFF9', 'read-write',
            u"",
            0, 14)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE04_SET0COEFF10(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE04_SET0COEFF10, self).__init__(register,
            'SET0COEFF10', 'FEFILT0_S.CHFCOE04.SET0COEFF10', 'read-write',
            u"",
            14, 14)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE05_SET0COEFF11(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE05_SET0COEFF11, self).__init__(register,
            'SET0COEFF11', 'FEFILT0_S.CHFCOE05.SET0COEFF11', 'read-write',
            u"",
            0, 14)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE05_SET0COEFF12(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE05_SET0COEFF12, self).__init__(register,
            'SET0COEFF12', 'FEFILT0_S.CHFCOE05.SET0COEFF12', 'read-write',
            u"",
            14, 16)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE06_SET0COEFF13(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE06_SET0COEFF13, self).__init__(register,
            'SET0COEFF13', 'FEFILT0_S.CHFCOE06.SET0COEFF13', 'read-write',
            u"",
            0, 16)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE06_SET0COEFF14(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE06_SET0COEFF14, self).__init__(register,
            'SET0COEFF14', 'FEFILT0_S.CHFCOE06.SET0COEFF14', 'read-write',
            u"",
            16, 16)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE10_SET1COEFF0(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE10_SET1COEFF0, self).__init__(register,
            'SET1COEFF0', 'FEFILT0_S.CHFCOE10.SET1COEFF0', 'read-write',
            u"",
            0, 10)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE10_SET1COEFF1(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE10_SET1COEFF1, self).__init__(register,
            'SET1COEFF1', 'FEFILT0_S.CHFCOE10.SET1COEFF1', 'read-write',
            u"",
            10, 10)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE10_SET1COEFF2(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE10_SET1COEFF2, self).__init__(register,
            'SET1COEFF2', 'FEFILT0_S.CHFCOE10.SET1COEFF2', 'read-write',
            u"",
            20, 10)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE11_SET1COEFF3(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE11_SET1COEFF3, self).__init__(register,
            'SET1COEFF3', 'FEFILT0_S.CHFCOE11.SET1COEFF3', 'read-write',
            u"",
            0, 11)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE11_SET1COEFF4(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE11_SET1COEFF4, self).__init__(register,
            'SET1COEFF4', 'FEFILT0_S.CHFCOE11.SET1COEFF4', 'read-write',
            u"",
            11, 11)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE12_SET1COEFF5(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE12_SET1COEFF5, self).__init__(register,
            'SET1COEFF5', 'FEFILT0_S.CHFCOE12.SET1COEFF5', 'read-write',
            u"",
            0, 11)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE12_SET1COEFF6(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE12_SET1COEFF6, self).__init__(register,
            'SET1COEFF6', 'FEFILT0_S.CHFCOE12.SET1COEFF6', 'read-write',
            u"",
            11, 12)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE13_SET1COEFF7(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE13_SET1COEFF7, self).__init__(register,
            'SET1COEFF7', 'FEFILT0_S.CHFCOE13.SET1COEFF7', 'read-write',
            u"",
            0, 12)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE13_SET1COEFF8(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE13_SET1COEFF8, self).__init__(register,
            'SET1COEFF8', 'FEFILT0_S.CHFCOE13.SET1COEFF8', 'read-write',
            u"",
            12, 12)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE15_SET1COEFF11(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE15_SET1COEFF11, self).__init__(register,
            'SET1COEFF11', 'FEFILT0_S.CHFCOE15.SET1COEFF11', 'read-write',
            u"",
            0, 14)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE15_SET1COEFF12(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE15_SET1COEFF12, self).__init__(register,
            'SET1COEFF12', 'FEFILT0_S.CHFCOE15.SET1COEFF12', 'read-write',
            u"",
            14, 16)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE14_SET1COEFF9(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE14_SET1COEFF9, self).__init__(register,
            'SET1COEFF9', 'FEFILT0_S.CHFCOE14.SET1COEFF9', 'read-write',
            u"",
            0, 14)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE14_SET1COEFF10(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE14_SET1COEFF10, self).__init__(register,
            'SET1COEFF10', 'FEFILT0_S.CHFCOE14.SET1COEFF10', 'read-write',
            u"",
            14, 14)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE16_SET1COEFF13(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE16_SET1COEFF13, self).__init__(register,
            'SET1COEFF13', 'FEFILT0_S.CHFCOE16.SET1COEFF13', 'read-write',
            u"",
            0, 16)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCOE16_SET1COEFF14(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCOE16_SET1COEFF14, self).__init__(register,
            'SET1COEFF14', 'FEFILT0_S.CHFCOE16.SET1COEFF14', 'read-write',
            u"",
            16, 16)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCTRL_FWSWCOEFFEN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCTRL_FWSWCOEFFEN, self).__init__(register,
            'FWSWCOEFFEN', 'FEFILT0_S.CHFCTRL.FWSWCOEFFEN', 'read-write',
            u"",
            0, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCTRL_FWSELCOEFF(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCTRL_FWSELCOEFF, self).__init__(register,
            'FWSELCOEFF', 'FEFILT0_S.CHFCTRL.FWSELCOEFF', 'read-write',
            u"",
            1, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCTRL_CHFLATENCY(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCTRL_CHFLATENCY, self).__init__(register,
            'CHFLATENCY', 'FEFILT0_S.CHFCTRL.CHFLATENCY', 'read-write',
            u"",
            2, 2)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCTRL_SWCOEFFSELECTION(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCTRL_SWCOEFFSELECTION, self).__init__(register,
            'SWCOEFFSELECTION', 'FEFILT0_S.CHFCTRL.SWCOEFFSELECTION', 'read-write',
            u"",
            30, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CHFCTRL_SWCOEFFEN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CHFCTRL_SWCOEFFEN, self).__init__(register,
            'SWCOEFFEN', 'FEFILT0_S.CHFCTRL.SWCOEFFEN', 'read-write',
            u"",
            31, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_CTRL_SWAFCADJRX(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_CTRL_SWAFCADJRX, self).__init__(register,
            'SWAFCADJRX', 'FEFILT0_S.CTRL.SWAFCADJRX', 'read-write',
            u"",
            0, 19)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_BLANKING_BLANKDELAY(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_BLANKING_BLANKDELAY, self).__init__(register,
            'BLANKDELAY', 'FEFILT0_S.BLANKING.BLANKDELAY', 'read-write',
            u"",
            0, 8)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_BLANKING_BLANKDURATION(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_BLANKING_BLANKDURATION, self).__init__(register,
            'BLANKDURATION', 'FEFILT0_S.BLANKING.BLANKDURATION', 'read-write',
            u"",
            8, 8)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_BLANKING_BLANKMODE(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_BLANKING_BLANKMODE, self).__init__(register,
            'BLANKMODE', 'FEFILT0_S.BLANKING.BLANKMODE', 'read-write',
            u"",
            16, 3)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTEN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTEN, self).__init__(register,
            'RSSIFILTEN', 'FEFILT0_S.RSSIFILT.RSSIFILTEN', 'read-write',
            u"",
            0, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTDEC(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTDEC, self).__init__(register,
            'RSSIFILTDEC', 'FEFILT0_S.RSSIFILT.RSSIFILTDEC', 'read-write',
            u"",
            1, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTGAIN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTGAIN, self).__init__(register,
            'RSSIFILTGAIN', 'FEFILT0_S.RSSIFILT.RSSIFILTGAIN', 'read-write',
            u"",
            2, 3)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTCOEF0(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTCOEF0, self).__init__(register,
            'RSSIFILTCOEF0', 'FEFILT0_S.RSSIFILT.RSSIFILTCOEF0', 'read-write',
            u"",
            5, 2)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTCOEF1(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTCOEF1, self).__init__(register,
            'RSSIFILTCOEF1', 'FEFILT0_S.RSSIFILT.RSSIFILTCOEF1', 'read-write',
            u"",
            7, 2)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTCOEF2(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTCOEF2, self).__init__(register,
            'RSSIFILTCOEF2', 'FEFILT0_S.RSSIFILT.RSSIFILTCOEF2', 'read-write',
            u"",
            9, 2)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTCOEF3(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTCOEF3, self).__init__(register,
            'RSSIFILTCOEF3', 'FEFILT0_S.RSSIFILT.RSSIFILTCOEF3', 'read-write',
            u"",
            11, 2)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTCOEF4(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTCOEF4, self).__init__(register,
            'RSSIFILTCOEF4', 'FEFILT0_S.RSSIFILT.RSSIFILTCOEF4', 'read-write',
            u"",
            13, 2)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTCOEF5(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTCOEF5, self).__init__(register,
            'RSSIFILTCOEF5', 'FEFILT0_S.RSSIFILT.RSSIFILTCOEF5', 'read-write',
            u"",
            15, 2)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTCOEF6(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTCOEF6, self).__init__(register,
            'RSSIFILTCOEF6', 'FEFILT0_S.RSSIFILT.RSSIFILTCOEF6', 'read-write',
            u"",
            17, 2)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTCOEF7(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_RSSIFILT_RSSIFILTCOEF7, self).__init__(register,
            'RSSIFILTCOEF7', 'FEFILT0_S.RSSIFILT.RSSIFILTCOEF7', 'read-write',
            u"",
            19, 2)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DIGMIXCTRL_DIGMIXFREQ(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DIGMIXCTRL_DIGMIXFREQ, self).__init__(register,
            'DIGMIXFREQ', 'FEFILT0_S.DIGMIXCTRL.DIGMIXFREQ', 'read-write',
            u"",
            0, 20)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DIGMIXCTRL_DIGIQSWAPEN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DIGMIXCTRL_DIGIQSWAPEN, self).__init__(register,
            'DIGIQSWAPEN', 'FEFILT0_S.DIGMIXCTRL.DIGIQSWAPEN', 'read-write',
            u"",
            20, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DIGMIXCTRL_MIXERCONJ(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DIGMIXCTRL_MIXERCONJ, self).__init__(register,
            'MIXERCONJ', 'FEFILT0_S.DIGMIXCTRL.MIXERCONJ', 'read-write',
            u"",
            21, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DIGMIXCTRL_DIGMIXFBENABLE(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DIGMIXCTRL_DIGMIXFBENABLE, self).__init__(register,
            'DIGMIXFBENABLE', 'FEFILT0_S.DIGMIXCTRL.DIGMIXFBENABLE', 'read-write',
            u"",
            22, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DCCOMP_DCESTIEN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DCCOMP_DCESTIEN, self).__init__(register,
            'DCESTIEN', 'FEFILT0_S.DCCOMP.DCESTIEN', 'read-write',
            u"",
            0, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DCCOMP_DCCOMPEN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DCCOMP_DCCOMPEN, self).__init__(register,
            'DCCOMPEN', 'FEFILT0_S.DCCOMP.DCCOMPEN', 'read-write',
            u"",
            1, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DCCOMP_DCRSTEN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DCCOMP_DCRSTEN, self).__init__(register,
            'DCRSTEN', 'FEFILT0_S.DCCOMP.DCRSTEN', 'read-write',
            u"",
            2, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DCCOMP_DCCOMPFREEZE(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DCCOMP_DCCOMPFREEZE, self).__init__(register,
            'DCCOMPFREEZE', 'FEFILT0_S.DCCOMP.DCCOMPFREEZE', 'read-write',
            u"",
            3, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DCCOMP_DCCOMPGEAR(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DCCOMP_DCCOMPGEAR, self).__init__(register,
            'DCCOMPGEAR', 'FEFILT0_S.DCCOMP.DCCOMPGEAR', 'read-write',
            u"",
            4, 4)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DCCOMP_DCLIMIT(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DCCOMP_DCLIMIT, self).__init__(register,
            'DCLIMIT', 'FEFILT0_S.DCCOMP.DCLIMIT', 'read-write',
            u"",
            8, 2)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DCCOMP_DCGAINGEAREN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DCCOMP_DCGAINGEAREN, self).__init__(register,
            'DCGAINGEAREN', 'FEFILT0_S.DCCOMP.DCGAINGEAREN', 'read-write',
            u"",
            10, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DCCOMP_DCGAINGEAR(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DCCOMP_DCGAINGEAR, self).__init__(register,
            'DCGAINGEAR', 'FEFILT0_S.DCCOMP.DCGAINGEAR', 'read-write',
            u"",
            11, 4)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DCCOMP_DCGAINGEARSMPS(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DCCOMP_DCGAINGEARSMPS, self).__init__(register,
            'DCGAINGEARSMPS', 'FEFILT0_S.DCCOMP.DCGAINGEARSMPS', 'read-write',
            u"",
            15, 8)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DCCOMP_GEARGAINCHANGESEL(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DCCOMP_GEARGAINCHANGESEL, self).__init__(register,
            'GEARGAINCHANGESEL', 'FEFILT0_S.DCCOMP.GEARGAINCHANGESEL', 'read-write',
            u"",
            23, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DCCOMP_GEARFREEZEENABLE(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DCCOMP_GEARFREEZEENABLE, self).__init__(register,
            'GEARFREEZEENABLE', 'FEFILT0_S.DCCOMP.GEARFREEZEENABLE', 'read-write',
            u"",
            24, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DCCOMPFILTINIT_DCCOMPINITVALI(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DCCOMPFILTINIT_DCCOMPINITVALI, self).__init__(register,
            'DCCOMPINITVALI', 'FEFILT0_S.DCCOMPFILTINIT.DCCOMPINITVALI', 'read-write',
            u"",
            0, 15)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DCCOMPFILTINIT_DCCOMPINITVALQ(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DCCOMPFILTINIT_DCCOMPINITVALQ, self).__init__(register,
            'DCCOMPINITVALQ', 'FEFILT0_S.DCCOMPFILTINIT.DCCOMPINITVALQ', 'read-write',
            u"",
            15, 15)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DCCOMPFILTINIT_DCCOMPINIT(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DCCOMPFILTINIT_DCCOMPINIT, self).__init__(register,
            'DCCOMPINIT', 'FEFILT0_S.DCCOMPFILTINIT.DCCOMPINIT', 'read-write',
            u"",
            30, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DCESTI_DCCOMPESTIVALI(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DCESTI_DCCOMPESTIVALI, self).__init__(register,
            'DCCOMPESTIVALI', 'FEFILT0_S.DCESTI.DCCOMPESTIVALI', 'read-only',
            u"",
            0, 15)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_DCESTI_DCCOMPESTIVALQ(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_DCESTI_DCCOMPESTIVALQ, self).__init__(register,
            'DCCOMPESTIVALQ', 'FEFILT0_S.DCESTI.DCCOMPESTIVALQ', 'read-only',
            u"",
            15, 15)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_IRCAL_IRCALEN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IRCAL_IRCALEN, self).__init__(register,
            'IRCALEN', 'FEFILT0_S.IRCAL.IRCALEN', 'read-write',
            u"",
            0, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_IRCAL_MURSHF(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IRCAL_MURSHF, self).__init__(register,
            'MURSHF', 'FEFILT0_S.IRCAL.MURSHF', 'read-write',
            u"",
            1, 5)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_IRCAL_MUISHF(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IRCAL_MUISHF, self).__init__(register,
            'MUISHF', 'FEFILT0_S.IRCAL.MUISHF', 'read-write',
            u"",
            7, 6)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_IRCAL_IRCORREN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IRCAL_IRCORREN, self).__init__(register,
            'IRCORREN', 'FEFILT0_S.IRCAL.IRCORREN', 'read-write',
            u"",
            13, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_IRCAL_IRCALCOEFRSTCMD(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IRCAL_IRCALCOEFRSTCMD, self).__init__(register,
            'IRCALCOEFRSTCMD', 'FEFILT0_S.IRCAL.IRCALCOEFRSTCMD', 'write-only',
            u"",
            14, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_IRCAL_IRCALIFADCDBG(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IRCAL_IRCALIFADCDBG, self).__init__(register,
            'IRCALIFADCDBG', 'FEFILT0_S.IRCAL.IRCALIFADCDBG', 'read-write',
            u"",
            15, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_IRCALCOEF_CRV(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IRCALCOEF_CRV, self).__init__(register,
            'CRV', 'FEFILT0_S.IRCALCOEF.CRV', 'read-only',
            u"",
            0, 15)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_IRCALCOEF_CIV(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IRCALCOEF_CIV, self).__init__(register,
            'CIV', 'FEFILT0_S.IRCALCOEF.CIV', 'read-only',
            u"",
            16, 15)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_IRCALCOEFWR0_CRVWD(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IRCALCOEFWR0_CRVWD, self).__init__(register,
            'CRVWD', 'FEFILT0_S.IRCALCOEFWR0.CRVWD', 'read-write',
            u"",
            0, 15)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_IRCALCOEFWR0_CRVWEN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IRCALCOEFWR0_CRVWEN, self).__init__(register,
            'CRVWEN', 'FEFILT0_S.IRCALCOEFWR0.CRVWEN', 'read-write',
            u"",
            15, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_IRCALCOEFWR0_CIVWD(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IRCALCOEFWR0_CIVWD, self).__init__(register,
            'CIVWD', 'FEFILT0_S.IRCALCOEFWR0.CIVWD', 'read-write',
            u"",
            16, 15)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_IRCALCOEFWR0_CIVWEN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IRCALCOEFWR0_CIVWEN, self).__init__(register,
            'CIVWEN', 'FEFILT0_S.IRCALCOEFWR0.CIVWEN', 'read-write',
            u"",
            31, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_IRCALCOEFWR1_CRVWD(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IRCALCOEFWR1_CRVWD, self).__init__(register,
            'CRVWD', 'FEFILT0_S.IRCALCOEFWR1.CRVWD', 'read-write',
            u"",
            0, 15)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_IRCALCOEFWR1_CRVWEN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IRCALCOEFWR1_CRVWEN, self).__init__(register,
            'CRVWEN', 'FEFILT0_S.IRCALCOEFWR1.CRVWEN', 'read-write',
            u"",
            15, 1)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_IRCALCOEFWR1_CIVWD(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IRCALCOEFWR1_CIVWD, self).__init__(register,
            'CIVWD', 'FEFILT0_S.IRCALCOEFWR1.CIVWD', 'read-write',
            u"",
            16, 15)
        self.__dict__['zz_frozen'] = True


class RM_Field_FEFILT0_S_IRCALCOEFWR1_CIVWEN(Base_RM_Field):
    def __init__(self, register):
        self.__dict__['zz_frozen'] = False
        super(RM_Field_FEFILT0_S_IRCALCOEFWR1_CIVWEN, self).__init__(register,
            'CIVWEN', 'FEFILT0_S.IRCALCOEFWR1.CIVWEN', 'read-write',
            u"",
            31, 1)
        self.__dict__['zz_frozen'] = True


