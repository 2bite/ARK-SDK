// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_ArtifactCrate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_ArtifactCrate.PrimalInventoryBP_ArtifactCrate_C.BPPreInitDefaultInventory
// ()

void UPrimalInventoryBP_ArtifactCrate_C::BPPreInitDefaultInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_ArtifactCrate.PrimalInventoryBP_ArtifactCrate_C.BPPreInitDefaultInventory");

	UPrimalInventoryBP_ArtifactCrate_C_BPPreInitDefaultInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_ArtifactCrate.PrimalInventoryBP_ArtifactCrate_C.BPRequestedInventoryItems
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_ArtifactCrate_C::BPRequestedInventoryItems(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_ArtifactCrate.PrimalInventoryBP_ArtifactCrate_C.BPRequestedInventoryItems");

	UPrimalInventoryBP_ArtifactCrate_C_BPRequestedInventoryItems_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_ArtifactCrate.PrimalInventoryBP_ArtifactCrate_C.BPInventoryRefresh
// ()

void UPrimalInventoryBP_ArtifactCrate_C::BPInventoryRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_ArtifactCrate.PrimalInventoryBP_ArtifactCrate_C.BPInventoryRefresh");

	UPrimalInventoryBP_ArtifactCrate_C_BPInventoryRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_ArtifactCrate.PrimalInventoryBP_ArtifactCrate_C.ExecuteUbergraph_PrimalInventoryBP_ArtifactCrate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_ArtifactCrate_C::ExecuteUbergraph_PrimalInventoryBP_ArtifactCrate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_ArtifactCrate.PrimalInventoryBP_ArtifactCrate_C.ExecuteUbergraph_PrimalInventoryBP_ArtifactCrate");

	UPrimalInventoryBP_ArtifactCrate_C_ExecuteUbergraph_PrimalInventoryBP_ArtifactCrate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
