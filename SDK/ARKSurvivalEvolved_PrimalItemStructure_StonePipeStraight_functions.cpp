// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StonePipeStraight_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StonePipeStraight.PrimalItemStructure_StonePipeStraight_C.ExecuteUbergraph_PrimalItemStructure_StonePipeStraight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StonePipeStraight_C::ExecuteUbergraph_PrimalItemStructure_StonePipeStraight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StonePipeStraight.PrimalItemStructure_StonePipeStraight_C.ExecuteUbergraph_PrimalItemStructure_StonePipeStraight");

	UPrimalItemStructure_StonePipeStraight_C_ExecuteUbergraph_PrimalItemStructure_StonePipeStraight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
