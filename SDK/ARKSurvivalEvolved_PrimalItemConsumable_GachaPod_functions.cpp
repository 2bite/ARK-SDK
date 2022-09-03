// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_GachaPod_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BPOnItemConsumed
// ()
// Parameters:
// class UPrimalInventoryComponent** inventory                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           remainingQuantity              (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_GachaPod_C::BPOnItemConsumed(class UPrimalInventoryComponent** inventory, int* remainingQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BPOnItemConsumed");

	UPrimalItemConsumable_GachaPod_C_BPOnItemConsumed_Params params;
	params.inventory = inventory;
	params.remainingQuantity = remainingQuantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.RollLoot
// (Exec, Native, Event, Public, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class UPrimalInventoryComponent* Inv                            (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_GachaPod_C::RollLoot(class UPrimalInventoryComponent* Inv)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.RollLoot");

	UPrimalItemConsumable_GachaPod_C_RollLoot_Params params;
	params.Inv = Inv;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.ShowHUDNotification
// (NetRequest, Event, MulticastDelegate, Public, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class UPrimalItem*             Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Resource                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quanity                        (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalInventoryComponent* Inv                            (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_GachaPod_C::ShowHUDNotification(class UPrimalItem* Item, class UClass* Resource, int Quanity, class UPrimalInventoryComponent* Inv)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.ShowHUDNotification");

	UPrimalItemConsumable_GachaPod_C_ShowHUDNotification_Params params;
	params.Item = Item;
	params.Resource = Resource;
	params.Quanity = Quanity;
	params.Inv = Inv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BPPostInitializeItem
// (NetReliable, Exec, Event, Static, Public, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class UWorld**                 OptionalInitWorld              (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_GachaPod_C::STATIC_BPPostInitializeItem(class UWorld** OptionalInitWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BPPostInitializeItem");

	UPrimalItemConsumable_GachaPod_C_BPPostInitializeItem_Params params;
	params.OptionalInitWorld = OptionalInitWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BlueprintUsed
// ()

void UPrimalItemConsumable_GachaPod_C::BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BlueprintUsed");

	UPrimalItemConsumable_GachaPod_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.ExecuteUbergraph_PrimalItemConsumable_GachaPod
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_GachaPod_C::ExecuteUbergraph_PrimalItemConsumable_GachaPod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.ExecuteUbergraph_PrimalItemConsumable_GachaPod");

	UPrimalItemConsumable_GachaPod_C_ExecuteUbergraph_PrimalItemConsumable_GachaPod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
