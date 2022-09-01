class CfgPatches {
    class NinetyForth_menu {
        author = "Akira";
        name = "94th: Main Menu";
        requiredAddons[] = {
            "NinetyForth_core",
            "OPTRE_Core"
        };
    };
};
class CfgWorlds {
	class CAWorld;
	class Altis : CAWorld {
		cutscenes[] = { "MyWorldScene" }; // Class names of used scenes. When more than one is present, the system will pick one randomly.
	};
	initWorld = "Altis";
	demoWorld = "Altis";
};
class CfgMissions {
	class Cutscenes {
		class MyWorldScene // Class referenced in 'cutscenes' property in CfgWorlds
		{
			directory = "NinetyForth_menu\data\MainMenuScene01-test.Altis"; // Path to scenario with the scene
		};
	};
};
class CfgMainMenuSpotlight // RscDisplayMain >> Spotlight works but is considered obsolete since SPOTREP #00064
{
	class JoinServer {
		text = "Splendid Server";
		picture = "\NinetyForth_menu\data\logo.paa";
		action = "connectToServer ['127.0.0.1', 2302, '']";
		actionText = "Join the Splendid Server";
		condition = "true";
	};
};