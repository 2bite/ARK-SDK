// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_Kibble_archaeopteryx_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_RecipeNote_Kibble_archaeopteryx.PrimalItem_RecipeNote_Kibble_archaeopteryx_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_archaeopteryx
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_RecipeNote_Kibble_archaeopteryx_C::ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_archaeopteryx(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_Kibble_archaeopteryx.PrimalItem_RecipeNote_Kibble_archaeopteryx_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_archaeopteryx");

	UPrimalItem_RecipeNote_Kibble_archaeopteryx_C_ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_archaeopteryx_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
