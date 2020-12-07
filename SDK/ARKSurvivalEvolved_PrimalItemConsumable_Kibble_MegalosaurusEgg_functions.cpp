// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_MegalosaurusEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_MegalosaurusEgg.PrimalItemConsumable_Kibble_MegalosaurusEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_MegalosaurusEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_MegalosaurusEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_MegalosaurusEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_MegalosaurusEgg.PrimalItemConsumable_Kibble_MegalosaurusEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_MegalosaurusEgg");

	UPrimalItemConsumable_Kibble_MegalosaurusEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_MegalosaurusEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
