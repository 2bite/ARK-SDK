// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_Kibble_Ankylo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_RecipeNote_Kibble_Ankylo.PrimalItem_RecipeNote_Kibble_Ankylo_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Ankylo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_RecipeNote_Kibble_Ankylo_C::ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Ankylo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_Kibble_Ankylo.PrimalItem_RecipeNote_Kibble_Ankylo_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Ankylo");

	UPrimalItem_RecipeNote_Kibble_Ankylo_C_ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Ankylo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
