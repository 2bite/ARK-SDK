// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalPipeTap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalPipeTap.EngramEntry_MetalPipeTap_C.ExecuteUbergraph_EngramEntry_MetalPipeTap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalPipeTap_C::ExecuteUbergraph_EngramEntry_MetalPipeTap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalPipeTap.EngramEntry_MetalPipeTap_C.ExecuteUbergraph_EngramEntry_MetalPipeTap");

	UEngramEntry_MetalPipeTap_C_ExecuteUbergraph_EngramEntry_MetalPipeTap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
