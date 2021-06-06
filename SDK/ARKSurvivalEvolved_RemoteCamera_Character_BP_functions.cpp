// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RemoteCamera_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetConsoleData
// ()
// Parameters:
// float                          ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, OutParm, ZeroConstructor)
// bool                           CanAddCamera                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetConsoleData");

	ARemoteCamera_Character_BP_C_GetConsoleData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
	if (Name != nullptr)
		*Name = params.Name;
	if (CanAddCamera != nullptr)
		*CanAddCamera = params.CanAddCamera;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CanAddCamera
// ()
// Parameters:
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::CanAddCamera(bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CanAddCamera");

	ARemoteCamera_Character_BP_C_CanAddCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetConsoleID
// ()
// Parameters:
// float                          ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::GetConsoleID(float* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetConsoleID");

	ARemoteCamera_Character_BP_C_GetConsoleID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetCameraData
// ()
// Parameters:
// TArray<class APrimalStructure*> Cameras                        (Parm, OutParm, ZeroConstructor)
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::GetCameraData(TArray<class APrimalStructure*>* Cameras, int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetCameraData");

	ARemoteCamera_Character_BP_C_GetCameraData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cameras != nullptr)
		*Cameras = params.Cameras;
	if (index != nullptr)
		*index = params.index;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetCameraLocation
// ()
// Parameters:
// struct FVector                 CameraViewPoint                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetCameraLocation");

	ARemoteCamera_Character_BP_C_GetCameraLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraViewPoint != nullptr)
		*CameraViewPoint = params.CameraViewPoint;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SwitchToCameraAtIndex
// ()
// Parameters:
// int                            CameraIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::SwitchToCameraAtIndex(int CameraIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SwitchToCameraAtIndex");

	ARemoteCamera_Character_BP_C_SwitchToCameraAtIndex_Params params;
	params.CameraIndex = CameraIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideCameraViewTarget
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

void ARemoteCamera_Character_BP_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideCameraViewTarget");

	ARemoteCamera_Character_BP_C_BPOverrideCameraViewTarget_Params params;
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


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnZoomOut
// ()

void ARemoteCamera_Character_BP_C::BP_OnZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnZoomOut");

	ARemoteCamera_Character_BP_C_BP_OnZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnZoomIn
// ()

void ARemoteCamera_Character_BP_C::BP_OnZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnZoomIn");

	ARemoteCamera_Character_BP_C_BP_OnZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CycleVisionMode
// ()

void ARemoteCamera_Character_BP_C::CycleVisionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CycleVisionMode");

	ARemoteCamera_Character_BP_C_CycleVisionMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Concede Input Handling to UI
// ()

void ARemoteCamera_Character_BP_C::Concede_Input_Handling_to_UI()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Concede Input Handling to UI");

	ARemoteCamera_Character_BP_C_Concede_Input_Handling_to_UI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ResumeInputHandling
// ()

void ARemoteCamera_Character_BP_C::ResumeInputHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ResumeInputHandling");

	ARemoteCamera_Character_BP_C_ResumeInputHandling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetFPVViewLocation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ARemoteCamera_Character_BP_C::BPGetFPVViewLocation(class APrimalCharacter** viewingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetFPVViewLocation");

	ARemoteCamera_Character_BP_C_BPGetFPVViewLocation_Params params;
	params.viewingCharacter = viewingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideFPVViewLocation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARemoteCamera_Character_BP_C::BPOverrideFPVViewLocation(class APrimalCharacter** viewingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideFPVViewLocation");

	ARemoteCamera_Character_BP_C_BPOverrideFPVViewLocation_Params params;
	params.viewingCharacter = viewingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CameraTick
// ()

void ARemoteCamera_Character_BP_C::CameraTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CameraTick");

	ARemoteCamera_Character_BP_C_CameraTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemoveCameraData
// ()
// Parameters:
// class APrimalStructure*        CamToRemove                    (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::RemoveCameraData(class APrimalStructure* CamToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemoveCameraData");

	ARemoteCamera_Character_BP_C_RemoveCameraData_Params params;
	params.CamToRemove = CamToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.AddCamera
// (Net, NetReliable, NetMulticast, Private, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalStructure*        NewCam                         (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::AddCamera(class APrimalStructure* NewCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.AddCamera");

	ARemoteCamera_Character_BP_C_AddCamera_Params params;
	params.NewCam = NewCam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetOtherActorToIgnore
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ARemoteCamera_Character_BP_C::BPGetOtherActorToIgnore()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetOtherActorToIgnore");

	ARemoteCamera_Character_BP_C_BPGetOtherActorToIgnore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReleaseCamera
// ()

void ARemoteCamera_Character_BP_C::ReleaseCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReleaseCamera");

	ARemoteCamera_Character_BP_C_ReleaseCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveDestroyed
// ()

void ARemoteCamera_Character_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveDestroyed");

	ARemoteCamera_Character_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPTriggerStasisEvent
// ()

void ARemoteCamera_Character_BP_C::BPTriggerStasisEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPTriggerStasisEvent");

	ARemoteCamera_Character_BP_C_BPTriggerStasisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPUnstasis
// ()

void ARemoteCamera_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPUnstasis");

	ARemoteCamera_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetCameraData
// (NetReliable, Exec, Event, NetMulticast, Private, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CurrentIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class APrimalStructure*> LinkedCameras_Server           (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ARemoteCamera_Character_BP_C::SetCameraData(int CurrentIndex, TArray<class APrimalStructure*>* LinkedCameras_Server)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetCameraData");

	ARemoteCamera_Character_BP_C_SetCameraData_Params params;
	params.CurrentIndex = CurrentIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LinkedCameras_Server != nullptr)
		*LinkedCameras_Server = params.LinkedCameras_Server;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ARemoteCamera_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetHUDElements");

	ARemoteCamera_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPForceCameraStyle
// ()
// Parameters:
// class APrimalCharacter**       ForViewTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECameraStyle>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECameraStyle> ARemoteCamera_Character_BP_C::BPForceCameraStyle(class APrimalCharacter** ForViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPForceCameraStyle");

	ARemoteCamera_Character_BP_C_BPForceCameraStyle_Params params;
	params.ForViewTarget = ForViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPDinoPostBeginPlay
// ()

void ARemoteCamera_Character_BP_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPDinoPostBeginPlay");

	ARemoteCamera_Character_BP_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceivePossessed
// ()
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceivePossessed");

	ARemoteCamera_Character_BP_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARemoteCamera_Character_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPCanCryo");

	ARemoteCamera_Character_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARemoteCamera_Character_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_PreventMovementMode");

	ARemoteCamera_Character_BP_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetupScoutDisconnect
// ()
// Parameters:
// float                          DelayTimeSeconds               (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::SetupScoutDisconnect(float DelayTimeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetupScoutDisconnect");

	ARemoteCamera_Character_BP_C_SetupScoutDisconnect_Params params;
	params.DelayTimeSeconds = DelayTimeSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DestroyScout
// ()

void ARemoteCamera_Character_BP_C::DestroyScout()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DestroyScout");

	ARemoteCamera_Character_BP_C_DestroyScout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPModifyAimOffsetTargetLocation
// ()
// Parameters:
// struct FVector                 AimTargetLocation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ARemoteCamera_Character_BP_C::BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPModifyAimOffsetTargetLocation");

	ARemoteCamera_Character_BP_C_BPModifyAimOffsetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimTargetLocation != nullptr)
		*AimTargetLocation = params.AimTargetLocation;

	return params.ReturnValue;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClearExpiredDinoAIData
// ()

void ARemoteCamera_Character_BP_C::ClearExpiredDinoAIData()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClearExpiredDinoAIData");

	ARemoteCamera_Character_BP_C_ClearExpiredDinoAIData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideStencilAllianceForTarget
// ()
// Parameters:
// class APrimalCharacter**       TargetDino                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    Component                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EStencilAlliance>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EStencilAlliance> ARemoteCamera_Character_BP_C::BPOverrideStencilAllianceForTarget(class APrimalCharacter** TargetDino, class UPrimitiveComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideStencilAllianceForTarget");

	ARemoteCamera_Character_BP_C_BPOverrideStencilAllianceForTarget_Params params;
	params.TargetDino = TargetDino;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPShouldCancelDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARemoteCamera_Character_BP_C::BPShouldCancelDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPShouldCancelDoAttack");

	ARemoteCamera_Character_BP_C_BPShouldCancelDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnRep_LowStamina
// ()

void ARemoteCamera_Character_BP_C::OnRep_LowStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnRep_LowStamina");

	ARemoteCamera_Character_BP_C_OnRep_LowStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveTick");

	ARemoteCamera_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ScoutIsFirstPerson
// ()
// Parameters:
// bool                           Retval                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::ScoutIsFirstPerson(bool* Retval)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ScoutIsFirstPerson");

	ARemoteCamera_Character_BP_C_ScoutIsFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Retval != nullptr)
		*Retval = params.Retval;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPHandleOnStopFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARemoteCamera_Character_BP_C::BPHandleOnStopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPHandleOnStopFire");

	ARemoteCamera_Character_BP_C_BPHandleOnStopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetTargetImpactMaterial
// ()
// Parameters:
// float                          ImpactDistance                 (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::SetTargetImpactMaterial(float ImpactDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetTargetImpactMaterial");

	ARemoteCamera_Character_BP_C_SetTargetImpactMaterial_Params params;
	params.ImpactDistance = ImpactDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPPreventStasis
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARemoteCamera_Character_BP_C::BPPreventStasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPPreventStasis");

	ARemoteCamera_Character_BP_C_BPPreventStasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsScoutFirst Person
// ()
// Parameters:
// bool                           IsFirstPerson                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::IsScoutFirst_Person(bool* IsFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsScoutFirst Person");

	ARemoteCamera_Character_BP_C_IsScoutFirst_Person_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFirstPerson != nullptr)
		*IsFirstPerson = params.IsFirstPerson;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetFirstPersonMaterial
// ()
// Parameters:
// bool                           IsFirstPerson                  (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::SetFirstPersonMaterial(bool IsFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetFirstPersonMaterial");

	ARemoteCamera_Character_BP_C_SetFirstPersonMaterial_Params params;
	params.IsFirstPerson = IsFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsServerOrSinglePlayer
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::IsServerOrSinglePlayer(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsServerOrSinglePlayer");

	ARemoteCamera_Character_BP_C_IsServerOrSinglePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsClientOrSinglePlayer
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::IsClientOrSinglePlayer(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsClientOrSinglePlayer");

	ARemoteCamera_Character_BP_C_IsClientOrSinglePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_GetCustomModifier_RotationRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARemoteCamera_Character_BP_C::BP_GetCustomModifier_RotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_GetCustomModifier_RotationRate");

	ARemoteCamera_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_GetCustomModifier_MaxSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARemoteCamera_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_GetCustomModifier_MaxSpeed");

	ARemoteCamera_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARemoteCamera_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BlueprintCanAttack");

	ARemoteCamera_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARemoteCamera_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPAdjustDamage");

	ARemoteCamera_Character_BP_C_BPAdjustDamage_Params params;
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


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnSetDeath
// ()

void ARemoteCamera_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnSetDeath");

	ARemoteCamera_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARemoteCamera_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPHandleControllerInitiatedAttack");

	ARemoteCamera_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Release Possessing Survivor
// ()

void ARemoteCamera_Character_BP_C::Release_Possessing_Survivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Release Possessing Survivor");

	ARemoteCamera_Character_BP_C_Release_Possessing_Survivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetPossessedByPlayer
// ()

void ARemoteCamera_Character_BP_C::GetPossessedByPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetPossessedByPlayer");

	ARemoteCamera_Character_BP_C_GetPossessedByPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Spawned from Structure
// ()
// Parameters:
// class AShooterPlayerController* ShooterPlayerController        (Parm, ZeroConstructor, IsPlainOldData)
// float                          PossessDelay                   (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalStructure*        LinkedStructure                (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::Spawned_from_Structure(class AShooterPlayerController* ShooterPlayerController, float PossessDelay, class APrimalStructure* LinkedStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Spawned from Structure");

	ARemoteCamera_Character_BP_C_Spawned_from_Structure_Params params;
	params.ShooterPlayerController = ShooterPlayerController;
	params.PossessDelay = PossessDelay;
	params.LinkedStructure = LinkedStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPIsValidUnStasisCaster
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARemoteCamera_Character_BP_C::BPIsValidUnStasisCaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPIsValidUnStasisCaster");

	ARemoteCamera_Character_BP_C_BPIsValidUnStasisCaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UserConstructionScript
// ()

void ARemoteCamera_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UserConstructionScript");

	ARemoteCamera_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_136
// ()

void ARemoteCamera_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_136()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_136");

	ARemoteCamera_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_136_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_135
// ()

void ARemoteCamera_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_135()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_135");

	ARemoteCamera_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_135_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_134
// ()

void ARemoteCamera_Character_BP_C::InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_134()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_134");

	ARemoteCamera_Character_BP_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_134_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadRightShoulder_K2Node_InputActionEvent_133
// ()

void ARemoteCamera_Character_BP_C::InpActEvt_ArkGamepadRightShoulder_K2Node_InputActionEvent_133()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadRightShoulder_K2Node_InputActionEvent_133");

	ARemoteCamera_Character_BP_C_InpActEvt_ArkGamepadRightShoulder_K2Node_InputActionEvent_133_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_132
// ()

void ARemoteCamera_Character_BP_C::InpActEvt_Jump_K2Node_InputActionEvent_132()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_132");

	ARemoteCamera_Character_BP_C_InpActEvt_Jump_K2Node_InputActionEvent_132_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_131
// ()

void ARemoteCamera_Character_BP_C::InpActEvt_Run_K2Node_InputActionEvent_131()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_131");

	ARemoteCamera_Character_BP_C_InpActEvt_Run_K2Node_InputActionEvent_131_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_130
// ()

void ARemoteCamera_Character_BP_C::InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_130()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_130");

	ARemoteCamera_Character_BP_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_130_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54
// ()

void ARemoteCamera_Character_BP_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54");

	ARemoteCamera_Character_BP_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateCameraRotation
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::UpdateCameraRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateCameraRotation");

	ARemoteCamera_Character_BP_C_UpdateCameraRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateConsoleName
// ()
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)

void ARemoteCamera_Character_BP_C::UpdateConsoleName(const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateConsoleName");

	ARemoteCamera_Character_BP_C_UpdateConsoleName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ActivateCamera
// ()

void ARemoteCamera_Character_BP_C::ActivateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ActivateCamera");

	ARemoteCamera_Character_BP_C_ActivateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_AddPostProcessBuffToPlayer
// ()
// Parameters:
// int                            BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::Server_AddPostProcessBuffToPlayer(int BuffIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_AddPostProcessBuffToPlayer");

	ARemoteCamera_Character_BP_C_Server_AddPostProcessBuffToPlayer_Params params;
	params.BuffIndex = BuffIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_RemovePostProcessBuffFromPlayer
// ()
// Parameters:
// int                            BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::Server_RemovePostProcessBuffFromPlayer(int BuffIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_RemovePostProcessBuffFromPlayer");

	ARemoteCamera_Character_BP_C_Server_RemovePostProcessBuffFromPlayer_Params params;
	params.BuffIndex = BuffIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_RemoveAllPostProcessBuffs
// ()

void ARemoteCamera_Character_BP_C::Server_RemoveAllPostProcessBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_RemoveAllPostProcessBuffs");

	ARemoteCamera_Character_BP_C_Server_RemoveAllPostProcessBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemovePostProcessBuff
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::RemovePostProcessBuff(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemovePostProcessBuff");

	ARemoteCamera_Character_BP_C_RemovePostProcessBuff_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReleasePossessingSurvivorAndDestroy
// ()

void ARemoteCamera_Character_BP_C::ReleasePossessingSurvivorAndDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReleasePossessingSurvivorAndDestroy");

	ARemoteCamera_Character_BP_C_ReleasePossessingSurvivorAndDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveBeginPlay
// ()

void ARemoteCamera_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveBeginPlay");

	ARemoteCamera_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SpawnEnd
// ()

void ARemoteCamera_Character_BP_C::SpawnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SpawnEnd");

	ARemoteCamera_Character_BP_C_SpawnEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.TriggerDisconnectFX
// ()

void ARemoteCamera_Character_BP_C::TriggerDisconnectFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.TriggerDisconnectFX");

	ARemoteCamera_Character_BP_C_TriggerDisconnectFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.PossessedByPlayer
// ()

void ARemoteCamera_Character_BP_C::PossessedByPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.PossessedByPlayer");

	ARemoteCamera_Character_BP_C_PossessedByPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.MULTI_ReleasePossessingSurvivor
// ()

void ARemoteCamera_Character_BP_C::MULTI_ReleasePossessingSurvivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.MULTI_ReleasePossessingSurvivor");

	ARemoteCamera_Character_BP_C_MULTI_ReleasePossessingSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedDestroyActor
// ()

void ARemoteCamera_Character_BP_C::DelayedDestroyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedDestroyActor");

	ARemoteCamera_Character_BP_C_DelayedDestroyActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerHandleOnStopFire
// ()

void ARemoteCamera_Character_BP_C::ServerHandleOnStopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerHandleOnStopFire");

	ARemoteCamera_Character_BP_C_ServerHandleOnStopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientCheckClearExpiredDinoData
// ()

void ARemoteCamera_Character_BP_C::ClientCheckClearExpiredDinoData()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientCheckClearExpiredDinoData");

	ARemoteCamera_Character_BP_C_ClientCheckClearExpiredDinoData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DisableAI
// ()

void ARemoteCamera_Character_BP_C::DisableAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DisableAI");

	ARemoteCamera_Character_BP_C_DisableAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientHitTerrain
// ()
// Parameters:
// struct FVector                 ImpactNormal                   (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::ClientHitTerrain(const struct FVector& ImpactNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientHitTerrain");

	ARemoteCamera_Character_BP_C_ClientHitTerrain_Params params;
	params.ImpactNormal = ImpactNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.AddNewCamera
// ()
// Parameters:
// class APrimalStructure*        NewStructure                   (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::AddNewCamera(class APrimalStructure* NewStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.AddNewCamera");

	ARemoteCamera_Character_BP_C_AddNewCamera_Params params;
	params.NewStructure = NewStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetCurrentCamera
// ()
// Parameters:
// int                            CameraIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::SetCurrentCamera(int CameraIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetCurrentCamera");

	ARemoteCamera_Character_BP_C_SetCurrentCamera_Params params;
	params.CameraIndex = CameraIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerNextCamera
// ()

void ARemoteCamera_Character_BP_C::ServerNextCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerNextCamera");

	ARemoteCamera_Character_BP_C_ServerNextCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ConsoleDeactivated
// ()

void ARemoteCamera_Character_BP_C::ConsoleDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ConsoleDeactivated");

	ARemoteCamera_Character_BP_C_ConsoleDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateScoutVisionBuff
// ()

void ARemoteCamera_Character_BP_C::UpdateScoutVisionBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateScoutVisionBuff");

	ARemoteCamera_Character_BP_C_UpdateScoutVisionBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemoveCamera
// ()
// Parameters:
// class APrimalStructure*        CameraToRemove                 (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::RemoveCamera(class APrimalStructure* CameraToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemoveCamera");

	ARemoteCamera_Character_BP_C_RemoveCamera_Params params;
	params.CameraToRemove = CameraToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnNotifyDamage_Event
// ()
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::OnNotifyDamage_Event(float DamageAmount, class AController* EventInstigator, class AActor* DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnNotifyDamage_Event");

	ARemoteCamera_Character_BP_C_OnNotifyDamage_Event_Params params;
	params.DamageAmount = DamageAmount;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ListenForPlayerDamage
// ()

void ARemoteCamera_Character_BP_C::ListenForPlayerDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ListenForPlayerDamage");

	ARemoteCamera_Character_BP_C_ListenForPlayerDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientNotifyHit
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            Event                          (Parm)
// class APawn*                   Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::ClientNotifyHit(float amount, const struct FDamageEvent& Event, class APawn* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientNotifyHit");

	ARemoteCamera_Character_BP_C_ClientNotifyHit_Params params;
	params.amount = amount;
	params.Event = Event;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnSleepStateChanged_Event
// ()
// Parameters:
// class APrimalCharacter*        forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSleeping                    (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::OnSleepStateChanged_Event(class APrimalCharacter* forCharacter, bool bIsSleeping)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnSleepStateChanged_Event");

	ARemoteCamera_Character_BP_C_OnSleepStateChanged_Event_Params params;
	params.forCharacter = forCharacter;
	params.bIsSleeping = bIsSleeping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientActivateCamera
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::ClientActivateCamera(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientActivateCamera");

	ARemoteCamera_Character_BP_C_ClientActivateCamera_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientReleaseCamera
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::ClientReleaseCamera(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientReleaseCamera");

	ARemoteCamera_Character_BP_C_ClientReleaseCamera_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedActivateCamera
// ()

void ARemoteCamera_Character_BP_C::DelayedActivateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedActivateCamera");

	ARemoteCamera_Character_BP_C_DelayedActivateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedReleaseCamera
// ()

void ARemoteCamera_Character_BP_C::DelayedReleaseCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedReleaseCamera");

	ARemoteCamera_Character_BP_C_DelayedReleaseCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.VerifyPossession
// ()

void ARemoteCamera_Character_BP_C::VerifyPossession()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.VerifyPossession");

	ARemoteCamera_Character_BP_C_VerifyPossession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.VerifyPossessingSurvivor
// ()

void ARemoteCamera_Character_BP_C::VerifyPossessingSurvivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.VerifyPossessingSurvivor");

	ARemoteCamera_Character_BP_C_VerifyPossessingSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerUpdateCameraInfo
// ()
// Parameters:
// int                            CameraIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::ServerUpdateCameraInfo(int CameraIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerUpdateCameraInfo");

	ARemoteCamera_Character_BP_C_ServerUpdateCameraInfo_Params params;
	params.CameraIndex = CameraIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientUpdateCameraInfo
// ()
// Parameters:
// int                            CameraIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalStructure*        UpdatedCamera                  (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::ClientUpdateCameraInfo(int CameraIndex, class APrimalStructure* UpdatedCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientUpdateCameraInfo");

	ARemoteCamera_Character_BP_C_ClientUpdateCameraInfo_Params params;
	params.CameraIndex = CameraIndex;
	params.UpdatedCamera = UpdatedCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SpawnCameraHUD
// ()

void ARemoteCamera_Character_BP_C::SpawnCameraHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SpawnCameraHUD");

	ARemoteCamera_Character_BP_C_SpawnCameraHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DestroyCameraHUD
// ()

void ARemoteCamera_Character_BP_C::DestroyCameraHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DestroyCameraHUD");

	ARemoteCamera_Character_BP_C_DestroyCameraHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerPreviousCamera
// ()

void ARemoteCamera_Character_BP_C::ServerPreviousCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerPreviousCamera");

	ARemoteCamera_Character_BP_C_ServerPreviousCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerSwitchToCameraAtIndex
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::ServerSwitchToCameraAtIndex(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerSwitchToCameraAtIndex");

	ARemoteCamera_Character_BP_C_ServerSwitchToCameraAtIndex_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientUpdateHUDInfo
// ()

void ARemoteCamera_Character_BP_C::ClientUpdateHUDInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientUpdateHUDInfo");

	ARemoteCamera_Character_BP_C_ClientUpdateHUDInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.StopPossessingPlayerMovement
// ()

void ARemoteCamera_Character_BP_C::StopPossessingPlayerMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.StopPossessingPlayerMovement");

	ARemoteCamera_Character_BP_C_StopPossessingPlayerMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerConfirmActivation
// ()

void ARemoteCamera_Character_BP_C::ServerConfirmActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerConfirmActivation");

	ARemoteCamera_Character_BP_C_ServerConfirmActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ExecuteUbergraph_RemoteCamera_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARemoteCamera_Character_BP_C::ExecuteUbergraph_RemoteCamera_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ExecuteUbergraph_RemoteCamera_Character_BP");

	ARemoteCamera_Character_BP_C_ExecuteUbergraph_RemoteCamera_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
