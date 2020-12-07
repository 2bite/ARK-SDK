// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_StegoEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_StegoEgg.PrimalItemConsumable_Kibble_StegoEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_StegoEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_StegoEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_StegoEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_StegoEgg.PrimalItemConsumable_Kibble_StegoEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_StegoEgg");

	UPrimalItemConsumable_Kibble_StegoEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_StegoEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
