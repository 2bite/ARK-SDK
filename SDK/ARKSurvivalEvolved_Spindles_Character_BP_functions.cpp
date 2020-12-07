// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Spindles_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spindles_Character_BP.Spindles_Character_BP_C.BPTimerNonDedicated
// ()

void ASpindles_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPTimerNonDedicated");

	ASpindles_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.UpdateMiniGunState
// (NetRequest, Exec, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintPure)

void ASpindles_Character_BP_C::UpdateMiniGunState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.UpdateMiniGunState");

	ASpindles_Character_BP_C_UpdateMiniGunState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BPTimerServer
// ()

void ASpindles_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPTimerServer");

	ASpindles_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.GetClampedCameraLocation
// ()
// Parameters:
// struct FVector                 OutLoc                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::GetClampedCameraLocation(struct FVector* OutLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.GetClampedCameraLocation");

	ASpindles_Character_BP_C_GetClampedCameraLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoc != nullptr)
		*OutLoc = params.OutLoc;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetDebugInfoString
// (NetRequest, Native, Event, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ASpindles_Character_BP_C::BPGetDebugInfoString()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetDebugInfoString");

	ASpindles_Character_BP_C_BPGetDebugInfoString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.SpawnMinigunFX
// ()
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::SpawnMinigunFX(const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.SpawnMinigunFX");

	ASpindles_Character_BP_C_SpawnMinigunFX_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandlePoop
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpindles_Character_BP_C::BPHandlePoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandlePoop");

	ASpindles_Character_BP_C_BPHandlePoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BPOverrideHurtAnim
// (NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintPure)
// Parameters:
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsLocalPath                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PointDamageLocation            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PointDamageHitNormal           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* ASpindles_Character_BP_C::STATIC_BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPOverrideHurtAnim");

	ASpindles_Character_BP_C_BPOverrideHurtAnim_Params params;
	params.DamageTaken = DamageTaken;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsLocalPath = bIsLocalPath;
	params.bIsPointDamage = bIsPointDamage;
	params.PointDamageLocation = PointDamageLocation;
	params.PointDamageHitNormal = PointDamageHitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;

	return params.ReturnValue;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.UpdateCachedActivateMinigunModeWeightCheck
// (Native, Event, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintPure)

void ASpindles_Character_BP_C::STATIC_UpdateCachedActivateMinigunModeWeightCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.UpdateCachedActivateMinigunModeWeightCheck");

	ASpindles_Character_BP_C_UpdateCachedActivateMinigunModeWeightCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BlueprintGetAttackWeight
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         inputWeight                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpindles_Character_BP_C::BlueprintGetAttackWeight(int* AttackIndex, float* inputWeight, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BlueprintGetAttackWeight");

	ASpindles_Character_BP_C_BlueprintGetAttackWeight_Params params;
	params.AttackIndex = AttackIndex;
	params.inputWeight = inputWeight;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.GetMinigunModeTPVOffset
// ()
// Parameters:
// struct FVector                 TPVOffset                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::GetMinigunModeTPVOffset(struct FVector* TPVOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.GetMinigunModeTPVOffset");

	ASpindles_Character_BP_C_GetMinigunModeTPVOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TPVOffset != nullptr)
		*TPVOffset = params.TPVOffset;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.Set Minigun FireInput Pressed
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::Set_Minigun_FireInput_Pressed(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.Set Minigun FireInput Pressed");

	ASpindles_Character_BP_C_Set_Minigun_FireInput_Pressed_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.RidingTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.RidingTick");

	ASpindles_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleLeftShoulderButton
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpindles_Character_BP_C::BPHandleLeftShoulderButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleLeftShoulderButton");

	ASpindles_Character_BP_C_BPHandleLeftShoulderButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.Set Minigun AOEInput Pressed
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::Set_Minigun_AOEInput_Pressed(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.Set Minigun AOEInput Pressed");

	ASpindles_Character_BP_C_Set_Minigun_AOEInput_Pressed_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpindles_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleControllerInitiatedAttack");

	ASpindles_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.SwitchMinigunTPVCameraView
// ()

void ASpindles_Character_BP_C::SwitchMinigunTPVCameraView()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.SwitchMinigunTPVCameraView");

	ASpindles_Character_BP_C_SwitchMinigunTPVCameraView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpindles_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BP_InterceptMoveRight");

	ASpindles_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpindles_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BP_InterceptMoveForward");

	ASpindles_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpindles_Character_BP_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPPreventFirstPerson");

	ASpindles_Character_BP_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPNotifySetRider");

	ASpindles_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BPOverrideCameraViewTarget
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

void ASpindles_Character_BP_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPOverrideCameraViewTarget");

	ASpindles_Character_BP_C_BPOverrideCameraViewTarget_Params params;
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


// Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpindles_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleOnStopTargeting");

	ASpindles_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.HasOverheatBuff
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::HasOverheatBuff(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.HasOverheatBuff");

	ASpindles_Character_BP_C_HasOverheatBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BP_GetCustomModifier_RotationRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpindles_Character_BP_C::BP_GetCustomModifier_RotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BP_GetCustomModifier_RotationRate");

	ASpindles_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.Is Server or SinglePlayer
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::Is_Server_or_SinglePlayer(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.Is Server or SinglePlayer");

	ASpindles_Character_BP_C_Is_Server_or_SinglePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.IsAIControlled
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::IsAIControlled(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.IsAIControlled");

	ASpindles_Character_BP_C_IsAIControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetCrosshairLocation
// ()
// Parameters:
// float*                         CanvasClipX                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CanvasClipY                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutX                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutY                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::BPGetCrosshairLocation(float* CanvasClipX, float* CanvasClipY, float* OutX, float* OutY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetCrosshairLocation");

	ASpindles_Character_BP_C_BPGetCrosshairLocation_Params params;
	params.CanvasClipX = CanvasClipX;
	params.CanvasClipY = CanvasClipY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutX != nullptr)
		*OutX = params.OutX;
	if (OutY != nullptr)
		*OutY = params.OutY;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetCrosshairAlpha
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpindles_Character_BP_C::BPGetCrosshairAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetCrosshairAlpha");

	ASpindles_Character_BP_C_BPGetCrosshairAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.IsFirstPersonView
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::IsFirstPersonView(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.IsFirstPersonView");

	ASpindles_Character_BP_C_IsFirstPersonView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.ReceiveBeginPlay
// ()

void ASpindles_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.ReceiveBeginPlay");

	ASpindles_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPNotifyClearRider");

	ASpindles_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.IsClientOrSinglePlayer
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::IsClientOrSinglePlayer(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.IsClientOrSinglePlayer");

	ASpindles_Character_BP_C_IsClientOrSinglePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleOnStopFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpindles_Character_BP_C::BPHandleOnStopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleOnStopFire");

	ASpindles_Character_BP_C_BPHandleOnStopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASpindles_Character_BP_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPAdjustAttackIndex");

	ASpindles_Character_BP_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.UserConstructionScript
// ()

void ASpindles_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.UserConstructionScript");

	ASpindles_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_150
// ()

void ASpindles_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_150()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_150");

	ASpindles_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_150_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_149
// ()

void ASpindles_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_149()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_149");

	ASpindles_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_149_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.SetMinigunAOE
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::SetMinigunAOE(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.SetMinigunAOE");

	ASpindles_Character_BP_C_SetMinigunAOE_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.SERVER_SetMinigunAOEInputPressed
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::SERVER_SetMinigunAOEInputPressed(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.SERVER_SetMinigunAOEInputPressed");

	ASpindles_Character_BP_C_SERVER_SetMinigunAOEInputPressed_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.RequestStopAOEAttack
// ()

void ASpindles_Character_BP_C::RequestStopAOEAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.RequestStopAOEAttack");

	ASpindles_Character_BP_C_RequestStopAOEAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.SERVER_SetMinigunFireInputPressed
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::SERVER_SetMinigunFireInputPressed(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.SERVER_SetMinigunFireInputPressed");

	ASpindles_Character_BP_C_SERVER_SetMinigunFireInputPressed_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.StartMinigunFire
// ()

void ASpindles_Character_BP_C::StartMinigunFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.StartMinigunFire");

	ASpindles_Character_BP_C_StartMinigunFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.StopMinigunFire
// ()

void ASpindles_Character_BP_C::StopMinigunFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.StopMinigunFire");

	ASpindles_Character_BP_C_StopMinigunFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.ClientSpawnMinigunFireFX
// ()
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::ClientSpawnMinigunFireFX(const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.ClientSpawnMinigunFireFX");

	ASpindles_Character_BP_C_ClientSpawnMinigunFireFX_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.MinigunModeOff
// ()

void ASpindles_Character_BP_C::MinigunModeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.MinigunModeOff");

	ASpindles_Character_BP_C_MinigunModeOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.MinigunModeOn
// ()

void ASpindles_Character_BP_C::MinigunModeOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.MinigunModeOn");

	ASpindles_Character_BP_C_MinigunModeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.TickMinigunStaminaCost
// ()

void ASpindles_Character_BP_C::TickMinigunStaminaCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.TickMinigunStaminaCost");

	ASpindles_Character_BP_C_TickMinigunStaminaCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.ClientOutOfStamina
// ()

void ASpindles_Character_BP_C::ClientOutOfStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.ClientOutOfStamina");

	ASpindles_Character_BP_C_ClientOutOfStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.CheckConsumeResource
// ()

void ASpindles_Character_BP_C::CheckConsumeResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.CheckConsumeResource");

	ASpindles_Character_BP_C_CheckConsumeResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.LoopMinigunFiringAnim
// ()

void ASpindles_Character_BP_C::LoopMinigunFiringAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.LoopMinigunFiringAnim");

	ASpindles_Character_BP_C_LoopMinigunFiringAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.ServerEnableMinigunMode
// ()

void ASpindles_Character_BP_C::ServerEnableMinigunMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.ServerEnableMinigunMode");

	ASpindles_Character_BP_C_ServerEnableMinigunMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.ServerDisableMinigunMode
// ()

void ASpindles_Character_BP_C::ServerDisableMinigunMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.ServerDisableMinigunMode");

	ASpindles_Character_BP_C_ServerDisableMinigunMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.EnableMinigunMode
// ()

void ASpindles_Character_BP_C::EnableMinigunMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.EnableMinigunMode");

	ASpindles_Character_BP_C_EnableMinigunMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.DisableMinigunMode
// ()

void ASpindles_Character_BP_C::DisableMinigunMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.DisableMinigunMode");

	ASpindles_Character_BP_C_DisableMinigunMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.RotateAttack
// ()

void ASpindles_Character_BP_C::RotateAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.RotateAttack");

	ASpindles_Character_BP_C_RotateAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TurnForAttack
// ()

void ASpindles_Character_BP_C::AnimNotify_TurnForAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TurnForAttack");

	ASpindles_Character_BP_C_AnimNotify_TurnForAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_AttackTurnFinished
// ()

void ASpindles_Character_BP_C::AnimNotify_AttackTurnFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_AttackTurnFinished");

	ASpindles_Character_BP_C_AnimNotify_AttackTurnFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.StopCheckConsumeResource
// ()

void ASpindles_Character_BP_C::StopCheckConsumeResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.StopCheckConsumeResource");

	ASpindles_Character_BP_C_StopCheckConsumeResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.ToggleMinigunModeAimOffset
// ()

void ASpindles_Character_BP_C::ToggleMinigunModeAimOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.ToggleMinigunModeAimOffset");

	ASpindles_Character_BP_C_ToggleMinigunModeAimOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.SetupMinigunFiring
// ()
// Parameters:
// class UAnimMontage*            LoopAnim                       (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         TrailFX                        (Parm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::SetupMinigunFiring(class UAnimMontage* LoopAnim, class UParticleSystem* TrailFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.SetupMinigunFiring");

	ASpindles_Character_BP_C_SetupMinigunFiring_Params params;
	params.LoopAnim = LoopAnim;
	params.TrailFX = TrailFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.TickAOEStaminaCost
// ()

void ASpindles_Character_BP_C::TickAOEStaminaCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.TickAOEStaminaCost");

	ASpindles_Character_BP_C_TickAOEStaminaCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.TickMinigunTPVCamera
// ()

void ASpindles_Character_BP_C::TickMinigunTPVCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.TickMinigunTPVCamera");

	ASpindles_Character_BP_C_TickMinigunTPVCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.ReplicateCameraDataMinigunModeToServer
// ()
// Parameters:
// bool                           IsFirstPerson                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraLocation                 (Parm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::ReplicateCameraDataMinigunModeToServer(bool IsFirstPerson, const struct FVector& CameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.ReplicateCameraDataMinigunModeToServer");

	ASpindles_Character_BP_C_ReplicateCameraDataMinigunModeToServer_Params params;
	params.IsFirstPerson = IsFirstPerson;
	params.CameraLocation = CameraLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.MULTI_StartAOEAttack
// ()

void ASpindles_Character_BP_C::MULTI_StartAOEAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.MULTI_StartAOEAttack");

	ASpindles_Character_BP_C_MULTI_StartAOEAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.MULTI_EndAOEAttack
// ()

void ASpindles_Character_BP_C::MULTI_EndAOEAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.MULTI_EndAOEAttack");

	ASpindles_Character_BP_C_MULTI_EndAOEAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.LeftShoulderPressed
// ()

void ASpindles_Character_BP_C::LeftShoulderPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.LeftShoulderPressed");

	ASpindles_Character_BP_C_LeftShoulderPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TickAOEStaminaCost
// ()

void ASpindles_Character_BP_C::AnimNotify_TickAOEStaminaCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TickAOEStaminaCost");

	ASpindles_Character_BP_C_AnimNotify_TickAOEStaminaCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TickMinigunStaminaCost
// ()

void ASpindles_Character_BP_C::AnimNotify_TickMinigunStaminaCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TickMinigunStaminaCost");

	ASpindles_Character_BP_C_AnimNotify_TickMinigunStaminaCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP.Spindles_Character_BP_C.ExecuteUbergraph_Spindles_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_C::ExecuteUbergraph_Spindles_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.ExecuteUbergraph_Spindles_Character_BP");

	ASpindles_Character_BP_C_ExecuteUbergraph_Spindles_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
