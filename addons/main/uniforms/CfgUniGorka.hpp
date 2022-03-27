#define GORKA(type)\
class type: BRM_Gorka_Brown {\
    class ItemInfo: ItemInfo {\
        mass = 40;\
    };\
}

class BRM_Gorka_Black: BRM_BattleUNI_Base {
    class ItemInfo: UniformItem {
        containerClass = "Supply40";
        mass = 40;
    };
};
class BRM_Gorka_Brown: BRM_BattleUNI_Base {
    class ItemInfo: UniformItem {
        containerClass = "Supply40";
        mass = 40;
    };
};
class BRM_Gorka_Green: BRM_BattleUNI_Base {
    class ItemInfo: UniformItem {
        containerClass = "Supply40";
        mass = 40;
    };
};

GORKA(BRM_Gorka_ATACSAUX);
GORKA(BRM_Gorka_ATACSFGX);
GORKA(BRM_Gorka_EMR);
GORKA(BRM_Gorka_MLTCAM);
GORKA(BRM_Gorka_PARTISUM);
GORKA(BRM_Gorka_SKOL);
GORKA(BRM_Gorka_SyrDIGI);
GORKA(BRM_Gorka_WHITE);
