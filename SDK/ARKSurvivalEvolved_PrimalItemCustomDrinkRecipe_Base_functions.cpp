// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCustomDrinkRecipe_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCustomDrinkRecipe_Base.PrimalItemCustomDrinkRecipe_Base_C.ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCustomDrinkRecipe_Base_C::ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCustomDrinkRecipe_Base.PrimalItemCustomDrinkRecipe_Base_C.ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Base");

	UPrimalItemCustomDrinkRecipe_Base_C_ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
