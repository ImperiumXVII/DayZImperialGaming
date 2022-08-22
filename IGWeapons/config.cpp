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

class CfgVehicles {

	class Man;
	class SurvivorBase: Man {
		attachments[]=
		{
			"Head",
			"Shoulder",
			"Melee",
			"Headgear",
			"Mask",
			"Eyewear",
			"Hands",
			"LeftHand",
			"Gloves",
			"Armband",
			"Vest",
			"Body",
			"Back",
			"Hips",
			"Legs",
			"Feet",
			"Splint_Right",
			"Butthole"
		};
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
				"Slot_Butthole"
			};
		};
	};

	class Inventory_Base;

	class M9A1_Bayonet: Inventory_Base {
		inventorySlot[] = {
			"Knife",
			"weaponBayonet"
		};
	};

	class AK_Bayonet: Inventory_Base {
		inventorySlot[] = {
			"weaponBayonetAK",
			"Knife"
		};
	};

	class StoneKnife: Inventory_Base {
		inventorySlot[] = {
			"Butthole"
		};
	};

	class Pistol_Base;
	class Derringer_Base: Pistol_Base {
		inventorySlot[] = {
			"Knife",
			"Pistol"
		};
	}

};

class CfgSlots {
	class Slot_Butthole {
		name = "Butthole";
		displayName = "Prison Wallet";
		ghostIcon = "knife";
		selection="slot_butthole";
	};
};