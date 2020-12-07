// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_Base_Large_EX_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_Base_Large_EX.PrimalItemConsumable_Kibble_Base_Large_EX_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Base_Large_EX
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_Base_Large_EX_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_Base_Large_EX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_Base_Large_EX.PrimalItemConsumable_Kibble_Base_Large_EX_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Base_Large_EX");

	UPrimalItemConsumable_Kibble_Base_Large_EX_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_Base_Large_EX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
