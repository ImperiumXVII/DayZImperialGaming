class CfgPatches
{
	class ImperialGaming_Weapons
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Scripts",
			"DZ_Gear_Tools"
		};
	};
};

class CfgMods
{
	class IGWeapons
	{
		dir="IGWeapons";
		name="Imperial Gaming";
		dependencies[]={"World"};

		type = "mod";
	};
};

class cfgVehicles {

	class Man;
	class SurvivorBase: Man {
		class InventoryEquipment
		{
			playerSlots[]=
			{
				"Slot_Shoulder",
				"Slot_Melee",
				"Slot_Vest",
				"Slot_Body",
				"Slot_Hips",
				"Slot_Legs",
				"Slot_Back",
				"Slot_Headgear",
				"Slot_Mask",
				"Slot_Eyewear",
				"Slot_Gloves",
				"Slot_Feet",
				"Slot_Armband",
				"Slot_PrisonPocket"
			};
		};
	};

	class Inventory_Base;
	class StoneKnife: Inventory_Base {
		inventorySlot[]=
		{
			"Butthole"
		};
	};
};

class cfgSlots {
	class Slot_PrisonPocket {
		name = "Butthole";
		displayName = "Prison Wallet";
		ghostIcon = "knife";
	};
};