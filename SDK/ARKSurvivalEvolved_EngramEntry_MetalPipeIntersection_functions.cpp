// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalPipeIntersection_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalPipeIntersection.EngramEntry_MetalPipeIntersection_C.ExecuteUbergraph_EngramEntry_MetalPipeIntersection
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalPipeIntersection_C::ExecuteUbergraph_EngramEntry_MetalPipeIntersection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalPipeIntersection.EngramEntry_MetalPipeIntersection_C.ExecuteUbergraph_EngramEntry_MetalPipeIntersection");

	UEngramEntry_MetalPipeIntersection_C_ExecuteUbergraph_EngramEntry_MetalPipeIntersection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
