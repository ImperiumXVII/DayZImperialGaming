modded class WorldLighting
{
	protected string lighting_modded = "IGWorldLighting/data/worldlighting.txt";
	
	override void SetGlobalLighting(int lightingID)
	{
		switch (lightingID)
		{
			case 3:
				GetGame().GetWorld().LoadNewLightingCfg(lighting_modded);
				break;
		}
	}
}