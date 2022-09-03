// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BrainSlug_HumanControl_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPInterceptUseAction
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BrainSlug_HumanControl_C::BPInterceptUseAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPInterceptUseAction");

	ABuff_BrainSlug_HumanControl_C_BPInterceptUseAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreventTekArmorBuffs
// ()
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> ABuff_BrainSlug_HumanControl_C::BPPreventTekArmorBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreventTekArmorBuffs");

	ABuff_BrainSlug_HumanControl_C_BPPreventTekArmorBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.InterceptInstigatorPlayerEmoteAnim
// ()
// Parameters:
// class UAnimMontage**           EmoteAnim                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BrainSlug_HumanControl_C::InterceptInstigatorPlayerEmoteAnim(class UAnimMontage** EmoteAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.InterceptInstigatorPlayerEmoteAnim");

	ABuff_BrainSlug_HumanControl_C_InterceptInstigatorPlayerEmoteAnim_Params params;
	params.EmoteAnim = EmoteAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPInstigatorSleeped
// ()
// Parameters:
// bool*                          bIsSleeped                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_HumanControl_C::BPInstigatorSleeped(bool* bIsSleeped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPInstigatorSleeped");

	ABuff_BrainSlug_HumanControl_C_BPInstigatorSleeped_Params params;
	params.bIsSleeped = bIsSleeped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DrawBuffFloatingHUD
// ()
// Parameters:
// int*                           BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_HumanControl_C::DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DrawBuffFloatingHUD");

	ABuff_BrainSlug_HumanControl_C_DrawBuffFloatingHUD_Params params;
	params.BuffIndex = BuffIndex;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GetForcedBuffAimOverride
// ()
// Parameters:
// bool*                          bIsWeaponAim                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ABuff_BrainSlug_HumanControl_C::GetForcedBuffAimOverride(bool* bIsWeaponAim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GetForcedBuffAimOverride");

	ABuff_BrainSlug_HumanControl_C_GetForcedBuffAimOverride_Params params;
	params.bIsWeaponAim = bIsWeaponAim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BrainSlug_HumanControl_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPTryMultiUse");

	ABuff_BrainSlug_HumanControl_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABuff_BrainSlug_HumanControl_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPGetMultiUseEntries");

	ABuff_BrainSlug_HumanControl_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.UpdatePuppetteerStatus
// ()

void ABuff_BrainSlug_HumanControl_C::UpdatePuppetteerStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.UpdatePuppetteerStatus");

	ABuff_BrainSlug_HumanControl_C_UpdatePuppetteerStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideCharacterWalkingVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Friction                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_BrainSlug_HumanControl_C::BP_OverrideCharacterWalkingVelocity(float* DeltaTime, struct FVector* InitialVelocity, float* Friction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideCharacterWalkingVelocity");

	ABuff_BrainSlug_HumanControl_C_BP_OverrideCharacterWalkingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Friction != nullptr)
		*Friction = params.Friction;

	return params.ReturnValue;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BrainSlug_HumanControl_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreventFirstPerson");

	ABuff_BrainSlug_HumanControl_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideMoveForwardInput
// ()
// Parameters:
// float*                         CurrentInput                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_BrainSlug_HumanControl_C::BP_OverrideMoveForwardInput(float* CurrentInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideMoveForwardInput");

	ABuff_BrainSlug_HumanControl_C_BP_OverrideMoveForwardInput_Params params;
	params.CurrentInput = CurrentInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideMoveRightInput
// ()
// Parameters:
// float*                         CurrentInput                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_BrainSlug_HumanControl_C::BP_OverrideMoveRightInput(float* CurrentInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideMoveRightInput");

	ABuff_BrainSlug_HumanControl_C_BP_OverrideMoveRightInput_Params params;
	params.CurrentInput = CurrentInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPOverrideCameraViewTarget
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

void ABuff_BrainSlug_HumanControl_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPOverrideCameraViewTarget");

	ABuff_BrainSlug_HumanControl_C_BPOverrideCameraViewTarget_Params params;
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


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GetBestAggressionTarget
// ()

void ABuff_BrainSlug_HumanControl_C::GetBestAggressionTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GetBestAggressionTarget");

	ABuff_BrainSlug_HumanControl_C_GetBestAggressionTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BrainSlug_HumanControl_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPCheckPreventInput");

	ABuff_BrainSlug_HumanControl_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_HumanControl_C::BPPreSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreSetupForInstigator");

	ABuff_BrainSlug_HumanControl_C_BPPreSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ReceiveDestroyed
// ()

void ABuff_BrainSlug_HumanControl_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ReceiveDestroyed");

	ABuff_BrainSlug_HumanControl_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_HumanControl_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPDeactivated");

	ABuff_BrainSlug_HumanControl_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_HumanControl_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPSetupForInstigator");

	ABuff_BrainSlug_HumanControl_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.UserConstructionScript
// ()

void ABuff_BrainSlug_HumanControl_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.UserConstructionScript");

	ABuff_BrainSlug_HumanControl_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.LaunchClearOfAttachment
// ()

void ABuff_BrainSlug_HumanControl_C::LaunchClearOfAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.LaunchClearOfAttachment");

	ABuff_BrainSlug_HumanControl_C_LaunchClearOfAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ReceiveBeginPlay
// ()

void ABuff_BrainSlug_HumanControl_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ReceiveBeginPlay");

	ABuff_BrainSlug_HumanControl_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GenerateRandomWalk
// ()

void ABuff_BrainSlug_HumanControl_C::GenerateRandomWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GenerateRandomWalk");

	ABuff_BrainSlug_HumanControl_C_GenerateRandomWalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DisableLookAndMove
// ()

void ABuff_BrainSlug_HumanControl_C::DisableLookAndMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DisableLookAndMove");

	ABuff_BrainSlug_HumanControl_C_DisableLookAndMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_HumanControl_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BuffTickClient");

	ABuff_BrainSlug_HumanControl_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_HumanControl_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BuffTickServer");

	ABuff_BrainSlug_HumanControl_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_UpdateRotation
// ()
// Parameters:
// bool                           SetsRotation                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                newRot                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_HumanControl_C::Multi_UpdateRotation(bool SetsRotation, const struct FRotator& newRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_UpdateRotation");

	ABuff_BrainSlug_HumanControl_C_Multi_UpdateRotation_Params params;
	params.SetsRotation = SetsRotation;
	params.newRot = newRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_SetBrainCameraOverrides
// ()
// Parameters:
// struct FRotator                newRot                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewAimDir                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_HumanControl_C::Multi_SetBrainCameraOverrides(const struct FRotator& newRot, const struct FVector& NewLoc, const struct FVector& NewAimDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_SetBrainCameraOverrides");

	ABuff_BrainSlug_HumanControl_C_Multi_SetBrainCameraOverrides_Params params;
	params.newRot = newRot;
	params.NewLoc = NewLoc;
	params.NewAimDir = NewAimDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerFireWeapon
// ()

void ABuff_BrainSlug_HumanControl_C::ServerFireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerFireWeapon");

	ABuff_BrainSlug_HumanControl_C_ServerFireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ForceFireWeapon
// ()

void ABuff_BrainSlug_HumanControl_C::ForceFireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ForceFireWeapon");

	ABuff_BrainSlug_HumanControl_C_ForceFireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.TryFire
// ()

void ABuff_BrainSlug_HumanControl_C::TryFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.TryFire");

	ABuff_BrainSlug_HumanControl_C_TryFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DealDamageTick
// ()

void ABuff_BrainSlug_HumanControl_C::DealDamageTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DealDamageTick");

	ABuff_BrainSlug_HumanControl_C_DealDamageTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_AddMoveInput
// ()

void ABuff_BrainSlug_HumanControl_C::Multi_AddMoveInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_AddMoveInput");

	ABuff_BrainSlug_HumanControl_C_Multi_AddMoveInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerJump
// ()
// Parameters:
// bool                           bStartJump                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_HumanControl_C::ServerJump(bool bStartJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerJump");

	ABuff_BrainSlug_HumanControl_C_ServerJump_Params params;
	params.bStartJump = bStartJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.MultiJump
// ()
// Parameters:
// bool                           bStartJump                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_HumanControl_C::MultiJump(bool bStartJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.MultiJump");

	ABuff_BrainSlug_HumanControl_C_MultiJump_Params params;
	params.bStartJump = bStartJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerTryRepossesion
// ()
// Parameters:
// class AShooterPlayerController* NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_HumanControl_C::ServerTryRepossesion(class AShooterPlayerController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerTryRepossesion");

	ABuff_BrainSlug_HumanControl_C_ServerTryRepossesion_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_EnablePossession
// ()
// Parameters:
// class AShooterPlayerController* NewPossessingPC                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_HumanControl_C::Multi_EnablePossession(class AShooterPlayerController* NewPossessingPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_EnablePossession");

	ABuff_BrainSlug_HumanControl_C_Multi_EnablePossession_Params params;
	params.NewPossessingPC = NewPossessingPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BeginPossessionResponse
// ()

void ABuff_BrainSlug_HumanControl_C::BeginPossessionResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BeginPossessionResponse");

	ABuff_BrainSlug_HumanControl_C_BeginPossessionResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.RespondToPlayerDeath
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_HumanControl_C::RespondToPlayerDeath(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.RespondToPlayerDeath");

	ABuff_BrainSlug_HumanControl_C_RespondToPlayerDeath_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.RespondToPlayerSleep
// ()
// Parameters:
// class APrimalCharacter*        forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSleeping                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_HumanControl_C::RespondToPlayerSleep(class APrimalCharacter* forCharacter, bool bIsSleeping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.RespondToPlayerSleep");

	ABuff_BrainSlug_HumanControl_C_RespondToPlayerSleep_Params params;
	params.forCharacter = forCharacter;
	params.bIsSleeping = bIsSleeping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DoMultiUseAccessInventory
// ()

void ABuff_BrainSlug_HumanControl_C::DoMultiUseAccessInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DoMultiUseAccessInventory");

	ABuff_BrainSlug_HumanControl_C_DoMultiUseAccessInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ExecuteUbergraph_Buff_BrainSlug_HumanControl
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_HumanControl_C::ExecuteUbergraph_Buff_BrainSlug_HumanControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ExecuteUbergraph_Buff_BrainSlug_HumanControl");

	ABuff_BrainSlug_HumanControl_C_ExecuteUbergraph_Buff_BrainSlug_HumanControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
