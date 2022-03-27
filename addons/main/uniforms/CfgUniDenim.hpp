#define DENIM(type)\
class type: BRM_DenimT_Green {\
    class ItemInfo: ItemInfo {\
        mass = 40;\
    };\
}

class BRM_DenimT_Green: BRM_BattleUNI_Base {
    class ItemInfo: UniformItem {
        mass = 40;
    };
};

DENIM(BRM_DenimT_BananaKing);
DENIM(BRM_DenimT_BROMA);
DENIM(BRM_DenimT_Brown);
DENIM(BRM_DenimT_CarnikCon);
DENIM(BRM_DenimT_GALO);
DENIM(BRM_DenimT_ION);
DENIM(BRM_DenimT_MAALERS);
DENIM(BRM_DenimT_PUSHBAK);
