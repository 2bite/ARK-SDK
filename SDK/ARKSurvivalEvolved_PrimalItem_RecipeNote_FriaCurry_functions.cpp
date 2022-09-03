// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_FriaCurry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_RecipeNote_FriaCurry.PrimalItem_RecipeNote_FriaCurry_C.ExecuteUbergraph_PrimalItem_RecipeNote_FriaCurry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_RecipeNote_FriaCurry_C::ExecuteUbergraph_PrimalItem_RecipeNote_FriaCurry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_FriaCurry.PrimalItem_RecipeNote_FriaCurry_C.ExecuteUbergraph_PrimalItem_RecipeNote_FriaCurry");

	UPrimalItem_RecipeNote_FriaCurry_C_ExecuteUbergraph_PrimalItem_RecipeNote_FriaCurry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
