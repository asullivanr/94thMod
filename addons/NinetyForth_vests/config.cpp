class CfgPatches {
    class NinetyForth_vests {
        author = "Akira";
        name = "94th: Vests";
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

class CfgWeapons {
	class ItemCore;
	class UniformItem;
	class HeadgearItem;
	class VestItem;

	class OPTRE_UNSC_M52A_Armor_Pilot_AF;
	class SWLB_clone_basic_armor;
	class SWLB_clone_officer_armor;
	class SWLB_clone_medic_armor;
	class SWLB_clone_Lieutenant_armor;
	class SWLB_clone_commander_armor;
	class SWLB_clone_assault_armor;
	class SWLB_CEE_Hazard_Vest;

	// Base Vests
	class NinetyForth_BasePilot_Vest : OPTRE_UNSC_M52A_Armor_Pilot_AF {
		dlc = "OPTRE";
		author = "Article 2 Studios";
		scope = 0;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsTextures[] = {
	"OPTRE_UNSC_Units\Army\data\vest_snow_co.paa",
	"optre_unsc_units\army\data\armor_snow_co.paa",
	"optre_unsc_units\army\data\legs_snow_co.paa",
	"optre_unsc_units\army\data\ghillie_woodland_co.paa",
	"optre_unsc_units\army\data\odst_armor_co.paa" };
		hiddenSelections[] = { "camo",
					  "camo2",
					  "camo3",
					  "camo4",
					  "camo5",
					  "A_Ghillie",
					  "A_KneesLeft",
					  "A_KneesRight",
					  "A_KneesMarLeft",
					  "A_KneesMarRight",
					  "A_ODST",
					  "A_ShinArmorLeft",
					  "A_ShinArmorRight",
					  "A_TacPad",
					  "A_ThighArmorLeft",
					  "A_ThighArmorRight",
					  "AS_BaseLeft",
					  "AS_BaseRight",
					  "AS_LargeLeft",
					  "AS_LargeRight",
					  "AS_MediumLeft",
					  "AS_MediumRight",
					  "AS_ODSTCQBLeft",
					  "AS_ODSTCQBRight",
					  "AS_ODSTLeft",
					  "AS_ODSTRight",
					  "AS_ODSTSniperLeft",
					  "AS_ODSTSniperRight",
					  "AS_SmallLeft",
					  "AS_SmallRight",
					  "AP_AR",
					  "AP_BR",
					  "AP_Canteen",
					  "AP_GL",
					  "AP_Knife",
					  "AP_MGThigh",
					  "AP_AR",
					  "AP_Rounds",
					  "AP_SG",
					  "AP_SMG",
					  "AP_Sniper",
					  "AP_Thigh",
					  "AP_Frag",
					  "APO_AR",
					  "APO_BR",
					  "APO_Knife",
					  "APO_SMG",
					  "APO_Sniper",
					  "CustomKit_Scorch" };
		class ItemInfo : VestItem {
			containerClass = "Supply40";
			mass = 80;
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelectionsTextures[] = {
	"OPTRE_UNSC_Units\Army\data\vest_snow_co.paa",
	"optre_unsc_units\army\data\armor_snow_co.paa",
	"optre_unsc_units\army\data\legs_snow_co.paa",
	"optre_unsc_units\army\data\ghillie_woodland_co.paa",
	"optre_unsc_units\army\data\odst_armor_co.paa" };
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
			hiddenSelections[] = { "camo",
											  "camo2",
											  "camo3",
											  "camo4",
											  "camo5",
											  "A_Ghillie",
											  "A_KneesLeft",
											  "A_KneesRight",
											  "A_KneesMarLeft",
											  "A_KneesMarRight",
											  "A_ODST",
											  "A_ShinArmorLeft",
											  "A_ShinArmorRight",
											  "A_TacPad",
											  "A_ThighArmorLeft",
											  "A_ThighArmorRight",
											  "AS_BaseLeft",
											  "AS_BaseRight",
											  "AS_LargeLeft",
											  "AS_LargeRight",
											  "AS_MediumLeft",
											  "AS_MediumRight",
											  "AS_ODSTCQBLeft",
											  "AS_ODSTCQBRight",
											  "AS_ODSTLeft",
											  "AS_ODSTRight",
											  "AS_ODSTSniperLeft",
											  "AS_ODSTSniperRight",
											  "AS_SmallLeft",
											  "AS_SmallRight",
											  "AP_AR",
											  "AP_BR",
											  "AP_Canteen",
											  "AP_GL",
											  "AP_Knife",
											  "AP_MGThigh",
											  "AP_AR",
											  "AP_Rounds",
											  "AP_SG",
											  "AP_SMG",
											  "AP_Sniper",
											  "AP_Thigh",
											  "AP_Frag",
											  "APO_AR",
											  "APO_BR",
											  "APO_Knife",
											  "APO_SMG",
											  "APO_Sniper",
											  "CustomKit_Scorch" };
		};
	};
	class NinetyForth_BaseTrooper_Vest : SWLB_clone_basic_armor {
		scope = 0;
		author = "SW Legion Studios";
		displayName = "Clone trooper vest";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
		class ItemInfo : VestItem {
			uniformModel = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
			containerClass = "Supply40";
			mass = 80;
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	class NinetyForth_BaseOfficer_Vest : SWLB_clone_officer_armor {
		scope = 0;
		author = "SW Legion Studios";
		displayName = "Clone trooper officer vest";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";
		model = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = {
			"\SWLB_clones\data\officer_accessories_co.paa" };
		class ItemInfo : VestItem {
			uniformModel = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
			containerClass = "Supply40";
			hiddenSelections[] = { "camo1" };
			mass = 80;
			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 6;
					PassThrough = 0.30000001;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 6;
					passThrough = 0.30000001;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 4;
					passThrough = 0.30000001;
				};
			};
		};
	};
	class NinetyForth_BaseMedic_Vest : SWLB_clone_medic_armor {
		scope = 0;
		displayName = "Clone trooper medic vest";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_medic_armor_ca.paa";
		model = "\SWLB_clones\SWLB_clone_medic_armor.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = {
			"\SWLB_clones\data\heavy_accessories_medic_co.paa" };
		class ItemInfo : VestItem {
			uniformModel = "\SWLB_clones\SWLB_clone_medic_armor.p3d";
			containerClass = "Supply80";
			hiddenSelections[] = { "camo1" };
			mass = 80;
		};
	};
	class NinetyForth_BaseLieutenant_Vest : SWLB_clone_Lieutenant_armor {
		scope = 0;
		author = "SW Legion Studios";
		displayName = "Clone trooper lieutenant vest";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";
		model = "\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = {
			"\SWLB_clones\data\officer_accessories_co.paa" };
		class ItemInfo : VestItem {
			uniformModel = "\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
			containerClass = "Supply40";
			hiddenSelections[] = { "camo1" };
			mass = 80;
			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 6;
					PassThrough = 0.30000001;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 4;
					passThrough = 0.30000001;
				};
			};
		};
	};
	class NinetyForth_BaseCommander_Vest : SWLB_clone_commander_armor {
		scope = 0;
		author = "SW Legion Studios";
		displayName = "Clone trooper commander vest";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_commander_armor_ca.paa";
		model = "\SWLB_clones\SWLB_clone_commander_armor.p3d";
		hiddenSelections[] = { "camo1", "rank" };
		hiddenSelectionsTextures[] = {
			"\SWLB_clones\data\officer_accessories_co.paa", "" };
		class ItemInfo : VestItem {
			uniformModel = "\SWLB_clones\SWLB_clone_commander_armor.p3d";
			containerClass = "Supply50";
			hiddenSelections[] = { "camo1", "rank" };
			mass = 80;
			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 6;
					PassThrough = 0.30000001;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 6;
					passThrough = 0.30000001;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 4;
					passThrough = 0.30000001;
				};
			};
		};
	};
	class NinetyForth_BaseAssault_vest : SWLB_clone_assault_armor {
		scope = 0;
		author = "SW Legion Studios";
		displayName = "Clone trooper assault vest";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";
		model = "\SWLB_clones\SWLB_clone_assault_armor.p3d";
		hiddenSelections[] = { "camo1", "camo2" };
		hiddenSelectionsTextures[] = {
			"\SWLB_clones\data\light_accessories_co.paa",
			"\SWLB_clones\data\heavy_accessories_co.paa" };
		class ItemInfo : VestItem {
			uniformModel = "\SWLB_clones\SWLB_clone_assault_armor.p3d";
			containerClass = "Supply40";
			hiddenSelections[] = { "camo1", "camo2" };
			mass = 80;
		};
	};
	class NinetyForth_BaseHazard_vest : SWLB_CEE_Hazard_Vest {
		scope = 0;
		displayName = "Clone hazard vest";
		model = "\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
		uniformModel = "\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_clones\data\officer_accessories_co.paa"
		};
		class ItemInfo : Vestitem {
			uniformModel = "\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
			containerClass = "Supply100";
			hiddenSelections[] =
			{
				"camo1",
				"camo2"
			};
			mass = 80;
			class HitpointsProtectionInfo {
				class Legs {
					hitpointName = "HitLegs";
					armor = 6;
					passThrough = 0.30000001;
				};
			};
		};
	};

	// Usable Vests
	class NinetyForth_Pilot_vest : NinetyForth_BasePilot_Vest {
		scope = 2;
		displayName = "[94th] Clone Pilot Vest";
	};
	class NinetyForth_Trooper_vest : NinetyForth_BaseTrooper_Vest {
		scope = 2;
		displayName = "[94th] Clone Trooper Vest";
	};
	class NinetyForth_Officer_Vest : NinetyForth_BaseOfficer_Vest {
		scope = 2;
		displayName = "[94th] Clone Officer Vest";
	};
	class NinetyForth_Medic_Vest : NinetyForth_BaseMedic_Vest {
		scope = 2;
		displayName = "[94th] Clone Medic Vest";
	};
	class NinetyForth_Lieutenant_Vest : NinetyForth_BaseLieutenant_Vest {
		scope = 2;
		displayName = "[94th] Clone Lieutenant Vest";
	};
	class NinetyForth_Commander_Vest : NinetyForth_BaseCommander_Vest {
		scope = 2;
		displayName = "[94th] Clone Commander Vest";
	};
	class NinetyForth_Assault_Vest : NinetyForth_BaseAssault_vest {
		scope = 2;
		displayName = "[94th] Clone Assault Vest";
	};
	class NinetyForth_Hazard_Vest : NinetyForth_BaseHazard_vest {
		scope = 2;
		displayName = "[94th] Clone Hazard Vest";
	};

};