// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dinopithecus_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPCanBeBaseForCharacter
// ()
// Parameters:
// class APawn**                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BPCanBeBaseForCharacter(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPCanBeBaseForCharacter");

	ADinopithecus_Character_BP_C_BPCanBeBaseForCharacter_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsUsingZipline
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::IsUsingZipline(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsUsingZipline");

	ADinopithecus_Character_BP_C_IsUsingZipline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetArmorDurabilityDecreaseMultiplier
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADinopithecus_Character_BP_C::BPGetArmorDurabilityDecreaseMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetArmorDurabilityDecreaseMultiplier");

	ADinopithecus_Character_BP_C_BPGetArmorDurabilityDecreaseMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.EndUberpounce
// ()
// Parameters:
// struct FVector*                Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           MontageToPlayOnNonZeroVelocity (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::EndUberpounce(struct FVector* Velocity, class UAnimMontage** MontageToPlayOnNonZeroVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.EndUberpounce");

	ADinopithecus_Character_BP_C_EndUberpounce_Params params;
	params.Velocity = Velocity;
	params.MontageToPlayOnNonZeroVelocity = MontageToPlayOnNonZeroVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateAnimSpeed
// ()

void ADinopithecus_Character_BP_C::UpdateAnimSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateAnimSpeed");

	ADinopithecus_Character_BP_C_UpdateAnimSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UberpounceDesyncDetected
// ()

void ADinopithecus_Character_BP_C::UberpounceDesyncDetected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UberpounceDesyncDetected");

	ADinopithecus_Character_BP_C_UberpounceDesyncDetected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetRiderUnboardLocation
// ()
// Parameters:
// class APrimalCharacter**       RidingCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADinopithecus_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetRiderUnboardLocation");

	ADinopithecus_Character_BP_C_BPGetRiderUnboardLocation_Params params;
	params.RidingCharacter = RidingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Update Server Corrections
// ()

void ADinopithecus_Character_BP_C::Update_Server_Corrections()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Update Server Corrections");

	ADinopithecus_Character_BP_C_Update_Server_Corrections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanUpdateRotation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::CanUpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanUpdateRotation");

	ADinopithecus_Character_BP_C_CanUpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceTraceStartingLocation
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADinopithecus_Character_BP_C::STATIC_GetUberpounceTraceStartingLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceTraceStartingLocation");

	ADinopithecus_Character_BP_C_GetUberpounceTraceStartingLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidUberpounceTargetingData
// (NetReliable, NetRequest, Event, MulticastDelegate, Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUberpounceData*        TargetingData                  (Parm)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::IsValidUberpounceTargetingData(struct FUberpounceData* TargetingData, bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidUberpounceTargetingData");

	ADinopithecus_Character_BP_C_IsValidUberpounceTargetingData_Params params;
	params.TargetingData = TargetingData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTriggerStasisEvent
// ()

void ADinopithecus_Character_BP_C::BPTriggerStasisEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTriggerStasisEvent");

	ADinopithecus_Character_BP_C_BPTriggerStasisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiRequestJumpFn
// ()
// Parameters:
// struct FVector*                Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::MultiRequestJumpFn(struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiRequestJumpFn");

	ADinopithecus_Character_BP_C_MultiRequestJumpFn_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OverrideCameraTargetOriginLocation
// ()
// Parameters:
// struct FVector                 OutOverrideOrigin              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  WithCameraStyle                (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::BP_OverrideCameraTargetOriginLocation(struct FName* WithCameraStyle, struct FVector* OutOverrideOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OverrideCameraTargetOriginLocation");

	ADinopithecus_Character_BP_C_BP_OverrideCameraTargetOriginLocation_Params params;
	params.WithCameraStyle = WithCameraStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOverrideOrigin != nullptr)
		*OutOverrideOrigin = params.OutOverrideOrigin;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanContinueUberpounce
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::CanContinueUberpounce(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanContinueUberpounce");

	ADinopithecus_Character_BP_C_CanContinueUberpounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OverrideCarriedCharacterTransform
// (NetReliable, Exec, NetResponse, MulticastDelegate, Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter**       ForCarriedChar                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BP_OverrideCarriedCharacterTransform(class APrimalCharacter** ForCarriedChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OverrideCarriedCharacterTransform");

	ADinopithecus_Character_BP_C_BP_OverrideCarriedCharacterTransform_Params params;
	params.ForCarriedChar = ForCarriedChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AllowWakingTame
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::AllowWakingTame(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AllowWakingTame");

	ADinopithecus_Character_BP_C_AllowWakingTame_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDelayBeforeLatchAfterLatchedJump
// ()
// Parameters:
// float                          LatchedJumpTimeToAutoLatch     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::GetDelayBeforeLatchAfterLatchedJump(float* LatchedJumpTimeToAutoLatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDelayBeforeLatchAfterLatchedJump");

	ADinopithecus_Character_BP_C_GetDelayBeforeLatchAfterLatchedJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LatchedJumpTimeToAutoLatch != nullptr)
		*LatchedJumpTimeToAutoLatch = params.LatchedJumpTimeToAutoLatch;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.HasAnyStamina
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::HasAnyStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.HasAnyStamina");

	ADinopithecus_Character_BP_C_HasAnyStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideCameraViewTarget
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Private, BlueprintCallable, BlueprintEvent)
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

void ADinopithecus_Character_BP_C::STATIC_BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideCameraViewTarget");

	ADinopithecus_Character_BP_C_BPOverrideCameraViewTarget_Params params;
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


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanAdultCarryBaby
// ()
// Parameters:
// class ADinopithecus_Character_BP_C* Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::CanAdultCarryBaby(class ADinopithecus_Character_BP_C* Dino, bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanAdultCarryBaby");

	ADinopithecus_Character_BP_C_CanAdultCarryBaby_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateTaming
// ()

void ADinopithecus_Character_BP_C::UpdateTaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateTaming");

	ADinopithecus_Character_BP_C_UpdateTaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PackMemberDied
// ()
// Parameters:
// class ADino_Character_BP_Pack_C** DeadDino                       (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::PackMemberDied(class ADino_Character_BP_Pack_C** DeadDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PackMemberDied");

	ADinopithecus_Character_BP_C_PackMemberDied_Params params;
	params.DeadDino = DeadDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateTickThrottles
// ()

void ADinopithecus_Character_BP_C::UpdateTickThrottles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateTickThrottles");

	ADinopithecus_Character_BP_C_UpdateTickThrottles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateBabyRiding
// ()

void ADinopithecus_Character_BP_C::UpdateBabyRiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateBabyRiding");

	ADinopithecus_Character_BP_C_UpdateBabyRiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyStopRiding
// ()

void ADinopithecus_Character_BP_C::BabyStopRiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyStopRiding");

	ADinopithecus_Character_BP_C_BabyStopRiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyStartRiding
// ()

void ADinopithecus_Character_BP_C::BabyStartRiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyStartRiding");

	ADinopithecus_Character_BP_C_BabyStartRiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.FindAdultToRide
// ()

void ADinopithecus_Character_BP_C::FindAdultToRide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.FindAdultToRide");

	ADinopithecus_Character_BP_C_FindAdultToRide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanBabyRide
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::CanBabyRide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanBabyRide");

	ADinopithecus_Character_BP_C_CanBabyRide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetDragSocketDinoName
// ()
// Parameters:
// class APrimalDinoCharacter**   aGrabbedDino                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ADinopithecus_Character_BP_C::BPGetDragSocketDinoName(class APrimalDinoCharacter** aGrabbedDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetDragSocketDinoName");

	ADinopithecus_Character_BP_C_BPGetDragSocketDinoName_Params params;
	params.aGrabbedDino = aGrabbedDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDidClearCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDidClearCarriedCharacter");

	ADinopithecus_Character_BP_C_BPDidClearCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyTryMount
// ()

void ADinopithecus_Character_BP_C::BabyTryMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyTryMount");

	ADinopithecus_Character_BP_C_BabyTryMount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OverrideRandomWanderLocation
// ()
// Parameters:
// struct FVector                 originalDestination            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 inVec                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OverrideRandomWanderLocation");

	ADinopithecus_Character_BP_C_OverrideRandomWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (originalDestination != nullptr)
		*originalDestination = params.originalDestination;
	if (inVec != nullptr)
		*inVec = params.inVec;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Update Camera 
// ()

void ADinopithecus_Character_BP_C::Update_Camera_()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Update Camera ");

	ADinopithecus_Character_BP_C_Update_Camera__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateClientInterpSpeeds
// ()

void ADinopithecus_Character_BP_C::UpdateClientInterpSpeeds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateClientInterpSpeeds");

	ADinopithecus_Character_BP_C_UpdateClientInterpSpeeds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADinopithecus_Character_BP_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAdjustAttackIndex");

	ADinopithecus_Character_BP_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandleRightShoulderButton
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BPHandleRightShoulderButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandleRightShoulderButton");

	ADinopithecus_Character_BP_C_BPHandleRightShoulderButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PlaySplashVFXAWaterSurfaceFromLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::PlaySplashVFXAWaterSurfaceFromLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PlaySplashVFXAWaterSurfaceFromLocation");

	ADinopithecus_Character_BP_C_PlaySplashVFXAWaterSurfaceFromLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetPingMult
// ()
// Parameters:
// float                          Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::GetPingMult(float* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetPingMult");

	ADinopithecus_Character_BP_C_GetPingMult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateAOEGroundPound
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, BlueprintCallable, BlueprintEvent)

void ADinopithecus_Character_BP_C::STATIC_UpdateAOEGroundPound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateAOEGroundPound");

	ADinopithecus_Character_BP_C_UpdateAOEGroundPound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AOEGroundPound
// ()

void ADinopithecus_Character_BP_C::AOEGroundPound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AOEGroundPound");

	ADinopithecus_Character_BP_C_AOEGroundPound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PickupPoop
// ()

void ADinopithecus_Character_BP_C::PickupPoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PickupPoop");

	ADinopithecus_Character_BP_C_PickupPoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPForceCameraStyle
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter**       ForViewTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECameraStyle>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECameraStyle> ADinopithecus_Character_BP_C::BPForceCameraStyle(class APrimalCharacter** ForViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPForceCameraStyle");

	ADinopithecus_Character_BP_C_BPForceCameraStyle_Params params;
	params.ForViewTarget = ForViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideMoveToOrder
// ()
// Parameters:
// struct FVector*                MoveToLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      OrderingPlayer                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BPOverrideMoveToOrder(struct FVector* MoveToLocation, class AShooterCharacter** OrderingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideMoveToOrder");

	ADinopithecus_Character_BP_C_BPOverrideMoveToOrder_Params params;
	params.MoveToLocation = MoveToLocation;
	params.OrderingPlayer = OrderingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsCheckingForFallingLatch
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::IsCheckingForFallingLatch(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsCheckingForFallingLatch");

	ADinopithecus_Character_BP_C_IsCheckingForFallingLatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetTargetFOV
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADinopithecus_Character_BP_C::GetTargetFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetTargetFOV");

	ADinopithecus_Character_BP_C_GetTargetFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateHUDWidget
// (NetResponse, Static, MulticastDelegate, Private, BlueprintCallable, BlueprintEvent)

void ADinopithecus_Character_BP_C::STATIC_UpdateHUDWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateHUDWidget");

	ADinopithecus_Character_BP_C_UpdateHUDWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveDestroyed
// ()

void ADinopithecus_Character_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveDestroyed");

	ADinopithecus_Character_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifyToggleHUD
// ()
// Parameters:
// bool*                          bHudHidden                     (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::BPNotifyToggleHUD(bool* bHudHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifyToggleHUD");

	ADinopithecus_Character_BP_C_BPNotifyToggleHUD_Params params;
	params.bHudHidden = bHudHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetupHUDWidget
// ()
// Parameters:
// class AActor*                  Rider                          (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::SetupHUDWidget(class AActor* Rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetupHUDWidget");

	ADinopithecus_Character_BP_C_SetupHUDWidget_Params params;
	params.Rider = Rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DestroyHudWidget
// ()
// Parameters:
// bool                           DestroyNow                     (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::DestroyHudWidget(bool DestroyNow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DestroyHudWidget");

	ADinopithecus_Character_BP_C_DestroyHudWidget_Params params;
	params.DestroyNow = DestroyNow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandlePoop
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BPHandlePoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandlePoop");

	ADinopithecus_Character_BP_C_BPHandlePoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPShouldCancelDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BPShouldCancelDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPShouldCancelDoAttack");

	ADinopithecus_Character_BP_C_BPShouldCancelDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPLimitPlayerRotation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               InViewRotation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ADinopithecus_Character_BP_C::BPLimitPlayerRotation(class APrimalCharacter** viewingCharacter, struct FRotator* InViewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPLimitPlayerRotation");

	ADinopithecus_Character_BP_C_BPLimitPlayerRotation_Params params;
	params.viewingCharacter = viewingCharacter;
	params.InViewRotation = InViewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateVFX
// ()

void ADinopithecus_Character_BP_C::UpdateVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateVFX");

	ADinopithecus_Character_BP_C_UpdateVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ApplyJump
// ()
// Parameters:
// struct FVector*                Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Anim                           (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::ApplyJump(struct FVector* Velocity, class UAnimMontage** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ApplyJump");

	ADinopithecus_Character_BP_C_ApplyJump_Params params;
	params.Velocity = Velocity;
	params.Anim = Anim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetGravityZScale
// (NetReliable, Native, Event, Static, NetMulticast, Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADinopithecus_Character_BP_C::STATIC_BPGetGravityZScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetGravityZScale");

	ADinopithecus_Character_BP_C_BPGetGravityZScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.TickBattlecryAttack
// (Native, Event, Static, NetMulticast, MulticastDelegate, Private, BlueprintCallable, BlueprintEvent)

void ADinopithecus_Character_BP_C::STATIC_TickBattlecryAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.TickBattlecryAttack");

	ADinopithecus_Character_BP_C_TickBattlecryAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DoBattlecryAttack
// (Event, MulticastDelegate, Public, BlueprintCallable, BlueprintEvent)

void ADinopithecus_Character_BP_C::DoBattlecryAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DoBattlecryAttack");

	ADinopithecus_Character_BP_C_DoBattlecryAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetCrosshairColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor ADinopithecus_Character_BP_C::BPGetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetCrosshairColor");

	ADinopithecus_Character_BP_C_BPGetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDoAttack
// (NetRequest, Exec, Native, Event, MulticastDelegate, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDoAttack");

	ADinopithecus_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DoBattlecry
// ()

void ADinopithecus_Character_BP_C::DoBattlecry()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DoBattlecry");

	ADinopithecus_Character_BP_C_DoBattlecry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.TickSetRotation
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::TickSetRotation(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.TickSetRotation");

	ADinopithecus_Character_BP_C_TickSetRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Has Latchable SurfaceWhileFalling
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RetSucccess                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FUberpounceData         RetResultUberpounceData        (Parm, OutParm)

void ADinopithecus_Character_BP_C::Has_Latchable_SurfaceWhileFalling(bool* RetSucccess, struct FUberpounceData* RetResultUberpounceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Has Latchable SurfaceWhileFalling");

	ADinopithecus_Character_BP_C_Has_Latchable_SurfaceWhileFalling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetSucccess != nullptr)
		*RetSucccess = params.RetSucccess;
	if (RetResultUberpounceData != nullptr)
		*RetResultUberpounceData = params.RetResultUberpounceData;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CheckForFallingLatchFn
// ()
// Parameters:
// bool*                          AutoJumpAfterLatch             (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::CheckForFallingLatchFn(bool* AutoJumpAfterLatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CheckForFallingLatchFn");

	ADinopithecus_Character_BP_C_CheckForFallingLatchFn_Params params;
	params.AutoJumpAfterLatch = AutoJumpAfterLatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsAllowedToThrowPoop
// (Native, Static, MulticastDelegate, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::STATIC_IsAllowedToThrowPoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsAllowedToThrowPoop");

	ADinopithecus_Character_BP_C_IsAllowedToThrowPoop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnAmmoWheelSlotSelected
// (NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Public, BlueprintCallable, BlueprintEvent)

void ADinopithecus_Character_BP_C::STATIC_OnAmmoWheelSlotSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnAmmoWheelSlotSelected");

	ADinopithecus_Character_BP_C_OnAmmoWheelSlotSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetAmmoWheelVisibility
// (Exec, Event, Static, MulticastDelegate, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewVisible                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::STATIC_SetAmmoWheelVisibility(bool bNewVisible, bool bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetAmmoWheelVisibility");

	ADinopithecus_Character_BP_C_SetAmmoWheelVisibility_Params params;
	params.bNewVisible = bNewVisible;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnDinoFiredProjectile
// ()
// Parameters:
// class AShooterProjectile**     Projectile                     (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::BPOnDinoFiredProjectile(class AShooterProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnDinoFiredProjectile");

	ADinopithecus_Character_BP_C_BPOnDinoFiredProjectile_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPSetInitialAimOffsetTargets
// ()
// Parameters:
// struct FVector*                TargetRootLoc                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               TargetAimRot                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutTargetRootLoc               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutTargetAimRot                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::BPSetInitialAimOffsetTargets(struct FVector* TargetRootLoc, struct FRotator* TargetAimRot, struct FVector* OutTargetRootLoc, struct FRotator* OutTargetAimRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPSetInitialAimOffsetTargets");

	ADinopithecus_Character_BP_C_BPSetInitialAimOffsetTargets_Params params;
	params.TargetRootLoc = TargetRootLoc;
	params.TargetAimRot = TargetAimRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTargetRootLoc != nullptr)
		*OutTargetRootLoc = params.OutTargetRootLoc;
	if (OutTargetAimRot != nullptr)
		*OutTargetAimRot = params.OutTargetAimRot;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetFallingLatchingAngles
// ()
// Parameters:
// TArray<float>                  FallingLatchingAngles          (Parm, OutParm, ZeroConstructor)

void ADinopithecus_Character_BP_C::GetFallingLatchingAngles(TArray<float>* FallingLatchingAngles)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetFallingLatchingAngles");

	ADinopithecus_Character_BP_C_GetFallingLatchingAngles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FallingLatchingAngles != nullptr)
		*FallingLatchingAngles = params.FallingLatchingAngles;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidUberpounceDataForLatching
// ()
// Parameters:
// struct FUberpounceData*        Data                           (Parm)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::IsValidUberpounceDataForLatching(struct FUberpounceData* Data, bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidUberpounceDataForLatching");

	ADinopithecus_Character_BP_C_IsValidUberpounceDataForLatching_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidDirectionForLatchingSurfaceTrace
// ()
// Parameters:
// struct FVector*                Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::IsValidDirectionForLatchingSurfaceTrace(struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidDirectionForLatchingSurfaceTrace");

	ADinopithecus_Character_BP_C_IsValidDirectionForLatchingSurfaceTrace_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Left Pressed
// ()

void ADinopithecus_Character_BP_C::On_Move_Left_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Left Pressed");

	ADinopithecus_Character_BP_C_On_Move_Left_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Left Released
// ()

void ADinopithecus_Character_BP_C::On_Move_Left_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Left Released");

	ADinopithecus_Character_BP_C_On_Move_Left_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Right Pressed
// ()

void ADinopithecus_Character_BP_C::On_Move_Right_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Right Pressed");

	ADinopithecus_Character_BP_C_On_Move_Right_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Right Released
// ()

void ADinopithecus_Character_BP_C::On_Move_Right_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Right Released");

	ADinopithecus_Character_BP_C_On_Move_Right_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Backward Pressed
// ()

void ADinopithecus_Character_BP_C::On_Move_Backward_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Backward Pressed");

	ADinopithecus_Character_BP_C_On_Move_Backward_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Forward Pressed
// ()

void ADinopithecus_Character_BP_C::On_Move_Forward_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Forward Pressed");

	ADinopithecus_Character_BP_C_On_Move_Forward_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Backward Released
// ()

void ADinopithecus_Character_BP_C::On_Move_Backward_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Backward Released");

	ADinopithecus_Character_BP_C_On_Move_Backward_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnMoveForwardReleased
// ()

void ADinopithecus_Character_BP_C::OnMoveForwardReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnMoveForwardReleased");

	ADinopithecus_Character_BP_C_OnMoveForwardReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.InterceptInputEvent
// ()
// Parameters:
// class FString*                 InputName                      (Parm, ZeroConstructor)

void ADinopithecus_Character_BP_C::InterceptInputEvent(class FString* InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.InterceptInputEvent");

	ADinopithecus_Character_BP_C_InterceptInputEvent_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Find Next Valid Uberpounce Location
// (Exec, MulticastDelegate, Public, BlueprintCallable, BlueprintEvent)

void ADinopithecus_Character_BP_C::Find_Next_Valid_Uberpounce_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Find Next Valid Uberpounce Location");

	ADinopithecus_Character_BP_C_Find_Next_Valid_Uberpounce_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ADinopithecus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnStartJump");

	ADinopithecus_Character_BP_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTimerServer
// ()

void ADinopithecus_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTimerServer");

	ADinopithecus_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTimerNonDedicated
// ()

void ADinopithecus_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTimerNonDedicated");

	ADinopithecus_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.HasRequiredAmmoItems
// ()
// Parameters:
// int                            TypeIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundAllItems                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutQuantity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::HasRequiredAmmoItems(int TypeIndex, bool* bFoundAllItems, int* OutQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.HasRequiredAmmoItems");

	ADinopithecus_Character_BP_C_HasRequiredAmmoItems_Params params;
	params.TypeIndex = TypeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundAllItems != nullptr)
		*bFoundAllItems = params.bFoundAllItems;
	if (OutQuantity != nullptr)
		*OutQuantity = params.OutQuantity;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintCanRiderAttack");

	ADinopithecus_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetBestPoopItem
// ()
// Parameters:
// class UPrimalItem*             BestPoop                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::GetBestPoopItem(class UPrimalItem** BestPoop)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetBestPoopItem");

	ADinopithecus_Character_BP_C_GetBestPoopItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BestPoop != nullptr)
		*BestPoop = params.BestPoop;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetAmmoItemsToConsume
// ()
// Parameters:
// int                            TypeIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     Items                          (Parm, OutParm, ZeroConstructor)
// bool                           bFoundAllItems                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::GetAmmoItemsToConsume(int TypeIndex, TArray<class UPrimalItem*>* Items, bool* bFoundAllItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetAmmoItemsToConsume");

	ADinopithecus_Character_BP_C_GetAmmoItemsToConsume_Params params;
	params.TypeIndex = TypeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (bFoundAllItems != nullptr)
		*bFoundAllItems = params.bFoundAllItems;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetMeshForProjectileType
// ()
// Parameters:
// int                            SelectedIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             Mesh                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::GetMeshForProjectileType(int SelectedIndex, class UStaticMesh** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetMeshForProjectileType");

	ADinopithecus_Character_BP_C_GetMeshForProjectileType_Params params;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.WantsToRun
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::WantsToRun(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.WantsToRun");

	ADinopithecus_Character_BP_C_WantsToRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnNonInstanceJumpOffWallInput
// ()
// Parameters:
// float*                         HoldTime                       (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::OnNonInstanceJumpOffWallInput(float* HoldTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnNonInstanceJumpOffWallInput");

	ADinopithecus_Character_BP_C_OnNonInstanceJumpOffWallInput_Params params;
	params.HoldTime = HoldTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetLatchJumpSpeedThresholdForRotate
// (NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::STATIC_GetLatchJumpSpeedThresholdForRotate(float* Res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetLatchJumpSpeedThresholdForRotate");

	ADinopithecus_Character_BP_C_GetLatchJumpSpeedThresholdForRotate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Res != nullptr)
		*Res = params.Res;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandleControllerInitiatedAttack");

	ADinopithecus_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AdjustIKHalfLegLength
// (NetReliable, Exec, NetResponse, Static, MulticastDelegate, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Default                        (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::STATIC_AdjustIKHalfLegLength(bool Default)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AdjustIKHalfLegLength");

	ADinopithecus_Character_BP_C_AdjustIKHalfLegLength_Params params;
	params.Default = Default;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPCanCryo");

	ADinopithecus_Character_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanSequentialJump
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::CanSequentialJump(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanSequentialJump");

	ADinopithecus_Character_BP_C_CanSequentialJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Throttled TickFn
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void ADinopithecus_Character_BP_C::STATIC_Throttled_TickFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Throttled TickFn");

	ADinopithecus_Character_BP_C_Throttled_TickFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAcknowledgeServerCorrection
// ()
// Parameters:
// float*                         TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NewLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    NewBase                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewBaseBoneName                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BPAcknowledgeServerCorrection(float* TimeStamp, struct FVector* NewLoc, struct FVector* NewVel, class UPrimitiveComponent** NewBase, struct FName* NewBaseBoneName, bool* bHasBase, bool* bBaseRelativePosition, unsigned char* ServerMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAcknowledgeServerCorrection");

	ADinopithecus_Character_BP_C_BPAcknowledgeServerCorrection_Params params;
	params.TimeStamp = TimeStamp;
	params.NewLoc = NewLoc;
	params.NewVel = NewVel;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReplicateMovementToSimulatedClients
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::ReplicateMovementToSimulatedClients()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReplicateMovementToSimulatedClients");

	ADinopithecus_Character_BP_C_ReplicateMovementToSimulatedClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateBerzerk
// ()

void ADinopithecus_Character_BP_C::UpdateBerzerk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateBerzerk");

	ADinopithecus_Character_BP_C_UpdateBerzerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetCameraInterpSpeed
// ()
// Parameters:
// float                          InterpSpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::GetCameraInterpSpeed(float* InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetCameraInterpSpeed");

	ADinopithecus_Character_BP_C_GetCameraInterpSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InterpSpeed != nullptr)
		*InterpSpeed = params.InterpSpeed;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnJumpFromGround
// ()
// Parameters:
// float*                         HoldTime                       (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::OnJumpFromGround(float* HoldTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnJumpFromGround");

	ADinopithecus_Character_BP_C_OnJumpFromGround_Params params;
	params.HoldTime = HoldTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetProjectileTypeForRockThrow
// ()
// Parameters:
// class UClass*                  TypeName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::GetProjectileTypeForRockThrow(class UClass** TypeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetProjectileTypeForRockThrow");

	ADinopithecus_Character_BP_C_GetProjectileTypeForRockThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TypeName != nullptr)
		*TypeName = params.TypeName;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get RockThrowAttack Anim Index from Idle Anim
// ()
// Parameters:
// int                            Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::Get_RockThrowAttack_Anim_Index_from_Idle_Anim(int* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get RockThrowAttack Anim Index from Idle Anim");

	ADinopithecus_Character_BP_C_Get_RockThrowAttack_Anim_Index_from_Idle_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GrabRock
// ()

void ADinopithecus_Character_BP_C::GrabRock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GrabRock");

	ADinopithecus_Character_BP_C_GrabRock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanJumpInternal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::CanJumpInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanJumpInternal");

	ADinopithecus_Character_BP_C_CanJumpInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ThrowRock
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, BlueprintCallable, BlueprintEvent)

void ADinopithecus_Character_BP_C::STATIC_ThrowRock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ThrowRock");

	ADinopithecus_Character_BP_C_ThrowRock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Is Super Uberpounce
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::Is_Super_Uberpounce(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Is Super Uberpounce");

	ADinopithecus_Character_BP_C_Is_Super_Uberpounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceInterpSpeed
// ()
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::GetUberpounceInterpSpeed(float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceInterpSpeed");

	ADinopithecus_Character_BP_C_GetUberpounceInterpSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetInitialAnimationForUberpounce
// ()
// Parameters:
// bool*                          QuickUberpounce                (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            OutAnim                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   RetStartSectionName            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::GetInitialAnimationForUberpounce(bool* QuickUberpounce, class UAnimMontage** OutAnim, struct FName* RetStartSectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetInitialAnimationForUberpounce");

	ADinopithecus_Character_BP_C_GetInitialAnimationForUberpounce_Params params;
	params.QuickUberpounce = QuickUberpounce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAnim != nullptr)
		*OutAnim = params.OutAnim;
	if (RetStartSectionName != nullptr)
		*RetStartSectionName = params.RetStartSectionName;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateIdleAnim
// ()
// Parameters:
// TEnumAsByte<EShapeshifterIdleAnimEnum> newIdle                        (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::UpdateIdleAnim(TEnumAsByte<EShapeshifterIdleAnimEnum> newIdle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateIdleAnim");

	ADinopithecus_Character_BP_C_UpdateIdleAnim_Params params;
	params.newIdle = newIdle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceRangeBase
// ()
// Parameters:
// float                          Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::GetUberpounceRangeBase(float* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceRangeBase");

	ADinopithecus_Character_BP_C_GetUberpounceRangeBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceMaxRange
// ()
// Parameters:
// float                          Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::GetUberpounceMaxRange(float* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceMaxRange");

	ADinopithecus_Character_BP_C_GetUberpounceMaxRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetCrosshairAlpha
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADinopithecus_Character_BP_C::BPGetCrosshairAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetCrosshairAlpha");

	ADinopithecus_Character_BP_C_BPGetCrosshairAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDamageResistancePercentFromAddiction
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::GetDamageResistancePercentFromAddiction(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDamageResistancePercentFromAddiction");

	ADinopithecus_Character_BP_C_GetDamageResistancePercentFromAddiction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get AnimSpeedBonus from Addiction
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::Get_AnimSpeedBonus_from_Addiction(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get AnimSpeedBonus from Addiction");

	ADinopithecus_Character_BP_C_Get_AnimSpeedBonus_from_Addiction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDamageMultiFromAddiction
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::GetDamageMultiFromAddiction(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDamageMultiFromAddiction");

	ADinopithecus_Character_BP_C_GetDamageMultiFromAddiction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnUberpounceStateChanged
// ()
// Parameters:
// TEnumAsByte<EUberpounceState>* NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUberpounceState>* PrevState                      (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::OnUberpounceStateChanged(TEnumAsByte<EUberpounceState>* NewState, TEnumAsByte<EUberpounceState>* PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnUberpounceStateChanged");

	ADinopithecus_Character_BP_C_OnUberpounceStateChanged_Params params;
	params.NewState = NewState;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar
// (Net, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// bool                           overrideTorpidityProgressBarIfActive (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          progressPercent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Label                          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BPDinoTooltipCustomTorpidityProgressBar(bool* overrideTorpidityProgressBarIfActive, float* progressPercent, class FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar");

	ADinopithecus_Character_BP_C_BPDinoTooltipCustomTorpidityProgressBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (overrideTorpidityProgressBarIfActive != nullptr)
		*overrideTorpidityProgressBarIfActive = params.overrideTorpidityProgressBarIfActive;
	if (progressPercent != nullptr)
		*progressPercent = params.progressPercent;
	if (Label != nullptr)
		*Label = params.Label;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetMultiUseEntries
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ADinopithecus_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetMultiUseEntries");

	ADinopithecus_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AddBerzerkDamage
// ()
// Parameters:
// float                          Dmg                            (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::AddBerzerkDamage(float Dmg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AddBerzerkDamage");

	ADinopithecus_Character_BP_C_AddBerzerkDamage_Params params;
	params.Dmg = Dmg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_LatchIdleAnimRep
// ()

void ADinopithecus_Character_BP_C::OnRep_LatchIdleAnimRep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_LatchIdleAnimRep");

	ADinopithecus_Character_BP_C_OnRep_LatchIdleAnimRep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideTamingDescriptionLabel
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FSlateColor             TextColor                      (Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ADinopithecus_Character_BP_C::BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideTamingDescriptionLabel");

	ADinopithecus_Character_BP_C_BPOverrideTamingDescriptionLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextColor != nullptr)
		*TextColor = params.TextColor;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AllowPlayMontage
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::AllowPlayMontage(class UAnimMontage** AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AllowPlayMontage");

	ADinopithecus_Character_BP_C_AllowPlayMontage_Params params;
	params.AnimMontage = AnimMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PrintHealth
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UPrimalCharacterStatusComponent* Status                         (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::STATIC_PrintHealth(class UPrimalCharacterStatusComponent* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PrintHealth");

	ADinopithecus_Character_BP_C_PrintHealth_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartUberPounce
// ()
// Parameters:
// struct FUberpounceData*        Data                           (Parm)

void ADinopithecus_Character_BP_C::StartUberPounce(struct FUberpounceData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartUberPounce");

	ADinopithecus_Character_BP_C_StartUberPounce_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.K2_OnMovementModeChanged");

	ADinopithecus_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_LastUberpounceJumpTime
// ()

void ADinopithecus_Character_BP_C::OnRep_LastUberpounceJumpTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_LastUberpounceJumpTime");

	ADinopithecus_Character_BP_C_OnRep_LastUberpounceJumpTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.LatchedJumpAttached
// ()

void ADinopithecus_Character_BP_C::LatchedJumpAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.LatchedJumpAttached");

	ADinopithecus_Character_BP_C_LatchedJumpAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Uberpounce AttachedToLocation
// (Exec, NetResponse, Static, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void ADinopithecus_Character_BP_C::STATIC_On_Uberpounce_AttachedToLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Uberpounce AttachedToLocation");

	ADinopithecus_Character_BP_C_On_Uberpounce_AttachedToLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDisplayTamedMessage
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BPDisplayTamedMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDisplayTamedMessage");

	ADinopithecus_Character_BP_C_BPDisplayTamedMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PrintStats
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UPrimalCharacterStatusComponent* StatusComp                     (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::STATIC_PrintStats(class UPrimalCharacterStatusComponent* StatusComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PrintStats");

	ADinopithecus_Character_BP_C_PrintStats_Params params;
	params.StatusComp = StatusComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get Pounce Latched Anim
// ()
// Parameters:
// class UAnimMontage*            Anim                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartSectionName               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::Get_Pounce_Latched_Anim(class UAnimMontage** Anim, struct FName* StartSectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get Pounce Latched Anim");

	ADinopithecus_Character_BP_C_Get_Pounce_Latched_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anim != nullptr)
		*Anim = params.Anim;
	if (StartSectionName != nullptr)
		*StartSectionName = params.StartSectionName;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ResetMeshRelativeLocation
// ()

void ADinopithecus_Character_BP_C::ResetMeshRelativeLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ResetMeshRelativeLocation");

	ADinopithecus_Character_BP_C_ResetMeshRelativeLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.RidingTick
// (Native, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::STATIC_RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.RidingTick");

	ADinopithecus_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnAnimPlayedNotify
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StartSectionName               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicateToOwner              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseAndServerUpdateMesh (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseOnServer         (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage** AnimMontage, float* InPlayRate, struct FName* StartSectionName, bool* bReplicate, bool* bReplicateToOwner, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnAnimPlayedNotify");

	ADinopithecus_Character_BP_C_BPOnAnimPlayedNotify_Params params;
	params.AnimMontage = AnimMontage;
	params.InPlayRate = InPlayRate;
	params.StartSectionName = StartSectionName;
	params.bReplicate = bReplicate;
	params.bReplicateToOwner = bReplicateToOwner;
	params.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
	params.bForceTickPoseOnServer = bForceTickPoseOnServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
// (NetReliable, NetRequest, Exec, Event, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// bool                           overrideTamingProgressBarIfActive (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          progressPercent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Label                          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDinoTooltipCustomTamingProgressBar");

	ADinopithecus_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (overrideTamingProgressBarIfActive != nullptr)
		*overrideTamingProgressBarIfActive = params.overrideTamingProgressBarIfActive;
	if (progressPercent != nullptr)
		*progressPercent = params.progressPercent;
	if (Label != nullptr)
		*Label = params.Label;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintCanAttack");

	ADinopithecus_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CalculateDamageTakenRequiredForBerzerk
// ()
// Parameters:
// float                          Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::CalculateDamageTakenRequiredForBerzerk(float* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CalculateDamageTakenRequiredForBerzerk");

	ADinopithecus_Character_BP_C_CalculateDamageTakenRequiredForBerzerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADinopithecus_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAdjustDamage");

	ADinopithecus_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CalculateTotalTimeTransformed
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::CalculateTotalTimeTransformed(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CalculateTotalTimeTransformed");

	ADinopithecus_Character_BP_C_CalculateTotalTimeTransformed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetSmallsInstance
// ()
// Parameters:
// class APrimalDinoCharacter*    Instance                       (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::SetSmallsInstance(class APrimalDinoCharacter* Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetSmallsInstance");

	ADinopithecus_Character_BP_C_SetSmallsInstance_Params params;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SpawnSmalls
// ()

void ADinopithecus_Character_BP_C::SpawnSmalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SpawnSmalls");

	ADinopithecus_Character_BP_C_SpawnSmalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_InterceptMoveRight");

	ADinopithecus_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnPinnedBuffEnded
// ()
// Parameters:
// class APrimalCharacter**       BuffTarget                     (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::OnPinnedBuffEnded(class APrimalCharacter** BuffTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnPinnedBuffEnded");

	ADinopithecus_Character_BP_C_OnPinnedBuffEnded_Params params;
	params.BuffTarget = BuffTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_InterceptMoveForward");

	ADinopithecus_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceRotationFromSocket
// ()
// Parameters:
// class APrimalCharacter**       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Socket                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::GetUberpounceRotationFromSocket(class APrimalCharacter** Target, struct FName* Socket, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceRotationFromSocket");

	ADinopithecus_Character_BP_C_GetUberpounceRotationFromSocket_Params params;
	params.Target = Target;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.QueueSequential Jump
// ()

void ADinopithecus_Character_BP_C::QueueSequential_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.QueueSequential Jump");

	ADinopithecus_Character_BP_C_QueueSequential_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_PreventMovementMode");

	ADinopithecus_Character_BP_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADinopithecus_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	ADinopithecus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetHUDElements
// (Native, Event, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ADinopithecus_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetHUDElements");

	ADinopithecus_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartBerzerk
// ()

void ADinopithecus_Character_BP_C::StartBerzerk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartBerzerk");

	ADinopithecus_Character_BP_C_StartBerzerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsBerzerk
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::IsBerzerk(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsBerzerk");

	ADinopithecus_Character_BP_C_IsBerzerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OnJumpReleased
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void ADinopithecus_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OnJumpReleased");

	ADinopithecus_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPUnstasis
// ()

void ADinopithecus_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPUnstasis");

	ADinopithecus_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDebugString
// (Net, NetReliable, NetRequest, Event, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class FString                  Output                         (Parm, OutParm, ZeroConstructor)

void ADinopithecus_Character_BP_C::GetDebugString(class FString* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDebugString");

	ADinopithecus_Character_BP_C_GetDebugString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateUberpounceFn
// ()

void ADinopithecus_Character_BP_C::UpdateUberpounceFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateUberpounceFn");

	ADinopithecus_Character_BP_C_UpdateUberpounceFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetInitialAnimationForUberpouncePublic
// ()
// Parameters:
// class UAnimMontage*            AnimMontage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::GetInitialAnimationForUberpouncePublic(class UAnimMontage** AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetInitialAnimationForUberpouncePublic");

	ADinopithecus_Character_BP_C_GetInitialAnimationForUberpouncePublic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimMontage != nullptr)
		*AnimMontage = params.AnimMontage;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnPounceStarted
// ()

void ADinopithecus_Character_BP_C::OnPounceStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnPounceStarted");

	ADinopithecus_Character_BP_C_OnPounceStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdatePounceFn
// ()

void ADinopithecus_Character_BP_C::UpdatePounceFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdatePounceFn");

	ADinopithecus_Character_BP_C_UpdatePounceFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Compute Pounce Transform
// ()
// Parameters:
// struct FVector                 CurrentLoc                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CurrentRot                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           UpdatedTransform               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::Compute_Pounce_Transform(const struct FVector& CurrentLoc, const struct FRotator& CurrentRot, struct FVector* NewLocation, struct FRotator* NewRotation, bool* UpdatedTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Compute Pounce Transform");

	ADinopithecus_Character_BP_C_Compute_Pounce_Transform_Params params;
	params.CurrentLoc = CurrentLoc;
	params.CurrentRot = CurrentRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
	if (NewRotation != nullptr)
		*NewRotation = params.NewRotation;
	if (UpdatedTransform != nullptr)
		*UpdatedTransform = params.UpdatedTransform;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPPreventOrderAllowed
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BPPreventOrderAllowed(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPPreventOrderAllowed");

	ADinopithecus_Character_BP_C_BPPreventOrderAllowed_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get Pounce Target
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rot                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::Get_Pounce_Target(struct FVector* Loc, struct FRotator* Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get Pounce Target");

	ADinopithecus_Character_BP_C_Get_Pounce_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loc != nullptr)
		*Loc = params.Loc;
	if (Rot != nullptr)
		*Rot = params.Rot;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinopithecus_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPServerHandleNetExecCommand");

	ADinopithecus_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PounceAttachToCharacter
// ()

void ADinopithecus_Character_BP_C::PounceAttachToCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PounceAttachToCharacter");

	ADinopithecus_Character_BP_C_PounceAttachToCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_PounceStateReplicated
// ()

void ADinopithecus_Character_BP_C::OnRep_PounceStateReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_PounceStateReplicated");

	ADinopithecus_Character_BP_C_OnRep_PounceStateReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetPounceState
// ()
// Parameters:
// TEnumAsByte<EShapeshifter_Large_PounceState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::SetPounceState(TEnumAsByte<EShapeshifter_Large_PounceState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetPounceState");

	ADinopithecus_Character_BP_C_SetPounceState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.EndPounce
// ()

void ADinopithecus_Character_BP_C::EndPounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.EndPounce");

	ADinopithecus_Character_BP_C_EndPounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartPounce
// ()

void ADinopithecus_Character_BP_C::StartPounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartPounce");

	ADinopithecus_Character_BP_C_StartPounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetPounceTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::SetPounceTarget(class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetPounceTarget");

	ADinopithecus_Character_BP_C_SetPounceTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifyClearRider");

	ADinopithecus_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifySetRider");

	ADinopithecus_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnLanded
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ADinopithecus_Character_BP_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnLanded");

	ADinopithecus_Character_BP_C_OnLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DrawDebugRotator
// ()
// Parameters:
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::DrawDebugRotator(const struct FVector& Position, const struct FRotator& Rotation, float Duration, float Thickness, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DrawDebugRotator");

	ADinopithecus_Character_BP_C_DrawDebugRotator_Params params;
	params.Position = Position;
	params.Rotation = Rotation;
	params.Duration = Duration;
	params.Thickness = Thickness;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveTick");

	ADinopithecus_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceivePossessed
// ()
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceivePossessed");

	ADinopithecus_Character_BP_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveBeginPlay
// ()

void ADinopithecus_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveBeginPlay");

	ADinopithecus_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UserConstructionScript
// ()

void ADinopithecus_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UserConstructionScript");

	ADinopithecus_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_256
// ()

void ADinopithecus_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_256()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_256");

	ADinopithecus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_256_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiOnLanded
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::MultiOnLanded(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiOnLanded");

	ADinopithecus_Character_BP_C_MultiOnLanded_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetPounceTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::ServerSetPounceTarget(class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetPounceTarget");

	ADinopithecus_Character_BP_C_ServerSetPounceTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerEndPounce
// ()

void ADinopithecus_Character_BP_C::ServerEndPounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerEndPounce");

	ADinopithecus_Character_BP_C_ServerEndPounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiEndPounce
// ()

void ADinopithecus_Character_BP_C::MultiEndPounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiEndPounce");

	ADinopithecus_Character_BP_C_MultiEndPounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdatePounce
// ()

void ADinopithecus_Character_BP_C::UpdatePounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdatePounce");

	ADinopithecus_Character_BP_C_UpdatePounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerStartJump
// ()

void ADinopithecus_Character_BP_C::ServerStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerStartJump");

	ADinopithecus_Character_BP_C_ServerStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DoJump
// ()

void ADinopithecus_Character_BP_C::AnimNotify_DoJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DoJump");

	ADinopithecus_Character_BP_C_AnimNotify_DoJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.QueueSequentialJumpEvent
// ()

void ADinopithecus_Character_BP_C::QueueSequentialJumpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.QueueSequentialJumpEvent");

	ADinopithecus_Character_BP_C_QueueSequentialJumpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLastTimeReleaseJumpWhileFalling
// ()
// Parameters:
// double                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraDirection                (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::ServerSetLastTimeReleaseJumpWhileFalling(double Time, const struct FVector& Velocity, const struct FVector& CameraDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLastTimeReleaseJumpWhileFalling");

	ADinopithecus_Character_BP_C_ServerSetLastTimeReleaseJumpWhileFalling_Params params;
	params.Time = Time;
	params.Velocity = Velocity;
	params.CameraDirection = CameraDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_SequentialJumpTakeOff
// ()

void ADinopithecus_Character_BP_C::AnimNotify_SequentialJumpTakeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_SequentialJumpTakeOff");

	ADinopithecus_Character_BP_C_AnimNotify_SequentialJumpTakeOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerForwardInputDuringSequentialJump
// ()
// Parameters:
// float                          Axis                           (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::ServerForwardInputDuringSequentialJump(float Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerForwardInputDuringSequentialJump");

	ADinopithecus_Character_BP_C_ServerForwardInputDuringSequentialJump_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiUpdateVelocity
// ()
// Parameters:
// struct FVector                 NewVelocity                    (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::MultiUpdateVelocity(const struct FVector& NewVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiUpdateVelocity");

	ADinopithecus_Character_BP_C_MultiUpdateVelocity_Params params;
	params.NewVelocity = NewVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEGroundPound
// ()

void ADinopithecus_Character_BP_C::AnimNotify_AOEGroundPound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEGroundPound");

	ADinopithecus_Character_BP_C_AnimNotify_AOEGroundPound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_SwipeAttack
// ()

void ADinopithecus_Character_BP_C::AnimNotify_SwipeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_SwipeAttack");

	ADinopithecus_Character_BP_C_AnimNotify_SwipeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ChargingMeleeStart
// ()

void ADinopithecus_Character_BP_C::AnimNotify_ChargingMeleeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ChargingMeleeStart");

	ADinopithecus_Character_BP_C_AnimNotify_ChargingMeleeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ChargingMeleeEnd
// ()

void ADinopithecus_Character_BP_C::AnimNotify_ChargingMeleeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ChargingMeleeEnd");

	ADinopithecus_Character_BP_C_AnimNotify_ChargingMeleeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ChargingMeleeTick
// ()

void ADinopithecus_Character_BP_C::ChargingMeleeTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ChargingMeleeTick");

	ADinopithecus_Character_BP_C_ChargingMeleeTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CameraShake
// ()

void ADinopithecus_Character_BP_C::AnimNotify_CameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CameraShake");

	ADinopithecus_Character_BP_C_AnimNotify_CameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerLeftRightInputDuringSequentialJump
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::ServerLeftRightInputDuringSequentialJump(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerLeftRightInputDuringSequentialJump");

	ADinopithecus_Character_BP_C_ServerLeftRightInputDuringSequentialJump_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CameraShakeLight
// ()

void ADinopithecus_Character_BP_C::AnimNotify_CameraShakeLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CameraShakeLight");

	ADinopithecus_Character_BP_C_AnimNotify_CameraShakeLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DeleteSmallsEvent
// ()

void ADinopithecus_Character_BP_C::DeleteSmallsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DeleteSmallsEvent");

	ADinopithecus_Character_BP_C_DeleteSmallsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartBerzerkEvent
// ()

void ADinopithecus_Character_BP_C::StartBerzerkEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartBerzerkEvent");

	ADinopithecus_Character_BP_C_StartBerzerkEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ResetAnimSpeed
// ()

void ADinopithecus_Character_BP_C::AnimNotify_ResetAnimSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ResetAnimSpeed");

	ADinopithecus_Character_BP_C_AnimNotify_ResetAnimSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ThrowRider
// ()

void ADinopithecus_Character_BP_C::AnimNotify_ThrowRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ThrowRider");

	ADinopithecus_Character_BP_C_AnimNotify_ThrowRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_StartRoar
// ()

void ADinopithecus_Character_BP_C::AnimNotify_StartRoar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_StartRoar");

	ADinopithecus_Character_BP_C_AnimNotify_StartRoar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_StopRoar
// ()

void ADinopithecus_Character_BP_C::AnimNotify_StopRoar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_StopRoar");

	ADinopithecus_Character_BP_C_AnimNotify_StopRoar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ClearRider
// ()

void ADinopithecus_Character_BP_C::AnimNotify_ClearRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ClearRider");

	ADinopithecus_Character_BP_C_AnimNotify_ClearRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CheckForFallingLatch
// ()

void ADinopithecus_Character_BP_C::AnimNotify_CheckForFallingLatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CheckForFallingLatch");

	ADinopithecus_Character_BP_C_AnimNotify_CheckForFallingLatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestUberpounceJump
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::ServerRequestUberpounceJump(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestUberpounceJump");

	ADinopithecus_Character_BP_C_ServerRequestUberpounceJump_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DoUberpounceJump
// ()

void ADinopithecus_Character_BP_C::AnimNotify_DoUberpounceJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DoUberpounceJump");

	ADinopithecus_Character_BP_C_AnimNotify_DoUberpounceJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BackupDestroy
// ()

void ADinopithecus_Character_BP_C::BackupDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BackupDestroy");

	ADinopithecus_Character_BP_C_BackupDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_LatchedJumpAttached
// ()

void ADinopithecus_Character_BP_C::AnimNotify_LatchedJumpAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_LatchedJumpAttached");

	ADinopithecus_Character_BP_C_AnimNotify_LatchedJumpAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_QueuedRoar
// ()

void ADinopithecus_Character_BP_C::AnimNotify_QueuedRoar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_QueuedRoar");

	ADinopithecus_Character_BP_C_AnimNotify_QueuedRoar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetPounceAnticipationIdle
// ()
// Parameters:
// bool                           IsAnticipIdle                  (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::ServerSetPounceAnticipationIdle(bool IsAnticipIdle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetPounceAnticipationIdle");

	ADinopithecus_Character_BP_C_ServerSetPounceAnticipationIdle_Params params;
	params.IsAnticipIdle = IsAnticipIdle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetIsHoldingProne
// ()
// Parameters:
// bool                           HoldingCrouch                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraDirection                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::ServerSetIsHoldingProne(bool HoldingCrouch, const struct FVector& CameraLocation, const struct FVector& CameraDirection, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetIsHoldingProne");

	ADinopithecus_Character_BP_C_ServerSetIsHoldingProne_Params params;
	params.HoldingCrouch = HoldingCrouch;
	params.CameraLocation = CameraLocation;
	params.CameraDirection = CameraDirection;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_GrabRock
// ()

void ADinopithecus_Character_BP_C::AnimNotify_GrabRock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_GrabRock");

	ADinopithecus_Character_BP_C_AnimNotify_GrabRock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ThrowRock
// ()

void ADinopithecus_Character_BP_C::AnimNotify_ThrowRock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ThrowRock");

	ADinopithecus_Character_BP_C_AnimNotify_ThrowRock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestSequentialJump
// ()

void ADinopithecus_Character_BP_C::ServerRequestSequentialJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestSequentialJump");

	ADinopithecus_Character_BP_C_ServerRequestSequentialJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEJumpStart
// ()

void ADinopithecus_Character_BP_C::AnimNotify_AOEJumpStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEJumpStart");

	ADinopithecus_Character_BP_C_AnimNotify_AOEJumpStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEJumpEnd
// ()

void ADinopithecus_Character_BP_C::AnimNotify_AOEJumpEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEJumpEnd");

	ADinopithecus_Character_BP_C_AnimNotify_AOEJumpEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_EnableIK
// ()

void ADinopithecus_Character_BP_C::AnimNotify_EnableIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_EnableIK");

	ADinopithecus_Character_BP_C_AnimNotify_EnableIK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DisableIK
// ()

void ADinopithecus_Character_BP_C::AnimNotify_DisableIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DisableIK");

	ADinopithecus_Character_BP_C_AnimNotify_DisableIK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ShouldCancelLatch
// ()

void ADinopithecus_Character_BP_C::AnimNotify_ShouldCancelLatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ShouldCancelLatch");

	ADinopithecus_Character_BP_C_AnimNotify_ShouldCancelLatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestJumpOffWallWithAnticipation
// ()

void ADinopithecus_Character_BP_C::ServerRequestJumpOffWallWithAnticipation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestJumpOffWallWithAnticipation");

	ADinopithecus_Character_BP_C_ServerRequestJumpOffWallWithAnticipation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_PushOffWall
// ()

void ADinopithecus_Character_BP_C::AnimNotify_PushOffWall()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_PushOffWall");

	ADinopithecus_Character_BP_C_AnimNotify_PushOffWall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLatchJumpType
// ()
// Parameters:
// TEnumAsByte<ELatchedJumpType>  Type                           (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::ServerSetLatchJumpType(TEnumAsByte<ELatchedJumpType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLatchJumpType");

	ADinopithecus_Character_BP_C_ServerSetLatchJumpType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiExplodeProjectile
// ()

void ADinopithecus_Character_BP_C::MultiExplodeProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiExplodeProjectile");

	ADinopithecus_Character_BP_C_MultiExplodeProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetAmmoType
// ()
// Parameters:
// int                            NewAmmoType                    (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::ServerSetAmmoType(int NewAmmoType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetAmmoType");

	ADinopithecus_Character_BP_C_ServerSetAmmoType_Params params;
	params.NewAmmoType = NewAmmoType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetIsHoldingCrouch
// ()
// Parameters:
// bool                           HoldingCrouch                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::ServerSetIsHoldingCrouch(bool HoldingCrouch, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetIsHoldingCrouch");

	ADinopithecus_Character_BP_C_ServerSetIsHoldingCrouch_Params params;
	params.HoldingCrouch = HoldingCrouch;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLastJumpHoldTime
// ()
// Parameters:
// float                          HoldTime                       (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::ServerSetLastJumpHoldTime(float HoldTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLastJumpHoldTime");

	ADinopithecus_Character_BP_C_ServerSetLastJumpHoldTime_Params params;
	params.HoldTime = HoldTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multicast_BattlecryHitFX
// ()
// Parameters:
// int                            NrOfHits                       (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        Char                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Bone                           (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::Multicast_BattlecryHitFX(int NrOfHits, class APrimalCharacter* Char, const struct FName& Bone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multicast_BattlecryHitFX");

	ADinopithecus_Character_BP_C_Multicast_BattlecryHitFX_Params params;
	params.NrOfHits = NrOfHits;
	params.Char = Char;
	params.Bone = Bone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClearHUDReference
// ()

void ADinopithecus_Character_BP_C::ClearHUDReference()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClearHUDReference");

	ADinopithecus_Character_BP_C_ClearHUDReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Server_HideWeapon
// ()

void ADinopithecus_Character_BP_C::Server_HideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Server_HideWeapon");

	ADinopithecus_Character_BP_C_Server_HideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Server_ShowWeapon
// ()

void ADinopithecus_Character_BP_C::Server_ShowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Server_ShowWeapon");

	ADinopithecus_Character_BP_C_Server_ShowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.RunOnServer_UpdateInventory
// ()

void ADinopithecus_Character_BP_C::RunOnServer_UpdateInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.RunOnServer_UpdateInventory");

	ADinopithecus_Character_BP_C_RunOnServer_UpdateInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multi_ResetProjectileM esh
// ()

void ADinopithecus_Character_BP_C::Multi_ResetProjectileM_esh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multi_ResetProjectileM esh");

	ADinopithecus_Character_BP_C_Multi_ResetProjectileM_esh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClientStartBabyRiding
// ()

void ADinopithecus_Character_BP_C::ClientStartBabyRiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClientStartBabyRiding");

	ADinopithecus_Character_BP_C_ClientStartBabyRiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multi_GrabRock
// ()

void ADinopithecus_Character_BP_C::Multi_GrabRock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multi_GrabRock");

	ADinopithecus_Character_BP_C_Multi_GrabRock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClearUberpounceOnClearRider
// ()

void ADinopithecus_Character_BP_C::ClearUberpounceOnClearRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClearUberpounceOnClearRider");

	ADinopithecus_Character_BP_C_ClearUberpounceOnClearRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ExecuteUbergraph_Dinopithecus_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADinopithecus_Character_BP_C::ExecuteUbergraph_Dinopithecus_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ExecuteUbergraph_Dinopithecus_Character_BP");

	ADinopithecus_Character_BP_C_ExecuteUbergraph_Dinopithecus_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
