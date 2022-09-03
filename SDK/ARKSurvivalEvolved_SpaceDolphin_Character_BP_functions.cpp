// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceDolphin_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetHudData
// ()
// Parameters:
// bool                           HasSaddle                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           isFPV                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HideHUDinFPV                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            LaserLevel                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MaxLaserLevel                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LaserDowngradeTime             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LaserDowngradeTimerRemaining   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsLaserDowngradeTimerActive    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         LastLaserLevelChangedTime      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPrimalInventoryComponent* InventoryComponent             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  SaddleFuelItem                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FlakCannonAmmoItem             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsUsingSuperFlight             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsUsingSuperFlightBoost        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FuelPercent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CannonCooldownPercent          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          EchoOrChaffCooldownPercent     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsSubmerged                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::GetHudData(bool* HasSaddle, bool* isFPV, bool* HideHUDinFPV, int* LaserLevel, int* MaxLaserLevel, float* LaserDowngradeTime, float* LaserDowngradeTimerRemaining, bool* IsLaserDowngradeTimerActive, double* LastLaserLevelChangedTime, class UPrimalInventoryComponent** InventoryComponent, class UClass** SaddleFuelItem, class UClass** FlakCannonAmmoItem, bool* IsUsingSuperFlight, bool* IsUsingSuperFlightBoost, float* FuelPercent, float* CannonCooldownPercent, float* EchoOrChaffCooldownPercent, bool* IsSubmerged)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetHudData");

	ASpaceDolphin_Character_BP_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasSaddle != nullptr)
		*HasSaddle = params.HasSaddle;
	if (isFPV != nullptr)
		*isFPV = params.isFPV;
	if (HideHUDinFPV != nullptr)
		*HideHUDinFPV = params.HideHUDinFPV;
	if (LaserLevel != nullptr)
		*LaserLevel = params.LaserLevel;
	if (MaxLaserLevel != nullptr)
		*MaxLaserLevel = params.MaxLaserLevel;
	if (LaserDowngradeTime != nullptr)
		*LaserDowngradeTime = params.LaserDowngradeTime;
	if (LaserDowngradeTimerRemaining != nullptr)
		*LaserDowngradeTimerRemaining = params.LaserDowngradeTimerRemaining;
	if (IsLaserDowngradeTimerActive != nullptr)
		*IsLaserDowngradeTimerActive = params.IsLaserDowngradeTimerActive;
	if (LastLaserLevelChangedTime != nullptr)
		*LastLaserLevelChangedTime = params.LastLaserLevelChangedTime;
	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;
	if (SaddleFuelItem != nullptr)
		*SaddleFuelItem = params.SaddleFuelItem;
	if (FlakCannonAmmoItem != nullptr)
		*FlakCannonAmmoItem = params.FlakCannonAmmoItem;
	if (IsUsingSuperFlight != nullptr)
		*IsUsingSuperFlight = params.IsUsingSuperFlight;
	if (IsUsingSuperFlightBoost != nullptr)
		*IsUsingSuperFlightBoost = params.IsUsingSuperFlightBoost;
	if (FuelPercent != nullptr)
		*FuelPercent = params.FuelPercent;
	if (CannonCooldownPercent != nullptr)
		*CannonCooldownPercent = params.CannonCooldownPercent;
	if (EchoOrChaffCooldownPercent != nullptr)
		*EchoOrChaffCooldownPercent = params.EchoOrChaffCooldownPercent;
	if (IsSubmerged != nullptr)
		*IsSubmerged = params.IsSubmerged;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPClientHandleNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPClientHandleNetExecCommand");

	ASpaceDolphin_Character_BP_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CheckVelocityError
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::CheckVelocityError(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CheckVelocityError");

	ASpaceDolphin_Character_BP_C_CheckVelocityError_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPForceCameraStyle
// ()
// Parameters:
// class APrimalCharacter**       ForViewTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECameraStyle>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECameraStyle> ASpaceDolphin_Character_BP_C::BPForceCameraStyle(class APrimalCharacter** ForViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPForceCameraStyle");

	ASpaceDolphin_Character_BP_C_BPForceCameraStyle_Params params;
	params.ForViewTarget = ForViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLocalSounds
// ()

void ASpaceDolphin_Character_BP_C::UpdateLocalSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLocalSounds");

	ASpaceDolphin_Character_BP_C_UpdateLocalSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Star Fox Mode Public
// ()
// Parameters:
// class AMissionSpline*          CurrentSpline                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// double                         RetRiderSetTime                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           RetIsRiderWarmup               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::Is_Star_Fox_Mode_Public(class AMissionSpline** CurrentSpline, double* RetRiderSetTime, bool* RetIsRiderWarmup)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Star Fox Mode Public");

	ASpaceDolphin_Character_BP_C_Is_Star_Fox_Mode_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentSpline != nullptr)
		*CurrentSpline = params.CurrentSpline;
	if (RetRiderSetTime != nullptr)
		*RetRiderSetTime = params.RetRiderSetTime;
	if (RetIsRiderWarmup != nullptr)
		*RetIsRiderWarmup = params.RetIsRiderWarmup;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateMouseCursor
// ()

void ASpaceDolphin_Character_BP_C::UpdateMouseCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateMouseCursor");

	ASpaceDolphin_Character_BP_C_UpdateMouseCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TurnOffMouseCursor
// ()

void ASpaceDolphin_Character_BP_C::TurnOffMouseCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TurnOffMouseCursor");

	ASpaceDolphin_Character_BP_C_TurnOffMouseCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandlePoop
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BPHandlePoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandlePoop");

	ASpaceDolphin_Character_BP_C_BPHandlePoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSilenced
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::IsSilenced()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSilenced");

	ASpaceDolphin_Character_BP_C_IsSilenced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Server Request Fire Lasers Fn
// ()
// Parameters:
// struct FVector                 CameraHitLocation              (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::Server_Request_Fire_Lasers_Fn(const struct FVector& CameraHitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Server Request Fire Lasers Fn");

	ASpaceDolphin_Character_BP_C_Server_Request_Fire_Lasers_Fn_Params params;
	params.CameraHitLocation = CameraHitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ShouldPreventLockOnMe
// ()
// Parameters:
// bool                           IsPrevented                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ShouldPreventLockOnMe(bool* IsPrevented)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ShouldPreventLockOnMe");

	ASpaceDolphin_Character_BP_C_ShouldPreventLockOnMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPrevented != nullptr)
		*IsPrevented = params.IsPrevented;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsCurrentlyInStarFoxModeWithGamepad
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::IsCurrentlyInStarFoxModeWithGamepad(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsCurrentlyInStarFoxModeWithGamepad");

	ASpaceDolphin_Character_BP_C_IsCurrentlyInStarFoxModeWithGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPSetSimulatedInterpRollOverride
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpaceDolphin_Character_BP_C::BPSetSimulatedInterpRollOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPSetSimulatedInterpRollOverride");

	ASpaceDolphin_Character_BP_C_BPSetSimulatedInterpRollOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsGamePadActive
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::IsGamePadActive(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsGamePadActive");

	ASpaceDolphin_Character_BP_C_IsGamePadActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUnstasis
// ()

void ASpaceDolphin_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUnstasis");

	ASpaceDolphin_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryStartImmelmann
// ()

void ASpaceDolphin_Character_BP_C::TryStartImmelmann()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryStartImmelmann");

	ASpaceDolphin_Character_BP_C_TryStartImmelmann_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryStartLoop
// ()

void ASpaceDolphin_Character_BP_C::TryStartLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryStartLoop");

	ASpaceDolphin_Character_BP_C_TryStartLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateFPVMeshes
// ()

void ASpaceDolphin_Character_BP_C::UpdateFPVMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateFPVMeshes");

	ASpaceDolphin_Character_BP_C_UpdateFPVMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Desired Rotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ASpaceDolphin_Character_BP_C::Get_Desired_Rotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Desired Rotation");

	ASpaceDolphin_Character_BP_C_Get_Desired_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCameraHitLocationForProjectiles
// (Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ASpaceDolphin_Character_BP_C::GetCameraHitLocationForProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCameraHitLocationForProjectiles");

	ASpaceDolphin_Character_BP_C_GetCameraHitLocationForProjectiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Screen Mouse Position as MatParam
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor ASpaceDolphin_Character_BP_C::Get_Screen_Mouse_Position_as_MatParam()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Screen Mouse Position as MatParam");

	ASpaceDolphin_Character_BP_C_Get_Screen_Mouse_Position_as_MatParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnClearMountedDino
// ()

void ASpaceDolphin_Character_BP_C::BPOnClearMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnClearMountedDino");

	ASpaceDolphin_Character_BP_C_BPOnClearMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Saddle Shield Material
// ()

void ASpaceDolphin_Character_BP_C::Update_Saddle_Shield_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Saddle Shield Material");

	ASpaceDolphin_Character_BP_C_Update_Saddle_Shield_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetPercentTamed
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// float                          Percemt                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RequiredAmount                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::GetPercentTamed(float* Percemt, float* RequiredAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetPercentTamed");

	ASpaceDolphin_Character_BP_C_GetPercentTamed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percemt != nullptr)
		*Percemt = params.Percemt;
	if (RequiredAmount != nullptr)
		*RequiredAmount = params.RequiredAmount;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
// (NetResponse, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           overrideTamingProgressBarIfActive (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          progressPercent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Label                          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDinoTooltipCustomTamingProgressBar");

	ASpaceDolphin_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params params;

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


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyInventoryItemChange");

	ASpaceDolphin_Character_BP_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AddSaddleActivationText
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)

void ASpaceDolphin_Character_BP_C::AddSaddleActivationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AddSaddleActivationText");

	ASpaceDolphin_Character_BP_C_AddSaddleActivationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClearSaddleActivationText
// ()

void ASpaceDolphin_Character_BP_C::ClearSaddleActivationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClearSaddleActivationText");

	ASpaceDolphin_Character_BP_C_ClearSaddleActivationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPBecomeAdult
// ()

void ASpaceDolphin_Character_BP_C::BPBecomeAdult()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPBecomeAdult");

	ASpaceDolphin_Character_BP_C_BPBecomeAdult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPBecomeBaby
// ()

void ASpaceDolphin_Character_BP_C::BPBecomeBaby()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPBecomeBaby");

	ASpaceDolphin_Character_BP_C_BPBecomeBaby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateStarFoxCameraForGamepad
// ()

void ASpaceDolphin_Character_BP_C::UpdateStarFoxCameraForGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateStarFoxCameraForGamepad");

	ASpaceDolphin_Character_BP_C_UpdateStarFoxCameraForGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptTurnInput
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BP_InterceptTurnInput(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptTurnInput");

	ASpaceDolphin_Character_BP_C_BP_InterceptTurnInput_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnConsumeFood
// ()

void ASpaceDolphin_Character_BP_C::OnConsumeFood()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnConsumeFood");

	ASpaceDolphin_Character_BP_C_OnConsumeFood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUntamedConsumeFoodItem
// ()
// Parameters:
// class UPrimalItem**            foodItem                       (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::BPUntamedConsumeFoodItem(class UPrimalItem** foodItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUntamedConsumeFoodItem");

	ASpaceDolphin_Character_BP_C_BPUntamedConsumeFoodItem_Params params;
	params.foodItem = foodItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPTamedConsumeFoodItem
// ()
// Parameters:
// class UPrimalItem**            foodItem                       (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::BPTamedConsumeFoodItem(class UPrimalItem** foodItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPTamedConsumeFoodItem");

	ASpaceDolphin_Character_BP_C_BPTamedConsumeFoodItem_Params params;
	params.foodItem = foodItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPModifyControlRotation
// ()
// Parameters:
// struct FRotator                ControlRotation                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                outControlRotation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BPModifyControlRotation(struct FRotator* ControlRotation, struct FRotator* outControlRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPModifyControlRotation");

	ASpaceDolphin_Character_BP_C_BPModifyControlRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ControlRotation != nullptr)
		*ControlRotation = params.ControlRotation;
	if (outControlRotation != nullptr)
		*outControlRotation = params.outControlRotation;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetLastTimeChargedLaserHit
// ()
// Parameters:
// double                         val                            (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::SetLastTimeChargedLaserHit(double val)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetLastTimeChargedLaserHit");

	ASpaceDolphin_Character_BP_C_SetLastTimeChargedLaserHit_Params params;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Materials
// (NetRequest, Event, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::STATIC_Update_Materials(class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Materials");

	ASpaceDolphin_Character_BP_C_Update_Materials_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is FPV Public
// ()
// Parameters:
// bool                           retVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::Is_FPV_Public(bool* retVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is FPV Public");

	ASpaceDolphin_Character_BP_C_Is_FPV_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retVal != nullptr)
		*retVal = params.retVal;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.isFPV
// ()
// Parameters:
// bool                           retVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraLoc                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::isFPV(bool* retVal, struct FVector* CameraLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.isFPV");

	ASpaceDolphin_Character_BP_C_isFPV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retVal != nullptr)
		*retVal = params.retVal;
	if (CameraLoc != nullptr)
		*CameraLoc = params.CameraLoc;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveEndPlay");

	ASpaceDolphin_Character_BP_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyLevelUp
// ()
// Parameters:
// int*                           ExtraCharacterLevel            (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::BPNotifyLevelUp(int* ExtraCharacterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyLevelUp");

	ASpaceDolphin_Character_BP_C_BPNotifyLevelUp_Params params;
	params.ExtraCharacterLevel = ExtraCharacterLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSpinningPublic
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           Right                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::IsSpinningPublic(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSpinningPublic");

	ASpaceDolphin_Character_BP_C_IsSpinningPublic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Right != nullptr)
		*Right = params.Right;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateBarrelRoll
// ()

void ASpaceDolphin_Character_BP_C::UpdateBarrelRoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateBarrelRoll");

	ASpaceDolphin_Character_BP_C_UpdateBarrelRoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserDamage
// ()
// Parameters:
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpaceDolphin_Character_BP_C::GetLaserDamage(class AActor* HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserDamage");

	ASpaceDolphin_Character_BP_C_GetLaserDamage_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDamageReductionPercentFromLaserLevel
// ()
// Parameters:
// float                          Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::GetDamageReductionPercentFromLaserLevel(float* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDamageReductionPercentFromLaserLevel");

	ASpaceDolphin_Character_BP_C_GetDamageReductionPercentFromLaserLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetTamedWalkingSpeedModifierForLaserLevel
// ()
// Parameters:
// float                          TamedWalkingSpeedModifier      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::GetTamedWalkingSpeedModifierForLaserLevel(float* TamedWalkingSpeedModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetTamedWalkingSpeedModifierForLaserLevel");

	ASpaceDolphin_Character_BP_C_GetTamedWalkingSpeedModifierForLaserLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TamedWalkingSpeedModifier != nullptr)
		*TamedWalkingSpeedModifier = params.TamedWalkingSpeedModifier;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserLevelDowngradeTime
// ()
// Parameters:
// float                          LaserLevelDowngradeTime        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::GetLaserLevelDowngradeTime(float* LaserLevelDowngradeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserLevelDowngradeTime");

	ASpaceDolphin_Character_BP_C_GetLaserLevelDowngradeTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LaserLevelDowngradeTime != nullptr)
		*LaserLevelDowngradeTime = params.LaserLevelDowngradeTime;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChargedLaserProj
// ()
// Parameters:
// class UClass*                  ChargedLaserProjectile         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::GetChargedLaserProj(class UClass** ChargedLaserProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChargedLaserProj");

	ASpaceDolphin_Character_BP_C_GetChargedLaserProj_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChargedLaserProjectile != nullptr)
		*ChargedLaserProjectile = params.ChargedLaserProjectile;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserPFX
// ()
// Parameters:
// int                            LaserLevel                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* ASpaceDolphin_Character_BP_C::GetLaserPFX(int* LaserLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserPFX");

	ASpaceDolphin_Character_BP_C_GetLaserPFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LaserLevel != nullptr)
		*LaserLevel = params.LaserLevel;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetTargetingDesirability
// ()
// Parameters:
// class AActor**                 Attacker                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpaceDolphin_Character_BP_C::BPGetTargetingDesirability(class AActor** Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetTargetingDesirability");

	ASpaceDolphin_Character_BP_C_BPGetTargetingDesirability_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChanceToSpawnSpaceWhale
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpaceDolphin_Character_BP_C::GetChanceToSpawnSpaceWhale()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChanceToSpawnSpaceWhale");

	ASpaceDolphin_Character_BP_C_GetChanceToSpawnSpaceWhale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SpawnSpaceWhale
// ()

void ASpaceDolphin_Character_BP_C::SpawnSpaceWhale()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SpawnSpaceWhale");

	ASpaceDolphin_Character_BP_C_SpawnSpaceWhale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Try Spawn Space Whale
// ()

void ASpaceDolphin_Character_BP_C::Try_Spawn_Space_Whale()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Try Spawn Space Whale");

	ASpaceDolphin_Character_BP_C_Try_Spawn_Space_Whale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWildDemands
// ()
// Parameters:
// bool                           ResetWildDemand                (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::UpdateWildDemands(bool ResetWildDemand)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWildDemands");

	ASpaceDolphin_Character_BP_C_UpdateWildDemands_Params params;
	params.ResetWildDemand = ResetWildDemand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasWildDemands
// ()
// Parameters:
// bool                           HasDemands                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumPets                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumFood                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::HasWildDemands(bool* HasDemands, int* NumPets, int* NumFood)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasWildDemands");

	ASpaceDolphin_Character_BP_C_HasWildDemands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasDemands != nullptr)
		*HasDemands = params.HasDemands;
	if (NumPets != nullptr)
		*NumPets = params.NumPets;
	if (NumFood != nullptr)
		*NumFood = params.NumFood;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TriggerWildAngerFn
// ()

void ASpaceDolphin_Character_BP_C::TriggerWildAngerFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TriggerWildAngerFn");

	ASpaceDolphin_Character_BP_C_TriggerWildAngerFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsAngryWildDino
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// float                          DistanceSq                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::IsAngryWildDino(float* DistanceSq)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsAngryWildDino");

	ASpaceDolphin_Character_BP_C_IsAngryWildDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DistanceSq != nullptr)
		*DistanceSq = params.DistanceSq;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NearbyAngryDolphin
// ()
// Parameters:
// class ASpaceDolphin_Character_BP_C* AngryDolphin                   (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::NearbyAngryDolphin(class ASpaceDolphin_Character_BP_C* AngryDolphin, class AShooterCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NearbyAngryDolphin");

	ASpaceDolphin_Character_BP_C_NearbyAngryDolphin_Params params;
	params.AngryDolphin = AngryDolphin;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPShouldForceFlee");

	ASpaceDolphin_Character_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWild
// ()

void ASpaceDolphin_Character_BP_C::UpdateWild()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWild");

	ASpaceDolphin_Character_BP_C_UpdateWild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPTryMultiUse");

	ASpaceDolphin_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetMultiUseEntries
// (Net, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ASpaceDolphin_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetMultiUseEntries");

	ASpaceDolphin_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintAdjustOutputDamage
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpaceDolphin_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintAdjustOutputDamage");

	ASpaceDolphin_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireChaff
// ()

void ASpaceDolphin_Character_BP_C::FireChaff()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireChaff");

	ASpaceDolphin_Character_BP_C_FireChaff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EchoLocation
// ()

void ASpaceDolphin_Character_BP_C::EchoLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EchoLocation");

	ASpaceDolphin_Character_BP_C_EchoLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateGroundFX
// (NetRequest, Native, NetResponse, Static, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)

void ASpaceDolphin_Character_BP_C::STATIC_UpdateGroundFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateGroundFX");

	ASpaceDolphin_Character_BP_C_UpdateGroundFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DoLaserTraceAndDamage
// (NetRequest, Exec, Event, NetMulticast, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RetStart                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RetEnd                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ImpactCharacterOrStructure     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::DoLaserTraceAndDamage(const struct FVector& Start, const struct FVector& End, struct FVector* RetStart, struct FVector* RetEnd, bool* Ret, bool* ImpactCharacterOrStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DoLaserTraceAndDamage");

	ASpaceDolphin_Character_BP_C_DoLaserTraceAndDamage_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetStart != nullptr)
		*RetStart = params.RetStart;
	if (RetEnd != nullptr)
		*RetEnd = params.RetEnd;
	if (Ret != nullptr)
		*Ret = params.Ret;
	if (ImpactCharacterOrStructure != nullptr)
		*ImpactCharacterOrStructure = params.ImpactCharacterOrStructure;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateStarFoxCollision
// ()

void ASpaceDolphin_Character_BP_C::UpdateStarFoxCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateStarFoxCollision");

	ASpaceDolphin_Character_BP_C_UpdateStarFoxCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpateBarrelRollFX
// ()

void ASpaceDolphin_Character_BP_C::UpateBarrelRollFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpateBarrelRollFX");

	ASpaceDolphin_Character_BP_C_UpateBarrelRollFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRotatingComponent
// (NetReliable, Exec, NetResponse, Static, NetMulticast, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)

void ASpaceDolphin_Character_BP_C::STATIC_UpdateRotatingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRotatingComponent");

	ASpaceDolphin_Character_BP_C_UpdateRotatingComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LastLaserLevelUpTime
// ()

void ASpaceDolphin_Character_BP_C::OnRep_LastLaserLevelUpTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LastLaserLevelUpTime");

	ASpaceDolphin_Character_BP_C_OnRep_LastLaserLevelUpTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Downgrade Laser Level
// ()

void ASpaceDolphin_Character_BP_C::Downgrade_Laser_Level()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Downgrade Laser Level");

	ASpaceDolphin_Character_BP_C_Downgrade_Laser_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Drifting Public
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           DriftingInput                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Right                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         DriftEndTime                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::Is_Drifting_Public(bool* DriftingInput, bool* Right, double* DriftEndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Drifting Public");

	ASpaceDolphin_Character_BP_C_Is_Drifting_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DriftingInput != nullptr)
		*DriftingInput = params.DriftingInput;
	if (Right != nullptr)
		*Right = params.Right;
	if (DriftEndTime != nullptr)
		*DriftEndTime = params.DriftEndTime;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DeactiveDriftJets
// ()

void ASpaceDolphin_Character_BP_C::DeactiveDriftJets()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DeactiveDriftJets");

	ASpaceDolphin_Character_BP_C_DeactiveDriftJets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDrifting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           DriftingInput                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Right                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         DriftEndTime                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsFinishingDrift               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::IsDrifting(bool* DriftingInput, bool* Right, double* DriftEndTime, bool* IsFinishingDrift)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDrifting");

	ASpaceDolphin_Character_BP_C_IsDrifting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DriftingInput != nullptr)
		*DriftingInput = params.DriftingInput;
	if (Right != nullptr)
		*Right = params.Right;
	if (DriftEndTime != nullptr)
		*DriftEndTime = params.DriftEndTime;
	if (IsFinishingDrift != nullptr)
		*IsFinishingDrift = params.IsFinishingDrift;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDriftInputStrength
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// float                          ReturnValueBase                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

float ASpaceDolphin_Character_BP_C::GetDriftInputStrength(float* ReturnValueBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDriftInputStrength");

	ASpaceDolphin_Character_BP_C_GetDriftInputStrength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnValueBase != nullptr)
		*ReturnValueBase = params.ReturnValueBase;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDrifting
// ()

void ASpaceDolphin_Character_BP_C::UpdateDrifting()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDrifting");

	ASpaceDolphin_Character_BP_C_UpdateDrifting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSaddle
// ()

void ASpaceDolphin_Character_BP_C::UpdateSaddle()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSaddle");

	ASpaceDolphin_Character_BP_C_UpdateSaddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryDoStarFoxModeCollisionDamage
// ()

void ASpaceDolphin_Character_BP_C::TryDoStarFoxModeCollisionDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryDoStarFoxModeCollisionDamage");

	ASpaceDolphin_Character_BP_C_TryDoStarFoxModeCollisionDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveActorBeginOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveActorBeginOverlap");

	ASpaceDolphin_Character_BP_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveActorEndOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveActorEndOverlap");

	ASpaceDolphin_Character_BP_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Camera YScalar
// (Exec, Event, NetResponse, Static, Public, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// float                          StarFoxModeCameraXOffsetScalar (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::STATIC_Get_Camera_YScalar(float* StarFoxModeCameraXOffsetScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Camera YScalar");

	ASpaceDolphin_Character_BP_C_Get_Camera_YScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StarFoxModeCameraXOffsetScalar != nullptr)
		*StarFoxModeCameraXOffsetScalar = params.StarFoxModeCameraXOffsetScalar;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_CurrentSpline
// ()

void ASpaceDolphin_Character_BP_C::OnRep_CurrentSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_CurrentSpline");

	ASpaceDolphin_Character_BP_C_OnRep_CurrentSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_PreventMovementMode");

	ASpaceDolphin_Character_BP_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CanBarrelRoll
// ()
// Parameters:
// bool                           Res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::CanBarrelRoll(bool* Res)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CanBarrelRoll");

	ASpaceDolphin_Character_BP_C_CanBarrelRoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Res != nullptr)
		*Res = params.Res;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDoingBarrelRoll
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Anim                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         LastBarrelRollStartTime        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::IsDoingBarrelRoll(bool* Ret, class UAnimMontage** Anim, double* LastBarrelRollStartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDoingBarrelRoll");

	ASpaceDolphin_Character_BP_C_IsDoingBarrelRoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (Anim != nullptr)
		*Anim = params.Anim;
	if (LastBarrelRollStartTime != nullptr)
		*LastBarrelRollStartTime = params.LastBarrelRollStartTime;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BarrelRoll
// ()
// Parameters:
// int                            Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraDirection                (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::BarrelRoll(int Direction, const struct FVector& CameraDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BarrelRoll");

	ASpaceDolphin_Character_BP_C_BarrelRoll_Params params;
	params.Direction = Direction;
	params.CameraDirection = CameraDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Braking Public
// ()
// Parameters:
// bool                           IsBraking                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         TimeStartedBraking             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::Is_Braking_Public(bool* IsBraking, double* TimeStartedBraking)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Braking Public");

	ASpaceDolphin_Character_BP_C_Is_Braking_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsBraking != nullptr)
		*IsBraking = params.IsBraking;
	if (TimeStartedBraking != nullptr)
		*TimeStartedBraking = params.TimeStartedBraking;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Braking
// ()
// Parameters:
// bool                           IsBraking                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         TimeStartedBraking             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::Is_Braking(bool* IsBraking, double* TimeStartedBraking)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Braking");

	ASpaceDolphin_Character_BP_C_Is_Braking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsBraking != nullptr)
		*IsBraking = params.IsBraking;
	if (TimeStartedBraking != nullptr)
		*TimeStartedBraking = params.TimeStartedBraking;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateBraking
// ()

void ASpaceDolphin_Character_BP_C::UpdateBraking()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateBraking");

	ASpaceDolphin_Character_BP_C_UpdateBraking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDrawToRiderHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::BPDrawToRiderHUD(class AShooterHUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDrawToRiderHUD");

	ASpaceDolphin_Character_BP_C_BPDrawToRiderHUD_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpinning
// ()

void ASpaceDolphin_Character_BP_C::UpdateSpinning()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpinning");

	ASpaceDolphin_Character_BP_C_UpdateSpinning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSpinning
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           Right                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::IsSpinning(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSpinning");

	ASpaceDolphin_Character_BP_C_IsSpinning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Right != nullptr)
		*Right = params.Right;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DestroyProjectile
// ()

void ASpaceDolphin_Character_BP_C::DestroyProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DestroyProjectile");

	ASpaceDolphin_Character_BP_C_DestroyProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Flak Cannon Parameters
// ()
// Parameters:
// class AShooterProjectile*      Projectile                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::Get_Flak_Cannon_Parameters(class AShooterProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Flak Cannon Parameters");

	ASpaceDolphin_Character_BP_C_Get_Flak_Cannon_Parameters_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsStarFoxMode
// ()
// Parameters:
// class AMissionSpline*          CurrentSpline                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// double                         RetRiderSetTime                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           RetIsRiderWarmup               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::IsStarFoxMode(class AMissionSpline** CurrentSpline, double* RetRiderSetTime, bool* RetIsRiderWarmup)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsStarFoxMode");

	ASpaceDolphin_Character_BP_C_IsStarFoxMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentSpline != nullptr)
		*CurrentSpline = params.CurrentSpline;
	if (RetRiderSetTime != nullptr)
		*RetRiderSetTime = params.RetRiderSetTime;
	if (RetIsRiderWarmup != nullptr)
		*RetIsRiderWarmup = params.RetIsRiderWarmup;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ValidateSpline
// ()
// Parameters:
// class AMissionSpline*          Spline                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::ValidateSpline(class AMissionSpline* Spline)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ValidateSpline");

	ASpaceDolphin_Character_BP_C_ValidateSpline_Params params;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpline
// ()

void ASpaceDolphin_Character_BP_C::UpdateSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpline");

	ASpaceDolphin_Character_BP_C_UpdateSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPServerHandleNetExecCommand");

	ASpaceDolphin_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPKilledSomethingEvent
// ()
// Parameters:
// class APrimalCharacter**       killedTarget                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::BPKilledSomethingEvent(class APrimalCharacter** killedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPKilledSomethingEvent");

	ASpaceDolphin_Character_BP_C_BPKilledSomethingEvent_Params params;
	params.killedTarget = killedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDualLasers
// ()
// Parameters:
// bool                           DualLasers                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::IsDualLasers(bool* DualLasers)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDualLasers");

	ASpaceDolphin_Character_BP_C_IsDualLasers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DualLasers != nullptr)
		*DualLasers = params.DualLasers;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CanLoop
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::CanLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CanLoop");

	ASpaceDolphin_Character_BP_C_CanLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsChargingLaser
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::IsChargingLaser()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsChargingLaser");

	ASpaceDolphin_Character_BP_C_IsChargingLaser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairSpread
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpaceDolphin_Character_BP_C::BPGetCrosshairSpread()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairSpread");

	ASpaceDolphin_Character_BP_C_BPGetCrosshairSpread_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLoop
// (NetReliable, NetRequest, Event, NetResponse, Static, Public, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)

void ASpaceDolphin_Character_BP_C::STATIC_UpdateLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLoop");

	ASpaceDolphin_Character_BP_C_UpdateLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPAcknowledgeServerCorrection
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

bool ASpaceDolphin_Character_BP_C::BPAcknowledgeServerCorrection(float* TimeStamp, struct FVector* NewLoc, struct FVector* NewVel, class UPrimitiveComponent** NewBase, struct FName* NewBaseBoneName, bool* bHasBase, bool* bBaseRelativePosition, unsigned char* ServerMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPAcknowledgeServerCorrection");

	ASpaceDolphin_Character_BP_C_BPAcknowledgeServerCorrection_Params params;
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


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EndLoop
// ()

void ASpaceDolphin_Character_BP_C::EndLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EndLoop");

	ASpaceDolphin_Character_BP_C_EndLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartLoop
// ()
// Parameters:
// bool                           Immelmann                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::StartLoop(bool Immelmann)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartLoop");

	ASpaceDolphin_Character_BP_C_StartLoop_Params params;
	params.Immelmann = Immelmann;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor ASpaceDolphin_Character_BP_C::BPGetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairColor");

	ASpaceDolphin_Character_BP_C_BPGetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Try Get ChargedLaserTarget
// (NetReliable, Event, NetResponse, Static, NetMulticast, Public, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class AActor*                  Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::STATIC_Try_Get_ChargedLaserTarget(class AActor** Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Try Get ChargedLaserTarget");

	ASpaceDolphin_Character_BP_C_Try_Get_ChargedLaserTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OwningClientTryFireChargedLaser
// ()

void ASpaceDolphin_Character_BP_C::OwningClientTryFireChargedLaser()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OwningClientTryFireChargedLaser");

	ASpaceDolphin_Character_BP_C_OwningClientTryFireChargedLaser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChargedLaserParameters
// ()
// Parameters:
// class AShooterProjectile*      Projectile                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ChargeTime                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::GetChargedLaserParameters(class AShooterProjectile* Projectile, float* ChargeTime, class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChargedLaserParameters");

	ASpaceDolphin_Character_BP_C_GetChargedLaserParameters_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChargeTime != nullptr)
		*ChargeTime = params.ChargeTime;
	if (Target != nullptr)
		*Target = params.Target;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireChargedLaser
// (Exec, Native, Event, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 Dir                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ChargeTime                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::FireChargedLaser(const struct FVector& Dir, const struct FVector& Loc, class AActor* Target, float ChargeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireChargedLaser");

	ASpaceDolphin_Character_BP_C_FireChargedLaser_Params params;
	params.Dir = Dir;
	params.Loc = Loc;
	params.Target = Target;
	params.ChargeTime = ChargeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Owning Client Try FireLasers
// (NetRequest, Native, NetResponse, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)

void ASpaceDolphin_Character_BP_C::Owning_Client_Try_FireLasers()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Owning Client Try FireLasers");

	ASpaceDolphin_Character_BP_C_Owning_Client_Try_FireLasers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireLasers
// ()
// Parameters:
// struct FVector                 Dir                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::FireLasers(const struct FVector& Dir, const struct FVector& Loc, const struct FName& Socket, const struct FVector& Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireLasers");

	ASpaceDolphin_Character_BP_C_FireLasers_Params params;
	params.Dir = Dir;
	params.Loc = Loc;
	params.Socket = Socket;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetSaddleColor
// ()
// Parameters:
// int                            Region                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::GetSaddleColor(int Region, struct FLinearColor* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetSaddleColor");

	ASpaceDolphin_Character_BP_C_GetSaddleColor_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingWindGust
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         StartTime                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::IsUsingWindGust(bool* Ret, double* StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingWindGust");

	ASpaceDolphin_Character_BP_C_IsUsingWindGust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (StartTime != nullptr)
		*StartTime = params.StartTime;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingForwardInput
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::IsUsingForwardInput(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingForwardInput");

	ASpaceDolphin_Character_BP_C_IsUsingForwardInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUnsetupDinoTameable
// ()

void ASpaceDolphin_Character_BP_C::BPUnsetupDinoTameable()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUnsetupDinoTameable");

	ASpaceDolphin_Character_BP_C_BPUnsetupDinoTameable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BSetupDinoTameable
// ()

void ASpaceDolphin_Character_BP_C::BSetupDinoTameable()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BSetupDinoTameable");

	ASpaceDolphin_Character_BP_C_BSetupDinoTameable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRiderSocket
// ()

void ASpaceDolphin_Character_BP_C::UpdateRiderSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRiderSocket");

	ASpaceDolphin_Character_BP_C_UpdateRiderSocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetOverrideSocket
// ()
// Parameters:
// struct FName*                  From                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ASpaceDolphin_Character_BP_C::GetOverrideSocket(struct FName* From)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetOverrideSocket");

	ASpaceDolphin_Character_BP_C_GetOverrideSocket_Params params;
	params.From = From;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AllowWakingTame
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::AllowWakingTame(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AllowWakingTame");

	ASpaceDolphin_Character_BP_C_AllowWakingTame_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OwningClientTryFlakCannonFire
// ()

void ASpaceDolphin_Character_BP_C::OwningClientTryFlakCannonFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OwningClientTryFlakCannonFire");

	ASpaceDolphin_Character_BP_C_OwningClientTryFlakCannonFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InterceptInputEvent
// ()
// Parameters:
// class FString*                 InputName                      (Parm, ZeroConstructor)

void ASpaceDolphin_Character_BP_C::InterceptInputEvent(class FString* InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InterceptInputEvent");

	ASpaceDolphin_Character_BP_C_InterceptInputEvent_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AllowPlayMontage
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::AllowPlayMontage(class UAnimMontage** AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AllowPlayMontage");

	ASpaceDolphin_Character_BP_C_AllowPlayMontage_Params params;
	params.AnimMontage = AnimMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDinoLevelUpAnimation
// ()
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* ASpaceDolphin_Character_BP_C::GetDinoLevelUpAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDinoLevelUpAnimation");

	ASpaceDolphin_Character_BP_C_GetDinoLevelUpAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTaming
// ()

void ASpaceDolphin_Character_BP_C::UpdateTaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTaming");

	ASpaceDolphin_Character_BP_C_UpdateTaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPShowTamingPanel
// ()
// Parameters:
// bool*                          currentVisibility              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BPShowTamingPanel(bool* currentVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPShowTamingPanel");

	ASpaceDolphin_Character_BP_C_BPShowTamingPanel_Params params;
	params.currentVisibility = currentVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetTamingBuff
// ()
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             Buff                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::GetTamingBuff(bool* IsValid, class APrimalBuff** Buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetTamingBuff");

	ASpaceDolphin_Character_BP_C_GetTamingBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (Buff != nullptr)
		*Buff = params.Buff;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintCanAttack");

	ASpaceDolphin_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpaceDolphin_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPAdjustDamage");

	ASpaceDolphin_Character_BP_C_BPAdjustDamage_Params params;
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


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Replicated Control Rotation Public
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ASpaceDolphin_Character_BP_C::Get_Replicated_Control_Rotation_Public()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Replicated Control Rotation Public");

	ASpaceDolphin_Character_BP_C_Get_Replicated_Control_Rotation_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsPlayingBlockingAnim
// ()
// Parameters:
// bool                           ReturnVal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::IsPlayingBlockingAnim(bool* ReturnVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsPlayingBlockingAnim");

	ASpaceDolphin_Character_BP_C_IsPlayingBlockingAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnVal != nullptr)
		*ReturnVal = params.ReturnVal;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Drafting Public
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           DraftAcked                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::Is_Using_Drafting_Public(bool* DraftAcked)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Drafting Public");

	ASpaceDolphin_Character_BP_C_Is_Using_Drafting_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DraftAcked != nullptr)
		*DraftAcked = params.DraftAcked;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingDrafting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           DraftAcked                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::IsUsingDrafting(bool* DraftAcked)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingDrafting");

	ASpaceDolphin_Character_BP_C_IsUsingDrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DraftAcked != nullptr)
		*DraftAcked = params.DraftAcked;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetRiderSocket
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ASpaceDolphin_Character_BP_C::BPGetRiderSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetRiderSocket");

	ASpaceDolphin_Character_BP_C_BPGetRiderSocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsJumpHeld
// (Net, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::STATIC_IsJumpHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsJumpHeld");

	ASpaceDolphin_Character_BP_C_IsJumpHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnDinoCheat
// (Net, NetReliable, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::STATIC_BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnDinoCheat");

	ASpaceDolphin_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetReplicatedControlRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ASpaceDolphin_Character_BP_C::GetReplicatedControlRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetReplicatedControlRotation");

	ASpaceDolphin_Character_BP_C_GetReplicatedControlRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveTick");

	ASpaceDolphin_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDoAttack");

	ASpaceDolphin_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairAlpha
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpaceDolphin_Character_BP_C::BPGetCrosshairAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairAlpha");

	ASpaceDolphin_Character_BP_C_BPGetCrosshairAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsFlakCannonOnCooldown
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::IsFlakCannonOnCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsFlakCannonOnCooldown");

	ASpaceDolphin_Character_BP_C_IsFlakCannonOnCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairLocation
// (NetReliable, Exec, MulticastDelegate, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         CanvasClipX                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CanvasClipY                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutX                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutY                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::BPGetCrosshairLocation(float* CanvasClipX, float* CanvasClipY, float* OutX, float* OutY)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairLocation");

	ASpaceDolphin_Character_BP_C_BPGetCrosshairLocation_Params params;
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


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ConsumeItem
// ()
// Parameters:
// class UClass*                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ConsumeItem(class UClass* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ConsumeItem");

	ASpaceDolphin_Character_BP_C_ConsumeItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasAmmo
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// int                            Quantity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::HasAmmo(int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasAmmo");

	ASpaceDolphin_Character_BP_C_HasAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Quantity != nullptr)
		*Quantity = params.Quantity;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnStopJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BPOnStopJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnStopJump");

	ASpaceDolphin_Character_BP_C_BPOnStopJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Fire Flak Cannon
// (Exec, Native, Event, NetResponse, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 Dir                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::Fire_Flak_Cannon(const struct FVector& Dir, const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Fire Flak Cannon");

	ASpaceDolphin_Character_BP_C_Fire_Flak_Cannon_Params params;
	params.Dir = Dir;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Has Saddle Public
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           RetIsSuperSaddle               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::Has_Saddle_Public(bool* Ret, bool* RetIsSuperSaddle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Has Saddle Public");

	ASpaceDolphin_Character_BP_C_Has_Saddle_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (RetIsSuperSaddle != nullptr)
		*RetIsSuperSaddle = params.RetIsSuperSaddle;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnInventoryItemGrind
// ()

void ASpaceDolphin_Character_BP_C::OnInventoryItemGrind()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnInventoryItemGrind");

	ASpaceDolphin_Character_BP_C_OnInventoryItemGrind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWindGustCooldownVFX
// ()

void ASpaceDolphin_Character_BP_C::UpdateWindGustCooldownVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWindGustCooldownVFX");

	ASpaceDolphin_Character_BP_C_UpdateWindGustCooldownVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASpaceDolphin_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	ASpaceDolphin_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryInterruptLanding
// ()
// Parameters:
// TEnumAsByte<EMovementMode>     Selection                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::TryInterruptLanding(TEnumAsByte<EMovementMode> Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryInterruptLanding");

	ASpaceDolphin_Character_BP_C_TryInterruptLanding_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_SuperFlight
// ()

void ASpaceDolphin_Character_BP_C::OnRep_SuperFlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_SuperFlight");

	ASpaceDolphin_Character_BP_C_OnRep_SuperFlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetSuperFlight
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerVFX                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::SetSuperFlight(bool Value, bool TriggerVFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetSuperFlight");

	ASpaceDolphin_Character_BP_C_SetSuperFlight_Params params;
	params.Value = Value;
	params.TriggerVFX = TriggerVFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Current Percent Of Max Fly Speed Public
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpaceDolphin_Character_BP_C::Get_Current_Percent_Of_Max_Fly_Speed_Public()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Current Percent Of Max Fly Speed Public");

	ASpaceDolphin_Character_BP_C_Get_Current_Percent_Of_Max_Fly_Speed_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Super Flight Public
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         StartedEndingTime              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::Is_Using_Super_Flight_Public(bool* Ret, double* StartedEndingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Super Flight Public");

	ASpaceDolphin_Character_BP_C_Is_Using_Super_Flight_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (StartedEndingTime != nullptr)
		*StartedEndingTime = params.StartedEndingTime;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingSuperFlight
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         StartedEndingTime              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::IsUsingSuperFlight(bool* Ret, double* StartedEndingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingSuperFlight");

	ASpaceDolphin_Character_BP_C_IsUsingSuperFlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (StartedEndingTime != nullptr)
		*StartedEndingTime = params.StartedEndingTime;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightBoost
// ()

void ASpaceDolphin_Character_BP_C::UpdateSuperFlightBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightBoost");

	ASpaceDolphin_Character_BP_C_UpdateSuperFlightBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Super Flight Boost Public
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::Is_Using_Super_Flight_Boost_Public()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Super Flight Boost Public");

	ASpaceDolphin_Character_BP_C_Is_Using_Super_Flight_Boost_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingSuperFlightBoost
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// double                         StartTime                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::IsUsingSuperFlightBoost(double* StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingSuperFlightBoost");

	ASpaceDolphin_Character_BP_C_IsUsingSuperFlightBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartTime != nullptr)
		*StartTime = params.StartTime;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetDragSocketName
// ()
// Parameters:
// class APrimalCharacter**       DraggingChar                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ASpaceDolphin_Character_BP_C::BPGetDragSocketName(class APrimalCharacter** DraggingChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetDragSocketName");

	ASpaceDolphin_Character_BP_C_BPGetDragSocketName_Params params;
	params.DraggingChar = DraggingChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnCarriedStruggle
// ()

void ASpaceDolphin_Character_BP_C::OnCarriedStruggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnCarriedStruggle");

	ASpaceDolphin_Character_BP_C_OnCarriedStruggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingWingGust
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::IsUsingWingGust()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingWingGust");

	ASpaceDolphin_Character_BP_C_IsUsingWingGust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Jet FX
// ()

void ASpaceDolphin_Character_BP_C::Update_Jet_FX()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Jet FX");

	ASpaceDolphin_Character_BP_C_Update_Jet_FX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasFuel
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// int                            Quantity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::HasFuel(int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasFuel");

	ASpaceDolphin_Character_BP_C_HasFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Quantity != nullptr)
		*Quantity = params.Quantity;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateFuel
// ()

void ASpaceDolphin_Character_BP_C::UpdateFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateFuel");

	ASpaceDolphin_Character_BP_C_UpdateFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDidSetCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDidSetCarriedCharacter");

	ASpaceDolphin_Character_BP_C_BPDidSetCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasSaddle
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           RetIsSuperSaddle               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::HasSaddle(bool* Ret, bool* RetIsSuperSaddle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasSaddle");

	ASpaceDolphin_Character_BP_C_HasSaddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (RetIsSuperSaddle != nullptr)
		*RetIsSuperSaddle = params.RetIsSuperSaddle;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDrafting
// ()

void ASpaceDolphin_Character_BP_C::UpdateDrafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDrafting");

	ASpaceDolphin_Character_BP_C_UpdateDrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetDragSocketDinoName
// ()
// Parameters:
// class APrimalDinoCharacter**   aGrabbedDino                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ASpaceDolphin_Character_BP_C::BPGetDragSocketDinoName(class APrimalDinoCharacter** aGrabbedDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetDragSocketDinoName");

	ASpaceDolphin_Character_BP_C_BPGetDragSocketDinoName_Params params;
	params.aGrabbedDino = aGrabbedDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightStateData
// ()

void ASpaceDolphin_Character_BP_C::UpdateSuperFlightStateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightStateData");

	ASpaceDolphin_Character_BP_C_UpdateSuperFlightStateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateAcceleration
// ()

void ASpaceDolphin_Character_BP_C::UpdateAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateAcceleration");

	ASpaceDolphin_Character_BP_C_UpdateAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRotationRate
// ()

void ASpaceDolphin_Character_BP_C::UpdateRotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRotationRate");

	ASpaceDolphin_Character_BP_C_UpdateRotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateAllyAOE
// ()

void ASpaceDolphin_Character_BP_C::UpdateAllyAOE()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateAllyAOE");

	ASpaceDolphin_Character_BP_C_UpdateAllyAOE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetWindGustEpicenter
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ASpaceDolphin_Character_BP_C::GetWindGustEpicenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetWindGustEpicenter");

	ASpaceDolphin_Character_BP_C_GetWindGustEpicenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DoWing GustAOE
// (NetReliable, NetResponse, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)

void ASpaceDolphin_Character_BP_C::DoWing_GustAOE()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DoWing GustAOE");

	ASpaceDolphin_Character_BP_C_DoWing_GustAOE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Diving Public
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         TimeDiveStart                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::Is_Diving_Public(bool* Ret, double* TimeDiveStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Diving Public");

	ASpaceDolphin_Character_BP_C_Is_Diving_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (TimeDiveStart != nullptr)
		*TimeDiveStart = params.TimeDiveStart;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifySetRider");

	ASpaceDolphin_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTPVOffset
// ()

void ASpaceDolphin_Character_BP_C::UpdateTPVOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTPVOffset");

	ASpaceDolphin_Character_BP_C_UpdateTPVOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateCheckQuickTurn
// ()

void ASpaceDolphin_Character_BP_C::UpdateCheckQuickTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateCheckQuickTurn");

	ASpaceDolphin_Character_BP_C_UpdateCheckQuickTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpeed
// ()

void ASpaceDolphin_Character_BP_C::UpdateSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpeed");

	ASpaceDolphin_Character_BP_C_UpdateSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDiving
// ()

void ASpaceDolphin_Character_BP_C::UpdateDiving()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDiving");

	ASpaceDolphin_Character_BP_C_UpdateDiving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDiving
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         TimeDiveStart                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         TimeStoppedDiving              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::IsDiving(bool* Ret, double* TimeDiveStart, double* TimeStoppedDiving)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDiving");

	ASpaceDolphin_Character_BP_C_IsDiving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (TimeDiveStart != nullptr)
		*TimeDiveStart = params.TimeDiveStart;
	if (TimeStoppedDiving != nullptr)
		*TimeStoppedDiving = params.TimeStoppedDiving;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetAnimBP
// ()
// Parameters:
// class USpaceDolphin_AnimationBP_C* Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::GetAnimBP(class USpaceDolphin_AnimationBP_C** Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetAnimBP");

	ASpaceDolphin_Character_BP_C_GetAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCurrentPercentOfMaxFlySpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpaceDolphin_Character_BP_C::GetCurrentPercentOfMaxFlySpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCurrentPercentOfMaxFlySpeed");

	ASpaceDolphin_Character_BP_C_GetCurrentPercentOfMaxFlySpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCDO
// ()
// Parameters:
// class ASpaceDolphin_Character_BP_C* Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::GetCDO(class ASpaceDolphin_Character_BP_C** Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCDO");

	ASpaceDolphin_Character_BP_C_GetCDO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Quick Turning
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::Is_Quick_Turning()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Quick Turning");

	ASpaceDolphin_Character_BP_C_Is_Quick_Turning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EndQuickTurn
// ()

void ASpaceDolphin_Character_BP_C::EndQuickTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EndQuickTurn");

	ASpaceDolphin_Character_BP_C_EndQuickTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartSuperFlightQuickTurn
// ()

void ASpaceDolphin_Character_BP_C::StartSuperFlightQuickTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartSuperFlightQuickTurn");

	ASpaceDolphin_Character_BP_C_StartSuperFlightQuickTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LastSuperFlightQuickTurn
// ()

void ASpaceDolphin_Character_BP_C::OnRep_LastSuperFlightQuickTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LastSuperFlightQuickTurn");

	ASpaceDolphin_Character_BP_C_OnRep_LastSuperFlightQuickTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightRoll
// ()

void ASpaceDolphin_Character_BP_C::UpdateSuperFlightRoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightRoll");

	ASpaceDolphin_Character_BP_C_UpdateSuperFlightRoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptMoveRight");

	ASpaceDolphin_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTrails
// ()

void ASpaceDolphin_Character_BP_C::UpdateTrails()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTrails");

	ASpaceDolphin_Character_BP_C_UpdateTrails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ActivateTrails
// ()

void ASpaceDolphin_Character_BP_C::ActivateTrails()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ActivateTrails");

	ASpaceDolphin_Character_BP_C_ActivateTrails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DeactivateTrails
// ()

void ASpaceDolphin_Character_BP_C::DeactivateTrails()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DeactivateTrails");

	ASpaceDolphin_Character_BP_C_DeactivateTrails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.RidingTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.RidingTick");

	ASpaceDolphin_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_OnStartLandingNotify
// ()

void ASpaceDolphin_Character_BP_C::BP_OnStartLandingNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_OnStartLandingNotify");

	ASpaceDolphin_Character_BP_C_BP_OnStartLandingNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideFlyingVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ASpaceDolphin_Character_BP_C::BPOverrideFlyingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideFlyingVelocity");

	ASpaceDolphin_Character_BP_C_BPOverrideFlyingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.K2_OnMovementModeChanged");

	ASpaceDolphin_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptMoveForward");

	ASpaceDolphin_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetHUDElements
// (NetReliable, NetRequest, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ASpaceDolphin_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetHUDElements");

	ASpaceDolphin_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideCameraViewTarget
// (NetReliable, Static, NetMulticast, MulticastDelegate, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
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

void ASpaceDolphin_Character_BP_C::STATIC_BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideCameraViewTarget");

	ASpaceDolphin_Character_BP_C_BPOverrideCameraViewTarget_Params params;
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


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_OnSetRunning
// ()
// Parameters:
// bool*                          bNewIsRunning                  (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::BP_OnSetRunning(bool* bNewIsRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_OnSetRunning");

	ASpaceDolphin_Character_BP_C_BP_OnSetRunning_Params params;
	params.bNewIsRunning = bNewIsRunning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyClearRider");

	ASpaceDolphin_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleOnStopTargeting");

	ASpaceDolphin_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleControllerInitiatedAttack");

	ASpaceDolphin_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPModifyDesiredRotation
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InDesiredRotation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                OutDesiredRotation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BPModifyDesiredRotation(float* DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPModifyDesiredRotation");

	ASpaceDolphin_Character_BP_C_BPModifyDesiredRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDesiredRotation != nullptr)
		*InDesiredRotation = params.InDesiredRotation;
	if (OutDesiredRotation != nullptr)
		*OutDesiredRotation = params.OutDesiredRotation;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPSetupTamed");

	ASpaceDolphin_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnStartJump");

	ASpaceDolphin_Character_BP_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleUseButtonPress
// ()
// Parameters:
// class AShooterPlayerController** RiderController                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphin_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController** RiderController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleUseButtonPress");

	ASpaceDolphin_Character_BP_C_BPHandleUseButtonPress_Params params;
	params.RiderController = RiderController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DisableCameraInterpolation
// ()

void ASpaceDolphin_Character_BP_C::DisableCameraInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DisableCameraInterpolation");

	ASpaceDolphin_Character_BP_C_DisableCameraInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LatchingSurfaceNormal
// ()

void ASpaceDolphin_Character_BP_C::OnRep_LatchingSurfaceNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LatchingSurfaceNormal");

	ASpaceDolphin_Character_BP_C_OnRep_LatchingSurfaceNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLatchedDinoCamera
// ()

void ASpaceDolphin_Character_BP_C::UpdateLatchedDinoCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLatchedDinoCamera");

	ASpaceDolphin_Character_BP_C_UpdateLatchedDinoCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Controller Follow ActorRotation
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::Controller_Follow_ActorRotation(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Controller Follow ActorRotation");

	ASpaceDolphin_Character_BP_C_Controller_Follow_ActorRotation_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReferenceLatchingObjects
// (Exec, Native, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)

void ASpaceDolphin_Character_BP_C::ReferenceLatchingObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReferenceLatchingObjects");

	ASpaceDolphin_Character_BP_C_ReferenceLatchingObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LineTrace
// (NetReliable, NetRequest, Exec, Event, Static, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           BackwardLatching               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hit_Somthing                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Hit_Actor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::STATIC_LineTrace(class UMeshComponent* Mesh, const struct FName& SocketName, class AActor* Actor, const struct FVector& Offset, bool BackwardLatching, bool* Hit_Somthing, struct FVector* Location, struct FVector* Normal, class AActor** Hit_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LineTrace");

	ASpaceDolphin_Character_BP_C_LineTrace_Params params;
	params.Mesh = Mesh;
	params.SocketName = SocketName;
	params.Actor = Actor;
	params.Offset = Offset;
	params.BackwardLatching = BackwardLatching;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit_Somthing != nullptr)
		*Hit_Somthing = params.Hit_Somthing;
	if (Location != nullptr)
		*Location = params.Location;
	if (Normal != nullptr)
		*Normal = params.Normal;
	if (Hit_Actor != nullptr)
		*Hit_Actor = params.Hit_Actor;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InterruptLatching
// ()

void ASpaceDolphin_Character_BP_C::InterruptLatching()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InterruptLatching");

	ASpaceDolphin_Character_BP_C_InterruptLatching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ProcessLatching
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ProcessLatching(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ProcessLatching");

	ASpaceDolphin_Character_BP_C_ProcessLatching_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryLatch
// (NetRequest, Exec, Native, Event, NetResponse, Static, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           backwardsLatching              (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::STATIC_TryLatch(const struct FVector& Offset, bool backwardsLatching)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryLatch");

	ASpaceDolphin_Character_BP_C_TryLatch_Params params;
	params.Offset = Offset;
	params.backwardsLatching = backwardsLatching;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UserConstructionScript
// ()

void ASpaceDolphin_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UserConstructionScript");

	ASpaceDolphin_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_232
// ()

void ASpaceDolphin_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_232()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_232");

	ASpaceDolphin_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_232_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_231
// ()

void ASpaceDolphin_Character_BP_C::InpActEvt_BrakeDino_K2Node_InputActionEvent_231()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_231");

	ASpaceDolphin_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_231_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_230
// ()

void ASpaceDolphin_Character_BP_C::InpActEvt_BrakeDino_K2Node_InputActionEvent_230()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_230");

	ASpaceDolphin_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_230_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_229
// ()

void ASpaceDolphin_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_229()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_229");

	ASpaceDolphin_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_229_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_228
// ()

void ASpaceDolphin_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_228()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_228");

	ASpaceDolphin_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_228_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_227
// ()

void ASpaceDolphin_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_227()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_227");

	ASpaceDolphin_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_227_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_226
// ()

void ASpaceDolphin_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_226()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_226");

	ASpaceDolphin_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_226_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_66
// ()

void ASpaceDolphin_Character_BP_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_66()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_66");

	ASpaceDolphin_Character_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_66_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_65
// ()

void ASpaceDolphin_Character_BP_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_65()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_65");

	ASpaceDolphin_Character_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_65_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_OrbitCam_K2Node_InputActionEvent_225
// ()

void ASpaceDolphin_Character_BP_C::InpActEvt_OrbitCam_K2Node_InputActionEvent_225()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_OrbitCam_K2Node_InputActionEvent_225");

	ASpaceDolphin_Character_BP_C_InpActEvt_OrbitCam_K2Node_InputActionEvent_225_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_OrbitCamToggle_K2Node_InputActionEvent_224
// ()

void ASpaceDolphin_Character_BP_C::InpActEvt_OrbitCamToggle_K2Node_InputActionEvent_224()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_OrbitCamToggle_K2Node_InputActionEvent_224");

	ASpaceDolphin_Character_BP_C_InpActEvt_OrbitCamToggle_K2Node_InputActionEvent_224_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Latch
// ()
// Parameters:
// bool                           backwardsLatching              (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::Latch(bool backwardsLatching)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Latch");

	ASpaceDolphin_Character_BP_C_Latch_Params params;
	params.backwardsLatching = backwardsLatching;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchStartAnimation
// ()

void ASpaceDolphin_Character_BP_C::LatchStartAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchStartAnimation");

	ASpaceDolphin_Character_BP_C_LatchStartAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatch
// ()
// Parameters:
// bool                           LatchingInterrupted            (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::UnLatch(bool LatchingInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatch");

	ASpaceDolphin_Character_BP_C_UnLatch_Params params;
	params.LatchingInterrupted = LatchingInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatchStartAnimation
// ()

void ASpaceDolphin_Character_BP_C::UnLatchStartAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatchStartAnimation");

	ASpaceDolphin_Character_BP_C_UnLatchStartAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ASpaceDolphin_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MoveToUsingDirection
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::MoveToUsingDirection(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MoveToUsingDirection");

	ASpaceDolphin_Character_BP_C_MoveToUsingDirection_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatchMoveAndRotate
// ()

void ASpaceDolphin_Character_BP_C::UnLatchMoveAndRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatchMoveAndRotate");

	ASpaceDolphin_Character_BP_C_UnLatchMoveAndRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchingStartEvent
// ()

void ASpaceDolphin_Character_BP_C::LatchingStartEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchingStartEvent");

	ASpaceDolphin_Character_BP_C_LatchingStartEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchingEndEvent
// ()

void ASpaceDolphin_Character_BP_C::LatchingEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchingEndEvent");

	ASpaceDolphin_Character_BP_C_LatchingEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopMovement
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::StopMovement(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopMovement");

	ASpaceDolphin_Character_BP_C_StopMovement_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DisableFaceLatchingObjectRotation
// ()

void ASpaceDolphin_Character_BP_C::DisableFaceLatchingObjectRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DisableFaceLatchingObjectRotation");

	ASpaceDolphin_Character_BP_C_DisableFaceLatchingObjectRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetPassengersSurfaceCamera
// ()
// Parameters:
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Roll                           (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::SetPassengersSurfaceCamera(float Yaw, float Pitch, float Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetPassengersSurfaceCamera");

	ASpaceDolphin_Character_BP_C_SetPassengersSurfaceCamera_Params params;
	params.Yaw = Yaw;
	params.Pitch = Pitch;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LocalFaceLatchingObject
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::LocalFaceLatchingObject(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LocalFaceLatchingObject");

	ASpaceDolphin_Character_BP_C_LocalFaceLatchingObject_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartedJump
// ()

void ASpaceDolphin_Character_BP_C::StartedJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartedJump");

	ASpaceDolphin_Character_BP_C_StartedJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerToggleSuperFlight
// ()

void ASpaceDolphin_Character_BP_C::ServerToggleSuperFlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerToggleSuperFlight");

	ASpaceDolphin_Character_BP_C_ServerToggleSuperFlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSuperFightRightInput
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ServerSuperFightRightInput(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSuperFightRightInput");

	ASpaceDolphin_Character_BP_C_ServerSuperFightRightInput_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestSuperFlightQuickTurn
// ()

void ASpaceDolphin_Character_BP_C::ServerRequestSuperFlightQuickTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestSuperFlightQuickTurn");

	ASpaceDolphin_Character_BP_C_ServerRequestSuperFlightQuickTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateQuickTurn
// ()

void ASpaceDolphin_Character_BP_C::UpdateQuickTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateQuickTurn");

	ASpaceDolphin_Character_BP_C_UpdateQuickTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestWindGust
// ()

void ASpaceDolphin_Character_BP_C::ServerRequestWindGust()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestWindGust");

	ASpaceDolphin_Character_BP_C_ServerRequestWindGust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGust
// ()

void ASpaceDolphin_Character_BP_C::AnimNotify_WindGust()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGust");

	ASpaceDolphin_Character_BP_C_AnimNotify_WindGust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientWindGust
// ()
// Parameters:
// struct FVector                 Epicenter                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ClientWindGust(const struct FVector& Epicenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientWindGust");

	ASpaceDolphin_Character_BP_C_ClientWindGust_Params params;
	params.Epicenter = Epicenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustVFX
// ()

void ASpaceDolphin_Character_BP_C::AnimNotify_WindGustVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustVFX");

	ASpaceDolphin_Character_BP_C_AnimNotify_WindGustVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestFireFlakCannon
// ()
// Parameters:
// struct FVector                 Dir                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ServerRequestFireFlakCannon(const struct FVector& Dir, const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestFireFlakCannon");

	ASpaceDolphin_Character_BP_C_ServerRequestFireFlakCannon_Params params;
	params.Dir = Dir;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181");

	ASpaceDolphin_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastForwardInputTime
// ()

void ASpaceDolphin_Character_BP_C::ServerUpdateLastForwardInputTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastForwardInputTime");

	ASpaceDolphin_Character_BP_C_ServerUpdateLastForwardInputTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DelayedSuperFlightEnd
// ()

void ASpaceDolphin_Character_BP_C::DelayedSuperFlightEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DelayedSuperFlightEnd");

	ASpaceDolphin_Character_BP_C_DelayedSuperFlightEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSuperFlightEnd
// ()

void ASpaceDolphin_Character_BP_C::MultiSuperFlightEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSuperFlightEnd");

	ASpaceDolphin_Character_BP_C_MultiSuperFlightEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientTagDraftee
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ClientTagDraftee(class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientTagDraftee");

	ASpaceDolphin_Character_BP_C_ClientTagDraftee_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.WindGust180End
// ()

void ASpaceDolphin_Character_BP_C::WindGust180End()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.WindGust180End");

	ASpaceDolphin_Character_BP_C_WindGust180End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.WindGust180Tick
// ()

void ASpaceDolphin_Character_BP_C::WindGust180Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.WindGust180Tick");

	ASpaceDolphin_Character_BP_C_WindGust180Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustCheckFor180
// ()

void ASpaceDolphin_Character_BP_C::AnimNotify_WindGustCheckFor180()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustCheckFor180");

	ASpaceDolphin_Character_BP_C_AnimNotify_WindGustCheckFor180_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustBoost
// ()

void ASpaceDolphin_Character_BP_C::AnimNotify_WindGustBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustBoost");

	ASpaceDolphin_Character_BP_C_AnimNotify_WindGustBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequest180
// ()

void ASpaceDolphin_Character_BP_C::ServerRequest180()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequest180");

	ASpaceDolphin_Character_BP_C_ServerRequest180_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GamepadRightStickPressed
// ()

void ASpaceDolphin_Character_BP_C::GamepadRightStickPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GamepadRightStickPressed");

	ASpaceDolphin_Character_BP_C_GamepadRightStickPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSetLastTimePressedJump
// ()

void ASpaceDolphin_Character_BP_C::ServerSetLastTimePressedJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSetLastTimePressedJump");

	ASpaceDolphin_Character_BP_C_ServerSetLastTimePressedJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSetLastTimeReleasedJump
// ()

void ASpaceDolphin_Character_BP_C::ServerSetLastTimeReleasedJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSetLastTimeReleasedJump");

	ASpaceDolphin_Character_BP_C_ServerSetLastTimeReleasedJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.QueueLanding
// ()

void ASpaceDolphin_Character_BP_C::QueueLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.QueueLanding");

	ASpaceDolphin_Character_BP_C_QueueLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestLanding
// ()

void ASpaceDolphin_Character_BP_C::ServerRequestLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestLanding");

	ASpaceDolphin_Character_BP_C_ServerRequestLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnBola
// ()

void ASpaceDolphin_Character_BP_C::OnBola()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnBola");

	ASpaceDolphin_Character_BP_C_OnBola_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateRunningStartTime
// ()

void ASpaceDolphin_Character_BP_C::ServerUpdateRunningStartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateRunningStartTime");

	ASpaceDolphin_Character_BP_C_ServerUpdateRunningStartTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateRunningStopTime
// ()

void ASpaceDolphin_Character_BP_C::ServerUpdateRunningStopTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateRunningStopTime");

	ASpaceDolphin_Character_BP_C_ServerUpdateRunningStopTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnRunStarted
// ()

void ASpaceDolphin_Character_BP_C::MultiOnRunStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnRunStarted");

	ASpaceDolphin_Character_BP_C_MultiOnRunStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnRunStopped
// ()

void ASpaceDolphin_Character_BP_C::MultiOnRunStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnRunStopped");

	ASpaceDolphin_Character_BP_C_MultiOnRunStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnSuperFlightStart
// ()

void ASpaceDolphin_Character_BP_C::MultiOnSuperFlightStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnSuperFlightStart");

	ASpaceDolphin_Character_BP_C_MultiOnSuperFlightStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.QueueGrabAttack
// ()

void ASpaceDolphin_Character_BP_C::QueueGrabAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.QueueGrabAttack");

	ASpaceDolphin_Character_BP_C_QueueGrabAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiThrusterVFXBoost
// ()

void ASpaceDolphin_Character_BP_C::MultiThrusterVFXBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiThrusterVFXBoost");

	ASpaceDolphin_Character_BP_C_MultiThrusterVFXBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestFireLasers
// ()
// Parameters:
// struct FVector                 CameraHitLoc                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          CustomTimeDilation             (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ServerRequestFireLasers(const struct FVector& CameraHitLoc, float CustomTimeDilation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestFireLasers");

	ASpaceDolphin_Character_BP_C_ServerRequestFireLasers_Params params;
	params.CameraHitLoc = CameraHitLoc;
	params.CustomTimeDilation = CustomTimeDilation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientSpawnLaserFireFX
// ()
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayImpactFX                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HitCharacterOrStructure        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ClientSpawnLaserFireFX(const struct FVector& Start, const struct FVector& End, bool PlayImpactFX, bool HitCharacterOrStructure, const struct FName& Socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientSpawnLaserFireFX");

	ASpaceDolphin_Character_BP_C_ClientSpawnLaserFireFX_Params params;
	params.Start = Start;
	params.End = End;
	params.PlayImpactFX = PlayImpactFX;
	params.HitCharacterOrStructure = HitCharacterOrStructure;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerPressedFire
// ()

void ASpaceDolphin_Character_BP_C::ServerPressedFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerPressedFire");

	ASpaceDolphin_Character_BP_C_ServerPressedFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerFireChargedLaser
// ()
// Parameters:
// struct FVector                 Dir                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          CustomTimeDilation             (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ServerFireChargedLaser(const struct FVector& Dir, const struct FVector& Loc, class AActor* Target, float CustomTimeDilation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerFireChargedLaser");

	ASpaceDolphin_Character_BP_C_ServerFireChargedLaser_Params params;
	params.Dir = Dir;
	params.Loc = Loc;
	params.Target = Target;
	params.CustomTimeDilation = CustomTimeDilation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TickChargedLaserFX
// ()

void ASpaceDolphin_Character_BP_C::TickChargedLaserFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TickChargedLaserFX");

	ASpaceDolphin_Character_BP_C_TickChargedLaserFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClearNumPressedFwdCount
// ()

void ASpaceDolphin_Character_BP_C::ClearNumPressedFwdCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClearNumPressedFwdCount");

	ASpaceDolphin_Character_BP_C_ClearNumPressedFwdCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestStartLoop
// ()
// Parameters:
// bool                           Immelmann                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ServerRequestStartLoop(bool Immelmann)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestStartLoop");

	ASpaceDolphin_Character_BP_C_ServerRequestStartLoop_Params params;
	params.Immelmann = Immelmann;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiStartLoop
// ()
// Parameters:
// bool                           Immelmann                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::MultiStartLoop(bool Immelmann)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiStartLoop");

	ASpaceDolphin_Character_BP_C_MultiStartLoop_Params params;
	params.Immelmann = Immelmann;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveHit
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

void ASpaceDolphin_Character_BP_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveHit");

	ASpaceDolphin_Character_BP_C_ReceiveHit_Params params;
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


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiImpactedTerrain
// ()

void ASpaceDolphin_Character_BP_C::MultiImpactedTerrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiImpactedTerrain");

	ASpaceDolphin_Character_BP_C_MultiImpactedTerrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientPickupUpgrade
// ()
// Parameters:
// struct FVector                 PickupLocation                 (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ClientPickupUpgrade(const struct FVector& PickupLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientPickupUpgrade");

	ASpaceDolphin_Character_BP_C_ClientPickupUpgrade_Params params;
	params.PickupLocation = PickupLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestDestroyProjectile
// ()

void ASpaceDolphin_Character_BP_C::ServerRequestDestroyProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestDestroyProjectile");

	ASpaceDolphin_Character_BP_C_ServerRequestDestroyProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiDestroyPorjectile
// ()

void ASpaceDolphin_Character_BP_C::MultiDestroyPorjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiDestroyPorjectile");

	ASpaceDolphin_Character_BP_C_MultiDestroyPorjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSuperFightIsBraking
// ()
// Parameters:
// bool                           AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ServerSuperFightIsBraking(bool AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSuperFightIsBraking");

	ASpaceDolphin_Character_BP_C_ServerSuperFightIsBraking_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestBarrelRoll
// ()
// Parameters:
// int                            Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CamDir                         (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ServerRequestBarrelRoll(int Direction, const struct FVector& CamDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestBarrelRoll");

	ASpaceDolphin_Character_BP_C_ServerRequestBarrelRoll_Params params;
	params.Direction = Direction;
	params.CamDir = CamDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiBarrelRoll
// ()
// Parameters:
// int                            Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraDir                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::MultiBarrelRoll(int Direction, const struct FVector& CameraDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiBarrelRoll");

	ASpaceDolphin_Character_BP_C_MultiBarrelRoll_Params params;
	params.Direction = Direction;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiReflectProjectile
// ()
// Parameters:
// class AShooterProjectile*      Projectile                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::MultiReflectProjectile(class AShooterProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiReflectProjectile");

	ASpaceDolphin_Character_BP_C_MultiReflectProjectile_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientDamagedByTerrain
// ()

void ASpaceDolphin_Character_BP_C::ClientDamagedByTerrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientDamagedByTerrain");

	ASpaceDolphin_Character_BP_C_ClientDamagedByTerrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiDriftingBoost
// ()
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::MultiDriftingBoost(float Speed, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiDriftingBoost");

	ASpaceDolphin_Character_BP_C_MultiDriftingBoost_Params params;
	params.Speed = Speed;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotifty_BarrelRollLeft
// ()

void ASpaceDolphin_Character_BP_C::AnimNotifty_BarrelRollLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotifty_BarrelRollLeft");

	ASpaceDolphin_Character_BP_C_AnimNotifty_BarrelRollLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotifty_BarrelRollRight
// ()

void ASpaceDolphin_Character_BP_C::AnimNotifty_BarrelRollRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotifty_BarrelRollRight");

	ASpaceDolphin_Character_BP_C_AnimNotifty_BarrelRollRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerStartJump
// ()

void ASpaceDolphin_Character_BP_C::ServerStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerStartJump");

	ASpaceDolphin_Character_BP_C_ServerStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StarFoxServerRequestFireLasers
// ()
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::StarFoxServerRequestFireLasers(const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StarFoxServerRequestFireLasers");

	ASpaceDolphin_Character_BP_C_StarFoxServerRequestFireLasers_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_Echo
// ()

void ASpaceDolphin_Character_BP_C::AnimNotify_Echo()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_Echo");

	ASpaceDolphin_Character_BP_C_AnimNotify_Echo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientEchoLocations
// ()
// Parameters:
// TArray<struct FVector>         Locations                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ASpaceDolphin_Character_BP_C::ClientEchoLocations(TArray<struct FVector>* Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientEchoLocations");

	ASpaceDolphin_Character_BP_C_ClientEchoLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locations != nullptr)
		*Locations = params.Locations;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_FireChaff
// ()

void ASpaceDolphin_Character_BP_C::AnimNotify_FireChaff()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_FireChaff");

	ASpaceDolphin_Character_BP_C_AnimNotify_FireChaff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSpawnChaffs
// ()
// Parameters:
// TArray<struct FVector>         Locations                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ASpaceDolphin_Character_BP_C::MultiSpawnChaffs(TArray<struct FVector>* Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSpawnChaffs");

	ASpaceDolphin_Character_BP_C_MultiSpawnChaffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locations != nullptr)
		*Locations = params.Locations;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_Nudge
// ()

void ASpaceDolphin_Character_BP_C::AnimNotify_Nudge()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_Nudge");

	ASpaceDolphin_Character_BP_C_AnimNotify_Nudge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopWildFlee
// ()

void ASpaceDolphin_Character_BP_C::StopWildFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopWildFlee");

	ASpaceDolphin_Character_BP_C_StopWildFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TriggerWildAnger
// ()

void ASpaceDolphin_Character_BP_C::TriggerWildAnger()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TriggerWildAnger");

	ASpaceDolphin_Character_BP_C_TriggerWildAnger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_BlowHole
// ()

void ASpaceDolphin_Character_BP_C::AnimNotify_BlowHole()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_BlowHole");

	ASpaceDolphin_Character_BP_C_AnimNotify_BlowHole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExpireAngryDinoTarget
// ()

void ASpaceDolphin_Character_BP_C::ExpireAngryDinoTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExpireAngryDinoTarget");

	ASpaceDolphin_Character_BP_C_ExpireAngryDinoTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiAngryBlowHole
// ()

void ASpaceDolphin_Character_BP_C::MultiAngryBlowHole()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiAngryBlowHole");

	ASpaceDolphin_Character_BP_C_MultiAngryBlowHole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SpaceWhaleIntroEnd
// ()

void ASpaceDolphin_Character_BP_C::SpaceWhaleIntroEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SpaceWhaleIntroEnd");

	ASpaceDolphin_Character_BP_C_SpaceWhaleIntroEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExpireAnger
// ()

void ASpaceDolphin_Character_BP_C::ExpireAnger()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExpireAnger");

	ASpaceDolphin_Character_BP_C_ExpireAnger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastElevateTime
// ()

void ASpaceDolphin_Character_BP_C::ServerUpdateLastElevateTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastElevateTime");

	ASpaceDolphin_Character_BP_C_ServerUpdateLastElevateTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastLowerTime
// ()

void ASpaceDolphin_Character_BP_C::ServerUpdateLastLowerTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastLowerTime");

	ASpaceDolphin_Character_BP_C_ServerUpdateLastLowerTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_ToggleSuperFlight
// ()

void ASpaceDolphin_Character_BP_C::AnimNotify_ToggleSuperFlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_ToggleSuperFlight");

	ASpaceDolphin_Character_BP_C_AnimNotify_ToggleSuperFlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerForceClearRider
// ()

void ASpaceDolphin_Character_BP_C::ServerForceClearRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerForceClearRider");

	ASpaceDolphin_Character_BP_C_ServerForceClearRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CenterMouse
// ()

void ASpaceDolphin_Character_BP_C::CenterMouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CenterMouse");

	ASpaceDolphin_Character_BP_C_CenterMouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveBeginPlay
// ()

void ASpaceDolphin_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveBeginPlay");

	ASpaceDolphin_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSaddleActivationText
// ()

void ASpaceDolphin_Character_BP_C::MultiSaddleActivationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSaddleActivationText");

	ASpaceDolphin_Character_BP_C_MultiSaddleActivationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLoopingEvent
// ()

void ASpaceDolphin_Character_BP_C::UpdateLoopingEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLoopingEvent");

	ASpaceDolphin_Character_BP_C_UpdateLoopingEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopMovementImmediately
// ()

void ASpaceDolphin_Character_BP_C::StopMovementImmediately()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopMovementImmediately");

	ASpaceDolphin_Character_BP_C_StopMovementImmediately_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExecuteUbergraph_SpaceDolphin_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_Character_BP_C::ExecuteUbergraph_SpaceDolphin_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExecuteUbergraph_SpaceDolphin_Character_BP");

	ASpaceDolphin_Character_BP_C_ExecuteUbergraph_SpaceDolphin_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NewEventDispatcher0__DelegateSignature
// ()

void ASpaceDolphin_Character_BP_C::NewEventDispatcher0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NewEventDispatcher0__DelegateSignature");

	ASpaceDolphin_Character_BP_C_NewEventDispatcher0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NewEventDispatcher__DelegateSignature
// ()

void ASpaceDolphin_Character_BP_C::NewEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NewEventDispatcher__DelegateSignature");

	ASpaceDolphin_Character_BP_C_NewEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
