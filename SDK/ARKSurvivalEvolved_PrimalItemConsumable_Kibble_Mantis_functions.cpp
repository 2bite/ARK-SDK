// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_Mantis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_Mantis.PrimalItemConsumable_Kibble_Mantis_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Mantis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_Mantis_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_Mantis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_Mantis.PrimalItemConsumable_Kibble_Mantis_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Mantis");

	UPrimalItemConsumable_Kibble_Mantis_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_Mantis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
