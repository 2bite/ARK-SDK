// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_Megalania_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_Megalania.PrimalItemConsumable_Kibble_Megalania_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Megalania
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_Megalania_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_Megalania(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_Megalania.PrimalItemConsumable_Kibble_Megalania_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Megalania");

	UPrimalItemConsumable_Kibble_Megalania_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_Megalania_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
