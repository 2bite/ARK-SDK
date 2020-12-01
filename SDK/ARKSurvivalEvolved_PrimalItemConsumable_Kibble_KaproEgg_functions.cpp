// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_KaproEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_KaproEgg.PrimalItemConsumable_Kibble_KaproEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_KaproEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_KaproEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_KaproEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_KaproEgg.PrimalItemConsumable_Kibble_KaproEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_KaproEgg");

	UPrimalItemConsumable_Kibble_KaproEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_KaproEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
