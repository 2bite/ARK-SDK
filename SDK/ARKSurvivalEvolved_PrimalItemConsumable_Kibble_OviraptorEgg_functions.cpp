// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_OviraptorEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_OviraptorEgg.PrimalItemConsumable_Kibble_OviraptorEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_OviraptorEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_OviraptorEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_OviraptorEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_OviraptorEgg.PrimalItemConsumable_Kibble_OviraptorEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_OviraptorEgg");

	UPrimalItemConsumable_Kibble_OviraptorEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_OviraptorEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
