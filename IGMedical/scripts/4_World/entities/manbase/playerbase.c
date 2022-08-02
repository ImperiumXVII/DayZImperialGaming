modded class PlayerBase extends ManBase {
	
	override void SetActions(out TInputActionMap InputActionMap) {
		AddAction(ActionPackWound, InputActionMap);
	}

};