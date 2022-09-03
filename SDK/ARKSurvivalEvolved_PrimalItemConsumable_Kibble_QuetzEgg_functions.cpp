// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_QuetzEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_QuetzEgg.PrimalItemConsumable_Kibble_QuetzEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_QuetzEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_QuetzEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_QuetzEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_QuetzEgg.PrimalItemConsumable_Kibble_QuetzEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_QuetzEgg");

	UPrimalItemConsumable_Kibble_QuetzEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_QuetzEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
