// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalPipeVertical_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalPipeVertical.PrimalItemStructure_MetalPipeVertical_C.ExecuteUbergraph_PrimalItemStructure_MetalPipeVertical
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalPipeVertical_C::ExecuteUbergraph_PrimalItemStructure_MetalPipeVertical(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalPipeVertical.PrimalItemStructure_MetalPipeVertical_C.ExecuteUbergraph_PrimalItemStructure_MetalPipeVertical");

	UPrimalItemStructure_MetalPipeVertical_C_ExecuteUbergraph_PrimalItemStructure_MetalPipeVertical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
