// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_AmmoContainerBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPNotifyAmmoBoxReloadedStructure
// ()
// Parameters:
// class APrimalStructure**       ReloadedStructure              (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_AmmoContainerBaseBP_C::BPNotifyAmmoBoxReloadedStructure(class APrimalStructure** ReloadedStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPNotifyAmmoBoxReloadedStructure");

	AStructure_AmmoContainerBaseBP_C_BPNotifyAmmoBoxReloadedStructure_Params params;
	params.ReloadedStructure = ReloadedStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.OnRep_bVisualRadiusIsActive
// ()

void AStructure_AmmoContainerBaseBP_C::OnRep_bVisualRadiusIsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.OnRep_bVisualRadiusIsActive");

	AStructure_AmmoContainerBaseBP_C_OnRep_bVisualRadiusIsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Event, MulticastDelegate, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStructure_AmmoContainerBaseBP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetMultiUseEntries");

	AStructure_AmmoContainerBaseBP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_AmmoContainerBaseBP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPClientDoMultiUse");

	AStructure_AmmoContainerBaseBP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetMultiUseCenterText
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  OutCenterText                  (Parm, OutParm, ZeroConstructor)
// struct FLinearColor            OutCenterTextColor             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructure_AmmoContainerBaseBP_C::BPGetMultiUseCenterText(class APlayerController** ForPC, int* UseIndex, class FString* OutCenterText, struct FLinearColor* OutCenterTextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetMultiUseCenterText");

	AStructure_AmmoContainerBaseBP_C_BPGetMultiUseCenterText_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCenterText != nullptr)
		*OutCenterText = params.OutCenterText;
	if (OutCenterTextColor != nullptr)
		*OutCenterTextColor = params.OutCenterTextColor;

	return params.ReturnValue;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructure_AmmoContainerBaseBP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPTryMultiUse");

	AStructure_AmmoContainerBaseBP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetAmmoBoxReloadPercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AStructure_AmmoContainerBaseBP_C::BPGetAmmoBoxReloadPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetAmmoBoxReloadPercent");

	AStructure_AmmoContainerBaseBP_C_BPGetAmmoBoxReloadPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_AmmoContainerBaseBP_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPNotifyInventoryItemChange");

	AStructure_AmmoContainerBaseBP_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UpdateAmmoTypeVisuals
// ()
// Parameters:
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_AmmoContainerBaseBP_C::UpdateAmmoTypeVisuals(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UpdateAmmoTypeVisuals");

	AStructure_AmmoContainerBaseBP_C_UpdateAmmoTypeVisuals_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.CheckNearbyPlayers
// ()

void AStructure_AmmoContainerBaseBP_C::CheckNearbyPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.CheckNearbyPlayers");

	AStructure_AmmoContainerBaseBP_C_CheckNearbyPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPOverrideCantBuildReasonString
// ()
// Parameters:
// int*                           CantBuildReason                (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AStructure_AmmoContainerBaseBP_C::BPOverrideCantBuildReasonString(int* CantBuildReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPOverrideCantBuildReasonString");

	AStructure_AmmoContainerBaseBP_C_BPOverrideCantBuildReasonString_Params params;
	params.CantBuildReason = CantBuildReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPIsAllowedToBuild
// ()
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AStructure_AmmoContainerBaseBP_C::BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPIsAllowedToBuild");

	AStructure_AmmoContainerBaseBP_C_BPIsAllowedToBuild_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UpdateAmmoChanges
// ()

void AStructure_AmmoContainerBaseBP_C::UpdateAmmoChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UpdateAmmoChanges");

	AStructure_AmmoContainerBaseBP_C_UpdateAmmoChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ChangeInAmmo
// ()
// Parameters:
// int                            NumChange                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_AmmoContainerBaseBP_C::ChangeInAmmo(int NumChange, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ChangeInAmmo");

	AStructure_AmmoContainerBaseBP_C_ChangeInAmmo_Params params;
	params.NumChange = NumChange;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetQuantityOfItemWithoutCheckingInventory
// ()
// Parameters:
// class UClass**                 ItemToCheckFor                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AStructure_AmmoContainerBaseBP_C::BPGetQuantityOfItemWithoutCheckingInventory(class UClass** ItemToCheckFor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetQuantityOfItemWithoutCheckingInventory");

	AStructure_AmmoContainerBaseBP_C_BPGetQuantityOfItemWithoutCheckingInventory_Params params;
	params.ItemToCheckFor = ItemToCheckFor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UserConstructionScript
// ()

void AStructure_AmmoContainerBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UserConstructionScript");

	AStructure_AmmoContainerBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ReceiveBeginPlay
// ()

void AStructure_AmmoContainerBaseBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ReceiveBeginPlay");

	AStructure_AmmoContainerBaseBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.Multicast_UpdateAmmoVisuals
// ()

void AStructure_AmmoContainerBaseBP_C::Multicast_UpdateAmmoVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.Multicast_UpdateAmmoVisuals");

	AStructure_AmmoContainerBaseBP_C_Multicast_UpdateAmmoVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.FullRecheckInventory
// ()

void AStructure_AmmoContainerBaseBP_C::FullRecheckInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.FullRecheckInventory");

	AStructure_AmmoContainerBaseBP_C_FullRecheckInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.Multi_PlayReloadParticle
// ()
// Parameters:
// class APrimalStructure*        ReloadedStructure              (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_AmmoContainerBaseBP_C::Multi_PlayReloadParticle(class APrimalStructure* ReloadedStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.Multi_PlayReloadParticle");

	AStructure_AmmoContainerBaseBP_C_Multi_PlayReloadParticle_Params params;
	params.ReloadedStructure = ReloadedStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.PlayReloadParticle
// ()
// Parameters:
// class APrimalStructure*        ReloadedStructure              (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_AmmoContainerBaseBP_C::PlayReloadParticle(class APrimalStructure* ReloadedStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.PlayReloadParticle");

	AStructure_AmmoContainerBaseBP_C_PlayReloadParticle_Params params;
	params.ReloadedStructure = ReloadedStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ExecuteUbergraph_Structure_AmmoContainerBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_AmmoContainerBaseBP_C::ExecuteUbergraph_Structure_AmmoContainerBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ExecuteUbergraph_Structure_AmmoContainerBaseBP");

	AStructure_AmmoContainerBaseBP_C_ExecuteUbergraph_Structure_AmmoContainerBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
