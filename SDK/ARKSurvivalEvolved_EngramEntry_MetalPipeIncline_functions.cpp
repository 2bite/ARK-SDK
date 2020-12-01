// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalPipeIncline_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalPipeIncline.EngramEntry_MetalPipeIncline_C.ExecuteUbergraph_EngramEntry_MetalPipeIncline
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalPipeIncline_C::ExecuteUbergraph_EngramEntry_MetalPipeIncline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalPipeIncline.EngramEntry_MetalPipeIncline_C.ExecuteUbergraph_EngramEntry_MetalPipeIncline");

	UEngramEntry_MetalPipeIncline_C_ExecuteUbergraph_EngramEntry_MetalPipeIncline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
