// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_CalienSoup_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_RecipeNote_CalienSoup.PrimalItem_RecipeNote_CalienSoup_C.ExecuteUbergraph_PrimalItem_RecipeNote_CalienSoup
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_RecipeNote_CalienSoup_C::ExecuteUbergraph_PrimalItem_RecipeNote_CalienSoup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_CalienSoup.PrimalItem_RecipeNote_CalienSoup_C.ExecuteUbergraph_PrimalItem_RecipeNote_CalienSoup");

	UPrimalItem_RecipeNote_CalienSoup_C_ExecuteUbergraph_PrimalItem_RecipeNote_CalienSoup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
