// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_AnvilBench_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_AnvilBench.PrimalInventoryBP_AnvilBench_C.ExecuteUbergraph_PrimalInventoryBP_AnvilBench
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_AnvilBench_C::ExecuteUbergraph_PrimalInventoryBP_AnvilBench(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_AnvilBench.PrimalInventoryBP_AnvilBench_C.ExecuteUbergraph_PrimalInventoryBP_AnvilBench");

	UPrimalInventoryBP_AnvilBench_C_ExecuteUbergraph_PrimalInventoryBP_AnvilBench_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
