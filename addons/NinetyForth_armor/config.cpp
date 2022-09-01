class CfgPatches {
	class NinetyForth_armor_base {
		author = "Akira";
		name = "94th: Armor Base";
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
	class ItemCore;
	class UniformItem;
	class HeadgearItem;
	class VestItem;

	class ls_blueforUniform_base;

	class 3AS_U_Pilot_Phase3; // to be remade
	class k_barracks_uniform; // to be remade
	class SWLB_clone_P2_helmet; // to be remade
	class SWLB_P1_Pilot_Helmet; // to be remade
	class SWLB_clone_pilot_P2_helmet; // to be remade

	// Base Uniforms
	class NinetyForth_BaseTrooper_Uniform : ls_blueforUniform_base
	{
		class ItemInfo : UniformItem {
			containerClass = "Supply150";
			mass = 40;
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 150; // test value
					passThrough = 0.5;
				};
			};
		};
	};

	class NinetyForth_BasePilot_Uniform : 3AS_U_Pilot_Phase3{
		author = "3rd Army Studios";
		scope = 0;
		displayName = "[3AS] Republic Pilot Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "3as\3as_Characters\clones\uniforms\Model\3AS_Pilot_Uniform.p3d";
		hiddenSelections[] = {"Camo", "Camo1"};
		hiddenSelectionsTextures[] = {
			"\NinetyForth_armor\data\base\Pilot_Uniform_LOW_POLY_Camo_co.paa",
			"\NinetyForth_armor\data\base\Pilot_Uniform_LOW_POLY_Camo1_co.paa"
		};
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "3AS_U_Republic_Pilot";
			containerClass = "Supply150";
			mass = 40;
			hiddenSelections[] = {"Camo", "Camo1"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	class NinetyForth_BaseClone_Uniform : k_barracks_uniform {
		scope = 0;
		picture = "kobra\kobra_core\kobra.paa";
		displayName = "[94th] Clone Base Uniform (shouldn't be seen)";
		class ItemInfo : UniformItem
		{
			uniformmodel = "";
			containerClass = "Supply40";
			mass = 10;
			uniformclass = "k_barracks_unit";
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 150; // test value
					passThrough = 0.5;
				};
			};
		};
	};

	// Base Helmets
	class NinetyForth_BaseTrooper_Helmet : SWLB_clone_P2_helmet {
		scope = 0;
		hiddenSelectionsTextures[] = {
			"NinetyForth_armor\data\base\NinetyForth_baseHelmet_camo1_co.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa" };
		class ItemInfo : HeadgearItem {
			mass = 10;
			uniformModel = "\SWLB_clones\SWLB_clone_P2_helmet.p3d";
			hiddenSelections[] = { "camo1" };
			allowedSlots[] = { 801, 901, 701, 605 };
			modelSides[] = { 6 };
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.1;
				};
				class Face {
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.1;
				};
				class Neck {
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.1;
				};
			};
		};
	};
	class NinetyForth_BasePilot_HelmetP1 : SWLB_P1_Pilot_Helmet {
		scope = 0;
		author = "SW Legion Studios";
		displayName = "Clone Pilot P1 Helmet";
		model = "SWLB_CEE\data\SWLB_P1_Pilot_Helmet.p3d";
		hiddenSelections[] = { "Camo1", "Camo2" };
		hiddenSelectionsTextures[] = {
			"NinetyForth_armor\data\base\swlb_p1_pilot_helmet_co.paa",
			"NinetyForth_armor\data\base\swlb_p1_pilot_lifesupport_co.paa" };
		subItems[] = { "Integrated_NVG_TI_0_F" };
		class ItemInfo : HeadgearItem {
			mass = 10;
			uniformModel = "SWLB_CEE\data\SWLB_P1_Pilot_Helmet.p3d";
			allowedSlots[] = { 801, 901, 701, 605 };
			modelSides[] = { 6 };
			hiddenSelections[] = { "Camo1", "Camo2" };
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 50;
					passThrough = 0.5;
				};
			};
		};
	};
	class NinetyForth_BasePilot_HelmetP2 : SWLB_clone_pilot_P2_helmet {
		scope = 0;
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = {
			"SWLB_clones\data\helmet_pilot_P2_co.paa" };
		model = "\SWLB_clones\SWLB_clone_pilot_P2_helmet.p3d";
		subItems[] = { "Integrated_NVG_TI_1_F" };
		class ItemInfo : HeadgearItem {
			mass = 10;
			uniformModel = "\SWLB_clones\SWLB_clone_pilot_P2_helmet.p3d";
			hiddenSelections[] = { "camo1" };
			allowedSlots[] = { 801, 901, 701, 605 };
			modelSides[] = { 6 };
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.1;
				};
				class Face {
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.1;
				};
				class Neck {
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.1;
				};
			};
		};
	};

	// Custom Useable Items below

	// Uniforms
	class NinetyForth_Trooper_Uniform : NinetyForth_BaseTrooper_Uniform
	{
		scope = 2
		displayName = "[94th] Phase 2 Trooper Armor";

		class ItemInfo : ItemInfo
		{
			uniformClass = NinetyForth_phase2_base;
		}
	};


	class NinetyForth_Pilot_Uniform : NinetyForth_BasePilot_Uniform {
		scope = 2;
		author = "Legion Studios";
		displayName = "[94th] Clone Pilot Uniform";
		hiddenSelectionsTextures[] = {
			"SWLB_clones\data\helmet_pilot_P2_co.paa" };
	};
	class NinetyForth_Clone_Uniform : NinetyForth_BaseClone_Uniform {
		scope = 2;
		author = "Legion Studios";
		displayName = "[94th] Clone Uniform";
	};

	// Usable Helmets
	class NinetyForth_Trooper_Helmet : NinetyForth_BaseTrooper_Helmet {
		scope = 2;
		author = "Legion Studios";
		displayName = "[94th] Clone Trooper Helmet";
		hiddenSelectionsTextures[] = {
			"NinetyForth_armor\data\base\NinetyForth_baseHelmet_camo1_co.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa" };
	};
	class NinetyForth_PilotP1_Helmet : NinetyForth_BasePilot_HelmetP1 {
		scope = 2;
		author = "Legion Studios";
		displayName = "[94th] Clone Pilot helmet P1";
		hiddenSelectionsTextures[] = {
			"swlb_cee\data\swlb_p1_pilot_helmet_co.paa",
			"swlb_cee\data\swlb_p1_pilot_lifesupport_co.paa" };
	};
	class NinetyForth_PilotP2_Helmet : NinetyForth_BasePilot_HelmetP2 {
		scope = 2;
		author = "Legion Studios";
		displayName = "[94th] Clone Pilot helmet P2";
		hiddenSelectionsTextures[] = {
			"SWLB_clones\data\helmet_pilot_P2_co.paa" };
	};
};

class CfgVehicles
{
	class lsd_gar_phase2_base;

	// Creates a base class for all your main infantry to inherit from
	// Base class for uniforms
	class NinetyForth_phase2_base : lsd_gar_phase2_base
	{
		//editorSubcategory = MYTAG_MYUNIT_clones;
		uniformClass = NinetyForth_Trooper_Uniform;
		hiddenSelectionsTextures[] = {
			"\NinetyForth_armor\data\base\NinetyForth_baseUniform_camo1_co.paa",
			"\NinetyForth_armor\data\base\NinetyForth_baseUniform_camo2_co.paa",
			"\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
		};
	};

	// Creates your first placeable unit
	/*class MYTAG_MYUNIT_phase2_trooper : NinetyForth_phase2_base {
		scope = 2;
		displayName = "Trooper";
	};*/

};
