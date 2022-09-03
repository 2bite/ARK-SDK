// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_Machinegun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.clear rider
// ()
// Parameters:
// class AShooterCharacter**      prev_rider                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Machinegun_C::clear_rider(class AShooterCharacter** prev_rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.clear rider");

	ABuff_TekStrider_Machinegun_C_clear_rider_Params params;
	params.prev_rider = prev_rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Disable Awaiting Player Loc
// ()

void ABuff_TekStrider_Machinegun_C::Disable_Awaiting_Player_Loc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Disable Awaiting Player Loc");

	ABuff_TekStrider_Machinegun_C_Disable_Awaiting_Player_Loc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BPServerHandleNetExecCommand
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekStrider_Machinegun_C::STATIC_BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BPServerHandleNetExecCommand");

	ABuff_TekStrider_Machinegun_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.fire shots
// (NetReliable, Native, Static, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           hit_something                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  hit_target                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              hit_info                       (Parm)
// struct FVector                 hit_spot                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 from_spot                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Machinegun_C::STATIC_fire_shots(bool hit_something, class AActor* hit_target, const struct FHitResult& hit_info, const struct FVector& hit_spot, const struct FVector& from_spot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.fire shots");

	ABuff_TekStrider_Machinegun_C_fire_shots_Params params;
	params.hit_something = hit_something;
	params.hit_target = hit_target;
	params.hit_info = hit_info;
	params.hit_spot = hit_spot;
	params.from_spot = from_spot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BuffTickServer
// (Event, Static, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Machinegun_C::STATIC_BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BuffTickServer");

	ABuff_TekStrider_Machinegun_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BPGetHUDElements
// (NetRequest, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_TekStrider_Machinegun_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BPGetHUDElements");

	ABuff_TekStrider_Machinegun_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.target is within angle
// ()
// Parameters:
// class APrimalDinoCharacter*    InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Machinegun_C::target_is_within_angle(class APrimalDinoCharacter* InputPin, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.target is within angle");

	ABuff_TekStrider_Machinegun_C_target_is_within_angle_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Strider Firing Duration
// ()

void ABuff_TekStrider_Machinegun_C::Strider_Firing_Duration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Strider Firing Duration");

	ABuff_TekStrider_Machinegun_C_Strider_Firing_Duration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Wild Shot Cooldown
// ()

void ABuff_TekStrider_Machinegun_C::Wild_Shot_Cooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Wild Shot Cooldown");

	ABuff_TekStrider_Machinegun_C_Wild_Shot_Cooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Wild Dino Deactivate
// ()

void ABuff_TekStrider_Machinegun_C::Wild_Dino_Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Wild Dino Deactivate");

	ABuff_TekStrider_Machinegun_C_Wild_Dino_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.can fire
// (Native, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekStrider_Machinegun_C::can_fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.can fire");

	ABuff_TekStrider_Machinegun_C_can_fire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.spawn shot vfx
// ()
// Parameters:
// bool                           hit_something                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 hit_loc                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Machinegun_C::spawn_shot_vfx(bool hit_something, const struct FVector& hit_loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.spawn shot vfx");

	ABuff_TekStrider_Machinegun_C_spawn_shot_vfx_Params params;
	params.hit_something = hit_something;
	params.hit_loc = hit_loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.trace for blocking stuff between here and target
// (Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekStrider_Machinegun_C::STATIC_trace_for_blocking_stuff_between_here_and_target(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.trace for blocking stuff between here and target");

	ABuff_TekStrider_Machinegun_C_trace_for_blocking_stuff_between_here_and_target_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.TriggerReleased
// ()

void ABuff_TekStrider_Machinegun_C::TriggerReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.TriggerReleased");

	ABuff_TekStrider_Machinegun_C_TriggerReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Trigger
// ()

void ABuff_TekStrider_Machinegun_C::Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Trigger");

	ABuff_TekStrider_Machinegun_C_Trigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Get Beam Origin and End
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Machinegun_C::Get_Beam_Origin_and_End(struct FVector* Origin, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Get Beam Origin and End");

	ABuff_TekStrider_Machinegun_C_Get_Beam_Origin_and_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (End != nullptr)
		*End = params.End;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.GetBeamImpact
// (NetReliable, NetRequest, Exec, Event, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FVector                 BeamStart                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BeamEnd                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BeamImpact                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HitSomething_                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              hit_info                       (Parm, OutParm)

void ABuff_TekStrider_Machinegun_C::GetBeamImpact(const struct FVector& BeamStart, const struct FVector& BeamEnd, struct FVector* BeamImpact, bool* HitSomething_, class AActor** HitTarget, struct FHitResult* hit_info)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.GetBeamImpact");

	ABuff_TekStrider_Machinegun_C_GetBeamImpact_Params params;
	params.BeamStart = BeamStart;
	params.BeamEnd = BeamEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BeamImpact != nullptr)
		*BeamImpact = params.BeamImpact;
	if (HitSomething_ != nullptr)
		*HitSomething_ = params.HitSomething_;
	if (HitTarget != nullptr)
		*HitTarget = params.HitTarget;
	if (hit_info != nullptr)
		*hit_info = params.hit_info;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.IsAIControlled?
// ()
// Parameters:
// bool                           IsAI_                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Machinegun_C::IsAIControlled_(bool* IsAI_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.IsAIControlled?");

	ABuff_TekStrider_Machinegun_C_IsAIControlled__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAI_ != nullptr)
		*IsAI_ = params.IsAI_;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Update Beam Impact Location
// ()

void ABuff_TekStrider_Machinegun_C::Update_Beam_Impact_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Update Beam Impact Location");

	ABuff_TekStrider_Machinegun_C_Update_Beam_Impact_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BPSetupForInstigator
// (NetReliable, NetRequest, Exec, Native, Static, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Machinegun_C::STATIC_BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BPSetupForInstigator");

	ABuff_TekStrider_Machinegun_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Machinegun_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BuffTickClient");

	ABuff_TekStrider_Machinegun_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Visual Beam Origin
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Machinegun_C::Visual_Beam_Origin(struct FVector* Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Visual Beam Origin");

	ABuff_TekStrider_Machinegun_C_Visual_Beam_Origin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.UserConstructionScript
// ()

void ABuff_TekStrider_Machinegun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.UserConstructionScript");

	ABuff_TekStrider_Machinegun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Multicast_ActivateBeam
// ()

void ABuff_TekStrider_Machinegun_C::Multicast_ActivateBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Multicast_ActivateBeam");

	ABuff_TekStrider_Machinegun_C_Multicast_ActivateBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Multicast_DeactivateBeam
// ()

void ABuff_TekStrider_Machinegun_C::Multicast_DeactivateBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Multicast_DeactivateBeam");

	ABuff_TekStrider_Machinegun_C_Multicast_DeactivateBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.ValidatePlayerBeamOnServer
// ()
// Parameters:
// struct FVector                 ImpactPoint                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Machinegun_C::ValidatePlayerBeamOnServer(const struct FVector& ImpactPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.ValidatePlayerBeamOnServer");

	ABuff_TekStrider_Machinegun_C_ValidatePlayerBeamOnServer_Params params;
	params.ImpactPoint = ImpactPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Multicast_UpdateBeamImpactLocation
// ()
// Parameters:
// struct FVector                 BeamImpactLocation             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           hit_something                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Machinegun_C::Multicast_UpdateBeamImpactLocation(const struct FVector& BeamImpactLocation, bool hit_something)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Multicast_UpdateBeamImpactLocation");

	ABuff_TekStrider_Machinegun_C_Multicast_UpdateBeamImpactLocation_Params params;
	params.BeamImpactLocation = BeamImpactLocation;
	params.hit_something = hit_something;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Multicast_UpdateBeamImpactLocation_SecondGun
// ()
// Parameters:
// struct FVector                 BeamImpactLocation             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           hit_something                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Machinegun_C::Multicast_UpdateBeamImpactLocation_SecondGun(const struct FVector& BeamImpactLocation, bool hit_something)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Multicast_UpdateBeamImpactLocation_SecondGun");

	ABuff_TekStrider_Machinegun_C_Multicast_UpdateBeamImpactLocation_SecondGun_Params params;
	params.BeamImpactLocation = BeamImpactLocation;
	params.hit_something = hit_something;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Request Player Shot Loc
// ()

void ABuff_TekStrider_Machinegun_C::Request_Player_Shot_Loc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Request Player Shot Loc");

	ABuff_TekStrider_Machinegun_C_Request_Player_Shot_Loc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.ExecuteUbergraph_Buff_TekStrider_Machinegun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Machinegun_C::ExecuteUbergraph_Buff_TekStrider_Machinegun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.ExecuteUbergraph_Buff_TekStrider_Machinegun");

	ABuff_TekStrider_Machinegun_C_ExecuteUbergraph_Buff_TekStrider_Machinegun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
