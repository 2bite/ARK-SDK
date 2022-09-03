// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_EggIncubator_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPCustomRemoteInventoryAllowAddItems
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           anItemQuantityOverride         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRequestedByPlayer             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryBP_EggIncubator_C::BPCustomRemoteInventoryAllowAddItems(class AShooterPlayerController** PC, class UPrimalItem** anItem, int* anItemQuantityOverride, bool* bRequestedByPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPCustomRemoteInventoryAllowAddItems");

	UPrimalInventoryBP_EggIncubator_C_BPCustomRemoteInventoryAllowAddItems_Params params;
	params.PC = PC;
	params.anItem = anItem;
	params.anItemQuantityOverride = anItemQuantityOverride;
	params.bRequestedByPlayer = bRequestedByPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPCustomRemoteInventoryAllowRemoveItems
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            anItemToTransfer               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           RequestedQuantity              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRequestedByPlayer             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRequestDropping               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryBP_EggIncubator_C::BPCustomRemoteInventoryAllowRemoveItems(class AShooterPlayerController** PC, class UPrimalItem** anItemToTransfer, int* RequestedQuantity, bool* bRequestedByPlayer, bool* bRequestDropping)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPCustomRemoteInventoryAllowRemoveItems");

	UPrimalInventoryBP_EggIncubator_C_BPCustomRemoteInventoryAllowRemoveItems_Params params;
	params.PC = PC;
	params.anItemToTransfer = anItemToTransfer;
	params.RequestedQuantity = RequestedQuantity;
	params.bRequestedByPlayer = bRequestedByPlayer;
	params.bRequestDropping = bRequestDropping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.InventoryCustomSortPredicate
// ()
// Parameters:
// class UPrimalItem**            LeftItem                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            RightItem                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryBP_EggIncubator_C::InventoryCustomSortPredicate(class UPrimalItem** LeftItem, class UPrimalItem** RightItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.InventoryCustomSortPredicate");

	UPrimalInventoryBP_EggIncubator_C_InventoryCustomSortPredicate_Params params;
	params.LeftItem = LeftItem;
	params.RightItem = RightItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPRemoteInventoryAllowRemoveItems
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            anItemToTransfer               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryBP_EggIncubator_C::BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController** PC, class UPrimalItem** anItemToTransfer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPRemoteInventoryAllowRemoveItems");

	UPrimalInventoryBP_EggIncubator_C_BPRemoteInventoryAllowRemoveItems_Params params;
	params.PC = PC;
	params.anItemToTransfer = anItemToTransfer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPNotifyItemRemoved
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_EggIncubator_C::BPNotifyItemRemoved(class UPrimalItem** anItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPNotifyItemRemoved");

	UPrimalInventoryBP_EggIncubator_C_BPNotifyItemRemoved_Params params;
	params.anItem = anItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPNotifyItemAdded
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_EggIncubator_C::BPNotifyItemAdded(class UPrimalItem** anItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPNotifyItemAdded");

	UPrimalInventoryBP_EggIncubator_C_BPNotifyItemAdded_Params params;
	params.anItem = anItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.ExecuteUbergraph_PrimalInventoryBP_EggIncubator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_EggIncubator_C::ExecuteUbergraph_PrimalInventoryBP_EggIncubator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.ExecuteUbergraph_PrimalInventoryBP_EggIncubator");

	UPrimalInventoryBP_EggIncubator_C_ExecuteUbergraph_PrimalInventoryBP_EggIncubator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.OnFertilizedEggRemoved__DelegateSignature
// ()
// Parameters:
// class UPrimalItemConsumable_Egg_C* eggItem                        (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_EggIncubator_C::OnFertilizedEggRemoved__DelegateSignature(class UPrimalItemConsumable_Egg_C* eggItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.OnFertilizedEggRemoved__DelegateSignature");

	UPrimalInventoryBP_EggIncubator_C_OnFertilizedEggRemoved__DelegateSignature_Params params;
	params.eggItem = eggItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.OnFertilizedEggAdded__DelegateSignature
// ()
// Parameters:
// class UPrimalItemConsumable_Egg_C* eggItem                        (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_EggIncubator_C::OnFertilizedEggAdded__DelegateSignature(class UPrimalItemConsumable_Egg_C* eggItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.OnFertilizedEggAdded__DelegateSignature");

	UPrimalInventoryBP_EggIncubator_C_OnFertilizedEggAdded__DelegateSignature_Params params;
	params.eggItem = eggItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
