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
	class GasMask_Filter;
	class IG_GasMask_Filter_CRW: GasMask_Filter
	{
		displayName="Gas Mask Filter (CRW)";
		descriptionShort="Rumoured to be part of the CBRN kit used by the Counter Revolutionary Warfare (CRW) wing of the UK's 22nd Special Air Service Regiment. Nobody knows why this kit is in Chernarus.";
		weight=200;
		varQuantityInit=250;
		varQuantityMin=0;
		varQuantityMax=250;
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\gear\consumables\gasmask_filter_crww.paa"
		};
	};

	class AirborneMask;
	class IG_AirborneMask_CRW: AirborneMask
	{
		displayName="CBRN Respirator (CRW)";
		descriptionShort="Rumoured to be part of the CBRN kit used by the Counter Revolutionary Warfare (CRW) wing of the UK's 22nd Special Air Service Regiment. Nobody knows why this kit is in Chernarus.";
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\masks\airborne_mask_crww.paa",
			"IGClothing\data\masks\airborne_mask_crww.paa",
			"IGClothing\data\masks\airborne_mask_crww.paa",
			"\dz\characters\masks\data\gp5gasmask_white_co.paa",
			"\dz\characters\masks\data\airborne_mask_glass_ca.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\pants\Data\CargoPants.rvmat",
								"dz\characters\masks\data\airborne_mask_glass.rvmat",
								"dz\characters\masks\data\gp5gasmask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\pants\Data\CargoPants_damage.rvmat",
								"dz\characters\masks\data\airborne_mask_glass.rvmat",
								"dz\characters\masks\data\gp5gasmask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\pants\Data\CargoPants_destruct.rvmat",
								"dz\characters\masks\data\airborne_mask_glass.rvmat",
								"dz\characters\masks\data\gp5gasmask_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};

	class Transmitter_Base;
	class BaseRadio: Transmitter_Base {
		itemsCargoSize[]={7,6};
	};

	class NBCJacketBase;
	class NBCPantsBase;
	class NBCHoodBase;
	class NBCBootsBase;
	class NBCGloves_ColorBase;

	class IG_NBCJacketMTP: NBCJacketBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\tops\nbc_jacket_mtp.paa",
			"IGClothing\data\tops\nbc_jacket_mtp.paa",
			"IGClothing\data\tops\nbc_jacket_mtp.paa"
		};
	};
	class IG_NBCJacketCRW: IG_NBCJacketMTP
	{
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\tops\nbc_jacket_crww.paa",
			"IGClothing\data\tops\nbc_jacket_crww.paa",
			"IGClothing\data\tops\nbc_jacket_crww.paa"
		};
		itemsCargoSize[]={5,6};
		displayName="CBRN Jacket (CRW)";
		descriptionShort="Rumoured to be part of the CBRN kit used by the Counter Revolutionary Warfare (CRW) wing of the UK's 22nd Special Air Service Regiment. Nobody knows why this kit is in Chernarus.";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\pants\Data\CargoPants.rvmat",
								"DZ\characters\pants\Data\CargoPants_g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\pants\Data\CargoPants.rvmat",
								"DZ\characters\pants\Data\CargoPants_g.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\pants\Data\CargoPants_damage.rvmat",
								"DZ\characters\pants\Data\CargoPants_g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\pants\Data\CargoPants_damage.rvmat",
								"DZ\characters\pants\Data\CargoPants_g_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\pants\Data\CargoPants_destruct.rvmat",
								"DZ\characters\pants\Data\CargoPants_g_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class IG_NBCJacketCADPAT: IG_NBCJacketMTP
	{
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\tops\nbc_jacket_cadpat.paa",
			"IGClothing\data\tops\nbc_jacket_cadpat.paa",
			"IGClothing\data\tops\nbc_jacket_cadpat.paa"
		};
	};
	class IG_NBCPantsMTP: NBCPantsBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\pants\nbc_pants_mtp.paa",
			"IGClothing\data\pants\nbc_pants_mtp.paa",
			"IGClothing\data\pants\nbc_pants_mtp.paa"
		};
	};
	class IG_NBCPantsCRW: IG_NBCPantsMTP
	{
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\pants\nbc_pants_crww.paa",
			"IGClothing\data\pants\nbc_pants_crww.paa",
			"IGClothing\data\pants\nbc_pants_crww.paa"
		};
		itemsCargoSize[]={5,6};
		attachments[]=
		{
			"GasMaskFilter"
		};
		displayName="CBRN Pants (CRW)";
		descriptionShort="Rumoured to be part of the CBRN kit used by the Counter Revolutionary Warfare (CRW) wing of the UK's 22nd Special Air Service Regiment. Nobody knows why this kit is in Chernarus.";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\pants\Data\CargoPants.rvmat",
								"DZ\characters\pants\Data\CargoPants_g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\pants\Data\CargoPants.rvmat",
								"DZ\characters\pants\Data\CargoPants_g.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\pants\Data\CargoPants_damage.rvmat",
								"DZ\characters\pants\Data\CargoPants_g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\pants\Data\CargoPants_damage.rvmat",
								"DZ\characters\pants\Data\CargoPants_g_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\pants\Data\CargoPants_destruct.rvmat",
								"DZ\characters\pants\Data\CargoPants_g_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class IG_NBCPantsCADPAT: IG_NBCPantsMTP
	{
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\pants\nbc_pants_cadpat.paa",
			"IGClothing\data\pants\nbc_pants_cadpat.paa",
			"IGClothing\data\pants\nbc_pants_cadpat.paa"
		};
	};
	class IG_NBCHoodMTP: NBCHoodBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\headgear\nbc_hood_mtp.paa",
			"IGClothing\data\headgear\nbc_hood_mtp.paa",
			"IGClothing\data\headgear\nbc_hood_mtp.paa"
		};
	};
	class IG_NBCHoodCRW: IG_NBCHoodMTP
	{
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\headgear\nbc_hood_crww.paa",
			"IGClothing\data\headgear\nbc_hood_crww.paa",
			"IGClothing\data\headgear\nbc_hood_crww.paa"
		};
		displayName="CBRN Hood (CRW)";
		descriptionShort="Rumoured to be part of the CBRN kit used by the Counter Revolutionary Warfare (CRW) wing of the UK's 22nd Special Air Service Regiment. Nobody knows why this kit is in Chernarus.";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\pants\Data\CargoPants.rvmat",
								"DZ\characters\pants\Data\CargoPants_g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\pants\Data\CargoPants.rvmat",
								"DZ\characters\pants\Data\CargoPants_g.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\pants\Data\CargoPants_damage.rvmat",
								"DZ\characters\pants\Data\CargoPants_g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\pants\Data\CargoPants_damage.rvmat",
								"DZ\characters\pants\Data\CargoPants_g_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\pants\Data\CargoPants_destruct.rvmat",
								"DZ\characters\pants\Data\CargoPants_g_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class IG_NBCHoodCADPAT: IG_NBCHoodMTP
	{
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\headgear\nbc_hood_cadpat.paa",
			"IGClothing\data\headgear\nbc_hood_cadpat.paa",
			"IGClothing\data\headgear\nbc_hood_cadpat.paa"
		};
	};
	class IG_NBCBootsBlack: NBCBootsBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\shoes\nbc_boots_black.paa",
			"IGClothing\data\shoes\nbc_boots_black.paa",
			"IGClothing\data\shoes\nbc_boots_black.paa"
		};
		attachments[]=
		{
			"Knife"
		};
	};
	class IG_NBCGlovesBlack: NBCGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"IGClothing\data\gloves\nbc_gloves_black.paa",
			"IGClothing\data\gloves\nbc_gloves_black.paa",
			"IGClothing\data\gloves\nbc_gloves_black.paa"
		};
	};

	class HikingJacket_ColorBase;
	class IG_FreshieJacket: HikingJacket_ColorBase
	{
		itemsCargoSize[]={4,3};
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
		itemsCargoSize[]={3,4};
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
