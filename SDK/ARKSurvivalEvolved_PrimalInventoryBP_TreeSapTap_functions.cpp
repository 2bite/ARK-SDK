// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TreeSapTap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPOnComponentCreated
// ()

void UPrimalInventoryBP_TreeSapTap_C::BPOnComponentCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPOnComponentCreated");

	UPrimalInventoryBP_TreeSapTap_C_BPOnComponentCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPCustomRemoteInventoryAllowAddItems
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           anItemQuantityOverride         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRequestedByPlayer             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryBP_TreeSapTap_C::BPCustomRemoteInventoryAllowAddItems(class AShooterPlayerController** PC, class UPrimalItem** anItem, int* anItemQuantityOverride, bool* bRequestedByPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPCustomRemoteInventoryAllowAddItems");

	UPrimalInventoryBP_TreeSapTap_C_BPCustomRemoteInventoryAllowAddItems_Params params;
	params.PC = PC;
	params.anItem = anItem;
	params.anItemQuantityOverride = anItemQuantityOverride;
	params.bRequestedByPlayer = bRequestedByPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.FindNearbySapTaps
// ()
// Parameters:
// int                            NumOutTaps                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TreeSapTap_C::FindNearbySapTaps(int* NumOutTaps)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.FindNearbySapTaps");

	UPrimalInventoryBP_TreeSapTap_C_FindNearbySapTaps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumOutTaps != nullptr)
		*NumOutTaps = params.NumOutTaps;
}


// Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPInventoryRefresh
// ()

void UPrimalInventoryBP_TreeSapTap_C::BPInventoryRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPInventoryRefresh");

	UPrimalInventoryBP_TreeSapTap_C_BPInventoryRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.ExecuteUbergraph_PrimalInventoryBP_TreeSapTap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TreeSapTap_C::ExecuteUbergraph_PrimalInventoryBP_TreeSapTap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.ExecuteUbergraph_PrimalInventoryBP_TreeSapTap");

	UPrimalInventoryBP_TreeSapTap_C_ExecuteUbergraph_PrimalInventoryBP_TreeSapTap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
