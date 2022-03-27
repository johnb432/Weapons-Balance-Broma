class VestItem;
class Vest_Camo_Base: ItemCore {
    class ItemInfo;
};
class BRM_IBA_base: Vest_Camo_Base {
    class ItemInfo: VestItem {};
};

#define VEST(type1,type2,load)\
class type1: type2 {\
    class ItemInfo: ItemInfo {\
        containerClass = load;\
    };\
}

#define VEST_MASS(type1,type2,load,massVest)\
class type1: type2 {\
    mass = massVest;\
    class ItemInfo: ItemInfo {\
        containerClass = load;\
    };\
}

class BMR_MLBVARMOR_BROWN_RFL: BRM_IBA_base {
    class ItemInfo: ItemInfo {
        mass = 100;
    };
};

VEST_MASS(BMR_MLBVARMOR_BROWN_RFL,BRM_IBA_base,"Supply140",100);
VEST(BMR_MLBVARMOR_BROWN_GL,BMR_MLBVARMOR_BROWN_RFL,"Supply140");
VEST(BMR_MLBVARMOR_BROWN_MG,BMR_MLBVARMOR_BROWN_RFL,"Supply140");
VEST(BMR_MLBVARMOR_BROWN_TL,BMR_MLBVARMOR_BROWN_RFL,"Supply140");

VEST(BMR_MLBV_BROWN_RFL,Vest_Camo_Base,"Supply140");
VEST(BMR_MLBV_BROWN_GL,BMR_MLBV_BROWN_RFL,"Supply140");
VEST(BMR_MLBV_BROWN_MG,BMR_MLBV_BROWN_RFL,"Supply140");
VEST(BMR_MLBV_BROWN_TL,BMR_MLBV_BROWN_RFL,"Supply140");


VEST_MASS(BRM_IBA_RFL,BRM_IBA_base,"Supply140",100);
VEST(BRM_IBA_AR,BRM_IBA_RFL,"Supply140");
VEST(BRM_IBA_COM,BRM_IBA_RFL,"Supply140");
VEST(BRM_IBA_MG,BRM_IBA_RFL,"Supply140");

VEST_MASS(BRM_IBA_ALICE_RFL,BRM_IBA_base,"Supply140",100);
VEST(BRM_IBA_ALICE_AR,BRM_IBA_ALICE_RFL,"Supply140");
VEST(BRM_IBA_ALICE_COM,BRM_IBA_ALICE_RFL,"Supply140");
VEST(BRM_IBA_ALICE_MG,BRM_IBA_ALICE_RFL,"Supply140");
VEST(BRM_IBA_ALICE_SF1,BRM_IBA_ALICE_RFL,"Supply140");
VEST(BRM_IBA_ALICE_SF2,BRM_IBA_ALICE_RFL,"Supply140");
VEST(BRM_IBA_ALICE_TL,BRM_IBA_ALICE_RFL,"Supply140");


class MBSS_base;
VEST(BRM_LBT_BROWN_RFL,MBSS_base,"Supply140");
VEST(BRM_LBT_BROWN_GL,BRM_LBT_BROWN_RFL,"Supply140");
VEST(BRM_LBT_BROWN_GLAK,BRM_LBT_BROWN_RFL,"Supply140");
VEST(BRM_LBT_BROWN_MG,BRM_LBT_BROWN_RFL,"Supply140");
VEST(BRM_LBT_BROWN_RFLAK,BRM_LBT_BROWN_RFL,"Supply140");
VEST(BRM_LBT_BROWN_TL,BRM_LBT_BROWN_RFL,"Supply140");
VEST(BRM_LBT_BROWN_TLAK,BRM_LBT_BROWN_RFL,"Supply140");


VEST(BRM_RRV_GREEN_RFL,MBSS_base,"Supply140");
VEST_MASS(BRM_RRV_GREEN_GL,BRM_RRV_GREEN_RFL,"Supply140",100);
VEST(BRM_RRV_GREEN_MG,BRM_RRV_GREEN_RFL,"Supply140");
VEST_MASS(BRM_RRV_GREEN_REC1,BRM_RRV_GREEN_RFL,"Supply140",100);
VEST_MASS(BRM_RRV_GREEN_REC2,BRM_RRV_GREEN_RFL,"Supply140",100);
VEST_MASS(BRM_RRV_GREEN_RECLEAD,BRM_RRV_GREEN_RFL,"Supply140",100);
VEST_MASS(BRM_RRV_GREEN_RECMED,BRM_RRV_GREEN_RFL,"Supply140",100);
VEST_MASS(BRM_RRV_GREEN_TL,BRM_RRV_GREEN_RFL,"Supply140",100);


VEST(BRM_6B_BROWN_RFL,Vest_Camo_Base,"Supply140");
VEST(BRM_6B_BROWN_COM,BRM_6B_BROWN_RFL,"Supply140");

VEST_MASS(BRM_SOVWEB_BROWN_SL,Vest_Camo_Base,"Supply140",22);
VEST(BRM_SOVWEB_BROWN_COM,BRM_SOVWEB_BROWN_SL,"Supply140");


VEST_MASS(BRM_Protec_GREEN_HeavyRFL,Vest_Camo_Base,"Supply140",140);