class CfgPatches
{
	class IGMedical
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};

class CfgMods
{
	class IGMedical
	{
		dir="IGMedical";
		name="Imperial Gaming";
		dependencies[]={"Mission"};

		type = "mod";

		class defs
		{
			class worldScriptModule
			{
				files[] = {"IGMedical/scripts/4_World"};
			};
		};
	};
};