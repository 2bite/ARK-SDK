// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalPipeTap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalPipeTap.PrimalItemStructure_MetalPipeTap_C.ExecuteUbergraph_PrimalItemStructure_MetalPipeTap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalPipeTap_C::ExecuteUbergraph_PrimalItemStructure_MetalPipeTap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalPipeTap.PrimalItemStructure_MetalPipeTap_C.ExecuteUbergraph_PrimalItemStructure_MetalPipeTap");

	UPrimalItemStructure_MetalPipeTap_C_ExecuteUbergraph_PrimalItemStructure_MetalPipeTap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
