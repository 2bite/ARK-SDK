// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekCruiseMissile_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.validate proper impact location
// (Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATekCruiseMissile_Character_BP_C::STATIC_validate_proper_impact_location()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.validate proper impact location");

	ATekCruiseMissile_Character_BP_C_validate_proper_impact_location_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.has missile exceeded allowed distance
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCruiseMissile_Character_BP_C::has_missile_exceeded_allowed_distance()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.has missile exceeded allowed distance");

	ATekCruiseMissile_Character_BP_C_has_missile_exceeded_allowed_distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Finished Arming
// ()

void ATekCruiseMissile_Character_BP_C::Finished_Arming()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Finished Arming");

	ATekCruiseMissile_Character_BP_C_Finished_Arming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.manual explode
// ()

void ATekCruiseMissile_Character_BP_C::manual_explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.manual explode");

	ATekCruiseMissile_Character_BP_C_manual_explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPNotifyClearPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPNotifyClearPassenger");

	ATekCruiseMissile_Character_BP_C_BPNotifyClearPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.FuelTime
// ()

void ATekCruiseMissile_Character_BP_C::FuelTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.FuelTime");

	ATekCruiseMissile_Character_BP_C_FuelTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPNotifyAddPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPNotifyAddPassenger");

	ATekCruiseMissile_Character_BP_C_BPNotifyAddPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Is Missile Locally Controlled
// ()
// Parameters:
// bool                           Local                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::Is_Missile_Locally_Controlled(bool* Local)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Is Missile Locally Controlled");

	ATekCruiseMissile_Character_BP_C_Is_Missile_Locally_Controlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Local != nullptr)
		*Local = params.Local;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCruiseMissile_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPServerHandleNetExecCommand");

	ATekCruiseMissile_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_OnJumpPressed
// (NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void ATekCruiseMissile_Character_BP_C::STATIC_BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_OnJumpPressed");

	ATekCruiseMissile_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPAdjustDamage
// (Event, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekCruiseMissile_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPAdjustDamage");

	ATekCruiseMissile_Character_BP_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveActorBeginOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveActorBeginOverlap");

	ATekCruiseMissile_Character_BP_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPCanBeBaseForCharacter
// ()
// Parameters:
// class APawn**                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCruiseMissile_Character_BP_C::BPCanBeBaseForCharacter(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPCanBeBaseForCharacter");

	ATekCruiseMissile_Character_BP_C_BPCanBeBaseForCharacter_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetOverrideCameraInterpSpeed
// ()
// Parameters:
// float*                         DefaultTPVCameraSpeedInterpolationMultiplier (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DefaultTPVOffsetInterpSpeed    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TPVCameraSpeedInterpolationMultiplier (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TPVOffsetInterpSpeed           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetOverrideCameraInterpSpeed");

	ATekCruiseMissile_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params;
	params.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
	params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TPVCameraSpeedInterpolationMultiplier != nullptr)
		*TPVCameraSpeedInterpolationMultiplier = params.TPVCameraSpeedInterpolationMultiplier;
	if (TPVOffsetInterpSpeed != nullptr)
		*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Give Player Vision Buff
// ()

void ATekCruiseMissile_Character_BP_C::Give_Player_Vision_Buff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Give Player Vision Buff");

	ATekCruiseMissile_Character_BP_C_Give_Player_Vision_Buff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPModifyDesiredRotation
// ()
// Parameters:
// struct FRotator                InDesiredRotation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                OutDesiredRotation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCruiseMissile_Character_BP_C::BPModifyDesiredRotation(struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPModifyDesiredRotation");

	ATekCruiseMissile_Character_BP_C_BPModifyDesiredRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDesiredRotation != nullptr)
		*InDesiredRotation = params.InDesiredRotation;
	if (OutDesiredRotation != nullptr)
		*OutDesiredRotation = params.OutDesiredRotation;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCruiseMissile_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptMoveRight");

	ATekCruiseMissile_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetMultiUseEntries
// (Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ATekCruiseMissile_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetMultiUseEntries");

	ATekCruiseMissile_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Damage Actors By Explosion Radius
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Override_Damage                (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Damage_Type                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           really_damage                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::STATIC_Damage_Actors_By_Explosion_Radius(class AActor* Actor, float Override_Damage, class UClass* Damage_Type, bool really_damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Damage Actors By Explosion Radius");

	ATekCruiseMissile_Character_BP_C_Damage_Actors_By_Explosion_Radius_Params params;
	params.Actor = Actor;
	params.Override_Damage = Override_Damage;
	params.Damage_Type = Damage_Type;
	params.really_damage = really_damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCruiseMissile_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptMoveForward");

	ATekCruiseMissile_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCruiseMissile_Character_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPCanCryo");

	ATekCruiseMissile_Character_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCruiseMissile_Character_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_PreventMovementMode");

	ATekCruiseMissile_Character_BP_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerIsFiringItemInInventory
// ()
// Parameters:
// bool                           Retval                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::ServerIsFiringItemInInventory(bool* Retval)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerIsFiringItemInInventory");

	ATekCruiseMissile_Character_BP_C_ServerIsFiringItemInInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Retval != nullptr)
		*Retval = params.Retval;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptTurnInput
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCruiseMissile_Character_BP_C::BP_InterceptTurnInput(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptTurnInput");

	ATekCruiseMissile_Character_BP_C_BP_InterceptTurnInput_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetupScoutDisconnect
// ()
// Parameters:
// float                          DelayTimeSeconds               (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::SetupScoutDisconnect(float DelayTimeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetupScoutDisconnect");

	ATekCruiseMissile_Character_BP_C_SetupScoutDisconnect_Params params;
	params.DelayTimeSeconds = DelayTimeSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DestroyScout
// ()

void ATekCruiseMissile_Character_BP_C::DestroyScout()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DestroyScout");

	ATekCruiseMissile_Character_BP_C_DestroyScout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPModifyAimOffsetTargetLocation
// ()
// Parameters:
// struct FVector                 AimTargetLocation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATekCruiseMissile_Character_BP_C::BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPModifyAimOffsetTargetLocation");

	ATekCruiseMissile_Character_BP_C_BPModifyAimOffsetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimTargetLocation != nullptr)
		*AimTargetLocation = params.AimTargetLocation;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Is Dino Fleeing
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFleeing                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::Is_Dino_Fleeing(class APrimalDinoCharacter* Dino, bool* IsFleeing)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Is Dino Fleeing");

	ATekCruiseMissile_Character_BP_C_Is_Dino_Fleeing_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFleeing != nullptr)
		*IsFleeing = params.IsFleeing;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPOverrideStencilAllianceForTarget
// ()
// Parameters:
// class APrimalCharacter**       TargetDino                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    Component                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EStencilAlliance>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EStencilAlliance> ATekCruiseMissile_Character_BP_C::BPOverrideStencilAllianceForTarget(class APrimalCharacter** TargetDino, class UPrimitiveComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPOverrideStencilAllianceForTarget");

	ATekCruiseMissile_Character_BP_C_BPOverrideStencilAllianceForTarget_Params params;
	params.TargetDino = TargetDino;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPShouldCancelDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCruiseMissile_Character_BP_C::BPShouldCancelDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPShouldCancelDoAttack");

	ATekCruiseMissile_Character_BP_C_BPShouldCancelDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.OnRep_LowStamina
// ()

void ATekCruiseMissile_Character_BP_C::OnRep_LowStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.OnRep_LowStamina");

	ATekCruiseMissile_Character_BP_C_OnRep_LowStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsDashing
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::IsDashing(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsDashing");

	ATekCruiseMissile_Character_BP_C_IsDashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ATekCruiseMissile_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetHUDElements");

	ATekCruiseMissile_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveTick
// (NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveTick");

	ATekCruiseMissile_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ScoutIsFirstPerson
// ()
// Parameters:
// bool                           Retval                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::ScoutIsFirstPerson(bool* Retval)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ScoutIsFirstPerson");

	ATekCruiseMissile_Character_BP_C_ScoutIsFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Retval != nullptr)
		*Retval = params.Retval;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetTargetImpactMaterial
// ()
// Parameters:
// float                          ImpactDistance                 (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::SetTargetImpactMaterial(float ImpactDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetTargetImpactMaterial");

	ATekCruiseMissile_Character_BP_C_SetTargetImpactMaterial_Params params;
	params.ImpactDistance = ImpactDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPPreventStasis
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCruiseMissile_Character_BP_C::BPPreventStasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPPreventStasis");

	ATekCruiseMissile_Character_BP_C_BPPreventStasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPHandleUseButtonPress
// ()
// Parameters:
// class AShooterPlayerController** RiderController                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCruiseMissile_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController** RiderController)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPHandleUseButtonPress");

	ATekCruiseMissile_Character_BP_C_BPHandleUseButtonPress_Params params;
	params.RiderController = RiderController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsScoutFirst Person
// ()
// Parameters:
// bool                           IsFirstPerson                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::IsScoutFirst_Person(bool* IsFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsScoutFirst Person");

	ATekCruiseMissile_Character_BP_C_IsScoutFirst_Person_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFirstPerson != nullptr)
		*IsFirstPerson = params.IsFirstPerson;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetFirstPersonMaterial
// ()
// Parameters:
// bool                           IsFirstPerson                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::SetFirstPersonMaterial(bool IsFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetFirstPersonMaterial");

	ATekCruiseMissile_Character_BP_C_SetFirstPersonMaterial_Params params;
	params.IsFirstPerson = IsFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsServerOrSinglePlayer
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::IsServerOrSinglePlayer(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsServerOrSinglePlayer");

	ATekCruiseMissile_Character_BP_C_IsServerOrSinglePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsClientOrSinglePlayer
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::IsClientOrSinglePlayer(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsClientOrSinglePlayer");

	ATekCruiseMissile_Character_BP_C_IsClientOrSinglePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Update Scout Vision
// ()

void ATekCruiseMissile_Character_BP_C::Update_Scout_Vision()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Update Scout Vision");

	ATekCruiseMissile_Character_BP_C_Update_Scout_Vision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPOverrideFPVViewLocation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCruiseMissile_Character_BP_C::BPOverrideFPVViewLocation(class APrimalCharacter** viewingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPOverrideFPVViewLocation");

	ATekCruiseMissile_Character_BP_C_BPOverrideFPVViewLocation_Params params;
	params.viewingCharacter = viewingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetFPVViewLocation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATekCruiseMissile_Character_BP_C::BPGetFPVViewLocation(class APrimalCharacter** viewingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetFPVViewLocation");

	ATekCruiseMissile_Character_BP_C_BPGetFPVViewLocation_Params params;
	params.viewingCharacter = viewingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Dash
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Impulse                        (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::Dash(const struct FVector& Direction, float Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Dash");

	ATekCruiseMissile_Character_BP_C_Dash_Params params;
	params.Direction = Direction;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_GetCustomModifier_RotationRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekCruiseMissile_Character_BP_C::BP_GetCustomModifier_RotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_GetCustomModifier_RotationRate");

	ATekCruiseMissile_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_GetCustomModifier_MaxSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekCruiseMissile_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_GetCustomModifier_MaxSpeed");

	ATekCruiseMissile_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCruiseMissile_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BlueprintCanAttack");

	ATekCruiseMissile_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_OnSetDeath
// ()

void ATekCruiseMissile_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_OnSetDeath");

	ATekCruiseMissile_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Release Possessing Survivor
// ()
// Parameters:
// bool                           destroyed                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::Release_Possessing_Survivor(bool destroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Release Possessing Survivor");

	ATekCruiseMissile_Character_BP_C_Release_Possessing_Survivor_Params params;
	params.destroyed = destroyed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.GetPossessedByPlayer
// ()

void ATekCruiseMissile_Character_BP_C::GetPossessedByPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.GetPossessedByPlayer");

	ATekCruiseMissile_Character_BP_C_GetPossessedByPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Spawned From Projectile
// ()
// Parameters:
// class AShooterPlayerController* ShooterPlayerController        (Parm, ZeroConstructor, IsPlainOldData)
// float                          PossessDelay                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             FiringItem                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::Spawned_From_Projectile(class AShooterPlayerController* ShooterPlayerController, float PossessDelay, class UPrimalItem* FiringItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Spawned From Projectile");

	ATekCruiseMissile_Character_BP_C_Spawned_From_Projectile_Params params;
	params.ShooterPlayerController = ShooterPlayerController;
	params.PossessDelay = PossessDelay;
	params.FiringItem = FiringItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPIsValidUnStasisCaster
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCruiseMissile_Character_BP_C::BPIsValidUnStasisCaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPIsValidUnStasisCaster");

	ATekCruiseMissile_Character_BP_C_BPIsValidUnStasisCaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.UserConstructionScript
// ()

void ATekCruiseMissile_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.UserConstructionScript");

	ATekCruiseMissile_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StopPossessingPlayerMovement
// ()

void ATekCruiseMissile_Character_BP_C::StopPossessingPlayerMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StopPossessingPlayerMovement");

	ATekCruiseMissile_Character_BP_C_StopPossessingPlayerMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveHit
// ()
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ATekCruiseMissile_Character_BP_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveHit");

	ATekCruiseMissile_Character_BP_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReplicateInputVector
// ()
// Parameters:
// struct FVector                 InputVector                    (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::ReplicateInputVector(const struct FVector& InputVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReplicateInputVector");

	ATekCruiseMissile_Character_BP_C_ReplicateInputVector_Params params;
	params.InputVector = InputVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.on hit something
// ()
// Parameters:
// class AActor*                  other_actor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 hit_normal                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::on_hit_something(class AActor* other_actor, const struct FVector& hit_normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.on hit something");

	ATekCruiseMissile_Character_BP_C_on_hit_something_Params params;
	params.other_actor = other_actor;
	params.hit_normal = hit_normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndDestroy
// ()

void ATekCruiseMissile_Character_BP_C::ReleasePossessingSurvivorAndDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndDestroy");

	ATekCruiseMissile_Character_BP_C_ReleasePossessingSurvivorAndDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.RechargeShield
// ()

void ATekCruiseMissile_Character_BP_C::RechargeShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.RechargeShield");

	ATekCruiseMissile_Character_BP_C_RechargeShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientScoutDamaged
// ()
// Parameters:
// struct FHitResult              HitResult                      (Parm)

void ATekCruiseMissile_Character_BP_C::ClientScoutDamaged(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientScoutDamaged");

	ATekCruiseMissile_Character_BP_C_ClientScoutDamaged_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientTickShieldDamageVFX
// ()

void ATekCruiseMissile_Character_BP_C::ClientTickShieldDamageVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientTickShieldDamageVFX");

	ATekCruiseMissile_Character_BP_C_ClientTickShieldDamageVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientRechargeShield
// ()

void ATekCruiseMissile_Character_BP_C::ClientRechargeShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientRechargeShield");

	ATekCruiseMissile_Character_BP_C_ClientRechargeShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveBeginPlay
// ()

void ATekCruiseMissile_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveBeginPlay");

	ATekCruiseMissile_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SpawnEnd
// ()

void ATekCruiseMissile_Character_BP_C::SpawnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SpawnEnd");

	ATekCruiseMissile_Character_BP_C_SpawnEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveEndPlay");

	ATekCruiseMissile_Character_BP_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TriggerDisconnectFX
// ()

void ATekCruiseMissile_Character_BP_C::TriggerDisconnectFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TriggerDisconnectFX");

	ATekCruiseMissile_Character_BP_C_TriggerDisconnectFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ScoutDied
// ()

void ATekCruiseMissile_Character_BP_C::ScoutDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ScoutDied");

	ATekCruiseMissile_Character_BP_C_ScoutDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.PossessedByPlayer
// ()

void ATekCruiseMissile_Character_BP_C::PossessedByPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.PossessedByPlayer");

	ATekCruiseMissile_Character_BP_C_PossessedByPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.MULTI_ReleasePossessingSurvivor
// ()

void ATekCruiseMissile_Character_BP_C::MULTI_ReleasePossessingSurvivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.MULTI_ReleasePossessingSurvivor");

	ATekCruiseMissile_Character_BP_C_MULTI_ReleasePossessingSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerDashAttack
// ()

void ATekCruiseMissile_Character_BP_C::ServerDashAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerDashAttack");

	ATekCruiseMissile_Character_BP_C_ServerDashAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.VerifyPossessingSurvivor
// ()

void ATekCruiseMissile_Character_BP_C::VerifyPossessingSurvivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.VerifyPossessingSurvivor");

	ATekCruiseMissile_Character_BP_C_VerifyPossessingSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndDelayedDestroy
// ()

void ATekCruiseMissile_Character_BP_C::ReleasePossessingSurvivorAndDelayedDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndDelayedDestroy");

	ATekCruiseMissile_Character_BP_C_ReleasePossessingSurvivorAndDelayedDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DelayedDestroyActor
// ()

void ATekCruiseMissile_Character_BP_C::DelayedDestroyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DelayedDestroyActor");

	ATekCruiseMissile_Character_BP_C_DelayedDestroyActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CheckConsumeResource
// ()

void ATekCruiseMissile_Character_BP_C::CheckConsumeResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CheckConsumeResource");

	ATekCruiseMissile_Character_BP_C_CheckConsumeResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientConsumeResource
// ()

void ATekCruiseMissile_Character_BP_C::ClientConsumeResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientConsumeResource");

	ATekCruiseMissile_Character_BP_C_ClientConsumeResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TickThrusterVFX
// ()

void ATekCruiseMissile_Character_BP_C::TickThrusterVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TickThrusterVFX");

	ATekCruiseMissile_Character_BP_C_TickThrusterVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientRanOutOfStamina
// ()

void ATekCruiseMissile_Character_BP_C::ClientRanOutOfStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientRanOutOfStamina");

	ATekCruiseMissile_Character_BP_C_ClientRanOutOfStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientScoutRangeCheck
// ()

void ATekCruiseMissile_Character_BP_C::ClientScoutRangeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientScoutRangeCheck");

	ATekCruiseMissile_Character_BP_C_ClientScoutRangeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CheckSubmerged
// ()

void ATekCruiseMissile_Character_BP_C::CheckSubmerged()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CheckSubmerged");

	ATekCruiseMissile_Character_BP_C_CheckSubmerged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientDashTick
// ()

void ATekCruiseMissile_Character_BP_C::ClientDashTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientDashTick");

	ATekCruiseMissile_Character_BP_C_ClientDashTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientDashEnd
// ()

void ATekCruiseMissile_Character_BP_C::ClientDashEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientDashEnd");

	ATekCruiseMissile_Character_BP_C_ClientDashEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StartImpactVFX
// ()

void ATekCruiseMissile_Character_BP_C::StartImpactVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StartImpactVFX");

	ATekCruiseMissile_Character_BP_C_StartImpactVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerHandleOnStopFire
// ()

void ATekCruiseMissile_Character_BP_C::ServerHandleOnStopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerHandleOnStopFire");

	ATekCruiseMissile_Character_BP_C_ServerHandleOnStopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ApplyStaminaCost
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::ApplyStaminaCost(float amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ApplyStaminaCost");

	ATekCruiseMissile_Character_BP_C_ApplyStaminaCost_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StaminaDrain
// ()

void ATekCruiseMissile_Character_BP_C::StaminaDrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StaminaDrain");

	ATekCruiseMissile_Character_BP_C_StaminaDrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientLowStamina
// ()

void ATekCruiseMissile_Character_BP_C::ClientLowStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientLowStamina");

	ATekCruiseMissile_Character_BP_C_ClientLowStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndLongDelayedDestroy
// ()

void ATekCruiseMissile_Character_BP_C::ReleasePossessingSurvivorAndLongDelayedDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndLongDelayedDestroy");

	ATekCruiseMissile_Character_BP_C_ReleasePossessingSurvivorAndLongDelayedDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TickStaminaMeter
// ()

void ATekCruiseMissile_Character_BP_C::TickStaminaMeter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TickStaminaMeter");

	ATekCruiseMissile_Character_BP_C_TickStaminaMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DisableAI
// ()

void ATekCruiseMissile_Character_BP_C::DisableAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DisableAI");

	ATekCruiseMissile_Character_BP_C_DisableAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.MULTI_SpawnedFromProjectile
// ()

void ATekCruiseMissile_Character_BP_C::MULTI_SpawnedFromProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.MULTI_SpawnedFromProjectile");

	ATekCruiseMissile_Character_BP_C_MULTI_SpawnedFromProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DelayedReleasePossessingSurvivorAndDelayedDestroy
// ()

void ATekCruiseMissile_Character_BP_C::DelayedReleasePossessingSurvivorAndDelayedDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DelayedReleasePossessingSurvivorAndDelayedDestroy");

	ATekCruiseMissile_Character_BP_C_DelayedReleasePossessingSurvivorAndDelayedDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.UpdateScoutVisionBuff
// ()

void ATekCruiseMissile_Character_BP_C::UpdateScoutVisionBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.UpdateScoutVisionBuff");

	ATekCruiseMissile_Character_BP_C_UpdateScoutVisionBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.RequestRecallScout
// ()

void ATekCruiseMissile_Character_BP_C::RequestRecallScout()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.RequestRecallScout");

	ATekCruiseMissile_Character_BP_C_RequestRecallScout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Set rocket message
// ()

void ATekCruiseMissile_Character_BP_C::Set_rocket_message()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Set rocket message");

	ATekCruiseMissile_Character_BP_C_Set_rocket_message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CustomEvent_2
// ()

void ATekCruiseMissile_Character_BP_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CustomEvent_2");

	ATekCruiseMissile_Character_BP_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientCheckClearExpiredDinoData
// ()

void ATekCruiseMissile_Character_BP_C::ClientCheckClearExpiredDinoData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientCheckClearExpiredDinoData");

	ATekCruiseMissile_Character_BP_C_ClientCheckClearExpiredDinoData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.set falling
// ()

void ATekCruiseMissile_Character_BP_C::set_falling()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.set falling");

	ATekCruiseMissile_Character_BP_C_set_falling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.warn time almost up
// ()

void ATekCruiseMissile_Character_BP_C::warn_time_almost_up()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.warn time almost up");

	ATekCruiseMissile_Character_BP_C_warn_time_almost_up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Explode
// ()
// Parameters:
// struct FVector                 hit_normal                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::Explode(const struct FVector& hit_normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Explode");

	ATekCruiseMissile_Character_BP_C_Explode_Params params;
	params.hit_normal = hit_normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ExecuteUbergraph_TekCruiseMissile_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekCruiseMissile_Character_BP_C::ExecuteUbergraph_TekCruiseMissile_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ExecuteUbergraph_TekCruiseMissile_Character_BP");

	ATekCruiseMissile_Character_BP_C_ExecuteUbergraph_TekCruiseMissile_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
