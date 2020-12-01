// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalCeiling_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalCeiling.PrimalItemStructure_MetalCeiling_C.ExecuteUbergraph_PrimalItemStructure_MetalCeiling
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalCeiling_C::ExecuteUbergraph_PrimalItemStructure_MetalCeiling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalCeiling.PrimalItemStructure_MetalCeiling_C.ExecuteUbergraph_PrimalItemStructure_MetalCeiling");

	UPrimalItemStructure_MetalCeiling_C_ExecuteUbergraph_PrimalItemStructure_MetalCeiling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
