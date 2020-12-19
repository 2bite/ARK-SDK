// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalPipeIntersection_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalPipeIntersection.PrimalItemStructure_MetalPipeIntersection_C.ExecuteUbergraph_PrimalItemStructure_MetalPipeIntersection
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalPipeIntersection_C::ExecuteUbergraph_PrimalItemStructure_MetalPipeIntersection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalPipeIntersection.PrimalItemStructure_MetalPipeIntersection_C.ExecuteUbergraph_PrimalItemStructure_MetalPipeIntersection");

	UPrimalItemStructure_MetalPipeIntersection_C_ExecuteUbergraph_PrimalItemStructure_MetalPipeIntersection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
