// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_Base_Special_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_Base_Special.PrimalItemConsumable_Kibble_Base_Special_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Base_Special
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_Base_Special_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_Base_Special(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_Base_Special.PrimalItemConsumable_Kibble_Base_Special_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Base_Special");

	UPrimalItemConsumable_Kibble_Base_Special_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_Base_Special_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
