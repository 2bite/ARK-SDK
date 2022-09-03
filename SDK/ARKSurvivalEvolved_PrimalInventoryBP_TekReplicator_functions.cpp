// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TekReplicator_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.BPCraftingFinishedNotification
// ()
// Parameters:
// class UPrimalItem**            itemToBeCrafted                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TekReplicator_C::BPCraftingFinishedNotification(class UPrimalItem** itemToBeCrafted)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.BPCraftingFinishedNotification");

	UPrimalInventoryBP_TekReplicator_C_BPCraftingFinishedNotification_Params params;
	params.itemToBeCrafted = itemToBeCrafted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.BPRemoteInventoryAllowViewing
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryBP_TekReplicator_C::BPRemoteInventoryAllowViewing(class AShooterPlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.BPRemoteInventoryAllowViewing");

	UPrimalInventoryBP_TekReplicator_C_BPRemoteInventoryAllowViewing_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.ExecuteUbergraph_PrimalInventoryBP_TekReplicator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TekReplicator_C::ExecuteUbergraph_PrimalInventoryBP_TekReplicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.ExecuteUbergraph_PrimalInventoryBP_TekReplicator");

	UPrimalInventoryBP_TekReplicator_C_ExecuteUbergraph_PrimalInventoryBP_TekReplicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
