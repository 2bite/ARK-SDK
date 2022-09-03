// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_SecurityCamera_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleData
// ()
// Parameters:
// float                          ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, OutParm, ZeroConstructor)
// bool                           CanAddCamera                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleData");

	AStructure_SecurityCamera_C_GetConsoleData_Params params;

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


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.CanAddCamera
// ()
// Parameters:
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::CanAddCamera(bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.CanAddCamera");

	AStructure_SecurityCamera_C_CanAddCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleID
// ()
// Parameters:
// float                          ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::GetConsoleID(float* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleID");

	AStructure_SecurityCamera_C_GetConsoleID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCameraData
// ()
// Parameters:
// TArray<class APrimalStructure*> Cameras                        (Parm, OutParm, ZeroConstructor)
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::GetCameraData(TArray<class APrimalStructure*>* Cameras, int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCameraData");

	AStructure_SecurityCamera_C_GetCameraData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cameras != nullptr)
		*Cameras = params.Cameras;
	if (index != nullptr)
		*index = params.index;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCameraLocation
// ()
// Parameters:
// struct FVector                 CameraViewPoint                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCameraLocation");

	AStructure_SecurityCamera_C_GetCameraLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraViewPoint != nullptr)
		*CameraViewPoint = params.CameraViewPoint;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateEffects
// ()

void AStructure_SecurityCamera_C::UpdateEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateEffects");

	AStructure_SecurityCamera_C_UpdateEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOverrideDescriptiveName
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AStructure_SecurityCamera_C::BPOverrideDescriptiveName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOverrideDescriptiveName");

	AStructure_SecurityCamera_C_BPOverrideDescriptiveName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientUpdatePosition
// ()

void AStructure_SecurityCamera_C::ClientUpdatePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientUpdatePosition");

	AStructure_SecurityCamera_C_ClientUpdatePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BlueprintDrawHUD
// (Net, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BlueprintDrawHUD");

	AStructure_SecurityCamera_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleFromID
// ()
// Parameters:
// float                          ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalStructure*        LinkedConsole                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::GetConsoleFromID(float ID, class APrimalStructure** LinkedConsole)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleFromID");

	AStructure_SecurityCamera_C_GetConsoleFromID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LinkedConsole != nullptr)
		*LinkedConsole = params.LinkedConsole;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPIsAllowedToBuild
// ()
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AStructure_SecurityCamera_C::BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPIsAllowedToBuild");

	AStructure_SecurityCamera_C_BPIsAllowedToBuild_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetAdditionalComponentForDyePreview
// ()
// Parameters:
// class UStaticMeshComponent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStaticMeshComponent* AStructure_SecurityCamera_C::GetAdditionalComponentForDyePreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetAdditionalComponentForDyePreview");

	AStructure_SecurityCamera_C_GetAdditionalComponentForDyePreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCorrectedRotation
// ()
// Parameters:
// struct FRotator                CameraRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::GetCorrectedRotation(struct FRotator* CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCorrectedRotation");

	AStructure_SecurityCamera_C_GetCorrectedRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.PlacementTick
// ()

void AStructure_SecurityCamera_C::PlacementTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.PlacementTick");

	AStructure_SecurityCamera_C_PlacementTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ReceiveBeginPlay
// ()

void AStructure_SecurityCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ReceiveBeginPlay");

	AStructure_SecurityCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPUnstasis
// ()

void AStructure_SecurityCamera_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPUnstasis");

	AStructure_SecurityCamera_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateCameraPosition
// ()
// Parameters:
// bool                           Animated                       (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::UpdateCameraPosition(bool Animated)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateCameraPosition");

	AStructure_SecurityCamera_C_UpdateCameraPosition_Params params;
	params.Animated = Animated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPostInitializeComponents
// ()

void AStructure_SecurityCamera_C::BPPostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPostInitializeComponents");

	AStructure_SecurityCamera_C_BPPostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.InitializeRotation
// ()

void AStructure_SecurityCamera_C::InitializeRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.InitializeRotation");

	AStructure_SecurityCamera_C_InitializeRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPlacedStructure
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::BPPlacedStructure(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPlacedStructure");

	AStructure_SecurityCamera_C_BPPlacedStructure_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.PerformanceThrottledTick
// ()

void AStructure_SecurityCamera_C::PerformanceThrottledTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.PerformanceThrottledTick");

	AStructure_SecurityCamera_C_PerformanceThrottledTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.OnRep_CameraActive
// ()

void AStructure_SecurityCamera_C::OnRep_CameraActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.OnRep_CameraActive");

	AStructure_SecurityCamera_C_OnRep_CameraActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPHandleStructureEnabled
// ()
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::BPHandleStructureEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPHandleStructureEnabled");

	AStructure_SecurityCamera_C_BPHandleStructureEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPreventStasis
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructure_SecurityCamera_C::BPPreventStasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPreventStasis");

	AStructure_SecurityCamera_C_BPPreventStasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.OnContainerRenamed
// ()

void AStructure_SecurityCamera_C::OnContainerRenamed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.OnContainerRenamed");

	AStructure_SecurityCamera_C_OnContainerRenamed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ReceiveDestroyed
// ()

void AStructure_SecurityCamera_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ReceiveDestroyed");

	AStructure_SecurityCamera_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOnStructurePickup
// (NetRequest, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ItemType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            NewlyPickedUpItem              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsQuickPickup                 (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::STATIC_BPOnStructurePickup(class APlayerController** PlayerController, class UClass** ItemType, class UPrimalItem** NewlyPickedUpItem, bool* bIsQuickPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOnStructurePickup");

	AStructure_SecurityCamera_C_BPOnStructurePickup_Params params;
	params.PlayerController = PlayerController;
	params.ItemType = ItemType;
	params.NewlyPickedUpItem = NewlyPickedUpItem;
	params.bIsQuickPickup = bIsQuickPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.RetrieveLinkedConsoleFromItem
// ()
// Parameters:
// class UPrimalItem*             Item                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          LinkedConsole                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  CameraName                     (Parm, OutParm, ZeroConstructor)
// bool                           CanAdd                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ConsoleName                    (Parm, OutParm, ZeroConstructor)

void AStructure_SecurityCamera_C::RetrieveLinkedConsoleFromItem(class UPrimalItem* Item, float* LinkedConsole, struct FVector* Location, class FString* CameraName, bool* CanAdd, class FString* ConsoleName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.RetrieveLinkedConsoleFromItem");

	AStructure_SecurityCamera_C_RetrieveLinkedConsoleFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LinkedConsole != nullptr)
		*LinkedConsole = params.LinkedConsole;
	if (Location != nullptr)
		*Location = params.Location;
	if (CameraName != nullptr)
		*CameraName = params.CameraName;
	if (CanAdd != nullptr)
		*CanAdd = params.CanAdd;
	if (ConsoleName != nullptr)
		*ConsoleName = params.ConsoleName;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPGetInfoFromConsumedItemForPlacedStructure
// ()
// Parameters:
// class UPrimalItem**            ItemToConsumed                 (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::BPGetInfoFromConsumedItemForPlacedStructure(class UPrimalItem** ItemToConsumed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPGetInfoFromConsumedItemForPlacedStructure");

	AStructure_SecurityCamera_C_BPGetInfoFromConsumedItemForPlacedStructure_Params params;
	params.ItemToConsumed = ItemToConsumed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOverrideCantBuildReasonString
// ()
// Parameters:
// int*                           CantBuildReason                (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AStructure_SecurityCamera_C::BPOverrideCantBuildReasonString(int* CantBuildReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOverrideCantBuildReasonString");

	AStructure_SecurityCamera_C_BPOverrideCantBuildReasonString_Params params;
	params.CantBuildReason = CantBuildReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPCheckItemRequiementsToBuild
// ()
// Parameters:
// class UPrimalItem**            ItemToConsumed                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AStructure_SecurityCamera_C::BPCheckItemRequiementsToBuild(class UPrimalItem** ItemToConsumed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPCheckItemRequiementsToBuild");

	AStructure_SecurityCamera_C_BPCheckItemRequiementsToBuild_Params params;
	params.ItemToConsumed = ItemToConsumed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.UserConstructionScript
// ()

void AStructure_SecurityCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.UserConstructionScript");

	AStructure_SecurityCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.AddNewCamera
// ()
// Parameters:
// class APrimalStructure*        NewStructure                   (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::AddNewCamera(class APrimalStructure* NewStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.AddNewCamera");

	AStructure_SecurityCamera_C_AddNewCamera_Params params;
	params.NewStructure = NewStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.SetCurrentCamera
// ()
// Parameters:
// int                            CameraIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::SetCurrentCamera(int CameraIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.SetCurrentCamera");

	AStructure_SecurityCamera_C_SetCurrentCamera_Params params;
	params.CameraIndex = CameraIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateCameraRotation
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::UpdateCameraRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateCameraRotation");

	AStructure_SecurityCamera_C_UpdateCameraRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientSetRotation
// ()
// Parameters:
// struct FRotator                NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::ClientSetRotation(const struct FRotator& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientSetRotation");

	AStructure_SecurityCamera_C_ClientSetRotation_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ServerInitializeRotation
// ()

void AStructure_SecurityCamera_C::ServerInitializeRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ServerInitializeRotation");

	AStructure_SecurityCamera_C_ServerInitializeRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.VerifyConsoleData
// ()

void AStructure_SecurityCamera_C::VerifyConsoleData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.VerifyConsoleData");

	AStructure_SecurityCamera_C_VerifyConsoleData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateConsoleName
// ()
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)

void AStructure_SecurityCamera_C::UpdateConsoleName(const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateConsoleName");

	AStructure_SecurityCamera_C_UpdateConsoleName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ActivateCamera
// ()

void AStructure_SecurityCamera_C::ActivateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ActivateCamera");

	AStructure_SecurityCamera_C_ActivateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientCameraActivated
// ()

void AStructure_SecurityCamera_C::ClientCameraActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientCameraActivated");

	AStructure_SecurityCamera_C_ClientCameraActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.RemoveCamera
// ()
// Parameters:
// class APrimalStructure*        CameraToRemove                 (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::RemoveCamera(class APrimalStructure* CameraToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.RemoveCamera");

	AStructure_SecurityCamera_C_RemoveCamera_Params params;
	params.CameraToRemove = CameraToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientCameraUnlinked
// ()

void AStructure_SecurityCamera_C::ClientCameraUnlinked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientCameraUnlinked");

	AStructure_SecurityCamera_C_ClientCameraUnlinked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ExecuteUbergraph_Structure_SecurityCamera
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_SecurityCamera_C::ExecuteUbergraph_Structure_SecurityCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ExecuteUbergraph_Structure_SecurityCamera");

	AStructure_SecurityCamera_C_ExecuteUbergraph_Structure_SecurityCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
