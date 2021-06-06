// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_FeedingTrough_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_FeedingTrough.PrimalItemStructure_FeedingTrough_C.ExecuteUbergraph_PrimalItemStructure_FeedingTrough
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_FeedingTrough_C::ExecuteUbergraph_PrimalItemStructure_FeedingTrough(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_FeedingTrough.PrimalItemStructure_FeedingTrough_C.ExecuteUbergraph_PrimalItemStructure_FeedingTrough");

	UPrimalItemStructure_FeedingTrough_C_ExecuteUbergraph_PrimalItemStructure_FeedingTrough_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
