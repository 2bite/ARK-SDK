// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_FeedingTrough_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_FeedingTrough.PrimalInventoryBP_FeedingTrough_C.ExecuteUbergraph_PrimalInventoryBP_FeedingTrough
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_FeedingTrough_C::ExecuteUbergraph_PrimalInventoryBP_FeedingTrough(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_FeedingTrough.PrimalInventoryBP_FeedingTrough_C.ExecuteUbergraph_PrimalInventoryBP_FeedingTrough");

	UPrimalInventoryBP_FeedingTrough_C_ExecuteUbergraph_PrimalInventoryBP_FeedingTrough_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
