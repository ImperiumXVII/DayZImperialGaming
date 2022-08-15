modded class PlayerBase extends ManBase {
	
	override void SetActions(out TInputActionMap InputActionMap) {
		super.SetActions(InputActionMap);
		AddAction(ActionPackWound, InputActionMap);
	}

};