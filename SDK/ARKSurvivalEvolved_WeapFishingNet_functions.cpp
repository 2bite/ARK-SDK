// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFishingNet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapFishingNet.WeapFishingNet_C.destroy net item
// ()

void AWeapFishingNet_C::destroy_net_item()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.destroy net item");

	AWeapFishingNet_C_destroy_net_item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapFishingNet_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.BPServerHandleNetExecCommand");

	AWeapFishingNet_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function WeapFishingNet.WeapFishingNet_C.Show Or Hide Net
// ()
// Parameters:
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Post_Catch_Check               (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::Show_Or_Hide_Net(bool Show, bool Post_Catch_Check)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Show Or Hide Net");

	AWeapFishingNet_C_Show_Or_Hide_Net_Params params;
	params.Show = Show;
	params.Post_Catch_Check = Post_Catch_Check;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Set All Components Render Custom Depth
// ()
// Parameters:
// class AActor*                  actor_to_set                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::Set_All_Components_Render_Custom_Depth(class AActor* actor_to_set, bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Set All Components Render Custom Depth");

	AWeapFishingNet_C_Set_All_Components_Render_Custom_Depth_Params params;
	params.actor_to_set = actor_to_set;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.set all components custom depth stencil value
// ()
// Parameters:
// class AActor*                  actor_to_set                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::set_all_components_custom_depth_stencil_value(class AActor* actor_to_set, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.set all components custom depth stencil value");

	AWeapFishingNet_C_set_all_components_custom_depth_stencil_value_Params params;
	params.actor_to_set = actor_to_set;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Restrict Auto Reel
// ()

void AWeapFishingNet_C::Restrict_Auto_Reel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Restrict Auto Reel");

	AWeapFishingNet_C_Restrict_Auto_Reel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Anim And Sound
// ()

void AWeapFishingNet_C::Restrict_Reel_Anim_And_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Anim And Sound");

	AWeapFishingNet_C_Restrict_Reel_Anim_And_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Generate Fish Meat En Masse
// ()
// Parameters:
// float                          total_wild_scale               (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    used_fish_for_inventory        (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::Generate_Fish_Meat_En_Masse(float total_wild_scale, class APrimalDinoCharacter* used_fish_for_inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Generate Fish Meat En Masse");

	AWeapFishingNet_C_Generate_Fish_Meat_En_Masse_Params params;
	params.total_wild_scale = total_wild_scale;
	params.used_fish_for_inventory = used_fish_for_inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Server
// ()

void AWeapFishingNet_C::Restrict_Reel_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Server");

	AWeapFishingNet_C_Restrict_Reel_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Client
// ()

void AWeapFishingNet_C::Restrict_Reel_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Client");

	AWeapFishingNet_C_Restrict_Reel_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Server Occasional Timer Events
// ()

void AWeapFishingNet_C::Server_Occasional_Timer_Events()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Server Occasional Timer Events");

	AWeapFishingNet_C_Server_Occasional_Timer_Events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.set net rotation to face player
// ()

void AWeapFishingNet_C::set_net_rotation_to_face_player()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.set net rotation to face player");

	AWeapFishingNet_C_set_net_rotation_to_face_player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.FishStruggle
// ()

void AWeapFishingNet_C::FishStruggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.FishStruggle");

	AWeapFishingNet_C_FishStruggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.spawn vfx at location where cable intersects with water
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected)

void AWeapFishingNet_C::STATIC_spawn_vfx_at_location_where_cable_intersects_with_water()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.spawn vfx at location where cable intersects with water");

	AWeapFishingNet_C_spawn_vfx_at_location_where_cable_intersects_with_water_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.BPStartEquippedNotify
// ()

void AWeapFishingNet_C::BPStartEquippedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.BPStartEquippedNotify");

	AWeapFishingNet_C_BPStartEquippedNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Hide Cable Components
// ()

void AWeapFishingNet_C::Cancel_Cast_Hide_Cable_Components()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Hide Cable Components");

	AWeapFishingNet_C_Cancel_Cast_Hide_Cable_Components_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.play hooked fish HLNA reaction
// ()

void AWeapFishingNet_C::play_hooked_fish_HLNA_reaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.play hooked fish HLNA reaction");

	AWeapFishingNet_C_play_hooked_fish_HLNA_reaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.delay showing fpv mesh a bit longer
// ()

void AWeapFishingNet_C::delay_showing_fpv_mesh_a_bit_longer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.delay showing fpv mesh a bit longer");

	AWeapFishingNet_C_delay_showing_fpv_mesh_a_bit_longer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.backup cancel timer
// ()

void AWeapFishingNet_C::backup_cancel_timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.backup cancel timer");

	AWeapFishingNet_C_backup_cancel_timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.cancelling cast during reel casting or casted
// ()

void AWeapFishingNet_C::cancelling_cast_during_reel_casting_or_casted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.cancelling cast during reel casting or casted");

	AWeapFishingNet_C_cancelling_cast_during_reel_casting_or_casted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.set enable throw anim when not jumping and has buff
// ()

void AWeapFishingNet_C::set_enable_throw_anim_when_not_jumping_and_has_buff()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.set enable throw anim when not jumping and has buff");

	AWeapFishingNet_C_set_enable_throw_anim_when_not_jumping_and_has_buff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.restrict movement while cooking
// ()

void AWeapFishingNet_C::restrict_movement_while_cooking()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.restrict movement while cooking");

	AWeapFishingNet_C_restrict_movement_while_cooking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.force idle anim while moving
// ()

void AWeapFishingNet_C::force_idle_anim_while_moving()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.force idle anim while moving");

	AWeapFishingNet_C_force_idle_anim_while_moving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.set state to casting if net exists during idle
// ()

void AWeapFishingNet_C::set_state_to_casting_if_net_exists_during_idle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.set state to casting if net exists during idle");

	AWeapFishingNet_C_set_state_to_casting_if_net_exists_during_idle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.hide 1p mesh when appropriate
// ()

void AWeapFishingNet_C::hide_1p_mesh_when_appropriate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.hide 1p mesh when appropriate");

	AWeapFishingNet_C_hide_1p_mesh_when_appropriate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.cancel cast if player is in water
// ()

void AWeapFishingNet_C::cancel_cast_if_player_is_in_water()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.cancel cast if player is in water");

	AWeapFishingNet_C_cancel_cast_if_player_is_in_water_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.set fish location with net
// ()

void AWeapFishingNet_C::set_fish_location_with_net()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.set fish location with net");

	AWeapFishingNet_C_set_fish_location_with_net_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.finish reel if net is close enough to player
// ()

void AWeapFishingNet_C::finish_reel_if_net_is_close_enough_to_player()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.finish reel if net is close enough to player");

	AWeapFishingNet_C_finish_reel_if_net_is_close_enough_to_player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.set start position of fishing cable
// ()

void AWeapFishingNet_C::set_start_position_of_fishing_cable()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.set start position of fishing cable");

	AWeapFishingNet_C_set_start_position_of_fishing_cable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.update net location
// ()

void AWeapFishingNet_C::update_net_location()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.update net location");

	AWeapFishingNet_C_update_net_location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.break if net is invalid during casted state
// ()

void AWeapFishingNet_C::break_if_net_is_invalid_during_casted_state()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.break if net is invalid during casted state");

	AWeapFishingNet_C_break_if_net_is_invalid_during_casted_state_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.break if net is too far
// ()

void AWeapFishingNet_C::break_if_net_is_too_far()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.break if net is too far");

	AWeapFishingNet_C_break_if_net_is_too_far_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Kill all fish in net
// ()

void AWeapFishingNet_C::Kill_all_fish_in_net()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Kill all fish in net");

	AWeapFishingNet_C_Kill_all_fish_in_net_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Send Caught Fish Message to Player
// (NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeapFishingNet_C::STATIC_Send_Caught_Fish_Message_to_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Send Caught Fish Message to Player");

	AWeapFishingNet_C_Send_Caught_Fish_Message_to_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Fully Catch Fish In Net
// ()

void AWeapFishingNet_C::Fully_Catch_Fish_In_Net()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Fully Catch Fish In Net");

	AWeapFishingNet_C_Fully_Catch_Fish_In_Net_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Remove Buff And Reset Anim
// ()
// Parameters:
// bool                           caught_success                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::Cancel_Cast_Remove_Buff_And_Reset_Anim(bool caught_success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Remove Buff And Reset Anim");

	AWeapFishingNet_C_Cancel_Cast_Remove_Buff_And_Reset_Anim_Params params;
	params.caught_success = caught_success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Destroy Cable Components
// ()

void AWeapFishingNet_C::Cancel_Cast_Destroy_Cable_Components()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Destroy Cable Components");

	AWeapFishingNet_C_Cancel_Cast_Destroy_Cable_Components_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.cancel cast destroy net projectile
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Protected)

void AWeapFishingNet_C::cancel_cast_destroy_net_projectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.cancel cast destroy net projectile");

	AWeapFishingNet_C_cancel_cast_destroy_net_projectile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.cancel cast release fish
// ()

void AWeapFishingNet_C::cancel_cast_release_fish()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.cancel cast release fish");

	AWeapFishingNet_C_cancel_cast_release_fish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.reset variables on cancel reel
// ()
// Parameters:
// bool                           successful_catch               (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::reset_variables_on_cancel_reel(bool successful_catch)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.reset variables on cancel reel");

	AWeapFishingNet_C_reset_variables_on_cancel_reel_Params params;
	params.successful_catch = successful_catch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.update cable component location
// ()
// Parameters:
// class UPrimalCableComponent*   Cable                          (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         _1PAttachSocketStart           (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         _1PAttachSocketEnd             (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         _3PAttachSocketEnd             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           new_cable_component            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 _1P_Endpoint_Override          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 _3P_Endpoint_Override          (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Swapped_Hand_Component1P       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   _3PAttachSocketStartName       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::update_cable_component_location(class UPrimalCableComponent* Cable, class USceneComponent* _1PAttachSocketStart, class USceneComponent* _1PAttachSocketEnd, class USceneComponent* _3PAttachSocketEnd, bool new_cable_component, const struct FVector& _1P_Endpoint_Override, const struct FVector& _3P_Endpoint_Override, class USceneComponent* Swapped_Hand_Component1P, const struct FName& _3PAttachSocketStartName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.update cable component location");

	AWeapFishingNet_C_update_cable_component_location_Params params;
	params.Cable = Cable;
	params._1PAttachSocketStart = _1PAttachSocketStart;
	params._1PAttachSocketEnd = _1PAttachSocketEnd;
	params._3PAttachSocketEnd = _3PAttachSocketEnd;
	params.new_cable_component = new_cable_component;
	params._1P_Endpoint_Override = _1P_Endpoint_Override;
	params._3P_Endpoint_Override = _3P_Endpoint_Override;
	params.Swapped_Hand_Component1P = Swapped_Hand_Component1P;
	params._3PAttachSocketStartName = _3PAttachSocketStartName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Get Cable Attach Info
// ()
// Parameters:
// bool                           is_first_person                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Cable_Comp                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Mesh_Comp                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::Get_Cable_Attach_Info(bool* is_first_person, class USceneComponent** Cable_Comp, class USceneComponent** Mesh_Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Get Cable Attach Info");

	AWeapFishingNet_C_Get_Cable_Attach_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (is_first_person != nullptr)
		*is_first_person = params.is_first_person;
	if (Cable_Comp != nullptr)
		*Cable_Comp = params.Cable_Comp;
	if (Mesh_Comp != nullptr)
		*Mesh_Comp = params.Mesh_Comp;
}


// Function WeapFishingNet.WeapFishingNet_C.Attach Cable To Hand
// ()
// Parameters:
// bool                           Left                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interp_Cable                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::Attach_Cable_To_Hand(bool Left, bool Interp_Cable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Attach Cable To Hand");

	AWeapFishingNet_C_Attach_Cable_To_Hand_Params params;
	params.Left = Left;
	params.Interp_Cable = Interp_Cable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.CreateCable
// ()
// Parameters:
// class UPrimalCableComponent*   Existing_Cable_Component_To_Check (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Cable_Length                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Cable_Segments                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AdaptiveSegments               (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Attached_Component_1P          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Attach_Socket_Name_1P          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Attach_Socket_Name_3P          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalCableComponent*   cable_component                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           NewlyCreated                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::CreateCable(class UPrimalCableComponent* Existing_Cable_Component_To_Check, const struct FName& Name, float Cable_Length, int Cable_Segments, bool AdaptiveSegments, class USceneComponent* Attached_Component_1P, const struct FName& Attach_Socket_Name_1P, const struct FName& Attach_Socket_Name_3P, class UPrimalCableComponent** cable_component, bool* NewlyCreated)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.CreateCable");

	AWeapFishingNet_C_CreateCable_Params params;
	params.Existing_Cable_Component_To_Check = Existing_Cable_Component_To_Check;
	params.Name = Name;
	params.Cable_Length = Cable_Length;
	params.Cable_Segments = Cable_Segments;
	params.AdaptiveSegments = AdaptiveSegments;
	params.Attached_Component_1P = Attached_Component_1P;
	params.Attach_Socket_Name_1P = Attach_Socket_Name_1P;
	params.Attach_Socket_Name_3P = Attach_Socket_Name_3P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (cable_component != nullptr)
		*cable_component = params.cable_component;
	if (NewlyCreated != nullptr)
		*NewlyCreated = params.NewlyCreated;
}


// Function WeapFishingNet.WeapFishingNet_C.Give Fish Rewards
// ()

void AWeapFishingNet_C::Give_Fish_Rewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Give Fish Rewards");

	AWeapFishingNet_C_Give_Fish_Rewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Set Fish Position To Normal Offset
// ()
// Parameters:
// bool                           caught_success                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::Set_Fish_Position_To_Normal_Offset(bool caught_success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Set Fish Position To Normal Offset");

	AWeapFishingNet_C_Set_Fish_Position_To_Normal_Offset_Params params;
	params.caught_success = caught_success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Get Initial Fish Location Offset
// ()
// Parameters:
// class AActor*                  Fish                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::Get_Initial_Fish_Location_Offset(class AActor* Fish, struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Get Initial Fish Location Offset");

	AWeapFishingNet_C_Get_Initial_Fish_Location_Offset_Params params;
	params.Fish = Fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function WeapFishingNet.WeapFishingNet_C.BPRemainEquipped
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapFishingNet_C::BPRemainEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.BPRemainEquipped");

	AWeapFishingNet_C_BPRemainEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapFishingNet.WeapFishingNet_C.BPCanEquip
// ()
// Parameters:
// class AShooterCharacter**      ByCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapFishingNet_C::BPCanEquip(class AShooterCharacter** ByCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.BPCanEquip");

	AWeapFishingNet_C_BPCanEquip_Params params;
	params.ByCharacter = ByCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapFishingNet.WeapFishingNet_C.Reel Velocity
// ()
// Parameters:
// struct FVector                 Weapon_Location                (Parm, ZeroConstructor, IsPlainOldData)
// class AProjFishingNet_C*       Net_Projectile                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AWeapFishingNet_C::Reel_Velocity(const struct FVector& Weapon_Location, class AProjFishingNet_C* Net_Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Reel Velocity");

	AWeapFishingNet_C_Reel_Velocity_Params params;
	params.Weapon_Location = Weapon_Location;
	params.Net_Projectile = Net_Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapFishingNet.WeapFishingNet_C.BPAnimNotifyCustomEvent
// (NetReliable, Native, Static, MulticastDelegate, Private, Protected)
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::STATIC_BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.BPAnimNotifyCustomEvent");

	AWeapFishingNet_C_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Give Fish Loot
// ()
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Amount_Multiplier              (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::Give_Fish_Loot(class UClass* Class, class APrimalDinoCharacter* Outer, float Amount_Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Give Fish Loot");

	AWeapFishingNet_C_Give_Fish_Loot_Params params;
	params.Class = Class;
	params.Outer = Outer;
	params.Amount_Multiplier = Amount_Multiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Generate Fish Meat
// ()
// Parameters:
// class APrimalDinoCharacter*    Fish                           (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::Generate_Fish_Meat(class APrimalDinoCharacter* Fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Generate Fish Meat");

	AWeapFishingNet_C_Generate_Fish_Meat_Params params;
	params.Fish = Fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Check For Fish Collision
// ()

void AWeapFishingNet_C::Check_For_Fish_Collision()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Check For Fish Collision");

	AWeapFishingNet_C_Check_For_Fish_Collision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.On Fish Released
// ()
// Parameters:
// class APrimalDinoCharacter*    Fish                           (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::On_Fish_Released(class APrimalDinoCharacter* Fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.On Fish Released");

	AWeapFishingNet_C_On_Fish_Released_Params params;
	params.Fish = Fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.release fish
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Private, Protected)
// Parameters:
// class UObject*                 Fish                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           pulled_completely_up           (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::release_fish(class UObject* Fish, bool pulled_completely_up)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.release fish");

	AWeapFishingNet_C_release_fish_Params params;
	params.Fish = Fish;
	params.pulled_completely_up = pulled_completely_up;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.PlayFishAttackAnimation
// ()

void AWeapFishingNet_C::PlayFishAttackAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.PlayFishAttackAnimation");

	AWeapFishingNet_C_PlayFishAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.On Fish Snared
// ()
// Parameters:
// class APrimalDinoCharacter*    localSnaredFish                (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::On_Fish_Snared(class APrimalDinoCharacter* localSnaredFish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.On Fish Snared");

	AWeapFishingNet_C_On_Fish_Snared_Params params;
	params.localSnaredFish = localSnaredFish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.snare fish
// ()
// Parameters:
// class APrimalDinoCharacter*    snared_fish                    (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::snare_fish(class APrimalDinoCharacter* snared_fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.snare fish");

	AWeapFishingNet_C_snare_fish_Params params;
	params.snared_fish = snared_fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.StartUnequipEvent
// ()

void AWeapFishingNet_C::StartUnequipEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.StartUnequipEvent");

	AWeapFishingNet_C_StartUnequipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Update Rope Length
// ()

void AWeapFishingNet_C::Update_Rope_Length()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Update Rope Length");

	AWeapFishingNet_C_Update_Rope_Length_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.StartSecondaryActionEvent
// ()

void AWeapFishingNet_C::StartSecondaryActionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.StartSecondaryActionEvent");

	AWeapFishingNet_C_StartSecondaryActionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.BPFiredWeapon
// ()

void AWeapFishingNet_C::BPFiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.BPFiredWeapon");

	AWeapFishingNet_C_BPFiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.ReceiveTick");

	AWeapFishingNet_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.ReceiveBeginPlay
// ()

void AWeapFishingNet_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.ReceiveBeginPlay");

	AWeapFishingNet_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.BPWeaponCanFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapFishingNet_C::BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.BPWeaponCanFire");

	AWeapFishingNet_C_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapFishingNet.WeapFishingNet_C.Update Cable Component
// ()
// Parameters:
// struct FVector                 End_Cable_Location             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           has_buff                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::Update_Cable_Component(const struct FVector& End_Cable_Location, bool* has_buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Update Cable Component");

	AWeapFishingNet_C_Update_Cable_Component_Params params;
	params.End_Cable_Location = End_Cable_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (has_buff != nullptr)
		*has_buff = params.has_buff;
}


// Function WeapFishingNet.WeapFishingNet_C.Net Collided with Water
// ()
// Parameters:
// struct FVector                 WaterLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Projectile_Rotation            (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::Net_Collided_with_Water(const struct FVector& WaterLocation, const struct FRotator& Projectile_Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Net Collided with Water");

	AWeapFishingNet_C_Net_Collided_with_Water_Params params;
	params.WaterLocation = WaterLocation;
	params.Projectile_Rotation = Projectile_Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.BPGetProjectileSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeapFishingNet_C::BPGetProjectileSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.BPGetProjectileSpeed");

	AWeapFishingNet_C_BPGetProjectileSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapFishingNet.WeapFishingNet_C.UserConstructionScript
// ()

void AWeapFishingNet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.UserConstructionScript");

	AWeapFishingNet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.move net to player timeline__FinishedFunc
// ()

void AWeapFishingNet_C::move_net_to_player_timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.move net to player timeline__FinishedFunc");

	AWeapFishingNet_C_move_net_to_player_timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.move net to player timeline__UpdateFunc
// ()

void AWeapFishingNet_C::move_net_to_player_timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.move net to player timeline__UpdateFunc");

	AWeapFishingNet_C_move_net_to_player_timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Timeline_0__FinishedFunc
// ()

void AWeapFishingNet_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Timeline_0__FinishedFunc");

	AWeapFishingNet_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Timeline_0__UpdateFunc
// ()

void AWeapFishingNet_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Timeline_0__UpdateFunc");

	AWeapFishingNet_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Cancel Cast
// ()
// Parameters:
// bool                           caught_success                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force_Reset_Has_Caught_Any_Fish (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::Cancel_Cast(bool caught_success, bool Force_Reset_Has_Caught_Any_Fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Cancel Cast");

	AWeapFishingNet_C_Cancel_Cast_Params params;
	params.caught_success = caught_success;
	params.Force_Reset_Has_Caught_Any_Fish = Force_Reset_Has_Caught_Any_Fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Reel Net In
// ()

void AWeapFishingNet_C::Reel_Net_In()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Reel Net In");

	AWeapFishingNet_C_Reel_Net_In_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.server reel
// ()

void AWeapFishingNet_C::server_reel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.server reel");

	AWeapFishingNet_C_server_reel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.OnFishSnaredEvent
// ()
// Parameters:
// class APrimalDinoCharacter*    Fish                           (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::OnFishSnaredEvent(class APrimalDinoCharacter* Fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.OnFishSnaredEvent");

	AWeapFishingNet_C_OnFishSnaredEvent_Params params;
	params.Fish = Fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Projectile net collided with fish
// ()
// Parameters:
// class APrimalDinoCharacter*    Fish                           (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::Projectile_net_collided_with_fish(class APrimalDinoCharacter* Fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Projectile net collided with fish");

	AWeapFishingNet_C_Projectile_net_collided_with_fish_Params params;
	params.Fish = Fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Events
// ()
// Parameters:
// bool                           caught_success                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::Cancel_Cast_Events(bool caught_success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Events");

	AWeapFishingNet_C_Cancel_Cast_Events_Params params;
	params.caught_success = caught_success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.fully catch fish
// ()

void AWeapFishingNet_C::fully_catch_fish()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.fully catch fish");

	AWeapFishingNet_C_fully_catch_fish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.client do death harvesting
// ()

void AWeapFishingNet_C::client_do_death_harvesting()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.client do death harvesting");

	AWeapFishingNet_C_client_do_death_harvesting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.play reel anim
// ()

void AWeapFishingNet_C::play_reel_anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.play reel anim");

	AWeapFishingNet_C_play_reel_anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.cancel fire anim if there's fish in net
// ()

void AWeapFishingNet_C::cancel_fire_anim_if_there_s_fish_in_net()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.cancel fire anim if there's fish in net");

	AWeapFishingNet_C_cancel_fire_anim_if_there_s_fish_in_net_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Set Reeling On Projectile
// ()

void AWeapFishingNet_C::Set_Reeling_On_Projectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Set Reeling On Projectile");

	AWeapFishingNet_C_Set_Reeling_On_Projectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.play fire anim for TPV
// ()

void AWeapFishingNet_C::play_fire_anim_for_TPV()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.play fire anim for TPV");

	AWeapFishingNet_C_play_fire_anim_for_TPV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.play fire anim for FPV
// ()

void AWeapFishingNet_C::play_fire_anim_for_FPV()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.play fire anim for FPV");

	AWeapFishingNet_C_play_fire_anim_for_FPV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.play blended idle anim - cancel cast
// ()

void AWeapFishingNet_C::play_blended_idle_anim___cancel_cast()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.play blended idle anim - cancel cast");

	AWeapFishingNet_C_play_blended_idle_anim___cancel_cast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.cancel fire anim
// ()

void AWeapFishingNet_C::cancel_fire_anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.cancel fire anim");

	AWeapFishingNet_C_cancel_fire_anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Play Fish Caught Animation and remove item after
// ()
// Parameters:
// bool                           Has_Caught_Fish                (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::Play_Fish_Caught_Animation_and_remove_item_after(bool Has_Caught_Fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Play Fish Caught Animation and remove item after");

	AWeapFishingNet_C_Play_Fish_Caught_Animation_and_remove_item_after_Params params;
	params.Has_Caught_Fish = Has_Caught_Fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.move net towards player
// ()
// Parameters:
// bool                           pull_net_in                    (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::move_net_towards_player(bool pull_net_in)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.move net towards player");

	AWeapFishingNet_C_move_net_towards_player_Params params;
	params.pull_net_in = pull_net_in;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.client fully catch fish
// ()
// Parameters:
// bool                           catch_fish_success             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           pull_net_in                    (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::client_fully_catch_fish(bool catch_fish_success, bool pull_net_in)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.client fully catch fish");

	AWeapFishingNet_C_client_fully_catch_fish_Params params;
	params.catch_fish_success = catch_fish_success;
	params.pull_net_in = pull_net_in;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.delay and cancel cast
// ()
// Parameters:
// bool                           successfully_caught_fish       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::delay_and_cancel_cast(bool successfully_caught_fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.delay and cancel cast");

	AWeapFishingNet_C_delay_and_cancel_cast_Params params;
	params.successfully_caught_fish = successfully_caught_fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.multicast collided with water
// ()
// Parameters:
// struct FVector                 hit_water_location             (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::multicast_collided_with_water(const struct FVector& hit_water_location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.multicast collided with water");

	AWeapFishingNet_C_multicast_collided_with_water_Params params;
	params.hit_water_location = hit_water_location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.multicast set variables on cast
// ()

void AWeapFishingNet_C::multicast_set_variables_on_cast()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.multicast set variables on cast");

	AWeapFishingNet_C_multicast_set_variables_on_cast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.multicast release fish
// ()

void AWeapFishingNet_C::multicast_release_fish()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.multicast release fish");

	AWeapFishingNet_C_multicast_release_fish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.client request cancel cast
// ()
// Parameters:
// bool                           caught_success                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reset_Has_Caught_Any_FIsh      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::client_request_cancel_cast(bool caught_success, bool Reset_Has_Caught_Any_FIsh)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.client request cancel cast");

	AWeapFishingNet_C_client_request_cancel_cast_Params params;
	params.caught_success = caught_success;
	params.Reset_Has_Caught_Any_FIsh = Reset_Has_Caught_Any_FIsh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.Rotate projectile away from player while reeling_Client
// ()

void AWeapFishingNet_C::Rotate_projectile_away_from_player_while_reeling_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.Rotate projectile away from player while reeling_Client");

	AWeapFishingNet_C_Rotate_projectile_away_from_player_while_reeling_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.multicast fish struggle
// ()

void AWeapFishingNet_C::multicast_fish_struggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.multicast fish struggle");

	AWeapFishingNet_C_multicast_fish_struggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.delay pass allowed fish classes to fish vision buff
// ()

void AWeapFishingNet_C::delay_pass_allowed_fish_classes_to_fish_vision_buff()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.delay pass allowed fish classes to fish vision buff");

	AWeapFishingNet_C_delay_pass_allowed_fish_classes_to_fish_vision_buff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.ExecuteUbergraph_WeapFishingNet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::ExecuteUbergraph_WeapFishingNet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.ExecuteUbergraph_WeapFishingNet");

	AWeapFishingNet_C_ExecuteUbergraph_WeapFishingNet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.FishCaughtDispatcherSingle__DelegateSignature
// ()
// Parameters:
// float                          caught_fish_wild_random_scale  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Net_Owner                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Fish_Class                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 fish_ref                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::FishCaughtDispatcherSingle__DelegateSignature(float caught_fish_wild_random_scale, class AActor* Net_Owner, class UClass* Fish_Class, class UObject* fish_ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.FishCaughtDispatcherSingle__DelegateSignature");

	AWeapFishingNet_C_FishCaughtDispatcherSingle__DelegateSignature_Params params;
	params.caught_fish_wild_random_scale = caught_fish_wild_random_scale;
	params.Net_Owner = Net_Owner;
	params.Fish_Class = Fish_Class;
	params.fish_ref = fish_ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingNet.WeapFishingNet_C.FishCaughtDispatcher__DelegateSignature
// ()
// Parameters:
// float                          caught_fish_weight             (Parm, ZeroConstructor, IsPlainOldData)
// int                            caught_fish_count              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Net_Owner                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingNet_C::FishCaughtDispatcher__DelegateSignature(float caught_fish_weight, int caught_fish_count, class AActor* Net_Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingNet.WeapFishingNet_C.FishCaughtDispatcher__DelegateSignature");

	AWeapFishingNet_C_FishCaughtDispatcher__DelegateSignature_Params params;
	params.caught_fish_weight = caught_fish_weight;
	params.caught_fish_count = caught_fish_count;
	params.Net_Owner = Net_Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
