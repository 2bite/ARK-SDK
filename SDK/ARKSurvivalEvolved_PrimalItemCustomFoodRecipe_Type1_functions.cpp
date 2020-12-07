// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCustomFoodRecipe_Type1_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCustomFoodRecipe_Type1.PrimalItemCustomFoodRecipe_Type1_C.ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCustomFoodRecipe_Type1_C::ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCustomFoodRecipe_Type1.PrimalItemCustomFoodRecipe_Type1_C.ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type1");

	UPrimalItemCustomFoodRecipe_Type1_C_ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
