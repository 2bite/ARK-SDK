// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StonePipeIncline_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StonePipeIncline.PrimalItemStructure_StonePipeIncline_C.ExecuteUbergraph_PrimalItemStructure_StonePipeIncline
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StonePipeIncline_C::ExecuteUbergraph_PrimalItemStructure_StonePipeIncline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StonePipeIncline.PrimalItemStructure_StonePipeIncline_C.ExecuteUbergraph_PrimalItemStructure_StonePipeIncline");

	UPrimalItemStructure_StonePipeIncline_C_ExecuteUbergraph_PrimalItemStructure_StonePipeIncline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
