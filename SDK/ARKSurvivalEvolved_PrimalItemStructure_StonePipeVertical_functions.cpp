// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StonePipeVertical_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StonePipeVertical.PrimalItemStructure_StonePipeVertical_C.ExecuteUbergraph_PrimalItemStructure_StonePipeVertical
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StonePipeVertical_C::ExecuteUbergraph_PrimalItemStructure_StonePipeVertical(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StonePipeVertical.PrimalItemStructure_StonePipeVertical_C.ExecuteUbergraph_PrimalItemStructure_StonePipeVertical");

	UPrimalItemStructure_StonePipeVertical_C_ExecuteUbergraph_PrimalItemStructure_StonePipeVertical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
