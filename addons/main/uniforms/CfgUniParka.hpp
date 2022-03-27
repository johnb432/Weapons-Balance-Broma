#define PARKA(type)\
class type: BRM_Parka_Green {\
    class ItemInfo: ItemInfo {\
        mass = 40;\
    };\
}

class BRM_Parka_Green: ItemCore {
    ACE_GForceCoef = 1;
    class ItemInfo: UniformItem {
        mass = 40;
    };
};

PARKA(BRM_Parka_ATACSAUX);
PARKA(BRM_Parka_ATACSFGX);
PARKA(BRM_Parka_Black);
PARKA(BRM_Parka_Brown);
PARKA(BRM_Parka_CADPATD);
PARKA(BRM_Parka_CADPATW);
PARKA(BRM_Parka_CCE);
PARKA(BRM_Parka_DAGUET);
PARKA(BRM_Parka_DCU);
PARKA(BRM_Parka_DPCU);
PARKA(BRM_Parka_DPDU);
PARKA(BRM_Parka_EMR);
PARKA(BRM_Parka_ESTDCU);
PARKA(BRM_Parka_GraniteB);
PARKA(BRM_Parka_JIEITAID);
PARKA(BRM_Parka_JIEITAIW);
PARKA(BRM_Parka_M81);
PARKA(BRM_Parka_M81DCU);
PARKA(BRM_Parka_M90D);
PARKA(BRM_Parka_M90W);
PARKA(BRM_Parka_MLTCAM);
PARKA(BRM_Parka_MLTCAMTS);
PARKA(BRM_Parka_NavyB);
PARKA(BRM_Parka_ND);
PARKA(BRM_Parka_NDDCU);
PARKA(BRM_Parka_OCP);
PARKA(BRM_Parka_ROKMC);
PARKA(BRM_Parka_SLOCAM);
PARKA(BRM_Parka_T07ARTY);
PARKA(BRM_Parka_T07NAVY);
PARKA(BRM_Parka_T07PLAT);
PARKA(BRM_Parka_T07UNI);
PARKA(BRM_Parka_White);
