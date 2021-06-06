// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_TapejaraEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_TapejaraEgg.PrimalItemConsumable_Kibble_TapejaraEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_TapejaraEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_TapejaraEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_TapejaraEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_TapejaraEgg.PrimalItemConsumable_Kibble_TapejaraEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_TapejaraEgg");

	UPrimalItemConsumable_Kibble_TapejaraEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_TapejaraEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
