// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_SpineyLizard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_SpineyLizard.PrimalItemConsumable_Kibble_SpineyLizard_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_SpineyLizard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_SpineyLizard_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_SpineyLizard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_SpineyLizard.PrimalItemConsumable_Kibble_SpineyLizard_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_SpineyLizard");

	UPrimalItemConsumable_Kibble_SpineyLizard_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_SpineyLizard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
