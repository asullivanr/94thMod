class CfgPatches {
	class NinetyForth_backpacks {
		author = "Akira";
		name = "94th: Backpacks";
		requiredAddons[] = {
			"NinetyForth_core",
			"ls_armor_bluefor",
			"lsd_armor_bluefor",
		};
	};
};

class cfgVehicles {
	class SWLB_clone_backpack_heavy;
	class ls_gar_survival_backpack;
	class SWLB_clone_RTO_mini_backpack;
	class SWLB_clone_backpack_medic;
	class SWLB_CEE_Recon_RTO_Backpack;

	// Base Backpacks
	class NinetyForth_BaseBackpack_Heavy : SWLB_clone_backpack_heavy {
		scope = 0;
		displayName = "Clone trooper heavy backpack";
		maximumload = 320;
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_heavy_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};
	class NinetyForth_BaseBackpack_Small : ls_gar_survival_backpack
	{
		scope = 0;
		maximumload = 220;
		displayname = "Republic Survival Pack";
		model = "ls_equipment_bluefor\backpack\gar\survival\ls_gar_survival_backpack.p3d";
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		hiddenselections[] =
		{
			"camo1",
			"lr",
			"medic",
			"box1",
			"box2"
		};
		hiddenselectionstextures[] =
		{
			"ls_equipment_bluefor\backpack\gar\survival\data\backpack_co.paa",
			"",
			"",
			"ls_equipment_bluefor\backpack\gar\survival\data\box_co.paa",
			"ls_equipment_bluefor\backpack\gar\survival\data\box_co.paa"
		};
	};
	class NinetyForth_BaseMedic : SWLB_clone_backpack_medic {
		maximumload = 250;
		scope = 0;
		displayName = "Clone trooper medic backpack";
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_medic_ca.paa";
		hiddenSelectionsTextures[] = {
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_medic_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
		};
	};
	class NinetyForth_BaseReconRTO : SWLB_CEE_Recon_RTO_Backpack
	{
		scope = 0;
		maximumload = 220;
		displayName = "Clone recon RTO backpack";
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_RTO_mini_backpack_ca.paa";
		hiddenSelections[] =
		{
			"Accumulator",
			"Camo1",
			"Camo2",
			"Camo3",
			"Main"
		};
		hiddenSelectionsTextures[] =
		{
			"SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa",
			"SWLB_equipment\backpacks\data\bag_co.paa",
			"SWLB_equipment\backpacks\data\bag_co.paa",
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_co.paa"
		};
	};

	// Base LR Backpacks
	class NinetyForth_BaseMiniRadio_Backpack : SWLB_clone_RTO_mini_backpack {
		scope = 0;
		displayName = "[94th] Clone trooper RTO mini pack";
		model = "\SWLB_equipment\backpacks\SWLB_clone_RTO_mini_backpack.p3d";
		hiddenSelections[] =
		{
			"main",
			"accumulator"
		};
		hiddenSelectionsTextures[] =
		{
			"\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa"
		};
		maximumload = 200;
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_RTO_mini_backpack_ca.paa";
		tf_dialog = "SWLB_clone_rto_mini_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_subtype = "digital_lr";
	};

	// Custom Items

	// Backpacks playable
	class NinetyForth_Backpack_Heavy : NinetyForth_BaseBackpack_Heavy {
		scope = 2;
		author = "Legion Studios";
		displayName = "[94th] Clone Backpack - Heavy";
		hiddenSelectionsTextures[] =
		{
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};
	class NinetyForth_Backpack : NinetyForth_BaseBackpack_Small {
		scope = 2;
		author = "Legion Studios";
		displayName = "[94th] Clone Backpack";
	};
	class NinetyForth_MedicBackpack : NinetyForth_BaseMedic {
		scope = 2;
		author = "Legion Studios";
		displayName = "[94th] Clone Medic Backpack";
	};
	class NinetyFoth_RTOBackback : NinetyForth_BaseReconRTO {
		scope = 2;
		author = "Legion Studios";
		displayName = "[94th] Clone RTO Backpack";
	};

	class NinetyForth_Backpack_MiniRadio : NinetyForth_BaseMiniRadio_Backpack {
		scope = 2;
		class XtdGearInfo {
			model = "Backpack_MiniRadio";
			LightDark = "Light";
		};
		hiddenselections[] = { "main", "accumulator" };
	};
};


class XtdGearModels {
	class cfgVehicles {
		class Backpack_MiniRadio {
			label = "Color scheme";
			textureOptions[] = { "LightDark" };
			class LightDark {
				label = "Light Dark";
				values[] = { "Light", "Dark" };
				hiddenselections[] = { "main", "accumulator" };
				class Light {
					textures[] = { "\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_co.paa", "\\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa" };
				};
				class Dark {
					textures[] = { "\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_night_co.paa", "\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_night_co.paa" };
				};
			};
		};
	};
};