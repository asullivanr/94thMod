class CfgPatches {
    class NinetyForth_objects {
        author = "Akira";
        name = "94th: Objects";
        requiredAddons[] = {
			"NinetyForth_core",
            "ls_core",
            "OPTRE_Core"
        };
        weapons[] = {};
        units[] = { // TODO: Do a test on if this is needed for objects
            "NinetyForth_Flag_Stand",
            "NinetyForth_Flag_Small",
        };
    };
};
class CfgVehicles
{
	class OPTRE_CTF_Flag_Base;
	class OPTRE_CTF_Flag_Stand;

	// Stand
	// This getting moved over is just to change the name and category
	class NinetyForth_Flag_Stand : OPTRE_CTF_Flag_Stand
	{
		//vehicleClass = "OPTRE_City_Building_class";
		displayName = "94th Flag (Base)";
		editorCategory = "NinetyForth_EditorCategory_Objects";
		editorSubcategory = "NinetyForth_EditorSubcategory_Objects_Military";
	};
	// Flags
	// This getting moved over is just to change the name and category
	class NinetyForth_Flag_Small : OPTRE_CTF_Flag_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "94th Flag";
		editorCategory = "NinetyForth_EditorCategory_Objects";
		editorSubcategory = "NinetyForth_EditorSubcategory_Objects_Military";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"NinetyForth_objects\data\flag_guidon_blueteam_co.paa"
		};
	};
}