class CfgPatches
{
	class ImperialGaming_Clothing
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Tops",
		};
	};
};

class CfgMods
{
	class IGClothing
	{
		dir="IGClothing";
		name="Imperial Gaming";
		dependencies[]={"World"};
		type = "mod";
	};
};

class cfgVehicles
{
	class HikingJacket_ColorBase;
	class IG_FreshieJacket: HikingJacket_ColorBase
	{
		itemsCargoSize[]={5,4};
		varWetMax=0.0;
		ragQuantity=6;
		scope=2;
		heatIsolation=0.80;
		displayName="Freshie Jacket";
		descriptionShort="Freshie Jacket. Should (hopefully) stop people from attacking you. Somehow, it never gets wet. In Imperial Red.";
		visibilityModifier=1.0;
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\tops\freshie_jacket.paa",
			"IGClothing\data\tops\freshie_jacket.paa",
			"IGClothing\data\tops\freshie_jacket.paa"
		};
	};
	class IG_FreshieJacket_Orange: IG_FreshieJacket
	{
		descriptionShort="Freshie Jacket. Should (hopefully) stop people from attacking you. Somehow, it never gets wet. In stylish orange.";
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\tops\freshie_jacket_orange.paa",
			"IGClothing\data\tops\freshie_jacket_orange.paa",
			"IGClothing\data\tops\freshie_jacket_orange.paa"
		};
	};
	class IG_FreshieJacket_Yellow: IG_FreshieJacket
	{
		descriptionShort="Freshie Jacket. Should (hopefully) stop people from attacking you. Somehow, it never gets wet. In bright yellow.";
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\tops\freshie_jacket_yellow.paa",
			"IGClothing\data\tops\freshie_jacket_yellow.paa",
			"IGClothing\data\tops\freshie_jacket_yellow.paa"
		};
	};
	class IG_FreshieJacket_Green: IG_FreshieJacket
	{
		descriptionShort="Freshie Jacket. Should (hopefully) stop people from attacking you. Somehow, it never gets wet. In vomit green.";
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\tops\freshie_jacket_green.paa",
			"IGClothing\data\tops\freshie_jacket_green.paa",
			"IGClothing\data\tops\freshie_jacket_green.paa"
		};
	};
	class IG_FreshieJacket_Blue: IG_FreshieJacket
	{
		descriptionShort="Freshie Jacket. Should (hopefully) stop people from attacking you. Somehow, it never gets wet. In outlandish blue.";
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\tops\freshie_jacket_blue.paa",
			"IGClothing\data\tops\freshie_jacket_blue.paa",
			"IGClothing\data\tops\freshie_jacket_blue.paa"
		};
	};
	class IG_FreshieJacket_Purple: IG_FreshieJacket
	{
		descriptionShort="Freshie Jacket. Should (hopefully) stop people from attacking you. Somehow, it never gets wet. In Byzantine purple.";
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\tops\freshie_jacket_purple.paa",
			"IGClothing\data\tops\freshie_jacket_purple.paa",
			"IGClothing\data\tops\freshie_jacket_purple.paa"
		};
	};
	class IG_FreshieJacket_Grey: IG_FreshieJacket
	{
		descriptionShort="Freshie Jacket. Should (hopefully) stop people from attacking you. Somehow, it never gets wet. In boring grey.";
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\tops\freshie_jacket_grey.paa",
			"IGClothing\data\tops\freshie_jacket_grey.paa",
			"IGClothing\data\tops\freshie_jacket_grey.paa"
		};
	};
	class IG_FreshieJacket_White: IG_FreshieJacket
	{
		descriptionShort="Freshie Jacket. Should (hopefully) stop people from attacking you. Somehow, it never gets wet. In brilliant white.";
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\tops\freshie_jacket_white.paa",
			"IGClothing\data\tops\freshie_jacket_white.paa",
			"IGClothing\data\tops\freshie_jacket_white.paa"
		};
	};

	class GorkaPants_ColorBase;
	class IG_FreshiePants: GorkaPants_ColorBase
	{
		itemsCargoSize[]={4,5};
		varWetMax=0.0;
		ragQuantity=6;
		scope=2;
		heatIsolation=0.80;
		displayName="Freshie Pants";
		descriptionShort="Freshie Pants. Somehow, they never get wet. In Imperial Red.";
		visibilityModifier=1.0;
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\pants\freshie_pants.paa",
			"IGClothing\data\pants\freshie_pants.paa",
			"IGClothing\data\pants\freshie_pants.paa"
		};
	};	
	class IG_FreshiePants_Orange: IG_FreshiePants
	{
		descriptionShort="Freshie Pants. Somehow, they never get wet. In stylish orange.";
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\pants\freshie_pants_orange.paa",
			"IGClothing\data\pants\freshie_pants_orange.paa",
			"IGClothing\data\pants\freshie_pants_orange.paa"
		};
	};	
	class IG_FreshiePants_Yellow: IG_FreshiePants
	{
		descriptionShort="Freshie Pants. Somehow, they never get wet. In bright yellow.";
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\pants\freshie_pants_yellow.paa",
			"IGClothing\data\pants\freshie_pants_yellow.paa",
			"IGClothing\data\pants\freshie_pants_yellow.paa"
		};
	};	
	class IG_FreshiePants_Green: IG_FreshiePants
	{
		descriptionShort="Freshie Pants. Somehow, they never get wet. In vomit green.";
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\pants\freshie_pants_green.paa",
			"IGClothing\data\pants\freshie_pants_green.paa",
			"IGClothing\data\pants\freshie_pants_green.paa"
		};
	};	
	class IG_FreshiePants_Blue: IG_FreshiePants
	{
		descriptionShort="Freshie Pants. Somehow, they never get wet. In outlandish blue.";
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\pants\freshie_pants_blue.paa",
			"IGClothing\data\pants\freshie_pants_blue.paa",
			"IGClothing\data\pants\freshie_pants_blue.paa"
		};
	};	
	class IG_FreshiePants_Purple: IG_FreshiePants
	{
		descriptionShort="Freshie Pants. Somehow, they never get wet. In Byzantine purple.";
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\pants\freshie_pants_purple.paa",
			"IGClothing\data\pants\freshie_pants_purple.paa",
			"IGClothing\data\pants\freshie_pants_purple.paa"
		};
	};	
	class IG_FreshiePants_Grey: IG_FreshiePants
	{
		descriptionShort="Freshie Pants. Somehow, they never get wet. In boring grey.";
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\pants\freshie_pants_grey.paa",
			"IGClothing\data\pants\freshie_pants_grey.paa",
			"IGClothing\data\pants\freshie_pants_grey.paa"
		};
	};	
	class IG_FreshiePants_White: IG_FreshiePants
	{
		descriptionShort="Freshie Pants. Somehow, they never get wet. In brilliant white.";
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\pants\freshie_pants_white.paa",
			"IGClothing\data\pants\freshie_pants_white.paa",
			"IGClothing\data\pants\freshie_pants_white.paa"
		};
	};	
};
