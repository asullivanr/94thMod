class CfgPatches {
	class NinetyForth_units {
		author = "Akira";
		name = "94th: Units";
		requiredAddons[] = {
			"NinetyForth_core",
			"ls_core",
			"kobra_core"
		};
		weapons[] = {};
		units[] = {
			"NinetyForth_barracks_unit",
			"MYTAG_MYUNIT_phase2_trooper"
		};
	};
};

class CfgGroups {
	class West {
		name = "BLUFOR";
		side = 1;
		class NinetyForth_Bluefor {
			name = "[94th] Squads";

			class Infantry {
				name = "Infantry";
				class SquadBarracks {
					name = "SQUAD";
					side = 1;
					faction = "NinetyForth_UnitFact_Main";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0,0,0 };
						rank = "SERGEANT";
						side = 1;
						vehicle = "NinetyForth_barracks_unit";
					};
					class Unit1 {
						position[] = { 5,-5,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "NinetyForth_barracks_unit";
					};
					class Unit2 {
						position[] = { 10,-10,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "NinetyForth_barracks_unit";
					};
					class Unit3 {
						position[] = { -5,-15,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "NinetyForth_barracks_unit";
					};
				};
				class SquadTest2 {
					name = "TEST SQUAD 2";
					side = 1;
					faction = "NinetyForth_UnitFact_Main";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0,0,0 };
						rank = "SERGEANT";
						side = 1;
						vehicle = "NinetyForth_phase2_trooper";
					};
					class Unit1 {
						position[] = { 5,-5,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "NinetyForth_phase2_trooper";
					};
					class Unit2 {
						position[] = { 10,-10,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "NinetyForth_phase2_trooper_disposable";
					};
					class Unit3 {
						position[] = { -5,-15,0 };
						rank = "PRIVATE";
						side = 1;
						vehicle = "NinetyForth_phase2_trooper_disposable";
					};
				};
			};

			class SpecOps {
				name = "Special Forces";

			};

			class Motorized {
				name = "Motorized Infantry";

			};

			class Motorized_MTP {
				name = "Motorized Infantry (MTP)";

			};

			class Support {
				name = "Support Infantry";

			};

			class Mechanized {
				name = "Mechanized Infantry";

			};

			class Armored {
				name = "Armor";

			};

			class Artillery {
				name = "Artillery";

			};

			class Naval {
				name = "Naval";

			};

			class Air {
				name = "Air";

			};


		};
	};
	class EAST {
		class NinetyForth_Opfor {
			name = "[94th] Terra Insurrectionists";
			// side 0
			class Infantry {
				name = "Infantry";

			};

			class SpecOps {
				name = "Special Forces";

			};

			class Motorized {
				name = "Motorized Infantry";

			};

			class Motorized_MTP {
				name = "Motorized Infantry (MTP)";

			};

			class Support {
				name = "Support Infantry";

			};

			class Mechanized {
				name = "Mechanized Infantry";

			};

			class Armored {
				name = "Armor";

			};

			class Artillery {
				name = "Artillery";

			};

			class Naval {
				name = "Naval";

			};

			class Air {
				name = "Air";

			};


		};
	};
};

// Work in progress
class CfgVehicles {

	class OPTRE_Ins_URF_Rifleman_AR;
	class B_Soldier_02_f;
	class B_medic_f;
	class O_officer_F;
	class B_Soldier_AT_f;

	class NinetyForth_phase2_base;

	// Works just the armor isnt working.
	class NinetyForth_barracks_unit : O_officer_F {
		scope = 2;
		displayname = "Trooper (Barracks)";
		identityTypes[] =
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		role = "Rifleman";
		uniformclass = "k_barracks_uniform";
		side = 1;
		faction = "NinetyForth_UnitFact_Main";
		editorSubCategory = "NinetyForth_trooper";
		movesFatigue = "CfgMovesFatigueTrooper";
		hiddenselectionstextures[] =
		{
			"kobra\442_units\data\uniform\Barracks.paa"
		};
		weapons[] =
		{
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"Throw",
			"Put"
		};
		linkedItems[] =
		{
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] =
		{
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
	};

	class NinetyForth_phase2_trooper : NinetyForth_phase2_base {
		editorPreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_at_base_P2.jpg";
		scope = 2;
		displayName = "Trooper";
		side = 1;
		faction = "NinetyForth_UnitFact_Main";
		editorSubCategory = "NinetyForth_trooper";

		weapons[] = { "SWLW_DC15A", "SWLW_DC17", "Throw", "Put" };
		respawnWeapons[] = { "SWLW_DC15A", "SWLW_DC17", "Throw", "Put" };
		magazines[] = {
			"SWLW_DC15A_mag", "SWLW_DC15A_mag",      "SWLW_DC15A_mag",
			"SWLW_DC15A_mag", "SWLW_DC15A_mag",      "SWLW_DC15A_mag",
			"SWLW_DC15A_mag", "SWLW_DC17_mag",       "SWLW_DC17_mag",
			"SWLW_DC17_mag",  "SWLW_beltGrenade_mag" };
		respawnMagazines[] = {
			"SWLW_DC15A_mag", "SWLW_DC15A_mag",      "SWLW_DC15A_mag",
			"SWLW_DC15A_mag", "SWLW_DC15A_mag",      "SWLW_DC15A_mag",
			"SWLW_DC15A_mag", "SWLW_DC17_mag",       "SWLW_DC17_mag",
			"SWLW_DC17_mag",  "SWLW_beltGrenade_mag" };
		items[] = { "FirstAidKit", "FirstAidKit", "FirstAidKit" };
		respawnItems[] = { "FirstAidKit", "FirstAidKit", "FirstAidKit" };
	};
	class NinetyForth_phase2_trooper_disposable : NinetyForth_phase2_base {
		editorPreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_at_base_P2.jpg";
		scope = 2;
		displayName = "Trooper AT - Disposable";
		side = 1;
		faction = "NinetyForth_UnitFact_Main";
		editorSubCategory = "NinetyForth_trooper";

		weapons[] = { "SWLW_DC15A", "SWLW_DC17", "SWLW_rps6_disposable", "Throw",
			 "Put" };
		respawnWeapons[] = { "SWLW_DC15A", "SWLW_DC17", "SWLW_rps6_disposable",
							"Throw", "Put" };
		magazines[] = {
			"SWLW_DC15A_mag", "SWLW_DC15A_mag",      "SWLW_DC15A_mag",
			"SWLW_DC15A_mag", "SWLW_DC15A_mag",      "SWLW_DC15A_mag",
			"SWLW_DC15A_mag", "SWLW_DC17_mag",       "SWLW_DC17_mag",
			"SWLW_DC17_mag",  "SWLW_beltGrenade_mag" };
		respawnMagazines[] = {
			"SWLW_DC15A_mag", "SWLW_DC15A_mag",      "SWLW_DC15A_mag",
			"SWLW_DC15A_mag", "SWLW_DC15A_mag",      "SWLW_DC15A_mag",
			"SWLW_DC15A_mag", "SWLW_DC17_mag",       "SWLW_DC17_mag",
			"SWLW_DC17_mag",  "SWLW_beltGrenade_mag" };
		items[] = { "FirstAidKit", "FirstAidKit", "FirstAidKit" };
		respawnItems[] = { "FirstAidKit", "FirstAidKit", "FirstAidKit" };
	};
};