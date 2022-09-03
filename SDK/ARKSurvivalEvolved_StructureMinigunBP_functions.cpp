// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureMinigunBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureMinigunBP.StructureMinigunBP_C.GetHudData
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComponent             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  CurrentAmmoItemTemplate        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          AmmoItemTemplates              (Parm, OutParm, ZeroConstructor)
// int                            LowAmmoWarningAmount           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::GetHudData(class UPrimalInventoryComponent** InventoryComponent, class UClass** CurrentAmmoItemTemplate, TArray<class UClass*>* AmmoItemTemplates, int* LowAmmoWarningAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.GetHudData");

	AStructureMinigunBP_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;
	if (CurrentAmmoItemTemplate != nullptr)
		*CurrentAmmoItemTemplate = params.CurrentAmmoItemTemplate;
	if (AmmoItemTemplates != nullptr)
		*AmmoItemTemplates = params.AmmoItemTemplates;
	if (LowAmmoWarningAmount != nullptr)
		*LowAmmoWarningAmount = params.LowAmmoWarningAmount;
}


// Function StructureMinigunBP.StructureMinigunBP_C.BPGetDamageMultiplier
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AStructureMinigunBP_C::BPGetDamageMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPGetDamageMultiplier");

	AStructureMinigunBP_C_BPGetDamageMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureMinigunBP.StructureMinigunBP_C.UpdateItemStats
// ()
// Parameters:
// class UPrimalItem*             newItem                        (Parm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::UpdateItemStats(class UPrimalItem* newItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.UpdateItemStats");

	AStructureMinigunBP_C_UpdateItemStats_Params params;
	params.newItem = newItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.BPOverrideCantBuildReasonString
// ()
// Parameters:
// int*                           CantBuildReason                (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AStructureMinigunBP_C::BPOverrideCantBuildReasonString(int* CantBuildReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPOverrideCantBuildReasonString");

	AStructureMinigunBP_C_BPOverrideCantBuildReasonString_Params params;
	params.CantBuildReason = CantBuildReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureMinigunBP.StructureMinigunBP_C.BPIsAllowedToBuild
// ()
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AStructureMinigunBP_C::BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPIsAllowedToBuild");

	AStructureMinigunBP_C_BPIsAllowedToBuild_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function StructureMinigunBP.StructureMinigunBP_C.Update Spin Sounds
// ()

void AStructureMinigunBP_C::Update_Spin_Sounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.Update Spin Sounds");

	AStructureMinigunBP_C_Update_Spin_Sounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.BPPlacedStructure
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::BPPlacedStructure(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPPlacedStructure");

	AStructureMinigunBP_C_BPPlacedStructure_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.BPSetPlayerConstructor
// ()
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::BPSetPlayerConstructor(class APlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPSetPlayerConstructor");

	AStructureMinigunBP_C_BPSetPlayerConstructor_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.PlacementInitialization
// (Exec, Event, NetResponse, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AShooterWeapon*          constructorWeapon              (Parm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::PlacementInitialization(class AShooterWeapon* constructorWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.PlacementInitialization");

	AStructureMinigunBP_C_PlacementInitialization_Params params;
	params.constructorWeapon = constructorWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.PlacementTickActions
// ()
// Parameters:
// bool                           reachedDestination             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::PlacementTickActions(bool* reachedDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.PlacementTickActions");

	AStructureMinigunBP_C_PlacementTickActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (reachedDestination != nullptr)
		*reachedDestination = params.reachedDestination;
}


// Function StructureMinigunBP.StructureMinigunBP_C.UpdateCustomItemData
// (NetReliable, Exec, Native, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UPrimalItem*             self2                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::STATIC_UpdateCustomItemData(class UPrimalItem* self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.UpdateCustomItemData");

	AStructureMinigunBP_C_UpdateCustomItemData_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.UpdateMaterials
// (Net, NetReliable, Event, NetResponse, NetMulticast, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void AStructureMinigunBP_C::UpdateMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.UpdateMaterials");

	AStructureMinigunBP_C_UpdateMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.BPFiredWeapon
// (NetReliable, Exec, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void AStructureMinigunBP_C::STATIC_BPFiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPFiredWeapon");

	AStructureMinigunBP_C_BPFiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.BPSeatedPlayer
// ()
// Parameters:
// class AShooterCharacter**      SeatedChar                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AtSeatNumber                   (Parm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::BPSeatedPlayer(class AShooterCharacter** SeatedChar, int* AtSeatNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPSeatedPlayer");

	AStructureMinigunBP_C_BPSeatedPlayer_Params params;
	params.SeatedChar = SeatedChar;
	params.AtSeatNumber = AtSeatNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.SwitchMinigunTPVCameraView
// ()

void AStructureMinigunBP_C::SwitchMinigunTPVCameraView()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.SwitchMinigunTPVCameraView");

	AStructureMinigunBP_C_SwitchMinigunTPVCameraView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.Is First Person View
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::Is_First_Person_View(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.Is First Person View");

	AStructureMinigunBP_C_Is_First_Person_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function StructureMinigunBP.StructureMinigunBP_C.Is Client or SinglePlayer
// ()
// Parameters:
// bool                           Res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::Is_Client_or_SinglePlayer(bool* Res)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.Is Client or SinglePlayer");

	AStructureMinigunBP_C_Is_Client_or_SinglePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Res != nullptr)
		*Res = params.Res;
}


// Function StructureMinigunBP.StructureMinigunBP_C.BPGetInfoFromConsumedItemForPlacedStructure
// (Native, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UPrimalItem**            ItemToConsumed                 (Parm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::BPGetInfoFromConsumedItemForPlacedStructure(class UPrimalItem** ItemToConsumed)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPGetInfoFromConsumedItemForPlacedStructure");

	AStructureMinigunBP_C_BPGetInfoFromConsumedItemForPlacedStructure_Params params;
	params.ItemToConsumed = ItemToConsumed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.BPReleasedPlayer
// ()
// Parameters:
// class AShooterCharacter**      ReleasedChar                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AtSeatNumber                   (Parm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::BPReleasedPlayer(class AShooterCharacter** ReleasedChar, int* AtSeatNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPReleasedPlayer");

	AStructureMinigunBP_C_BPReleasedPlayer_Params params;
	params.ReleasedChar = ReleasedChar;
	params.AtSeatNumber = AtSeatNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.BPCanFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureMinigunBP_C::BPCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPCanFire");

	AStructureMinigunBP_C_BPCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureMinigunBP.StructureMinigunBP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStructureMinigunBP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPGetMultiUseEntries");

	AStructureMinigunBP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function StructureMinigunBP.StructureMinigunBP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureMinigunBP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPTryMultiUse");

	AStructureMinigunBP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureMinigunBP.StructureMinigunBP_C.UserConstructionScript
// ()

void AStructureMinigunBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.UserConstructionScript");

	AStructureMinigunBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.ReceiveTick");

	AStructureMinigunBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.TickSpinSpeed
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::TickSpinSpeed(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.TickSpinSpeed");

	AStructureMinigunBP_C_TickSpinSpeed_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.BPApplyCustomDurabilityOnPickup
// ()
// Parameters:
// class UPrimalItem**            PickedUp                       (Parm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::BPApplyCustomDurabilityOnPickup(class UPrimalItem** PickedUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.BPApplyCustomDurabilityOnPickup");

	AStructureMinigunBP_C_BPApplyCustomDurabilityOnPickup_Params params;
	params.PickedUp = PickedUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.TickTPV
// ()

void AStructureMinigunBP_C::TickTPV()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.TickTPV");

	AStructureMinigunBP_C_TickTPV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.ReceiveBeginPlay
// ()

void AStructureMinigunBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.ReceiveBeginPlay");

	AStructureMinigunBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.TickOverheat
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::TickOverheat(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.TickOverheat");

	AStructureMinigunBP_C_TickOverheat_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.Multi_AttachSocket
// ()
// Parameters:
// class AShooterCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::Multi_AttachSocket(class AShooterCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.Multi_AttachSocket");

	AStructureMinigunBP_C_Multi_AttachSocket_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.Multi_DetachCable
// ()

void AStructureMinigunBP_C::Multi_DetachCable()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.Multi_DetachCable");

	AStructureMinigunBP_C_Multi_DetachCable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.CableMat
// ()

void AStructureMinigunBP_C::CableMat()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.CableMat");

	AStructureMinigunBP_C_CableMat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.StartPlacement_Multicast
// ()
// Parameters:
// class AShooterCharacter*       constructor                    (Parm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::StartPlacement_Multicast(class AShooterCharacter* constructor)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.StartPlacement_Multicast");

	AStructureMinigunBP_C_StartPlacement_Multicast_Params params;
	params.constructor = constructor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.PlacementAnimationTickEvent
// ()

void AStructureMinigunBP_C::PlacementAnimationTickEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.PlacementAnimationTickEvent");

	AStructureMinigunBP_C_PlacementAnimationTickEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.NetOnOverheated
// ()
// Parameters:
// bool                           Start                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::NetOnOverheated(bool Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.NetOnOverheated");

	AStructureMinigunBP_C_NetOnOverheated_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.StartShellLoop
// ()

void AStructureMinigunBP_C::StartShellLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.StartShellLoop");

	AStructureMinigunBP_C_StartShellLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.StopShellLoop
// ()

void AStructureMinigunBP_C::StopShellLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.StopShellLoop");

	AStructureMinigunBP_C_StopShellLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureMinigunBP.StructureMinigunBP_C.ExecuteUbergraph_StructureMinigunBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureMinigunBP_C::ExecuteUbergraph_StructureMinigunBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureMinigunBP.StructureMinigunBP_C.ExecuteUbergraph_StructureMinigunBP");

	AStructureMinigunBP_C_ExecuteUbergraph_StructureMinigunBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
