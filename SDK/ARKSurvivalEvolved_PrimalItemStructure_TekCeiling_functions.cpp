// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekCeiling_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekCeiling.PrimalItemStructure_TekCeiling_C.ExecuteUbergraph_PrimalItemStructure_TekCeiling
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekCeiling_C::ExecuteUbergraph_PrimalItemStructure_TekCeiling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekCeiling.PrimalItemStructure_TekCeiling_C.ExecuteUbergraph_PrimalItemStructure_TekCeiling");

	UPrimalItemStructure_TekCeiling_C_ExecuteUbergraph_PrimalItemStructure_TekCeiling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
