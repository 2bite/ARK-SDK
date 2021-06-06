// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesertKaiju_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.HaveLineOfSightTo
// ()
// Parameters:
// class AActor*                  LosCheckTarget                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesertKaiju_Character_BP_C::HaveLineOfSightTo(class AActor* LosCheckTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.HaveLineOfSightTo");

	ADesertKaiju_Character_BP_C_HaveLineOfSightTo_Params params;
	params.LosCheckTarget = LosCheckTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOnDinoCheat
// ()
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOnDinoCheat");

	ADesertKaiju_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPPreventRiding
// ()
// Parameters:
// class AShooterCharacter**      ByPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDontCheckDistance             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesertKaiju_Character_BP_C::BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPPreventRiding");

	ADesertKaiju_Character_BP_C_BPPreventRiding_Params params;
	params.ByPawn = ByPawn;
	params.bDontCheckDistance = bDontCheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetDebugInfoString
// ()
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ADesertKaiju_Character_BP_C::BPGetDebugInfoString()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetDebugInfoString");

	ADesertKaiju_Character_BP_C_BPGetDebugInfoString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDinoARKDownloadedBegin
// ()

void ADesertKaiju_Character_BP_C::BPDinoARKDownloadedBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDinoARKDownloadedBegin");

	ADesertKaiju_Character_BP_C_BPDinoARKDownloadedBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanBaseOnCharacter
// ()
// Parameters:
// class APrimalCharacter**       BaseCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesertKaiju_Character_BP_C::BPCanBaseOnCharacter(class APrimalCharacter** BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanBaseOnCharacter");

	ADesertKaiju_Character_BP_C_BPCanBaseOnCharacter_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ActorIsKaiju
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::ActorIsKaiju(class AActor* Actor, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ActorIsKaiju");

	ADesertKaiju_Character_BP_C_ActorIsKaiju_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDinoARKDownloadedEnd
// ()

void ADesertKaiju_Character_BP_C::BPDinoARKDownloadedEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDinoARKDownloadedEnd");

	ADesertKaiju_Character_BP_C_BPDinoARKDownloadedEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_UseTamedPhysics
// ()

void ADesertKaiju_Character_BP_C::OnRep_UseTamedPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_UseTamedPhysics");

	ADesertKaiju_Character_BP_C_OnRep_UseTamedPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker
// (Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class AShooterPlayerController** DamageCauserController         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHitFriendlyTarget             (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PreDamageHealth                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              PointDamageHitResult           (Parm, OutParm, ReferenceParm)
// struct FHitMarkerSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHitMarkerSettings ADesertKaiju_Character_BP_C::STATIC_BPOverrideDamageCauserHitMarker(class AShooterPlayerController** DamageCauserController, bool* bHitFriendlyTarget, float* PreDamageHealth, float* DamageAmount, bool* bIsPointDamage, struct FDamageEvent* DamageEvent, struct FHitResult* PointDamageHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker");

	ADesertKaiju_Character_BP_C_BPOverrideDamageCauserHitMarker_Params params;
	params.DamageCauserController = DamageCauserController;
	params.bHitFriendlyTarget = bHitFriendlyTarget;
	params.PreDamageHealth = PreDamageHealth;
	params.DamageAmount = DamageAmount;
	params.bIsPointDamage = bIsPointDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
	if (PointDamageHitResult != nullptr)
		*PointDamageHitResult = params.PointDamageHitResult;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InterpSpawnInMICs
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::InterpSpawnInMICs(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InterpSpawnInMICs");

	ADesertKaiju_Character_BP_C_InterpSpawnInMICs_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLocomotion_1
// ()
// Parameters:
// bool                           Prevent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::PreventLocomotion_1(bool* Prevent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLocomotion_1");

	ADesertKaiju_Character_BP_C_PreventLocomotion_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prevent != nullptr)
		*Prevent = params.Prevent;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.MaybeStunDesertKaiju
// ()
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::MaybeStunDesertKaiju(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.MaybeStunDesertKaiju");

	ADesertKaiju_Character_BP_C_MaybeStunDesertKaiju_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.StunKaiju
// ()

void ADesertKaiju_Character_BP_C::StunKaiju()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.StunKaiju");

	ADesertKaiju_Character_BP_C_StunKaiju_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetRiderUnboardLocation
// (NetRequest, Event, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintPure)
// Parameters:
// class APrimalCharacter**       RidingCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADesertKaiju_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetRiderUnboardLocation");

	ADesertKaiju_Character_BP_C_BPGetRiderUnboardLocation_Params params;
	params.RidingCharacter = RidingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CreateNodeDynamicMICs
// ()

void ADesertKaiju_Character_BP_C::CreateNodeDynamicMICs()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CreateNodeDynamicMICs");

	ADesertKaiju_Character_BP_C_CreateNodeDynamicMICs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ClientUpdateNodeStatus
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::ClientUpdateNodeStatus(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ClientUpdateNodeStatus");

	ADesertKaiju_Character_BP_C_ClientUpdateNodeStatus_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Client_ReplicateNodeStatusOnBegin
// ()

void ADesertKaiju_Character_BP_C::Client_ReplicateNodeStatusOnBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Client_ReplicateNodeStatusOnBegin");

	ADesertKaiju_Character_BP_C_Client_ReplicateNodeStatusOnBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesertKaiju_Character_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_PreventMovementMode");

	ADesertKaiju_Character_BP_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.K2_OnMovementModeChanged");

	ADesertKaiju_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Get Kaiju Transform
// (NetRequest, NetResponse, Static, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintPure)
// Parameters:
// struct UObject_FTransform      ActualTransform                (Parm, OutParm, IsPlainOldData)

void ADesertKaiju_Character_BP_C::STATIC_Get_Kaiju_Transform(struct UObject_FTransform* ActualTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Get Kaiju Transform");

	ADesertKaiju_Character_BP_C_Get_Kaiju_Transform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActualTransform != nullptr)
		*ActualTransform = params.ActualTransform;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPSetupTamed");

	ADesertKaiju_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TickLightningTargetVFX
// ()

void ADesertKaiju_Character_BP_C::TickLightningTargetVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TickLightningTargetVFX");

	ADesertKaiju_Character_BP_C_TickLightningTargetVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UpdateLightningTargetVFXLocation
// ()
// Parameters:
// bool                           IsVisible                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                WorldRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm)
// struct FVector                 surfaceNormal                  (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::UpdateLightningTargetVFXLocation(bool IsVisible, const struct FVector& WorldLocation, const struct FRotator& WorldRotation, const struct FHitResult& HitResult, const struct FVector& surfaceNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UpdateLightningTargetVFXLocation");

	ADesertKaiju_Character_BP_C_UpdateLightningTargetVFXLocation_Params params;
	params.IsVisible = IsVisible;
	params.WorldLocation = WorldLocation;
	params.WorldRotation = WorldRotation;
	params.HitResult = HitResult;
	params.surfaceNormal = surfaceNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FindClosestSocketName
// ()
// Parameters:
// struct FVector                 CompareLoc                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ClosestSocket                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::FindClosestSocketName(const struct FVector& CompareLoc, struct FName* ClosestSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FindClosestSocketName");

	ADesertKaiju_Character_BP_C_FindClosestSocketName_Params params;
	params.CompareLoc = CompareLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClosestSocket != nullptr)
		*ClosestSocket = params.ClosestSocket;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlinkDamageNodeInterp
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::BlinkDamageNodeInterp(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlinkDamageNodeInterp");

	ADesertKaiju_Character_BP_C_BlinkDamageNodeInterp_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_OnSetDeath
// ()

void ADesertKaiju_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_OnSetDeath");

	ADesertKaiju_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TamedFlockCheckForRespawn
// ()

void ADesertKaiju_Character_BP_C::TamedFlockCheckForRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TamedFlockCheckForRespawn");

	ADesertKaiju_Character_BP_C_TamedFlockCheckForRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPLimitPlayerRotation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               InViewRotation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ADesertKaiju_Character_BP_C::BPLimitPlayerRotation(class APrimalCharacter** viewingCharacter, struct FRotator* InViewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPLimitPlayerRotation");

	ADesertKaiju_Character_BP_C_BPLimitPlayerRotation_Params params;
	params.viewingCharacter = viewingCharacter;
	params.InViewRotation = InViewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetOverrideCameraInterpSpeed
// ()
// Parameters:
// float*                         DefaultTPVCameraSpeedInterpolationMultiplier (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DefaultTPVOffsetInterpSpeed    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TPVCameraSpeedInterpolationMultiplier (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TPVOffsetInterpSpeed           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetOverrideCameraInterpSpeed");

	ADesertKaiju_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params;
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


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOverrideCameraViewTarget
// ()
// Parameters:
// struct FName*                  CurrentCameraMode              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DesiredCameraLocation          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               DesiredCameraRotation          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DesiredFOV                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraLocation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraRotation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraFOV             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CameraFOV                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOverrideCameraViewTarget");

	ADesertKaiju_Character_BP_C_BPOverrideCameraViewTarget_Params params;
	params.CurrentCameraMode = CurrentCameraMode;
	params.DesiredCameraLocation = DesiredCameraLocation;
	params.DesiredCameraRotation = DesiredCameraRotation;
	params.DesiredFOV = DesiredFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOverrideCameraLocation != nullptr)
		*bOverrideCameraLocation = params.bOverrideCameraLocation;
	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (bOverrideCameraRotation != nullptr)
		*bOverrideCameraRotation = params.bOverrideCameraRotation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
	if (bOverrideCameraFOV != nullptr)
		*bOverrideCameraFOV = params.bOverrideCameraFOV;
	if (CameraFOV != nullptr)
		*CameraFOV = params.CameraFOV;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADesertKaiju_Character_BP_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAdjustAttackIndex");

	ADesertKaiju_Character_BP_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TamedFlockScan for Enemies
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintPure)

void ADesertKaiju_Character_BP_C::STATIC_TamedFlockScan_for_Enemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TamedFlockScan for Enemies");

	ADesertKaiju_Character_BP_C_TamedFlockScan_for_Enemies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Tamed Flocks Distance to Kaiju Check
// ()

void ADesertKaiju_Character_BP_C::Tamed_Flocks_Distance_to_Kaiju_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Tamed Flocks Distance to Kaiju Check");

	ADesertKaiju_Character_BP_C_Tamed_Flocks_Distance_to_Kaiju_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.WildFlocks Distance to Kaiju Check
// ()

void ADesertKaiju_Character_BP_C::WildFlocks_Distance_to_Kaiju_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.WildFlocks Distance to Kaiju Check");

	ADesertKaiju_Character_BP_C_WildFlocks_Distance_to_Kaiju_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FlockCommandTrace
// (Exec, Event, Static, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintPure)
// Parameters:
// bool                           FlockOne                       (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::STATIC_FlockCommandTrace(bool FlockOne)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FlockCommandTrace");

	ADesertKaiju_Character_BP_C_FlockCommandTrace_Params params;
	params.FlockOne = FlockOne;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ADesertKaiju_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetHUDElements");

	ADesertKaiju_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.RecallTamedFlocks
// ()

void ADesertKaiju_Character_BP_C::RecallTamedFlocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.RecallTamedFlocks");

	ADesertKaiju_Character_BP_C_RecallTamedFlocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLightningAoEField
// ()
// Parameters:
// struct FVector                 ExplosionLoc                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnKaiju                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Prevent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::PreventLightningAoEField(const struct FVector& ExplosionLoc, bool OnKaiju, bool* Prevent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLightningAoEField");

	ADesertKaiju_Character_BP_C_PreventLightningAoEField_Params params;
	params.ExplosionLoc = ExplosionLoc;
	params.OnKaiju = OnKaiju;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prevent != nullptr)
		*Prevent = params.Prevent;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FindHUDOffset
// ()
// Parameters:
// class USceneComponent*         HoldSocket                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADesertKaiju_Character_BP_C::FindHUDOffset(class USceneComponent* HoldSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FindHUDOffset");

	ADesertKaiju_Character_BP_C_FindHUDOffset_Params params;
	params.HoldSocket = HoldSocket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DestroyFauxNode
// ()
// Parameters:
// bool                           LFin                           (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::DestroyFauxNode(bool LFin)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DestroyFauxNode");

	ADesertKaiju_Character_BP_C_DestroyFauxNode_Params params;
	params.LFin = LFin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DamageFauxNode
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           LeftNode                       (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::DamageFauxNode(float Damage, bool LeftNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DamageFauxNode");

	ADesertKaiju_Character_BP_C_DamageFauxNode_Params params;
	params.Damage = Damage;
	params.LeftNode = LeftNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_RWingNodeHealth
// ()

void ADesertKaiju_Character_BP_C::OnRep_RWingNodeHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_RWingNodeHealth");

	ADesertKaiju_Character_BP_C_OnRep_RWingNodeHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDoAttack");

	ADesertKaiju_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLocomotion
// ()
// Parameters:
// bool                           Prevent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::PreventLocomotion(bool* Prevent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLocomotion");

	ADesertKaiju_Character_BP_C_PreventLocomotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prevent != nullptr)
		*Prevent = params.Prevent;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Update Locomotion
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Update_Locomotion(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Update Locomotion");

	ADesertKaiju_Character_BP_C_Update_Locomotion_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_RiderControlFlockMode
// ()

void ADesertKaiju_Character_BP_C::OnRep_RiderControlFlockMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_RiderControlFlockMode");

	ADesertKaiju_Character_BP_C_OnRep_RiderControlFlockMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesertKaiju_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintCanAttack");

	ADesertKaiju_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesertKaiju_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintCanRiderAttack");

	ADesertKaiju_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnLanded
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ADesertKaiju_Character_BP_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnLanded");

	ADesertKaiju_Character_BP_C_OnLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTimerServer
// ()

void ADesertKaiju_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTimerServer");

	ADesertKaiju_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnGroundFlock
// (NetReliable, Native, Event, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintPure)
// Parameters:
// bool                           FirstFlock                     (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::SpawnGroundFlock(bool FirstFlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnGroundFlock");

	ADesertKaiju_Character_BP_C_SpawnGroundFlock_Params params;
	params.FirstFlock = FirstFlock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintAdjustOutputDamage
// (NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintPure)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADesertKaiju_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintAdjustOutputDamage");

	ADesertKaiju_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ShortestAngleDistance
// ()
// Parameters:
// float                          AngleCurrent                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Difference                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ShortestAngleDistance");

	ADesertKaiju_Character_BP_C_ShortestAngleDistance_Params params;
	params.AngleCurrent = AngleCurrent;
	params.AngleTarget = AngleTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difference != nullptr)
		*Difference = params.Difference;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.GetLookDir
// ()
// Parameters:
// struct FVector                 Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::GetLookDir(struct FVector* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.GetLookDir");

	ADesertKaiju_Character_BP_C_GetLookDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.LightningTrace
// (NetRequest, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintPure)
// Parameters:
// bool                           FireLightning                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidTarget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 hitLoc                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HitActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           SuccessFiredLightning          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::STATIC_LightningTrace(bool FireLightning, bool* ValidTarget, struct FVector* hitLoc, bool* HitActor, struct FVector* HitNormal, bool* SuccessFiredLightning)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.LightningTrace");

	ADesertKaiju_Character_BP_C_LightningTrace_Params params;
	params.FireLightning = FireLightning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidTarget != nullptr)
		*ValidTarget = params.ValidTarget;
	if (hitLoc != nullptr)
		*hitLoc = params.hitLoc;
	if (HitActor != nullptr)
		*HitActor = params.HitActor;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (SuccessFiredLightning != nullptr)
		*SuccessFiredLightning = params.SuccessFiredLightning;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTimerNonDedicated
// ()

void ADesertKaiju_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTimerNonDedicated");

	ADesertKaiju_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesertKaiju_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPHandleOnStopTargeting");

	ADesertKaiju_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesertKaiju_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPHandleControllerInitiatedAttack");

	ADesertKaiju_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPNotifyClearPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPNotifyClearPassenger");

	ADesertKaiju_Character_BP_C_BPNotifyClearPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanTakePassenger
// ()
// Parameters:
// class APrimalCharacter**       Character                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PassengerSeatIndex             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForcePassenger                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowFlyersAndWaterDinos      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesertKaiju_Character_BP_C::BPCanTakePassenger(class APrimalCharacter** Character, int* PassengerSeatIndex, bool* bForcePassenger, bool* bAllowFlyersAndWaterDinos)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanTakePassenger");

	ADesertKaiju_Character_BP_C_BPCanTakePassenger_Params params;
	params.Character = Character;
	params.PassengerSeatIndex = PassengerSeatIndex;
	params.bForcePassenger = bForcePassenger;
	params.bAllowFlyersAndWaterDinos = bAllowFlyersAndWaterDinos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAllowCarryCharacter
// ()
// Parameters:
// class APrimalCharacter**       checkCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesertKaiju_Character_BP_C::BPAllowCarryCharacter(class APrimalCharacter** checkCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAllowCarryCharacter");

	ADesertKaiju_Character_BP_C_BPAllowCarryCharacter_Params params;
	params.checkCharacter = checkCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetMultiUseEntries
// (Net, NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ADesertKaiju_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetMultiUseEntries");

	ADesertKaiju_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesertKaiju_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTryMultiUse");

	ADesertKaiju_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.StartTorpid
// ()

void ADesertKaiju_Character_BP_C::StartTorpid()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.StartTorpid");

	ADesertKaiju_Character_BP_C_StartTorpid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DestroyControlNode
// ()
// Parameters:
// TEnumAsByte<EDesertKaiju_ControlNodes> Node                           (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::DestroyControlNode(TEnumAsByte<EDesertKaiju_ControlNodes> Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DestroyControlNode");

	ADesertKaiju_Character_BP_C_DestroyControlNode_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DamageControlNode
// ()
// Parameters:
// TEnumAsByte<EDesertKaiju_ControlNodes> ControlNode                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           LightningStrike                (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::DamageControlNode(TEnumAsByte<EDesertKaiju_ControlNodes> ControlNode, float Damage, bool LightningStrike)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DamageControlNode");

	ADesertKaiju_Character_BP_C_DamageControlNode_Params params;
	params.ControlNode = ControlNode;
	params.Damage = Damage;
	params.LightningStrike = LightningStrike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADesertKaiju_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAdjustDamage");

	ADesertKaiju_Character_BP_C_BPAdjustDamage_Params params;
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


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DealLightningStrikeExplosionDamage
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintPure)
// Parameters:
// struct FVector                 ExplosionLoc                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnKaiju                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::STATIC_DealLightningStrikeExplosionDamage(const struct FVector& ExplosionLoc, bool OnKaiju, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DealLightningStrikeExplosionDamage");

	ADesertKaiju_Character_BP_C_DealLightningStrikeExplosionDamage_Params params;
	params.ExplosionLoc = ExplosionLoc;
	params.OnKaiju = OnKaiju;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnBasedFlock
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintPure)
// Parameters:
// bool                           FirstFlock                     (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::SpawnBasedFlock(bool FirstFlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnBasedFlock");

	ADesertKaiju_Character_BP_C_SpawnBasedFlock_Params params;
	params.FirstFlock = FirstFlock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanBeBaseForCharacter
// ()
// Parameters:
// class APawn**                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesertKaiju_Character_BP_C::BPCanBeBaseForCharacter(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanBeBaseForCharacter");

	ADesertKaiju_Character_BP_C_BPCanBeBaseForCharacter_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UserConstructionScript
// ()

void ADesertKaiju_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UserConstructionScript");

	ADesertKaiju_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_129
// ()

void ADesertKaiju_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_129()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_129");

	ADesertKaiju_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_129_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_128
// ()

void ADesertKaiju_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_128()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_128");

	ADesertKaiju_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_128_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CallFunc_StunKaiju
// ()

void ADesertKaiju_Character_BP_C::CallFunc_StunKaiju()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CallFunc_StunKaiju");

	ADesertKaiju_Character_BP_C_CallFunc_StunKaiju_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SetVar_DKArenaManager
// ()
// Parameters:
// class AActor*                  ArenaManager                   (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::SetVar_DKArenaManager(class AActor* ArenaManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SetVar_DKArenaManager");

	ADesertKaiju_Character_BP_C_SetVar_DKArenaManager_Params params;
	params.ArenaManager = ArenaManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ReceiveBeginPlay
// ()

void ADesertKaiju_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ReceiveBeginPlay");

	ADesertKaiju_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SummonLightning
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LightningLoc                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseRelative                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::SummonLightning(class AActor* Target, const struct FVector& LightningLoc, bool UseRelative, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SummonLightning");

	ADesertKaiju_Character_BP_C_SummonLightning_Params params;
	params.Target = Target;
	params.LightningLoc = LightningLoc;
	params.UseRelative = UseRelative;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Mutli_ExposeNodes
// ()
// Parameters:
// TEnumAsByte<EDesertKaiju_ControlNodes> Node                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Expose                         (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Mutli_ExposeNodes(TEnumAsByte<EDesertKaiju_ControlNodes> Node, bool Expose)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Mutli_ExposeNodes");

	ADesertKaiju_Character_BP_C_Mutli_ExposeNodes_Params params;
	params.Node = Node;
	params.Expose = Expose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.MULTI_SetNodeColor
// ()
// Parameters:
// int                            Node                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Activated                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DamageNode                     (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::MULTI_SetNodeColor(int Node, bool Activated, float Alpha, bool DamageNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.MULTI_SetNodeColor");

	ADesertKaiju_Character_BP_C_MULTI_SetNodeColor_Params params;
	params.Node = Node;
	params.Activated = Activated;
	params.Alpha = Alpha;
	params.DamageNode = DamageNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ActivateNode
// ()
// Parameters:
// TEnumAsByte<EDesertKaiju_ControlNodes> ControlNode                    (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::ActivateNode(TEnumAsByte<EDesertKaiju_ControlNodes> ControlNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ActivateNode");

	ADesertKaiju_Character_BP_C_ActivateNode_Params params;
	params.ControlNode = ControlNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DeactivateNode
// ()
// Parameters:
// TEnumAsByte<EDesertKaiju_ControlNodes> ControlNode                    (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::DeactivateNode(TEnumAsByte<EDesertKaiju_ControlNodes> ControlNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DeactivateNode");

	ADesertKaiju_Character_BP_C_DeactivateNode_Params params;
	params.ControlNode = ControlNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CtS_RightClickLightning
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::CtS_RightClickLightning(const struct FVector& Loc, class AActor* Actor, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CtS_RightClickLightning");

	ADesertKaiju_Character_BP_C_CtS_RightClickLightning_Params params;
	params.Loc = Loc;
	params.Actor = Actor;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FireRiderLightning
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::FireRiderLightning(const struct FVector& Loc, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FireRiderLightning");

	ADesertKaiju_Character_BP_C_FireRiderLightning_Params params;
	params.Loc = Loc;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ReceiveTick");

	ADesertKaiju_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_LWingNode
// ()

void ADesertKaiju_Character_BP_C::Deactivate_LWingNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_LWingNode");

	ADesertKaiju_Character_BP_C_Deactivate_LWingNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_RWingNode
// ()

void ADesertKaiju_Character_BP_C::Deactivate_RWingNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_RWingNode");

	ADesertKaiju_Character_BP_C_Deactivate_RWingNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_CentralNode
// ()

void ADesertKaiju_Character_BP_C::Deactivate_CentralNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_CentralNode");

	ADesertKaiju_Character_BP_C_Deactivate_CentralNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CtS_SetRiderControlFlockMode
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::CtS_SetRiderControlFlockMode(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CtS_SetRiderControlFlockMode");

	ADesertKaiju_Character_BP_C_CtS_SetRiderControlFlockMode_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_ExposeFauxNodes
// ()
// Parameters:
// bool                           LFin                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Expose                         (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Multi_ExposeFauxNodes(bool LFin, bool Expose)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_ExposeFauxNodes");

	ADesertKaiju_Character_BP_C_Multi_ExposeFauxNodes_Params params;
	params.LFin = LFin;
	params.Expose = Expose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetFauxNodeColor
// ()
// Parameters:
// bool                           LFin                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Multi_SetFauxNodeColor(bool LFin, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetFauxNodeColor");

	ADesertKaiju_Character_BP_C_Multi_SetFauxNodeColor_Params params;
	params.LFin = LFin;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_192_ComponentHitSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ADesertKaiju_Character_BP_C::BndEvt__Mesh_K2Node_ComponentBoundEvent_192_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_192_ComponentHitSignature__DelegateSignature");

	ADesertKaiju_Character_BP_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_192_ComponentHitSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_PlayRollingEffects
// ()
// Parameters:
// struct FRotator                Rotator                        (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Multi_PlayRollingEffects(const struct FRotator& Rotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_PlayRollingEffects");

	ADesertKaiju_Character_BP_C_Multi_PlayRollingEffects_Params params;
	params.Rotator = Rotator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_Test
// ()

void ADesertKaiju_Character_BP_C::Multi_Test()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_Test");

	ADesertKaiju_Character_BP_C_Multi_Test_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_OnJumpPressed
// ()

void ADesertKaiju_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_OnJumpPressed");

	ADesertKaiju_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_SpawnTamedFlocks
// ()

void ADesertKaiju_Character_BP_C::Server_SpawnTamedFlocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_SpawnTamedFlocks");

	ADesertKaiju_Character_BP_C_Server_SpawnTamedFlocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_RecallFlocks
// ()

void ADesertKaiju_Character_BP_C::Server_RecallFlocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_RecallFlocks");

	ADesertKaiju_Character_BP_C_Server_RecallFlocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_ForceTamedFlockTarget
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FlockOne                       (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Server_ForceTamedFlockTarget(class AActor* Target, bool FlockOne)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_ForceTamedFlockTarget");

	ADesertKaiju_Character_BP_C_Server_ForceTamedFlockTarget_Params params;
	params.Target = Target;
	params.FlockOne = FlockOne;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_UpdateRiderLightningStrikeCharges
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Server_UpdateRiderLightningStrikeCharges(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_UpdateRiderLightningStrikeCharges");

	ADesertKaiju_Character_BP_C_Server_UpdateRiderLightningStrikeCharges_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger1DelayedSetInterpSpeed
// ()
// Parameters:
// class APrimalCharacter*        Passenger                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           useOverride                    (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Passenger1DelayedSetInterpSpeed(class APrimalCharacter* Passenger, bool useOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger1DelayedSetInterpSpeed");

	ADesertKaiju_Character_BP_C_Passenger1DelayedSetInterpSpeed_Params params;
	params.Passenger = Passenger;
	params.useOverride = useOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger2DelayedSetInterpSpeed
// ()
// Parameters:
// class APrimalCharacter*        Passenger                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           useOverride                    (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Passenger2DelayedSetInterpSpeed(class APrimalCharacter* Passenger, bool useOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger2DelayedSetInterpSpeed");

	ADesertKaiju_Character_BP_C_Passenger2DelayedSetInterpSpeed_Params params;
	params.Passenger = Passenger;
	params.useOverride = useOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger3DelayedSetInterpSpeed
// ()
// Parameters:
// class APrimalCharacter*        Passenger                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           useOverride                    (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Passenger3DelayedSetInterpSpeed(class APrimalCharacter* Passenger, bool useOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger3DelayedSetInterpSpeed");

	ADesertKaiju_Character_BP_C_Passenger3DelayedSetInterpSpeed_Params params;
	params.Passenger = Passenger;
	params.useOverride = useOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger4DelayedSetInterpSpeed
// ()
// Parameters:
// class APrimalCharacter*        Passenger                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           useOverride                    (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Passenger4DelayedSetInterpSpeed(class APrimalCharacter* Passenger, bool useOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger4DelayedSetInterpSpeed");

	ADesertKaiju_Character_BP_C_Passenger4DelayedSetInterpSpeed_Params params;
	params.Passenger = Passenger;
	params.useOverride = useOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_InterpLeftNode
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Multi_InterpLeftNode(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_InterpLeftNode");

	ADesertKaiju_Character_BP_C_Multi_InterpLeftNode_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_InterpRightNode
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Multi_InterpRightNode(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_InterpRightNode");

	ADesertKaiju_Character_BP_C_Multi_InterpRightNode_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_CenterRightNode
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Multi_CenterRightNode(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_CenterRightNode");

	ADesertKaiju_Character_BP_C_Multi_CenterRightNode_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_AttachLightningAOE
// ()
// Parameters:
// class USceneComponent*         Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Multi_AttachLightningAOE(class USceneComponent* Loc, class USceneComponent* Parent, const struct FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_AttachLightningAOE");

	ADesertKaiju_Character_BP_C_Multi_AttachLightningAOE_Params params;
	params.Loc = Loc;
	params.Parent = Parent;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnLightningAOE
// ()
// Parameters:
// struct FVector                 ExplosionLoc                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnKaiju                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotator                        (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::SpawnLightningAOE(const struct FVector& ExplosionLoc, bool OnKaiju, const struct FRotator& Rotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnLightningAOE");

	ADesertKaiju_Character_BP_C_SpawnLightningAOE_Params params;
	params.ExplosionLoc = ExplosionLoc;
	params.OnKaiju = OnKaiju;
	params.Rotator = Rotator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetLastLightningRechargeTime
// ()
// Parameters:
// double                         Time                           (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Multi_SetLastLightningRechargeTime(double Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetLastLightningRechargeTime");

	ADesertKaiju_Character_BP_C_Multi_SetLastLightningRechargeTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetLastTimeStoppedTargeting
// ()

void ADesertKaiju_Character_BP_C::Multi_SetLastTimeStoppedTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetLastTimeStoppedTargeting");

	ADesertKaiju_Character_BP_C_Multi_SetLastTimeStoppedTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetTemplate
// ()
// Parameters:
// class APrimalBuff*             Buff                           (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Multi_SetTemplate(class APrimalBuff* Buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetTemplate");

	ADesertKaiju_Character_BP_C_Multi_SetTemplate_Params params;
	params.Buff = Buff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetFullbodyBlendStrength
// ()
// Parameters:
// float                          Strength                       (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Multi_SetFullbodyBlendStrength(float Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetFullbodyBlendStrength");

	ADesertKaiju_Character_BP_C_Multi_SetFullbodyBlendStrength_Params params;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.multi_drawnode
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::multi_drawnode(const struct FVector& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.multi_drawnode");

	ADesertKaiju_Character_BP_C_multi_drawnode_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetCollisionProf
// ()
// Parameters:
// struct FName                   ColProfName                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDesertKaiju_ControlNodes> Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Multi_SetCollisionProf(const struct FName& ColProfName, TEnumAsByte<EDesertKaiju_ControlNodes> Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetCollisionProf");

	ADesertKaiju_Character_BP_C_Multi_SetCollisionProf_Params params;
	params.ColProfName = ColProfName;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_DelayedTurnOffCorruptionNode
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Multi_DelayedTurnOffCorruptionNode(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_DelayedTurnOffCorruptionNode");

	ADesertKaiju_Character_BP_C_Multi_DelayedTurnOffCorruptionNode_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PlayStun
// ()

void ADesertKaiju_Character_BP_C::PlayStun()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PlayStun");

	ADesertKaiju_Character_BP_C_PlayStun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.EquipSaddle
// ()

void ADesertKaiju_Character_BP_C::EquipSaddle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.EquipSaddle");

	ADesertKaiju_Character_BP_C_EquipSaddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_PlayNodeDestroyFX
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Multi_PlayNodeDestroyFX(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_PlayNodeDestroyFX");

	ADesertKaiju_Character_BP_C_Multi_PlayNodeDestroyFX_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetNewFlySpeed
// ()
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::Multi_SetNewFlySpeed(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetNewFlySpeed");

	ADesertKaiju_Character_BP_C_Multi_SetNewFlySpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UpdateSaddlePhysics
// ()

void ADesertKaiju_Character_BP_C::UpdateSaddlePhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UpdateSaddlePhysics");

	ADesertKaiju_Character_BP_C_UpdateSaddlePhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen
// ()

void ADesertKaiju_Character_BP_C::Multi_DelayedTurnOffHealthRegen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen");

	ADesertKaiju_Character_BP_C_Multi_DelayedTurnOffHealthRegen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ExecuteUbergraph_DesertKaiju_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_Character_BP_C::ExecuteUbergraph_DesertKaiju_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ExecuteUbergraph_DesertKaiju_Character_BP");

	ADesertKaiju_Character_BP_C_ExecuteUbergraph_DesertKaiju_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
