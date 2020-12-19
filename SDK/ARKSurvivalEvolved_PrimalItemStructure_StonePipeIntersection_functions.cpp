// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StonePipeIntersection_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StonePipeIntersection.PrimalItemStructure_StonePipeIntersection_C.ExecuteUbergraph_PrimalItemStructure_StonePipeIntersection
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StonePipeIntersection_C::ExecuteUbergraph_PrimalItemStructure_StonePipeIntersection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StonePipeIntersection.PrimalItemStructure_StonePipeIntersection_C.ExecuteUbergraph_PrimalItemStructure_StonePipeIntersection");

	UPrimalItemStructure_StonePipeIntersection_C_ExecuteUbergraph_PrimalItemStructure_StonePipeIntersection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
