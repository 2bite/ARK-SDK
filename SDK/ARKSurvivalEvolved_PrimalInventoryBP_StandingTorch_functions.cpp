// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_StandingTorch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_StandingTorch.PrimalInventoryBP_StandingTorch_C.ExecuteUbergraph_PrimalInventoryBP_StandingTorch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_StandingTorch_C::ExecuteUbergraph_PrimalInventoryBP_StandingTorch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_StandingTorch.PrimalInventoryBP_StandingTorch_C.ExecuteUbergraph_PrimalInventoryBP_StandingTorch");

	UPrimalInventoryBP_StandingTorch_C_ExecuteUbergraph_PrimalInventoryBP_StandingTorch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
