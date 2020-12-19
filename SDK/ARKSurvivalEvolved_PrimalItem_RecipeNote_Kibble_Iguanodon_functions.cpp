// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_Kibble_Iguanodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_RecipeNote_Kibble_Iguanodon.PrimalItem_RecipeNote_Kibble_Iguanodon_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Iguanodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_RecipeNote_Kibble_Iguanodon_C::ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Iguanodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_Kibble_Iguanodon.PrimalItem_RecipeNote_Kibble_Iguanodon_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Iguanodon");

	UPrimalItem_RecipeNote_Kibble_Iguanodon_C_ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Iguanodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
