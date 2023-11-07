class CfgPatches {
    class NinetyForth_core {
        author = "Akira";
        name = "94th: Core";
        requiredAddons[] = {
            "OPTRE_Core"
        };
        weapons[] = {};
        units[] = {};
    };
};
class CfgFactionClasses {
    class NinetyForth_UnitFact_Main { // Primary faction for the 94th
        displayname = "[94th] Legion";
        priority = 1;
        side = 1;
        icon = "\NinetyForth_core\data\logo.paa";
        flag = "\NinetyForth_core\data\logo.paa";
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
    // All supply props. Pods, boxes or others
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
    // All LAATs categorized
    class NinetyForth_EditorSubcategory_Objects_Laat {
        displayName = "LAAT";
    };
    // Generic for turrets
    class NinetyForth_EditorSubcategory_Objects_Turrets {
        displayName = "Turrets";
    };
};
class ACEX_Fortify_Presets {
    class NinetyForth_Fortify01 {
        displayName = "94th Legion - Fortify";
        objects[] = { // TODO: Find replacements
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
class CfgMainMenuSpotlight {
	class JoinServer
	{
		text = "94th Main Op server";
		//picture = "NinetyForth_core\data\spotlight.paa";
        picture = "NinetyForth_core\data\logo.paa";
		action = "connectToServer ['127.0.0.1', 2302, '']"; // connectToServer [ip, port, password]
		actionText = "94th Main Op server";
		condition = "true";
	};
};