// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_TekCanteenCraftable_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.IsCustomContextMenuItemEnabled
// ()
// Parameters:
// struct FName                   ContextItem                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItemConsumable_TekCanteenCraftable_C::IsCustomContextMenuItemEnabled(struct FName* ContextItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.IsCustomContextMenuItemEnabled");

	UPrimalItemConsumable_TekCanteenCraftable_C_IsCustomContextMenuItemEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContextItem != nullptr)
		*ContextItem = params.ContextItem;

	return params.ReturnValue;
}


// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPGetCustomInventoryWidgetTextColor
// ()
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor UPrimalItemConsumable_TekCanteenCraftable_C::BPGetCustomInventoryWidgetTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPGetCustomInventoryWidgetTextColor");

	UPrimalItemConsumable_TekCanteenCraftable_C_BPGetCustomInventoryWidgetTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.HasEnoughPowerForUse
// ()
// Parameters:
// bool                           bHasEnoughPower                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_TekCanteenCraftable_C::HasEnoughPowerForUse(bool* bHasEnoughPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.HasEnoughPowerForUse");

	UPrimalItemConsumable_TekCanteenCraftable_C_HasEnoughPowerForUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasEnoughPower != nullptr)
		*bHasEnoughPower = params.bHasEnoughPower;
}


// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.ApplyUnpoweredBuffs
// ()

void UPrimalItemConsumable_TekCanteenCraftable_C::ApplyUnpoweredBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.ApplyUnpoweredBuffs");

	UPrimalItemConsumable_TekCanteenCraftable_C_ApplyUnpoweredBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.TryClearBuffs
// ()

void UPrimalItemConsumable_TekCanteenCraftable_C::TryClearBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.TryClearBuffs");

	UPrimalItemConsumable_TekCanteenCraftable_C_TryClearBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.GetCurrentWaterMode
// (NetRequest, Exec, Native, Event, NetResponse, Static, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   WaterMode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_TekCanteenCraftable_C::STATIC_GetCurrentWaterMode(struct FName* WaterMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.GetCurrentWaterMode");

	UPrimalItemConsumable_TekCanteenCraftable_C_GetCurrentWaterMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaterMode != nullptr)
		*WaterMode = params.WaterMode;
}


// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPGetCustomInventoryWidgetText
// (Exec, NetMulticast, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemConsumable_TekCanteenCraftable_C::BPGetCustomInventoryWidgetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPGetCustomInventoryWidgetText");

	UPrimalItemConsumable_TekCanteenCraftable_C_BPGetCustomInventoryWidgetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SetWaterMode
// (NetReliable, NetRequest, Native, NetMulticast, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   NewWaterMode                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_TekCanteenCraftable_C::SetWaterMode(const struct FName& NewWaterMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SetWaterMode");

	UPrimalItemConsumable_TekCanteenCraftable_C_SetWaterMode_Params params;
	params.NewWaterMode = NewWaterMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SelectedCustomContextMenuItem
// ()
// Parameters:
// struct FName                   ContextItem                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_TekCanteenCraftable_C::SelectedCustomContextMenuItem(class AShooterPlayerController** ForPC, struct FName* ContextItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SelectedCustomContextMenuItem");

	UPrimalItemConsumable_TekCanteenCraftable_C_SelectedCustomContextMenuItem_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContextItem != nullptr)
		*ContextItem = params.ContextItem;
}


// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.TryConsumeWithPower
// (Exec, Native, Event, NetMulticast, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UPrimalItemConsumable_TekCanteenCraftable_C::TryConsumeWithPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.TryConsumeWithPower");

	UPrimalItemConsumable_TekCanteenCraftable_C_TryConsumeWithPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BlueprintUsed
// ()

void UPrimalItemConsumable_TekCanteenCraftable_C::BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BlueprintUsed");

	UPrimalItemConsumable_TekCanteenCraftable_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SetShardDescription
// (NetReliable, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UPrimalItemConsumable_TekCanteenCraftable_C::STATIC_SetShardDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SetShardDescription");

	UPrimalItemConsumable_TekCanteenCraftable_C_SetShardDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.GetElementShardValue
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasData                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_TekCanteenCraftable_C::GetElementShardValue(bool* HasData, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.GetElementShardValue");

	UPrimalItemConsumable_TekCanteenCraftable_C_GetElementShardValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasData != nullptr)
		*HasData = params.HasData;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPPostInitializeItem
// ()
// Parameters:
// class UWorld**                 OptionalInitWorld              (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_TekCanteenCraftable_C::BPPostInitializeItem(class UWorld** OptionalInitWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPPostInitializeItem");

	UPrimalItemConsumable_TekCanteenCraftable_C_BPPostInitializeItem_Params params;
	params.OptionalInitWorld = OptionalInitWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.ExecuteUbergraph_PrimalItemConsumable_TekCanteenCraftable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_TekCanteenCraftable_C::ExecuteUbergraph_PrimalItemConsumable_TekCanteenCraftable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.ExecuteUbergraph_PrimalItemConsumable_TekCanteenCraftable");

	UPrimalItemConsumable_TekCanteenCraftable_C_ExecuteUbergraph_PrimalItemConsumable_TekCanteenCraftable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
