// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_RexEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_RexEgg.PrimalItemConsumable_Kibble_RexEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_RexEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_RexEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_RexEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_RexEgg.PrimalItemConsumable_Kibble_RexEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_RexEgg");

	UPrimalItemConsumable_Kibble_RexEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_RexEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
