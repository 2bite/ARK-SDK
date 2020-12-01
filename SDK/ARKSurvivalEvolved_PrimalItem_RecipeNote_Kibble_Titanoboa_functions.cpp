// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_Kibble_Titanoboa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_RecipeNote_Kibble_Titanoboa.PrimalItem_RecipeNote_Kibble_Titanoboa_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Titanoboa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_RecipeNote_Kibble_Titanoboa_C::ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Titanoboa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_Kibble_Titanoboa.PrimalItem_RecipeNote_Kibble_Titanoboa_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Titanoboa");

	UPrimalItem_RecipeNote_Kibble_Titanoboa_C_ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Titanoboa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
