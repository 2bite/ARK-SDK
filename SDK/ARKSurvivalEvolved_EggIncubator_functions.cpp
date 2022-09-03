// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EggIncubator_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EggIncubator.EggIncubator_C.IsEggItemAllowed
// ()
// Parameters:
// class UPrimalItemConsumable_Egg_C* eggItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAllowed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::IsEggItemAllowed(class UPrimalItemConsumable_Egg_C* eggItem, bool* IsAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.IsEggItemAllowed");

	AEggIncubator_C_IsEggItemAllowed_Params params;
	params.eggItem = eggItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAllowed != nullptr)
		*IsAllowed = params.IsAllowed;
}


// Function EggIncubator.EggIncubator_C.GetItemDisplaySlot
// ()
// Parameters:
// class UPrimalItem*             ForItem                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSlot                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           SlotFound                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::GetItemDisplaySlot(class UPrimalItem* ForItem, int* InSlot, bool* SlotFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.GetItemDisplaySlot");

	AEggIncubator_C_GetItemDisplaySlot_Params params;
	params.ForItem = ForItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSlot != nullptr)
		*InSlot = params.InSlot;
	if (SlotFound != nullptr)
		*SlotFound = params.SlotFound;
}


// Function EggIncubator.EggIncubator_C.ClientDisplayGestationMonitorEffectAdded
// ()
// Parameters:
// struct UObject_FTransform      AtLocation                     (Parm, IsPlainOldData)

void AEggIncubator_C::ClientDisplayGestationMonitorEffectAdded(const struct UObject_FTransform& AtLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ClientDisplayGestationMonitorEffectAdded");

	AEggIncubator_C_ClientDisplayGestationMonitorEffectAdded_Params params;
	params.AtLocation = AtLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.BPNotifyPowerChanged
// ()

void AEggIncubator_C::BPNotifyPowerChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.BPNotifyPowerChanged");

	AEggIncubator_C_BPNotifyPowerChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.SetIncubatorMaterialValues
// ()

void AEggIncubator_C::SetIncubatorMaterialValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.SetIncubatorMaterialValues");

	AEggIncubator_C_SetIncubatorMaterialValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.UpdateWarmingLights
// ()

void AEggIncubator_C::UpdateWarmingLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.UpdateWarmingLights");

	AEggIncubator_C_UpdateWarmingLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.GetWarmingLightForSlot
// ()
// Parameters:
// int                            ForSlotIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* WarmingLightComponent          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::GetWarmingLightForSlot(int ForSlotIndex, class UParticleSystemComponent** WarmingLightComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.GetWarmingLightForSlot");

	AEggIncubator_C_GetWarmingLightForSlot_Params params;
	params.ForSlotIndex = ForSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WarmingLightComponent != nullptr)
		*WarmingLightComponent = params.WarmingLightComponent;
}


// Function EggIncubator.EggIncubator_C.DestroyEggDisplay
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            ItemID1                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID2                        (Parm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::DestroyEggDisplay(int ItemID1, int ItemID2)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.DestroyEggDisplay");

	AEggIncubator_C_DestroyEggDisplay_Params params;
	params.ItemID1 = ItemID1;
	params.ItemID2 = ItemID2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.CanEggIncubateInTemp
// ()
// Parameters:
// class UPrimalItemConsumable_Egg_C* eggItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanIncubate                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::CanEggIncubateInTemp(class UPrimalItemConsumable_Egg_C* eggItem, bool* bCanIncubate)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.CanEggIncubateInTemp");

	AEggIncubator_C_CanEggIncubateInTemp_Params params;
	params.eggItem = eggItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanIncubate != nullptr)
		*bCanIncubate = params.bCanIncubate;
}


// Function EggIncubator.EggIncubator_C.UpdateIndoorsStatus
// ()

void AEggIncubator_C::UpdateIndoorsStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.UpdateIndoorsStatus");

	AEggIncubator_C_UpdateIndoorsStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.CalculateIncubationInsulation
// ()

void AEggIncubator_C::CalculateIncubationInsulation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.CalculateIncubationInsulation");

	AEggIncubator_C_CalculateIncubationInsulation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.CanEggBeHatched
// ()
// Parameters:
// class UPrimalItemConsumable_Egg_C* eggItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHatchable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::CanEggBeHatched(class UPrimalItemConsumable_Egg_C* eggItem, bool* IsHatchable)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.CanEggBeHatched");

	AEggIncubator_C_CanEggBeHatched_Params params;
	params.eggItem = eggItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsHatchable != nullptr)
		*IsHatchable = params.IsHatchable;
}


// Function EggIncubator.EggIncubator_C.TrySpawnEggToWorld
// (NetReliable, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UPrimalItemConsumable_Egg_C* eggItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           EggWasSpawned                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::TrySpawnEggToWorld(class UPrimalItemConsumable_Egg_C* eggItem, bool* EggWasSpawned)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.TrySpawnEggToWorld");

	AEggIncubator_C_TrySpawnEggToWorld_Params params;
	params.eggItem = eggItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EggWasSpawned != nullptr)
		*EggWasSpawned = params.EggWasSpawned;
}


// Function EggIncubator.EggIncubator_C.ThrottledTick
// ()

void AEggIncubator_C::ThrottledTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ThrottledTick");

	AEggIncubator_C_ThrottledTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.ServerSyncEggDisplay
// (NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AEggIncubator_C::ServerSyncEggDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ServerSyncEggDisplay");

	AEggIncubator_C_ServerSyncEggDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.GetTempBonusRawPercent
// ()
// Parameters:
// float                          EggTempLowerBound              (Parm, ZeroConstructor, IsPlainOldData)
// float                          EggTempUpperBound              (Parm, ZeroConstructor, IsPlainOldData)
// float                          BoostPercent                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::GetTempBonusRawPercent(float EggTempLowerBound, float EggTempUpperBound, float* BoostPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.GetTempBonusRawPercent");

	AEggIncubator_C_GetTempBonusRawPercent_Params params;
	params.EggTempLowerBound = EggTempLowerBound;
	params.EggTempUpperBound = EggTempUpperBound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoostPercent != nullptr)
		*BoostPercent = params.BoostPercent;
}


// Function EggIncubator.EggIncubator_C.SetIncubatorCustomDatasForEgg
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UPrimalItemConsumable_Egg_C* eggItem                        (Parm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::SetIncubatorCustomDatasForEgg(class UPrimalItemConsumable_Egg_C* eggItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.SetIncubatorCustomDatasForEgg");

	AEggIncubator_C_SetIncubatorCustomDatasForEgg_Params params;
	params.eggItem = eggItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEggIncubator_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.BPServerHandleNetExecCommand");

	AEggIncubator_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function EggIncubator.EggIncubator_C.ClientRemoveFertilizedEgg
// ()
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::ClientRemoveFertilizedEgg(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ClientRemoveFertilizedEgg");

	AEggIncubator_C_ClientRemoveFertilizedEgg_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.ClientAddFertilizedEgg
// ()
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FUnreplicatedEggData    ManuallyReplicatedEggData      (Parm, OutParm, ReferenceParm)
// struct FItemNetInfo            ItemNetInfo                    (Parm, OutParm, ReferenceParm)

void AEggIncubator_C::ClientAddFertilizedEgg(int SlotIndex, struct FUnreplicatedEggData* ManuallyReplicatedEggData, struct FItemNetInfo* ItemNetInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ClientAddFertilizedEgg");

	AEggIncubator_C_ClientAddFertilizedEgg_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ManuallyReplicatedEggData != nullptr)
		*ManuallyReplicatedEggData = params.ManuallyReplicatedEggData;
	if (ItemNetInfo != nullptr)
		*ItemNetInfo = params.ItemNetInfo;
}


// Function EggIncubator.EggIncubator_C.SetupEggSlots
// ()

void AEggIncubator_C::SetupEggSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.SetupEggSlots");

	AEggIncubator_C_SetupEggSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.RefreshEggDisplays
// (NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AEggIncubator_C::STATIC_RefreshEggDisplays()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.RefreshEggDisplays");

	AEggIncubator_C_RefreshEggDisplays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.CheckIsFertilizedEgg
// ()
// Parameters:
// class UPrimalItemConsumable_Egg_C* eggItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFertilized                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::CheckIsFertilizedEgg(class UPrimalItemConsumable_Egg_C* eggItem, bool* IsFertilized)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.CheckIsFertilizedEgg");

	AEggIncubator_C_CheckIsFertilizedEgg_Params params;
	params.eggItem = eggItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFertilized != nullptr)
		*IsFertilized = params.IsFertilized;
}


// Function EggIncubator.EggIncubator_C.GetSlotIndexForEggItem
// ()
// Parameters:
// class UPrimalItemConsumable_Egg_C* eggItem                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            SlotIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::GetSlotIndexForEggItem(class UPrimalItemConsumable_Egg_C* eggItem, int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.GetSlotIndexForEggItem");

	AEggIncubator_C_GetSlotIndexForEggItem_Params params;
	params.eggItem = eggItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotIndex != nullptr)
		*SlotIndex = params.SlotIndex;
}


// Function EggIncubator.EggIncubator_C.GetFirstAvailableEggSlotIndex
// ()
// Parameters:
// int                            EggSlotIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::GetFirstAvailableEggSlotIndex(int* EggSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.GetFirstAvailableEggSlotIndex");

	AEggIncubator_C_GetFirstAvailableEggSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EggSlotIndex != nullptr)
		*EggSlotIndex = params.EggSlotIndex;
}


// Function EggIncubator.EggIncubator_C.BPPostInitializeComponents
// ()

void AEggIncubator_C::BPPostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.BPPostInitializeComponents");

	AEggIncubator_C_BPPostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.ServerRemoveFertilizedEgg
// ()
// Parameters:
// class UPrimalItemConsumable_Egg_C* eggItem                        (Parm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::ServerRemoveFertilizedEgg(class UPrimalItemConsumable_Egg_C* eggItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ServerRemoveFertilizedEgg");

	AEggIncubator_C_ServerRemoveFertilizedEgg_Params params;
	params.eggItem = eggItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.ServerAddFertilizedEgg
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UPrimalItemConsumable_Egg_C* eggItem                        (Parm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::ServerAddFertilizedEgg(class UPrimalItemConsumable_Egg_C* eggItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ServerAddFertilizedEgg");

	AEggIncubator_C_ServerAddFertilizedEgg_Params params;
	params.eggItem = eggItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.BPTryMultiUse
// (NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEggIncubator_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.BPTryMultiUse");

	AEggIncubator_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EggIncubator.EggIncubator_C.BPClientDoMultiUse
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Public, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::STATIC_BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.BPClientDoMultiUse");

	AEggIncubator_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.AddTempControlEntries
// (Event, Static, MulticastDelegate, Public, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AEggIncubator_C::STATIC_AddTempControlEntries(TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.AddTempControlEntries");

	AEggIncubator_C_AddTempControlEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;
}


// Function EggIncubator.EggIncubator_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AEggIncubator_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.BPGetMultiUseEntries");

	AEggIncubator_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function EggIncubator.EggIncubator_C.BPGetMultiUseCenterText
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  OutCenterText                  (Parm, OutParm, ZeroConstructor)
// struct FLinearColor            OutCenterTextColor             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEggIncubator_C::BPGetMultiUseCenterText(class APlayerController** ForPC, int* UseIndex, class FString* OutCenterText, struct FLinearColor* OutCenterTextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.BPGetMultiUseCenterText");

	AEggIncubator_C_BPGetMultiUseCenterText_Params params;
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


// Function EggIncubator.EggIncubator_C.GetTempControlBonus
// ()
// Parameters:
// float                          EggTempLowerBound              (Parm, ZeroConstructor, IsPlainOldData)
// float                          EggTempUpperBound              (Parm, ZeroConstructor, IsPlainOldData)
// float                          TempControlBonusMultiplier     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::GetTempControlBonus(float EggTempLowerBound, float EggTempUpperBound, float* TempControlBonusMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.GetTempControlBonus");

	AEggIncubator_C_GetTempControlBonus_Params params;
	params.EggTempLowerBound = EggTempLowerBound;
	params.EggTempUpperBound = EggTempUpperBound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TempControlBonusMultiplier != nullptr)
		*TempControlBonusMultiplier = params.TempControlBonusMultiplier;
}


// Function EggIncubator.EggIncubator_C.UpdateIncubation
// ()

void AEggIncubator_C::UpdateIncubation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.UpdateIncubation");

	AEggIncubator_C_UpdateIncubation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.UpdateCachedHatchSpeedMultiplier
// ()

void AEggIncubator_C::UpdateCachedHatchSpeedMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.UpdateCachedHatchSpeedMultiplier");

	AEggIncubator_C_UpdateCachedHatchSpeedMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.UserConstructionScript
// ()

void AEggIncubator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.UserConstructionScript");

	AEggIncubator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.ClientNotifyAddedEgg
// ()
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FUnreplicatedEggData    ManuallyReplicatedEggData      (Parm)
// struct FItemNetInfo            ItemNetInfo                    (Parm)

void AEggIncubator_C::ClientNotifyAddedEgg(int SlotIndex, const struct FUnreplicatedEggData& ManuallyReplicatedEggData, const struct FItemNetInfo& ItemNetInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ClientNotifyAddedEgg");

	AEggIncubator_C_ClientNotifyAddedEgg_Params params;
	params.SlotIndex = SlotIndex;
	params.ManuallyReplicatedEggData = ManuallyReplicatedEggData;
	params.ItemNetInfo = ItemNetInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.ClientNotifyRemovedEgg
// ()
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::ClientNotifyRemovedEgg(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ClientNotifyRemovedEgg");

	AEggIncubator_C_ClientNotifyRemovedEgg_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.ReceiveBeginPlay
// ()

void AEggIncubator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ReceiveBeginPlay");

	AEggIncubator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.MC_DestroyEggVFX
// ()
// Parameters:
// int                            ItemID1                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID2                        (Parm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::MC_DestroyEggVFX(int ItemID1, int ItemID2)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.MC_DestroyEggVFX");

	AEggIncubator_C_MC_DestroyEggVFX_Params params;
	params.ItemID1 = ItemID1;
	params.ItemID2 = ItemID2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.BPUnstasis
// ()

void AEggIncubator_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.BPUnstasis");

	AEggIncubator_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.MC_UpdateWarmingLighhts
// ()

void AEggIncubator_C::MC_UpdateWarmingLighhts()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.MC_UpdateWarmingLighhts");

	AEggIncubator_C_MC_UpdateWarmingLighhts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.MC_NotifyPowerChanged
// ()

void AEggIncubator_C::MC_NotifyPowerChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.MC_NotifyPowerChanged");

	AEggIncubator_C_MC_NotifyPowerChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggIncubator.EggIncubator_C.ExecuteUbergraph_EggIncubator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEggIncubator_C::ExecuteUbergraph_EggIncubator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubator.EggIncubator_C.ExecuteUbergraph_EggIncubator");

	AEggIncubator_C_ExecuteUbergraph_EggIncubator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
