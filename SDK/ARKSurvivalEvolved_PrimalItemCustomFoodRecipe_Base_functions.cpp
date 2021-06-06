// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCustomFoodRecipe_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCustomFoodRecipe_Base.PrimalItemCustomFoodRecipe_Base_C.ExecuteUbergraph_PrimalItemCustomFoodRecipe_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCustomFoodRecipe_Base_C::ExecuteUbergraph_PrimalItemCustomFoodRecipe_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCustomFoodRecipe_Base.PrimalItemCustomFoodRecipe_Base_C.ExecuteUbergraph_PrimalItemCustomFoodRecipe_Base");

	UPrimalItemCustomFoodRecipe_Base_C_ExecuteUbergraph_PrimalItemCustomFoodRecipe_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
