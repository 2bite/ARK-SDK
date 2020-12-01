// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_GachaPod_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.ShowHUDNotification
// (NetRequest, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// class UPrimalItem*             Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Resource                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quanity                        (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_GachaPod_C::STATIC_ShowHUDNotification(class UPrimalItem* Item, class UClass* Resource, int Quanity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.ShowHUDNotification");

	UPrimalItemConsumable_GachaPod_C_ShowHUDNotification_Params params;
	params.Item = Item;
	params.Resource = Resource;
	params.Quanity = Quanity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BPPostInitializeItem
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
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
// (Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)

void UPrimalItemConsumable_GachaPod_C::STATIC_BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BlueprintUsed");

	UPrimalItemConsumable_GachaPod_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

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
