modded class MissionGameplay {

	bool m_autorunEnabled = false;
	autoptr array<string> interruptSprintKeys = {
		"UAMoveForward",
		"UAMoveBack",
		"UAMoveLeft",
		"UAMoveRight",
		"UAFire",
		"UATempRaiseWeapon",
		"UAGetOver",
		"UAStance"
	};
	
	bool PressedAnyKey(TStringArray keyNames) {
		auto input = GetGame().GetInput();
		
		foreach(string keyName: keyNames) {
			if(input.LocalPress(keyName)) {
				return true;
			}
		}
		
		return false;
	}

	protected void SyncAutoRun(bool isRunning, int movementIdx, int angle)
    {
        PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());

        player.EnableAutoRun(isRunning);
        player.GetInputController().OverrideMovementSpeed(isRunning, movementIdx);
        player.GetInputController().OverrideMovementAngle(isRunning, angle);

        auto params = new Param3<bool, int, int>(isRunning, movementIdx, angle);
        GetGame().RPCSingleParam(player, -44201, params, true);
    }
	
	override void OnUpdate(float timeslice) {
		super.OnUpdate(timeslice);

		auto input = GetGame().GetInput();
		PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
		auto controller = player.GetInputController();

		if(input.LocalPress("UAIGAutoRunToggle") && !player.IsInVehicle() && !player.IsUnconscious() && !player.IsRestrained() && player.IsAlive()) {
			m_autorunEnabled = !m_autorunEnabled;
			controller.OverrideMovementSpeed(true, 3);
			controller.OverrideMovementAngle(true, 1);
		}
		
		if(PressedAnyKey(interruptSprintKeys) && m_autorunEnabled == true) {
			m_autorunEnabled = false;
			controller.OverrideMovementSpeed(false, 0);
			controller.OverrideMovementAngle(false, 0);
		}

		if(m_autorunEnabled == true) {
			SyncAutoRun(true, 3, 1);
		} else {
			SyncAutoRun(false, 0, 0);
		}
	}

}