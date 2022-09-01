class CfgPatches {
	class NinetyForth_uniforms_named {
		author = "Akira";
		name = "94th: Uniforms and Helmets Named";
		requiredAddons[] = {
			"NinetyForth_core",
			"ls_armor_bluefor",
			"lsd_armor_bluefor",
			"OPTRE_Core"
		};
		weapons[] = {};
	};
};

class CfgWeapons {
	class NinetyForth_BaseTrooper_Uniform;
	class NinetyForth_Trooper_Helmet;

	// Example
	class MYTAG_MYUNIT_CUSTOMNAME_uniform2 : NinetyForth_BaseTrooper_Uniform {
		scope = 2
		author = "Model: Legion Studios<BR/>Texture modification: Akira";
		displayName = "[94th] Clone 'Test' Uniform";

		class ItemInfo : ItemInfo {
			uniformClass = NinetyForth_Custom_Uniform_Test; // Named class has to match its campanion in CfgVehicles
		};
	};
	class MYTAG_MYUNIT_CUSTOMNAME_helmet : NinetyForth_Trooper_Helmet {
		scope = 2;
		author = "Model: Legion Studios<BR/>Texture: Akira";
		displayName = "[94th] Clone 'Test' Helmet";
		hiddenSelectionsTextures[] = {
			"NinetyForth_uniforms_named\data\example\SWLA Gen3 Base Armor_1 - Helmet_Diffuse.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa" };
	};

	// Akira
	class NinetyForth_Akira_Uniform : NinetyForth_BaseTrooper_Uniform {
		scope = 2
		author = "Model: Legion Studios<BR/>Texture modification: Akira";
		displayName = "[94th] Clone-1313 'Akira' Uniform";

		class ItemInfo : ItemInfo {
			uniformClass = NinetyForth_Custom_Uniform_Akira;
		};
	};
	class NinetyForth_Akira_Helmet : NinetyForth_Trooper_Helmet {
		scope = 2;
		author = "Model: Legion Studios<BR/>Texture: Akira";
		displayName = "[94th] Clone-1313 'Akira' Helmet";
		hiddenSelectionsTextures[] = {
			"NinetyForth_uniforms_named\data\helmet\Akira_Helmet_Diffuse.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa" };
	};

};

class CfgVehicles {
	class NinetyForth_phase2_base;

	// example
	class NinetyForth_Custom_Uniform_Test : NinetyForth_phase2_base {
		uniformClass = MYTAG_MYUNIT_CUSTOMNAME_uniform2;  // Named class has to match its campanion in CfgWeapons
		hiddenSelectionsTextures[] = {
			"NinetyForth_uniforms_named\data\example\SWLA Gen3 Base Armor_2 - Upper Armor_Diffuse.paa",
			"NinetyForth_uniforms_named\data\example\SWLA Gen3 Base Armor_3 - Lower Armor_Diffuse.paa",
			"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
		};
	};

	//  Akira
	class NinetyForth_Custom_Uniform_Akira : NinetyForth_phase2_base {
		uniformClass = NinetyForth_Akira_Uniform;
		hiddenSelectionsTextures[] = {
			"NinetyForth_uniforms_named\data\uniform\Akira_Upper_Armor_Diffuse.paa",
			"NinetyForth_uniforms_named\data\uniform\Akira_Lower_Armor_Diffuse.paa",
			"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
		};
	};
};
