// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ThatchCeiling_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_ThatchCeiling.PrimalItemStructure_ThatchCeiling_C.ExecuteUbergraph_PrimalItemStructure_ThatchCeiling
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_ThatchCeiling_C::ExecuteUbergraph_PrimalItemStructure_ThatchCeiling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_ThatchCeiling.PrimalItemStructure_ThatchCeiling_C.ExecuteUbergraph_PrimalItemStructure_ThatchCeiling");

	UPrimalItemStructure_ThatchCeiling_C_ExecuteUbergraph_PrimalItemStructure_ThatchCeiling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
