// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCustomFoodRecipe_Type2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCustomFoodRecipe_Type2.PrimalItemCustomFoodRecipe_Type2_C.ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCustomFoodRecipe_Type2_C::ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCustomFoodRecipe_Type2.PrimalItemCustomFoodRecipe_Type2_C.ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type2");

	UPrimalItemCustomFoodRecipe_Type2_C_ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
