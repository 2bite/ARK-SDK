// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_SupplyCrate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPPreInitDefaultInventory
// ()

void UPrimalInventoryBP_SupplyCrate_C::BPPreInitDefaultInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPPreInitDefaultInventory");

	UPrimalInventoryBP_SupplyCrate_C_BPPreInitDefaultInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPRequestedInventoryItems
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_SupplyCrate_C::BPRequestedInventoryItems(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPRequestedInventoryItems");

	UPrimalInventoryBP_SupplyCrate_C_BPRequestedInventoryItems_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPInventoryRefresh
// ()

void UPrimalInventoryBP_SupplyCrate_C::BPInventoryRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPInventoryRefresh");

	UPrimalInventoryBP_SupplyCrate_C_BPInventoryRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.ExecuteUbergraph_PrimalInventoryBP_SupplyCrate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_SupplyCrate_C::ExecuteUbergraph_PrimalInventoryBP_SupplyCrate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.ExecuteUbergraph_PrimalInventoryBP_SupplyCrate");

	UPrimalInventoryBP_SupplyCrate_C_ExecuteUbergraph_PrimalInventoryBP_SupplyCrate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
