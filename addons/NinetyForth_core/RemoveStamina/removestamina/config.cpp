class CfgPatches
{
	class RemoveStamina
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"Extended_EventHandlers"
		};
	};
};
class Extended_PreInit_EventHandlers
{
	RS_Init="RS_Init_Var = [] execVM ""\Tenthed_Functions\RemoveStamina\removestamina\init.sqf""";
};
