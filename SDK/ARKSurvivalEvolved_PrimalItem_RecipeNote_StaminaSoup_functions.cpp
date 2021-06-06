// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_StaminaSoup_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_RecipeNote_StaminaSoup.PrimalItem_RecipeNote_StaminaSoup_C.ExecuteUbergraph_PrimalItem_RecipeNote_StaminaSoup
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_RecipeNote_StaminaSoup_C::ExecuteUbergraph_PrimalItem_RecipeNote_StaminaSoup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_StaminaSoup.PrimalItem_RecipeNote_StaminaSoup_C.ExecuteUbergraph_PrimalItem_RecipeNote_StaminaSoup");

	UPrimalItem_RecipeNote_StaminaSoup_C_ExecuteUbergraph_PrimalItem_RecipeNote_StaminaSoup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
