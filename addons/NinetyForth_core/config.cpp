class CfgPatches {
    class NinetyForth_core {
        author = "Akira";
        name = "94th: Core";
        requiredAddons[] = {
            "NinetyForth_core",
            "ls_core",
            "ls_armor_bluefor",
            "lsd_armor_bluefor",
            "OPTRE_Core"
        };
        weapons[] = {};
        units[] = {};
    };
};
class CfgFactionClasses
{
    class NinetyForth_UnitFact_Main
    {
        displayname = "[94th] Grand Army";
        priority = 1;
        side = 1;
        icon = "\SWLB_core\data\insignia\rep.paa";
        flag = "\SWLB_core\data\insignia\rep.paa";
    };
    class NinetyForth_UnitFact_CIS
    {
        displayname = "[94th] CIS Forces"; // Main faction, No real camo
        priority = 1;
        side = 2;
        icon = "\SWLB_core\data\insignia\cis.paa";
        flag = "\SWLB_core\data\insignia\cis.paa";
    };
    class NinetyForth_UnitFact_Mandos {
        displayname = "[94th] Mandalorian Mercenaries"; // TODO: Come up with an actual name for this clan
        priority = 1;
        side = 2;
        icon = "\SWLB_core\data\insignia\cis.paa"; // TODO: At some point give them their own insignia
        flag = "\SWLB_core\data\insignia\cis.paa";
    };
    class NinetyForth_UnitFact_Insurrectionist_Organized {
        displayname = "[94th] Insurrectionists Organized"; // TODO: Come up with an actual name for the Insurrectionists
        priority = 1;
        side = 2;
        icon = "\SWLB_core\data\insignia\cis.paa"; // TODO: At some point give them their own insignia
        flag = "\SWLB_core\data\insignia\cis.paa";
    };
    class NinetyForth_UnitFact_Insurrectionist_Unorganized {
        displayname = "[94th] Rebels Unorganized"; // TODO: Come up with an actual name for the Insurrectionists
        priority = 1;
        side = 2;
        icon = "\SWLB_core\data\insignia\cis.paa"; // TODO: At some point give them their own insignia
        flag = "\SWLB_core\data\insignia\cis.paa";
    };
};
class CfgEditorCategories
{
	class NinetyForth_EditorCategory_Objects
	{
		displayName = "[94th] Objects";
	};
};
class CfgEditorSubcategories
{
    class NinetyForth_trooper
    {
        displayname = "Trooper";
    };
    class NinetyForth_trooper_custom
    {
        displayname = "Trooper (Custom)";
    };
    class NinetyForth_EditorSubcategory_Objects_Military
    {
        displayName = "[94th] Military";
    };
};