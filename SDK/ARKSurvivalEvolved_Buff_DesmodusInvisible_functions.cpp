// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DesmodusInvisible_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.IsLocalCrontrolledPlayerInFPV
// ()
// Parameters:
// class APrimalCharacter*        forChar                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLocal                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::IsLocalCrontrolledPlayerInFPV(class APrimalCharacter* forChar, bool* IsLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.IsLocalCrontrolledPlayerInFPV");

	ABuff_DesmodusInvisible_C_IsLocalCrontrolledPlayerInFPV_Params params;
	params.forChar = forChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocal != nullptr)
		*IsLocal = params.IsLocal;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.DeactiveOnFiring
// (NetReliable, Exec, Static, MulticastDelegate, Public, Protected, HasDefaults, BlueprintEvent)

void ABuff_DesmodusInvisible_C::STATIC_DeactiveOnFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.DeactiveOnFiring");

	ABuff_DesmodusInvisible_C_DeactiveOnFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_DesmodusInvisible_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPServerHandleNetExecCommand");

	ABuff_DesmodusInvisible_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPHandleOnStartFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::BPHandleOnStartFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPHandleOnStartFire");

	ABuff_DesmodusInvisible_C_BPHandleOnStartFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Has passed default weapon check
// ()
// Parameters:
// class AShooterCharacter*       Passenger                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           passed_check                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::Has_passed_default_weapon_check(class AShooterCharacter* Passenger, bool* passed_check)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Has passed default weapon check");

	ABuff_DesmodusInvisible_C_Has_passed_default_weapon_check_Params params;
	params.Passenger = Passenger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (passed_check != nullptr)
		*passed_check = params.passed_check;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Set Cloak Transition Value
// ()
// Parameters:
// float                          Dissolve_Mesh                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Cloak_Transition               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETimelineDirection> Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Skip_LFL_Transition            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::Set_Cloak_Transition_Value(float Dissolve_Mesh, float Cloak_Transition, TEnumAsByte<ETimelineDirection> Direction, bool Skip_LFL_Transition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Set Cloak Transition Value");

	ABuff_DesmodusInvisible_C_Set_Cloak_Transition_Value_Params params;
	params.Dissolve_Mesh = Dissolve_Mesh;
	params.Cloak_Transition = Cloak_Transition;
	params.Direction = Direction;
	params.Skip_LFL_Transition = Skip_LFL_Transition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.update mate boost on timer
// ()

void ABuff_DesmodusInvisible_C::update_mate_boost_on_timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.update mate boost on timer");

	ABuff_DesmodusInvisible_C_update_mate_boost_on_timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Reset Base Targeting Desirability
// ()

void ABuff_DesmodusInvisible_C::Reset_Base_Targeting_Desirability()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Reset Base Targeting Desirability");

	ABuff_DesmodusInvisible_C_Reset_Base_Targeting_Desirability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Is Near Boss
// ()

void ABuff_DesmodusInvisible_C::Is_Near_Boss()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Is Near Boss");

	ABuff_DesmodusInvisible_C_Is_Near_Boss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Deactivate Cloak Mat On passengers
// ()

void ABuff_DesmodusInvisible_C::Deactivate_Cloak_Mat_On_passengers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Deactivate Cloak Mat On passengers");

	ABuff_DesmodusInvisible_C_Deactivate_Cloak_Mat_On_passengers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.deactivate cloak mat on rider
// ()

void ABuff_DesmodusInvisible_C::deactivate_cloak_mat_on_rider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.deactivate cloak mat on rider");

	ABuff_DesmodusInvisible_C_deactivate_cloak_mat_on_rider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.set up attached cloak meshes
// (NetReliable, NetRequest, Native, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class UObject*                 parent_dino_mesh               (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  current_cloaking_mesh_comp     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  new_mesh                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::set_up_attached_cloak_meshes(class UObject* parent_dino_mesh, class USkeletalMeshComponent* current_cloaking_mesh_comp, bool* Success, class USkeletalMeshComponent** new_mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.set up attached cloak meshes");

	ABuff_DesmodusInvisible_C_set_up_attached_cloak_meshes_Params params;
	params.parent_dino_mesh = parent_dino_mesh;
	params.current_cloaking_mesh_comp = current_cloaking_mesh_comp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (new_mesh != nullptr)
		*new_mesh = params.new_mesh;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.force remove disolve
// ()
// Parameters:
// class USkeletalMeshComponent*  InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::force_remove_disolve(class USkeletalMeshComponent* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.force remove disolve");

	ABuff_DesmodusInvisible_C_force_remove_disolve_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.post uncloak
// ()

void ABuff_DesmodusInvisible_C::post_uncloak()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.post uncloak");

	ABuff_DesmodusInvisible_C_post_uncloak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.show floating hud
// ()

void ABuff_DesmodusInvisible_C::show_floating_hud()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.show floating hud");

	ABuff_DesmodusInvisible_C_show_floating_hud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ReceiveEndPlay");

	ABuff_DesmodusInvisible_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.get saddle
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::get_saddle(class APrimalCharacter* Character, class USkeletalMeshComponent** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.get saddle");

	ABuff_DesmodusInvisible_C_get_saddle_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.set fade on components
// ()
// Parameters:
// class AActor*                  Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETimelineDirection> Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Cloak_Transition               (Parm, ZeroConstructor, IsPlainOldData)
// float                          dissolve_amount                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  Component                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_main_mesh                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Skip_LFL_Transition            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::set_fade_on_components(class AActor* Character, TEnumAsByte<ETimelineDirection> Direction, float Cloak_Transition, float dissolve_amount, class USkeletalMeshComponent* Component, bool is_main_mesh, bool Skip_LFL_Transition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.set fade on components");

	ABuff_DesmodusInvisible_C_set_fade_on_components_Params params;
	params.Character = Character;
	params.Direction = Direction;
	params.Cloak_Transition = Cloak_Transition;
	params.dissolve_amount = dissolve_amount;
	params.Component = Component;
	params.is_main_mesh = is_main_mesh;
	params.Skip_LFL_Transition = Skip_LFL_Transition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.set component hidden
// ()
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::set_component_hidden(class UObject* Object, bool InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.set component hidden");

	ABuff_DesmodusInvisible_C_set_component_hidden_Params params;
	params.Object = Object;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.manual print string
// ()
// Parameters:
// class FString                  InString                       (Parm, ZeroConstructor)

void ABuff_DesmodusInvisible_C::manual_print_string(const class FString& InString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.manual print string");

	ABuff_DesmodusInvisible_C_manual_print_string_Params params;
	params.InString = InString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.HideBuffFromHUD
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_DesmodusInvisible_C::HideBuffFromHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.HideBuffFromHUD");

	ABuff_DesmodusInvisible_C_HideBuffFromHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Lfl Is Valid And Cloaked solo
// (NetReliable, MulticastDelegate, Public, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class APrimalDinoCharacter*    InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_DesmodusInvisible_C::Lfl_Is_Valid_And_Cloaked_solo(class APrimalDinoCharacter* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Lfl Is Valid And Cloaked solo");

	ABuff_DesmodusInvisible_C_Lfl_Is_Valid_And_Cloaked_solo_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.lfl is valid and cloaked
// (NetReliable, NetRequest, Exec, Native, MulticastDelegate, Public, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class APrimalDinoCharacter*    InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           deactivated_from_mate_boost    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ABuff_DesmodusInvisible_C::lfl_is_valid_and_cloaked(class APrimalDinoCharacter* InputPin, bool* deactivated_from_mate_boost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.lfl is valid and cloaked");

	ABuff_DesmodusInvisible_C_lfl_is_valid_and_cloaked_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (deactivated_from_mate_boost != nullptr)
		*deactivated_from_mate_boost = params.deactivated_from_mate_boost;

	return params.ReturnValue;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.add buff to character
// ()
// Parameters:
// class APrimalCharacter*        NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::add_buff_to_character(class APrimalCharacter* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.add buff to character");

	ABuff_DesmodusInvisible_C_add_buff_to_character_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Remove Cloak Origin Dino
// ()
// Parameters:
// class APrimalDinoCharacter*    NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::Remove_Cloak_Origin_Dino(class APrimalDinoCharacter* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Remove Cloak Origin Dino");

	ABuff_DesmodusInvisible_C_Remove_Cloak_Origin_Dino_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.PreventActorTargeting
// ()
// Parameters:
// class AActor**                 ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_DesmodusInvisible_C::PreventActorTargeting(class AActor** ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.PreventActorTargeting");

	ABuff_DesmodusInvisible_C_PreventActorTargeting_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.deactivate cloak mat
// ()

void ABuff_DesmodusInvisible_C::deactivate_cloak_mat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.deactivate cloak mat");

	ABuff_DesmodusInvisible_C_deactivate_cloak_mat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.activate cloak mat
// ()

void ABuff_DesmodusInvisible_C::activate_cloak_mat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.activate cloak mat");

	ABuff_DesmodusInvisible_C_activate_cloak_mat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BuffTickClient
// (NetRequest, Exec, Event, NetMulticast, Public, Protected, Delegate, HasDefaults, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BuffTickClient");

	ABuff_DesmodusInvisible_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.OnRep_is camo active
// ()

void ABuff_DesmodusInvisible_C::OnRep_is_camo_active()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.OnRep_is camo active");

	ABuff_DesmodusInvisible_C_OnRep_is_camo_active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.add cloak origin dino
// ()
// Parameters:
// class APrimalDinoCharacter*    NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::add_cloak_origin_dino(class APrimalDinoCharacter* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.add cloak origin dino");

	ABuff_DesmodusInvisible_C_add_cloak_origin_dino_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BuffTickServer");

	ABuff_DesmodusInvisible_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPPreventInstigatorAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_DesmodusInvisible_C::BPPreventInstigatorAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPPreventInstigatorAttack");

	ABuff_DesmodusInvisible_C_BPPreventInstigatorAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.NotifyDamage
// ()
// Parameters:
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TheDamageCauser                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::NotifyDamage(float* DamageAmount, class UClass** DamageClass, class AController** EventInstigator, class AActor** TheDamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.NotifyDamage");

	ABuff_DesmodusInvisible_C_NotifyDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageClass = DamageClass;
	params.EventInstigator = EventInstigator;
	params.TheDamageCauser = TheDamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.BPDeactivated");

	ABuff_DesmodusInvisible_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Set All Riders Hidden
// ()
// Parameters:
// bool                           Hidden                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::Set_All_Riders_Hidden(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Set All Riders Hidden");

	ABuff_DesmodusInvisible_C_Set_All_Riders_Hidden_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Activate Rider Camo Particles
// ()
// Parameters:
// bool                           enter_camo                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       specificRider                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::Activate_Rider_Camo_Particles(bool enter_camo, class AShooterCharacter* specificRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Activate Rider Camo Particles");

	ABuff_DesmodusInvisible_C_Activate_Rider_Camo_Particles_Params params;
	params.enter_camo = enter_camo;
	params.specificRider = specificRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.UserConstructionScript
// ()

void ABuff_DesmodusInvisible_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.UserConstructionScript");

	ABuff_DesmodusInvisible_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.fade camo__FinishedFunc
// ()

void ABuff_DesmodusInvisible_C::fade_camo__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.fade camo__FinishedFunc");

	ABuff_DesmodusInvisible_C_fade_camo__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.fade camo__UpdateFunc
// ()

void ABuff_DesmodusInvisible_C::fade_camo__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.fade camo__UpdateFunc");

	ABuff_DesmodusInvisible_C_fade_camo__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.FadeToInvisible_Rider__FinishedFunc
// ()

void ABuff_DesmodusInvisible_C::FadeToInvisible_Rider__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.FadeToInvisible_Rider__FinishedFunc");

	ABuff_DesmodusInvisible_C_FadeToInvisible_Rider__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.FadeToInvisible_Rider__UpdateFunc
// ()

void ABuff_DesmodusInvisible_C::FadeToInvisible_Rider__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.FadeToInvisible_Rider__UpdateFunc");

	ABuff_DesmodusInvisible_C_FadeToInvisible_Rider__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Timeline_0__FinishedFunc
// ()

void ABuff_DesmodusInvisible_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Timeline_0__FinishedFunc");

	ABuff_DesmodusInvisible_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Timeline_0__UpdateFunc
// ()

void ABuff_DesmodusInvisible_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Timeline_0__UpdateFunc");

	ABuff_DesmodusInvisible_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Play_FadeCamo_LFL
// ()

void ABuff_DesmodusInvisible_C::Play_FadeCamo_LFL()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Play_FadeCamo_LFL");

	ABuff_DesmodusInvisible_C_Play_FadeCamo_LFL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Reverse_FadeCamo_LFL
// ()

void ABuff_DesmodusInvisible_C::Reverse_FadeCamo_LFL()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Reverse_FadeCamo_LFL");

	ABuff_DesmodusInvisible_C_Reverse_FadeCamo_LFL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.SetNewTime_FadeCamo_LFL
// ()
// Parameters:
// float                          NewTime                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::SetNewTime_FadeCamo_LFL(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.SetNewTime_FadeCamo_LFL");

	ABuff_DesmodusInvisible_C_SetNewTime_FadeCamo_LFL_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Multi_SetNewTime_FadeCamo_LFL
// ()
// Parameters:
// float                          NewTime                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::Multi_SetNewTime_FadeCamo_LFL(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Multi_SetNewTime_FadeCamo_LFL");

	ABuff_DesmodusInvisible_C_Multi_SetNewTime_FadeCamo_LFL_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.SetNewTime_FadeCamo_Rider
// ()
// Parameters:
// float                          NewTime                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::SetNewTime_FadeCamo_Rider(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.SetNewTime_FadeCamo_Rider");

	ABuff_DesmodusInvisible_C_SetNewTime_FadeCamo_Rider_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ReverseFromEnd_FadeCamo_Rider
// ()

void ABuff_DesmodusInvisible_C::ReverseFromEnd_FadeCamo_Rider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ReverseFromEnd_FadeCamo_Rider");

	ABuff_DesmodusInvisible_C_ReverseFromEnd_FadeCamo_Rider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.PlayFromStart_FadeCamo_Rider
// ()

void ABuff_DesmodusInvisible_C::PlayFromStart_FadeCamo_Rider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.PlayFromStart_FadeCamo_Rider");

	ABuff_DesmodusInvisible_C_PlayFromStart_FadeCamo_Rider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Multi_PlayFade
// ()

void ABuff_DesmodusInvisible_C::Multi_PlayFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Multi_PlayFade");

	ABuff_DesmodusInvisible_C_Multi_PlayFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Multi_PlayFade_reverse
// ()

void ABuff_DesmodusInvisible_C::Multi_PlayFade_reverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Multi_PlayFade_reverse");

	ABuff_DesmodusInvisible_C_Multi_PlayFade_reverse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.on weapon fire
// ()
// Parameters:
// class AShooterWeapon*          weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::on_weapon_fire(class AShooterWeapon* weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.on weapon fire");

	ABuff_DesmodusInvisible_C_on_weapon_fire_Params params;
	params.weapon = weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.bind fire
// ()

void ABuff_DesmodusInvisible_C::bind_fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.bind fire");

	ABuff_DesmodusInvisible_C_bind_fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Footstep Shimmer
// ()

void ABuff_DesmodusInvisible_C::Footstep_Shimmer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.Footstep Shimmer");

	ABuff_DesmodusInvisible_C_Footstep_Shimmer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ReceiveBeginPlay
// ()

void ABuff_DesmodusInvisible_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ReceiveBeginPlay");

	ABuff_DesmodusInvisible_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ExecuteUbergraph_Buff_DesmodusInvisible
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusInvisible_C::ExecuteUbergraph_Buff_DesmodusInvisible(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusInvisible.Buff_DesmodusInvisible_C.ExecuteUbergraph_Buff_DesmodusInvisible");

	ABuff_DesmodusInvisible_C_ExecuteUbergraph_Buff_DesmodusInvisible_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
