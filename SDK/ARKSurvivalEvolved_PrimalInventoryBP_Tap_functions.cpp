// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Tap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_Tap.PrimalInventoryBP_Tap_C.ExecuteUbergraph_PrimalInventoryBP_Tap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_Tap_C::ExecuteUbergraph_PrimalInventoryBP_Tap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_Tap.PrimalInventoryBP_Tap_C.ExecuteUbergraph_PrimalInventoryBP_Tap");

	UPrimalInventoryBP_Tap_C_ExecuteUbergraph_PrimalInventoryBP_Tap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
