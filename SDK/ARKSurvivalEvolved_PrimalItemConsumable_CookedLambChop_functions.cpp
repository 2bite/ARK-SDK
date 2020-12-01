// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_CookedLambChop_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_CookedLambChop.PrimalItemConsumable_CookedLambChop_C.ExecuteUbergraph_PrimalItemConsumable_CookedLambChop
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_CookedLambChop_C::ExecuteUbergraph_PrimalItemConsumable_CookedLambChop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_CookedLambChop.PrimalItemConsumable_CookedLambChop_C.ExecuteUbergraph_PrimalItemConsumable_CookedLambChop");

	UPrimalItemConsumable_CookedLambChop_C_ExecuteUbergraph_PrimalItemConsumable_CookedLambChop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
