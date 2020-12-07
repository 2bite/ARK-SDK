// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCustomDrinkRecipe_Type1_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCustomDrinkRecipe_Type1.PrimalItemCustomDrinkRecipe_Type1_C.ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCustomDrinkRecipe_Type1_C::ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCustomDrinkRecipe_Type1.PrimalItemCustomDrinkRecipe_Type1_C.ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type1");

	UPrimalItemCustomDrinkRecipe_Type1_C_ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
