class CfgPatches {
    class NinetyForth_core {
        author = "Akira";
        name = "94th: Core";
        requiredAddons[] = {
            "ls_core",
            "ls_armor_bluefor",
            "lsd_armor_bluefor",
            "OPTRE_Core"
        };
        weapons[] = {};
        units[] = {};
    };
};
class CfgImprecision {
    class Primary {
        verticalRadius = 0;
        horizontalRadius = 0;
    };
    class Secondary {
        verticalRadius = 0;
        horizontalRadius = 0;
    };
};
class Extended_PreStart_EventHandlers {
    class ace_advanced_fatigue {
        init = "";
    };
};
class Extended_PreInit_EventHandlers {
    RS_Init = "RS_Init_Var = [] execVM ""\NinetyForth_core\init.sqf""";
    class ace_advanced_fatigue {
        init = "";
    };
};
class Extended_PostInit_EventHandlers {
    class ace_advanced_fatigue {
        init = "";
    };
};
class Extended_DisplayLoad_EventHandlers {
    class RscDisplayMission {
        ace_advanced_fatigue = "";
    };
};
class CfgFactionClasses {
    class NinetyForth_UnitFact_Main {
        displayname = "[94th] Legion";
        priority = 1;
        side = 1;
        icon = "\NinetyForth_core\data\logo.paa";
        flag = "\NinetyForth_core\data\logo.paa";
    };
    class NinetyForth_UnitFact_CIS01 {
        displayname = "[94th] CIS Remnants Forces"; // Remnants faction, No real camo
        priority = 1;
        side = 0;
        icon = "\SWLB_core\data\insignia\cis.paa";
        flag = "\SWLB_core\data\insignia\cis.paa";
    };
    class NinetyForth_UnitFact_Mandos01 {
        displayname = "[94th] Mandalorian Mercenaries"; // TODO: Come up with an actual name for this clan
        priority = 1;
        side = 0;
        icon = "\SWLB_core\data\insignia\cis.paa"; // TODO: At some point give them their own insignia
        flag = "\SWLB_core\data\insignia\cis.paa";
    };
    class NinetyForth_UnitFact_Rebel_Organized01 {
        displayname = "[94th] Insurrectionists Organized"; // TODO: Come up with an actual name for the Insurrectionists
        priority = 1;
        side = 0;
        icon = "\SWLB_core\data\insignia\cis.paa"; // TODO: At some point give them their own insignia
        flag = "\SWLB_core\data\insignia\cis.paa";
    };
    class NinetyForth_UnitFact_Rebel_Unorganized01 {
        displayname = "[94th] Rebels Unorganized"; // TODO: Come up with an actual name for the Insurrectionists
        priority = 1;
        side = 0;
        icon = "\SWLB_core\data\insignia\cis.paa"; // TODO: At some point give them their own insignia
        flag = "\SWLB_core\data\insignia\cis.paa";
    };
};
class CfgEditorCategories {
    // Primary unit category used for units
    class NinetyForth_EditorCategory_Main {
        displayName = "[94th] Units";
    };
    // Category used for Objects
    class NinetyForth_EditorCategory_Objects {
        displayName = "[94th] Objects";
    };
    // Category used for Items
    class NinetyForth_EditorCategory_Items {
        displayName = "[94th] Items";
    };
};
class CfgEditorSubcategories {
    // Prop Categories //
    class NinetyForth_EditorSubcategory_Objects_Military {
        displayName = "Military";
    };
    class NinetyForth_EditorSubcategory_Objects_Banners {
        displayName = "Banners";
    };
    // All supply props. Pods boxes or others
    class NinetyForth_EditorSubcategory_Objects_Supplies {
        displayName = "Supplies";
    };

    // Item Categories //
    // All weapons
    class NinetyForth_EditorSubcategory_Objects_Weapons {
        displayName = "Weapons";
    };
    // All backbacks
    class NinetyForth_EditorSubcategory_Objects_Backpacks {
        displayName = "Backpacks";
    };

    // Vehicle Categories //
    // Generic uncategorized vehicles
    class NinetyForth_EditorSubcategory_Objects_Vehicles {
        displayName = "Vehicles";
    };
    // All Pelicans categorized
    class NinetyForth_EditorSubcategory_Objects_Pelicans {
        displayName = "Pelicans";
    };
    // All Hornets categorized
    class NinetyForth_EditorSubcategory_Objects_Hornets {
        displayName = "Hornets";
    };
    // Generic for turrets
    class NinetyForth_EditorSubcategory_Objects_Turrets {
        displayName = "Turrets";
    };

};
class ACEX_Fortify_Presets {
    class NinetyForth_Fortify01 {
        displayName = "94th Legion - Fortify";
        objects[] = {
            {"Land_Plank_01_4m_F", 5},
            {"Land_OPTRE_M72S_barrier", 13},
            {"Land_OPTRE_M72_barrier", 13},
            {"Land_HBarrier_1_F", 15},
            {"Land_HBarrierWall4_F", 15},
            {"Land_HBarrierWall6_F", 15},
            {"Land_HBarrierWall_corner_F", 15},
            {"Land_HBarrierWall_corridor_F", 15},
            {"Land_HBarrierTower_F", 20}
        };
    };
};