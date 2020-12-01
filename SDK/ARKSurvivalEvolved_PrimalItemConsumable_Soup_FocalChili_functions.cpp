// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Soup_FocalChili_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Soup_FocalChili.PrimalItemConsumable_Soup_FocalChili_C.ExecuteUbergraph_PrimalItemConsumable_Soup_FocalChili
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Soup_FocalChili_C::ExecuteUbergraph_PrimalItemConsumable_Soup_FocalChili(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Soup_FocalChili.PrimalItemConsumable_Soup_FocalChili_C.ExecuteUbergraph_PrimalItemConsumable_Soup_FocalChili");

	UPrimalItemConsumable_Soup_FocalChili_C_ExecuteUbergraph_PrimalItemConsumable_Soup_FocalChili_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
