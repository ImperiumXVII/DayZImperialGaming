class ActionPackWoundCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.BANDAGE);
	}
};

class ActionPackWound: ActionContinuousBase
{

	void PackWound(PlayerBase player) {
		if (player.GetBleedingManagerServer() )
		{
			player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();	
		}
		
		PluginTransmissionAgents m_mta = PluginTransmissionAgents.Cast(GetPlugin(PluginTransmissionAgents));
		m_mta.InfectPackedWound(player);
	}

	void ActionPackWound()
	{
		m_CallbackClass = ActionPackWoundCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_BANDAGE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_Text = "#pack_wound";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( player.IsPlacingLocal() )
			return false;
		
		// Check if player is standing on terrain
		vector plr_pos = player.GetPosition();
		float height = GetGame().SurfaceY(plr_pos[0], plr_pos[2]);
		height = plr_pos[1] - height;
		
		if ( height > 0.4 )
			return false; // Player is not standing on ground
		
		if ( !GetGame().IsDedicatedServer() )
		{
			if ( !player.IsPlacingLocal())
			{
				if ( target )
				{
					string surface_type;
					vector position;
					position = target.GetCursorHitPos();
					
					GetGame().SurfaceGetType( position[0], position[2], surface_type );
					
					//float distance = vector.Distance(plr_pos,position);
					
					if ( GetGame().IsSurfaceFertile(surface_type) && player.IsBleeding() )
					{
						return true;
					}
				}
			}
		
			return false;
		}
		else
		{
			return true;
		}
	}

	override void OnStart(ActionData action_data)
	{
		super.OnStart(action_data);
		
		action_data.m_Player.TryHideItemInHands(true);
	}

	override void OnEnd(ActionData action_data)
	{
		action_data.m_Player.TryHideItemInHands(false);
	}

	override void CreateConditionComponents()  
	{		
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTSurface(UAMaxDistances.DEFAULT);
	}
	
	override bool ActionConditionContinue( ActionData action_data )
	{
		return true;
	}  

	override bool HasTarget()
	{
		return true;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{	
		PackWound(action_data.m_Player);
		action_data.m_Player.GetSoftSkillsManager().AddSpecialty(m_SpecialtyWeight);
	}
};