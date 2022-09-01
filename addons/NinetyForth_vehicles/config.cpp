class CfgPatches {
	class NinetyForth_vehicles {
		author = "Akira";
		name = "94th: Vehicles";
		requiredAddons[] = {
			"NinetyForth_core",
			"ls_armor_bluefor",
			"lsd_armor_bluefor"
		};
		units[] = {
			"NinetyForth_laati",
			"NinetyForth_laati_medevac"
		};
	};
};

class cfgVehicles {
	class lsd_heli_laati_pylonAirborne;
	class lsd_heli_laati_medevac;
	class base_laat;

	class NinetyForth_laati : lsd_heli_laati_pylonAirborne {
		scope = 2;
		displayName = "[94th] LAAT/i Airborne Gunship";
		faction = "NinetyForth_UnitFact_Main";
		//editorSubcategory = "EdSubcat_Helicopters";
		class TextureSources {
			class base_laat {
				displayname = "Standard";
				author = "Legion Studios";
				textures[] =
				{
					"lsd_vehicles_heli\laati\data\body1_co.paa",
					"lsd_vehicles_heli\laati\data\body2_co.paa",
					"lsd_vehicles_heli\laati\data\door1_co.paa",
					"lsd_vehicles_heli\laati\data\door2_co.paa",
					"lsd_vehicles_heli\laati\data\door3_co.paa",
					"lsd_vehicles_heli\laati\data\wings_co.paa",
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					"lsd_vehicles_heli\laati\data\cockpits_co.paa",
					"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
			};
			class Paintless : base_laat {
				displayname = "Factory New";
				textures[] =
				{
					"lsd_vehicles_heli\laati\data\paintless\body1_paintless_co.paa",
					"lsd_vehicles_heli\laati\data\body2_co.paa",
					"lsd_vehicles_heli\laati\data\door1_co.paa",
					"lsd_vehicles_heli\laati\data\door2_co.paa",
					"lsd_vehicles_heli\laati\data\door3_co.paa",
					"lsd_vehicles_heli\laati\data\paintless\wings_paintless_co.paa",
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					"lsd_vehicles_heli\laati\data\cockpits_co.paa",
					"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
			};
			class Medivac : base_laat {
				displayName = "Medical Rescue";
				author = "Raccoon (Legion Studios)";
				textures[] = {
					"lsd_vehicles_heli\laati\data\medEvac\body1_co_medic.paa",
					"lsd_vehicles_heli\laati\data\body2_co.paa",
					"lsd_vehicles_heli\laati\data\medEvac\door1_co_medic2.paa",
					"lsd_vehicles_heli\laati\data\medEvac\door2_co_medic.paa",
					"lsd_vehicles_heli\laati\data\medEvac\door3_co_medic.paa",
					"lsd_vehicles_heli\laati\data\wings_co.paa",
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					"lsd_vehicles_heli\laati\data\cockpits_co.paa",
					"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
			};
		};
		textureList[] = {
			"base_laat",
			1,
			"Paintless",
			0,
			"Medivac",
			0
		};
	};
	class NinetyForth_laati_medevac : lsd_heli_laati_medevac {
		scope = 2;
		displayName = "[94th] LAAT/i MedEvac";
		faction = "NinetyForth_UnitFact_Main";
	};
};