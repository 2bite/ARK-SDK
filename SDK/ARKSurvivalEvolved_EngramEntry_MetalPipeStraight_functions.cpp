// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalPipeStraight_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalPipeStraight.EngramEntry_MetalPipeStraight_C.ExecuteUbergraph_EngramEntry_MetalPipeStraight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalPipeStraight_C::ExecuteUbergraph_EngramEntry_MetalPipeStraight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalPipeStraight.EngramEntry_MetalPipeStraight_C.ExecuteUbergraph_EngramEntry_MetalPipeStraight");

	UEngramEntry_MetalPipeStraight_C_ExecuteUbergraph_EngramEntry_MetalPipeStraight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
