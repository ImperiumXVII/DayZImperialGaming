modded class PluginTransmissionAgents extends PluginBase {
	void InfectPackedWound(PlayerBase player) {
		InjectAgentsWithPlayer(player, eAgents.WOUND_AGENT, 0, 1000, InjectTypes.ITEM_TO_PLAYER);
	}
};