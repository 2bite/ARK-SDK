// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventory_DedicatedStorage_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPOnTransferAll
// ()
// Parameters:
// class UPrimalInventoryComponent** toInventory                    (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventory_DedicatedStorage_C::BPOnTransferAll(class UPrimalInventoryComponent** toInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPOnTransferAll");

	UPrimalInventory_DedicatedStorage_C_BPOnTransferAll_Params params;
	params.toInventory = toInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPGetExtraItemDisplay
// ()
// Parameters:
// bool                           bShowExtraItem                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Description                    (Parm, OutParm, ZeroConstructor)
// class FString                  CustomString                   (Parm, OutParm, ZeroConstructor)
// class UTexture2D*              EntryIcon                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      EntryMaterial                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalInventory_DedicatedStorage_C::BPGetExtraItemDisplay(bool* bShowExtraItem, class FString* Description, class FString* CustomString, class UTexture2D** EntryIcon, class UMaterialInterface** EntryMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPGetExtraItemDisplay");

	UPrimalInventory_DedicatedStorage_C_BPGetExtraItemDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShowExtraItem != nullptr)
		*bShowExtraItem = params.bShowExtraItem;
	if (Description != nullptr)
		*Description = params.Description;
	if (CustomString != nullptr)
		*CustomString = params.CustomString;
	if (EntryIcon != nullptr)
		*EntryIcon = params.EntryIcon;
	if (EntryMaterial != nullptr)
		*EntryMaterial = params.EntryMaterial;
}


// Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPAllowAddInventoryItem
// ()
// Parameters:
// class UPrimalItem**            Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           RequestedQuantity              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOnlyAddAll                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventory_DedicatedStorage_C::BPAllowAddInventoryItem(class UPrimalItem** Item, int* RequestedQuantity, bool* bOnlyAddAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPAllowAddInventoryItem");

	UPrimalInventory_DedicatedStorage_C_BPAllowAddInventoryItem_Params params;
	params.Item = Item;
	params.RequestedQuantity = RequestedQuantity;
	params.bOnlyAddAll = bOnlyAddAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPRemoteInventoryGetMaxVisibleSlots
// ()
// Parameters:
// int*                           NumItems                       (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsLocal                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPrimalInventory_DedicatedStorage_C::BPRemoteInventoryGetMaxVisibleSlots(int* NumItems, class AShooterPlayerController** PC, bool* bIsLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPRemoteInventoryGetMaxVisibleSlots");

	UPrimalInventory_DedicatedStorage_C_BPRemoteInventoryGetMaxVisibleSlots_Params params;
	params.NumItems = NumItems;
	params.PC = PC;
	params.bIsLocal = bIsLocal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.ExecuteUbergraph_PrimalInventory_DedicatedStorage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventory_DedicatedStorage_C::ExecuteUbergraph_PrimalInventory_DedicatedStorage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.ExecuteUbergraph_PrimalInventory_DedicatedStorage");

	UPrimalInventory_DedicatedStorage_C_ExecuteUbergraph_PrimalInventory_DedicatedStorage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
