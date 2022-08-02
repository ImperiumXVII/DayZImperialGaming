modded class PlayerBase extends ManBase
{
    protected bool m_autorunEnabled;

    override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
    {
        if (rpc_type == -44201)
        {
            Param3<bool, int, int> autorunParams;
            if(!ctx.Read(autorunParams)) return;
            bool isRunning = autorunParams.param1;
            int movementIdx = autorunParams.param2;
            int angle = autorunParams.param3;
            this.GetInputController().OverrideMovementSpeed(isRunning, movementIdx);
            this.GetInputController().OverrideMovementAngle(isRunning, angle);
        }

        super.OnRPC(sender, rpc_type, ctx);
    }

    void EnableAutoRun(bool isRunning)
    {
        m_autorunEnabled = isRunning;
		if (m_autorunEnabled){
			OnSprintStart();
		} else {
			OnSprintEnd();
		}
    }

    bool IsAutoRunning()
    {
        return m_autorunEnabled;
    }
}