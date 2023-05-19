#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common", "ace_interaction"};
        author = CSTRING(Author);
        authors[] = {"Bosenator"};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

class CfgMods {
    class Mod_Base;
    class PREFIX: Mod_Base {
        dir = "@bose_mods";
        name = "Bose Mods";
        picture = QPATHTOF(UI\logo_bm_ca.paa);
        logo = QPATHTOF(UI\logo_tac_bm_ca.paa);
        logoOver = QPATHTOF(UI\logo_bm_small_ca.paa);
        logoSmall = QPATHTOF(UI\logo_bm_small_ca.paa);
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = CSTRING(URL);
    };
};

