// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_FeedingTrough_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_FeedingTrough.EngramEntry_FeedingTrough_C.ExecuteUbergraph_EngramEntry_FeedingTrough
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_FeedingTrough_C::ExecuteUbergraph_EngramEntry_FeedingTrough(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_FeedingTrough.EngramEntry_FeedingTrough_C.ExecuteUbergraph_EngramEntry_FeedingTrough");

	UEngramEntry_FeedingTrough_C_ExecuteUbergraph_EngramEntry_FeedingTrough_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
