// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_PegomastaxEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_PegomastaxEgg.PrimalItemConsumable_Kibble_PegomastaxEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_PegomastaxEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_PegomastaxEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_PegomastaxEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_PegomastaxEgg.PrimalItemConsumable_Kibble_PegomastaxEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_PegomastaxEgg");

	UPrimalItemConsumable_Kibble_PegomastaxEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_PegomastaxEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
