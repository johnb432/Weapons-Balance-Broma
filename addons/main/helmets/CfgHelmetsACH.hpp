#define ACH_PARENT(type1,type2)\
class type1: type2 {\
    ace_hearing_lowerVolume = 0;\
    ace_hearing_protection = 0;\
}

#define ACH(type) ACH_PARENT(type,BRM_ACH_MASK_COMS_GREEN)

ACH(BRM_ACH_AOR1);
ACH(BRM_ACH_AOR2);
ACH(BRM_ACH_ATACSAUX);
ACH(BRM_ACH_ATACSFGX);
ACH(BRM_ACH_BLACK);
ACH(BRM_ACH_BROWN);
ACH(BRM_ACH_CADPATD);
ACH(BRM_ACH_CADPATW);
ACH(BRM_ACH_CCE);
ACH(BRM_ACH_DAGUET);
ACH(BRM_ACH_DCU);
ACH(BRM_ACH_DFRACD);
ACH(BRM_ACH_DFRACW);
ACH(BRM_ACH_DPCU);
ACH(BRM_ACH_DPDU);
ACH(BRM_ACH_ESTDCU);
ACH(BRM_ACH_FLECK);
ACH(BRM_ACH_FM05FROST);
ACH(BRM_ACH_FM05SUM);
ACH(BRM_ACH_GraniteB);
ACH(BRM_ACH_GREEN);
ACH(BRM_ACH_JIEITAID);
ACH(BRM_ACH_JIEITAIW);
ACH(BRM_ACH_JIGSAW);
ACH(BRM_ACH_M05);
ACH(BRM_ACH_M90D);
ACH(BRM_ACH_M90W);
ACH(BRM_ACH_MARPATD);
ACH(BRM_ACH_MARPATW);
ACH(BRM_ACH_MCU);
ACH(BRM_ACH_MLTCAM);
ACH(BRM_ACH_MLTCAMTS);
ACH(BRM_ACH_MM14);
ACH(BRM_ACH_NORSK);
ACH(BRM_ACH_OCP);
ACH(BRM_ACH_ROKMC);
ACH(BRM_ACH_S2000);
ACH(BRM_ACH_SLOCAM);
ACH(BRM_ACH_TOCHKA4);
ACH(BRM_ACH_TROPEN);
ACH(BRM_ACH_UCPD);
ACH(BRM_ACH_UN);

ACH(BRM_ACH_MASK_AOR1);
ACH(BRM_ACH_MASK_AOR2);
ACH(BRM_ACH_MASK_ATACSAUX);
ACH(BRM_ACH_MASK_ATACSFGX);
ACH(BRM_ACH_MASK_BLACK);
ACH(BRM_ACH_MASK_BROWN);
ACH(BRM_ACH_MASK_CADPATD);
ACH(BRM_ACH_MASK_CADPATW);
ACH(BRM_ACH_MASK_CCE);
ACH(BRM_ACH_MASK_DAGUET);
ACH(BRM_ACH_MASK_DCU);
ACH(BRM_ACH_MASK_DFRACD);
ACH(BRM_ACH_MASK_DFRACW);
ACH(BRM_ACH_MASK_DPCU);
ACH(BRM_ACH_MASK_DPDU);
ACH(BRM_ACH_MASK_ESTDCU);
ACH(BRM_ACH_MASK_FLECK);
ACH(BRM_ACH_MASK_FM05FROST);
ACH(BRM_ACH_MASK_FM05SUM);
ACH(BRM_ACH_MASK_GraniteB);
ACH(BRM_ACH_MASK_GREEN);
ACH(BRM_ACH_MASK_JIEITAID);
ACH(BRM_ACH_MASK_JIEITAIW);
ACH(BRM_ACH_MASK_JIGSAW);
ACH(BRM_ACH_MASK_M05);
ACH(BRM_ACH_MASK_M90D);
ACH(BRM_ACH_MASK_M90W);
ACH(BRM_ACH_MASK_MARPATD);
ACH(BRM_ACH_MASK_MARPATW);
ACH(BRM_ACH_MASK_MCU);
ACH(BRM_ACH_MASK_MLTCAM);
ACH(BRM_ACH_MASK_MLTCAMTS);
ACH(BRM_ACH_MASK_MM14);
ACH(BRM_ACH_MASK_NORSK);
ACH(BRM_ACH_MASK_OCP);
ACH(BRM_ACH_MASK_ROKMC);
ACH(BRM_ACH_MASK_S2000);
ACH(BRM_ACH_MASK_SLOCAM);
ACH(BRM_ACH_MASK_TOCHKA4);
ACH(BRM_ACH_MASK_TROPEN);
ACH(BRM_ACH_MASK_UCPD);
ACH(BRM_ACH_MASK_UN);

class BRM_ACH_MASK_COMS_BROWN;
class BRM_ACH_MASK_COMS_M90D;
class BRM_ACH_MASK_COMS_M90W;
ACH(BRM_ACH_GHILLIE_AOR1);
ACH(BRM_ACH_GHILLIE_AOR2);
ACH(BRM_ACH_GHILLIE_ATACSAUX);
ACH(BRM_ACH_GHILLIE_ATACSFGX);
ACH_PARENT(BRM_ACH_GHILLIE_BROWN,BRM_ACH_MASK_COMS_BROWN);
ACH(BRM_ACH_GHILLIE_CADPATD);
ACH(BRM_ACH_GHILLIE_CADPATW);
ACH(BRM_ACH_GHILLIE_CCE);
ACH(BRM_ACH_GHILLIE_DAGUET);
ACH(BRM_ACH_GHILLIE_DCU);
ACH(BRM_ACH_GHILLIE_DFRACD);
ACH(BRM_ACH_GHILLIE_DFRACW);
ACH(BRM_ACH_GHILLIE_DPCU);
ACH(BRM_ACH_GHILLIE_DPDU);
ACH(BRM_ACH_GHILLIE_ESTDCU);
ACH(BRM_ACH_GHILLIE_FLECK);
ACH(BRM_ACH_GHILLIE_FM05SUM);
ACH(BRM_ACH_GHILLIE_GraniteB);
ACH(BRM_ACH_GHILLIE_GREEN);
ACH(BRM_ACH_GHILLIE_JIEITAID);
ACH(BRM_ACH_GHILLIE_JIEITAIW);
ACH(BRM_ACH_GHILLIE_JIGSAW);
ACH(BRM_ACH_GHILLIE_M05);
ACH_PARENT(BRM_ACH_GHILLIE_M90D,BRM_ACH_MASK_COMS_M90D);
ACH_PARENT(BRM_ACH_GHILLIE_M90W,BRM_ACH_MASK_COMS_M90W);
ACH(BRM_ACH_GHILLIE_MARPATD);
ACH(BRM_ACH_GHILLIE_MARPATW);
ACH(BRM_ACH_GHILLIE_MCU);
ACH(BRM_ACH_GHILLIE_MLTCAM);
ACH(BRM_ACH_GHILLIE_MLTCAMTS);
ACH(BRM_ACH_GHILLIE_NORSK);
ACH(BRM_ACH_GHILLIE_MM14);
ACH(BRM_ACH_GHILLIE_OCP);
ACH(BRM_ACH_GHILLIE_ROKMC);
ACH(BRM_ACH_GHILLIE_S2000);
ACH(BRM_ACH_GHILLIE_SLOCAM);
ACH(BRM_ACH_GHILLIE_TOCHKA4);
ACH(BRM_ACH_GHILLIE_TROPEN);
ACH(BRM_ACH_GHILLIE_UCPD);
