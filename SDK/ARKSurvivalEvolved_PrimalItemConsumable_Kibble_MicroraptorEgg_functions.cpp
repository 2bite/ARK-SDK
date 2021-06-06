// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_MicroraptorEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_MicroraptorEgg.PrimalItemConsumable_Kibble_MicroraptorEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_MicroraptorEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_MicroraptorEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_MicroraptorEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_MicroraptorEgg.PrimalItemConsumable_Kibble_MicroraptorEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_MicroraptorEgg");

	UPrimalItemConsumable_Kibble_MicroraptorEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_MicroraptorEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
