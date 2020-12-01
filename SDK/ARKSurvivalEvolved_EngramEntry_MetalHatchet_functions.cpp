// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalHatchet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalHatchet.EngramEntry_MetalHatchet_C.ExecuteUbergraph_EngramEntry_MetalHatchet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalHatchet_C::ExecuteUbergraph_EngramEntry_MetalHatchet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalHatchet.EngramEntry_MetalHatchet_C.ExecuteUbergraph_EngramEntry_MetalHatchet");

	UEngramEntry_MetalHatchet_C_ExecuteUbergraph_EngramEntry_MetalHatchet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
