// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StonePipeTap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StonePipeTap.PrimalItemStructure_StonePipeTap_C.ExecuteUbergraph_PrimalItemStructure_StonePipeTap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StonePipeTap_C::ExecuteUbergraph_PrimalItemStructure_StonePipeTap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StonePipeTap.PrimalItemStructure_StonePipeTap_C.ExecuteUbergraph_PrimalItemStructure_StonePipeTap");

	UPrimalItemStructure_StonePipeTap_C_ExecuteUbergraph_PrimalItemStructure_StonePipeTap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
