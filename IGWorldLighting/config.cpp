class CfgPatches
{
	class IGAutorun
	{
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};

class CfgMods
{
	class IGAutorun
	{
		dir="IGWorldLighting";
		name="IGWorldLighting";
		type = "mod";

		class defs
		{
			class gameScriptModule
			{
				value = "WorldLighting";
				files[] = {"IGWorldLighting/3_game"};
			};
		};
	};
};