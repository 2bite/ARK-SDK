// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StonePipeIntersection_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StonePipeIntersection.EngramEntry_StonePipeIntersection_C.ExecuteUbergraph_EngramEntry_StonePipeIntersection
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StonePipeIntersection_C::ExecuteUbergraph_EngramEntry_StonePipeIntersection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StonePipeIntersection.EngramEntry_StonePipeIntersection_C.ExecuteUbergraph_EngramEntry_StonePipeIntersection");

	UEngramEntry_StonePipeIntersection_C_ExecuteUbergraph_EngramEntry_StonePipeIntersection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
