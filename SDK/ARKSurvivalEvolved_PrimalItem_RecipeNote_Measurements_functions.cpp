// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_Measurements_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_RecipeNote_Measurements.PrimalItem_RecipeNote_Measurements_C.ExecuteUbergraph_PrimalItem_RecipeNote_Measurements
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_RecipeNote_Measurements_C::ExecuteUbergraph_PrimalItem_RecipeNote_Measurements(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_Measurements.PrimalItem_RecipeNote_Measurements_C.ExecuteUbergraph_PrimalItem_RecipeNote_Measurements");

	UPrimalItem_RecipeNote_Measurements_C_ExecuteUbergraph_PrimalItem_RecipeNote_Measurements_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
