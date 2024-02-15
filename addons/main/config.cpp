#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "BRM_MODELS",
            "BRM_REQUIRED",
            "BRM_AOR",
            "BRM_ATACS",
            "BRM_BLUM",
            "BRM_CADPAT",
            "BRM_DBDU",
            "BRM_DCU",
            "BRM_DFRACTAL",
            "BRM_DPCU",
            "BRM_ESTDCU",
            "BRM_FRCAM",
            "BRM_FRLIZ",
            "BRM_GERCAM",
            "BRM_JGSDF",
            "BRM_JIETAI",
            "BRM_JIGSAW",
            "BRM_KARST",
            "BRM_M05",
            "BRM_M81",
            "BRM_M90",
            "BRM_MARPAT",
            "BRM_MCU",
            "BRM_MLTCAM",
            "BRM_MM14",
            "BRM_ND",
            "BRM_NORSK",
            "BRM_RAIN",
            "BRM_RHOD",
            "BRM_ROK",
            "BRM_RUS",
            "BRM_S2000",
            "BRM_SLDCLRS",
            "BRM_SLOCAM",
            "BRM_TAZ90",
            "BRM_TOCHKA9",
            "BRM_TS",
            "BRM_TYPE07",
            "BRM_UCPD"
        };
        author = "johnb43";
        authors[] = {"johnb43"};
        url = "https://github.com/johnb432/Weapons-Balance-Broma";
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class ItemCore;
    class HeadgearItem;
    class UniformItem;
    class Uniform_Base;
    class BRM_BattleUNI_Base: ItemCore {
        ACE_GForceCoef = 1;
        class ItemInfo: UniformItem {
            mass = 40;
        };
    };

    #include "helmets\CfgHelmets.hpp"
    #include "helmets\CfgHelmets6B7.hpp"
    #include "helmets\CfgHelmetsACH.hpp"

    #include "uniforms\CfgUniBattle.hpp"
    #include "uniforms\CfgUniCombat.hpp"
    #include "uniforms\CfgUniDenim.hpp"
    #include "uniforms\CfgUniEBattle.hpp"
    #include "uniforms\CfgUniGorka.hpp"
    #include "uniforms\CfgUniHood.hpp"
    #include "uniforms\CfgUniParka.hpp"

    #include "vests\CfgVests.hpp"
};

class CfgVehicles {
    #include "backpacks\CfgBackpacks.hpp"
};
