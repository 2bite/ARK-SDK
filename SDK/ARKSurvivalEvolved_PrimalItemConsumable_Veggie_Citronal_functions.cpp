// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Veggie_Citronal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Veggie_Citronal.PrimalItemConsumable_Veggie_Citronal_C.ExecuteUbergraph_PrimalItemConsumable_Veggie_Citronal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Veggie_Citronal_C::ExecuteUbergraph_PrimalItemConsumable_Veggie_Citronal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Veggie_Citronal.PrimalItemConsumable_Veggie_Citronal_C.ExecuteUbergraph_PrimalItemConsumable_Veggie_Citronal");

	UPrimalItemConsumable_Veggie_Citronal_C_ExecuteUbergraph_PrimalItemConsumable_Veggie_Citronal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
