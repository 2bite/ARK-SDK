// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_Kibble_Baryonyx_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_RecipeNote_Kibble_Baryonyx.PrimalItem_RecipeNote_Kibble_Baryonyx_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Baryonyx
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_RecipeNote_Kibble_Baryonyx_C::ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Baryonyx(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_Kibble_Baryonyx.PrimalItem_RecipeNote_Kibble_Baryonyx_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Baryonyx");

	UPrimalItem_RecipeNote_Kibble_Baryonyx_C_ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Baryonyx_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
