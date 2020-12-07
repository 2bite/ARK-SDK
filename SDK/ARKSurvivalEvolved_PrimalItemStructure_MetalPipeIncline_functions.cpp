// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalPipeIncline_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalPipeIncline.PrimalItemStructure_MetalPipeIncline_C.ExecuteUbergraph_PrimalItemStructure_MetalPipeIncline
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalPipeIncline_C::ExecuteUbergraph_PrimalItemStructure_MetalPipeIncline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalPipeIncline.PrimalItemStructure_MetalPipeIncline_C.ExecuteUbergraph_PrimalItemStructure_MetalPipeIncline");

	UPrimalItemStructure_MetalPipeIncline_C_ExecuteUbergraph_PrimalItemStructure_MetalPipeIncline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
