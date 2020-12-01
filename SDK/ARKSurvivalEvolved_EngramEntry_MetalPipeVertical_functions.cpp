// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalPipeVertical_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalPipeVertical.EngramEntry_MetalPipeVertical_C.ExecuteUbergraph_EngramEntry_MetalPipeVertical
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalPipeVertical_C::ExecuteUbergraph_EngramEntry_MetalPipeVertical(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalPipeVertical.EngramEntry_MetalPipeVertical_C.ExecuteUbergraph_EngramEntry_MetalPipeVertical");

	UEngramEntry_MetalPipeVertical_C_ExecuteUbergraph_EngramEntry_MetalPipeVertical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
