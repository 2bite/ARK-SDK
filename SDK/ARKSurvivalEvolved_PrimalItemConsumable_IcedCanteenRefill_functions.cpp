// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_IcedCanteenRefill_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_IcedCanteenRefill.PrimalItemConsumable_IcedCanteenRefill_C.ExecuteUbergraph_PrimalItemConsumable_IcedCanteenRefill
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_IcedCanteenRefill_C::ExecuteUbergraph_PrimalItemConsumable_IcedCanteenRefill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_IcedCanteenRefill.PrimalItemConsumable_IcedCanteenRefill_C.ExecuteUbergraph_PrimalItemConsumable_IcedCanteenRefill");

	UPrimalItemConsumable_IcedCanteenRefill_C_ExecuteUbergraph_PrimalItemConsumable_IcedCanteenRefill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
