// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalRamp_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalRamp.EngramEntry_MetalRamp_C.ExecuteUbergraph_EngramEntry_MetalRamp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalRamp_C::ExecuteUbergraph_EngramEntry_MetalRamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalRamp.EngramEntry_MetalRamp_C.ExecuteUbergraph_EngramEntry_MetalRamp");

	UEngramEntry_MetalRamp_C_ExecuteUbergraph_EngramEntry_MetalRamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
