// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_KairukuEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_KairukuEgg.PrimalItemConsumable_Kibble_KairukuEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_KairukuEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_KairukuEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_KairukuEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_KairukuEgg.PrimalItemConsumable_Kibble_KairukuEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_KairukuEgg");

	UPrimalItemConsumable_Kibble_KairukuEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_KairukuEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
