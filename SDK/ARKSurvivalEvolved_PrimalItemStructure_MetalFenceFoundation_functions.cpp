// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalFenceFoundation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalFenceFoundation.PrimalItemStructure_MetalFenceFoundation_C.ExecuteUbergraph_PrimalItemStructure_MetalFenceFoundation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalFenceFoundation_C::ExecuteUbergraph_PrimalItemStructure_MetalFenceFoundation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalFenceFoundation.PrimalItemStructure_MetalFenceFoundation_C.ExecuteUbergraph_PrimalItemStructure_MetalFenceFoundation");

	UPrimalItemStructure_MetalFenceFoundation_C_ExecuteUbergraph_PrimalItemStructure_MetalFenceFoundation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
