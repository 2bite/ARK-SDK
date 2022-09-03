// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_AmmoContainer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C.BPNotifyItemQuantityUpdated
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_AmmoContainer_C::BPNotifyItemQuantityUpdated(class UPrimalItem** anItem, int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C.BPNotifyItemQuantityUpdated");

	UPrimalInventoryBP_AmmoContainer_C_BPNotifyItemQuantityUpdated_Params params;
	params.anItem = anItem;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C.BPNotifyItemRemoved
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_AmmoContainer_C::BPNotifyItemRemoved(class UPrimalItem** anItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C.BPNotifyItemRemoved");

	UPrimalInventoryBP_AmmoContainer_C_BPNotifyItemRemoved_Params params;
	params.anItem = anItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C.BPNotifyItemAdded
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_AmmoContainer_C::BPNotifyItemAdded(class UPrimalItem** anItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C.BPNotifyItemAdded");

	UPrimalInventoryBP_AmmoContainer_C_BPNotifyItemAdded_Params params;
	params.anItem = anItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C.ExecuteUbergraph_PrimalInventoryBP_AmmoContainer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_AmmoContainer_C::ExecuteUbergraph_PrimalInventoryBP_AmmoContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C.ExecuteUbergraph_PrimalInventoryBP_AmmoContainer");

	UPrimalInventoryBP_AmmoContainer_C_ExecuteUbergraph_PrimalInventoryBP_AmmoContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
