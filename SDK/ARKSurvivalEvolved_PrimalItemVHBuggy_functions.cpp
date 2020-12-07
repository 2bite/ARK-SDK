// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemVHBuggy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemVHBuggy.PrimalItemVHBuggy_C.ExecuteUbergraph_PrimalItemVHBuggy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemVHBuggy_C::ExecuteUbergraph_PrimalItemVHBuggy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemVHBuggy.PrimalItemVHBuggy_C.ExecuteUbergraph_PrimalItemVHBuggy");

	UPrimalItemVHBuggy_C_ExecuteUbergraph_PrimalItemVHBuggy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
