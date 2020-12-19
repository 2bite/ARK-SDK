// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalFenceFoundation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalFenceFoundation.EngramEntry_MetalFenceFoundation_C.ExecuteUbergraph_EngramEntry_MetalFenceFoundation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalFenceFoundation_C::ExecuteUbergraph_EngramEntry_MetalFenceFoundation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalFenceFoundation.EngramEntry_MetalFenceFoundation_C.ExecuteUbergraph_EngramEntry_MetalFenceFoundation");

	UEngramEntry_MetalFenceFoundation_C_ExecuteUbergraph_EngramEntry_MetalFenceFoundation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
