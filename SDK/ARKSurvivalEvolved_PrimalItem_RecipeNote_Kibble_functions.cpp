// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_Kibble_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_RecipeNote_Kibble.PrimalItem_RecipeNote_Kibble_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_RecipeNote_Kibble_C::ExecuteUbergraph_PrimalItem_RecipeNote_Kibble(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_Kibble.PrimalItem_RecipeNote_Kibble_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble");

	UPrimalItem_RecipeNote_Kibble_C_ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
