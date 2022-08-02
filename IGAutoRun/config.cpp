class CfgPatches
{
	class IGAutoRun
	{
		requiredAddons[]={};
	};
};

class CfgMods
{
	class IGAutoRun
	{
		dir="IGAutoRun";
		name="Imperial Gaming";
		inputs="IGAutoRun\Data\inputs.xml";
		dependencies[]={"Mission"};

		type = "mod";

		class defs
		{
			class missionScriptModule
			{
				value = "";
				files[] = {"IGAutoRun/5_Mission"};
			};
			class worldScriptModule
			{
				files[] = {"IGAutorRun/4_World"};
			};
		};
	};
};