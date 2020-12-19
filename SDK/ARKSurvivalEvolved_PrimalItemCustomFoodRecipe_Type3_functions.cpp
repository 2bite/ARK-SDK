// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCustomFoodRecipe_Type3_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCustomFoodRecipe_Type3.PrimalItemCustomFoodRecipe_Type3_C.ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type3
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCustomFoodRecipe_Type3_C::ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCustomFoodRecipe_Type3.PrimalItemCustomFoodRecipe_Type3_C.ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type3");

	UPrimalItemCustomFoodRecipe_Type3_C_ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
