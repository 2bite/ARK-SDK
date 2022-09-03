// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_LoadoutDummyHotbar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_LoadoutDummyHotbar.PrimalInventoryBP_LoadoutDummyHotbar_C.BPRemoteInventoryAllowRemoveItems
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            anItemToTransfer               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryBP_LoadoutDummyHotbar_C::BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController** PC, class UPrimalItem** anItemToTransfer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_LoadoutDummyHotbar.PrimalInventoryBP_LoadoutDummyHotbar_C.BPRemoteInventoryAllowRemoveItems");

	UPrimalInventoryBP_LoadoutDummyHotbar_C_BPRemoteInventoryAllowRemoveItems_Params params;
	params.PC = PC;
	params.anItemToTransfer = anItemToTransfer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryBP_LoadoutDummyHotbar.PrimalInventoryBP_LoadoutDummyHotbar_C.BPAllowAddInventoryItem
// ()
// Parameters:
// class UPrimalItem**            Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           RequestedQuantity              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOnlyAddAll                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryBP_LoadoutDummyHotbar_C::BPAllowAddInventoryItem(class UPrimalItem** Item, int* RequestedQuantity, bool* bOnlyAddAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_LoadoutDummyHotbar.PrimalInventoryBP_LoadoutDummyHotbar_C.BPAllowAddInventoryItem");

	UPrimalInventoryBP_LoadoutDummyHotbar_C_BPAllowAddInventoryItem_Params params;
	params.Item = Item;
	params.RequestedQuantity = RequestedQuantity;
	params.bOnlyAddAll = bOnlyAddAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryBP_LoadoutDummyHotbar.PrimalInventoryBP_LoadoutDummyHotbar_C.ExecuteUbergraph_PrimalInventoryBP_LoadoutDummyHotbar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_LoadoutDummyHotbar_C::ExecuteUbergraph_PrimalInventoryBP_LoadoutDummyHotbar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_LoadoutDummyHotbar.PrimalInventoryBP_LoadoutDummyHotbar_C.ExecuteUbergraph_PrimalInventoryBP_LoadoutDummyHotbar");

	UPrimalInventoryBP_LoadoutDummyHotbar_C_ExecuteUbergraph_PrimalInventoryBP_LoadoutDummyHotbar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
