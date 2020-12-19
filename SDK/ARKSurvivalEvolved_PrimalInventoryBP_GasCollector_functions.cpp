// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_GasCollector_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_GasCollector.PrimalInventoryBP_GasCollector_C.ExecuteUbergraph_PrimalInventoryBP_GasCollector
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_GasCollector_C::ExecuteUbergraph_PrimalInventoryBP_GasCollector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_GasCollector.PrimalInventoryBP_GasCollector_C.ExecuteUbergraph_PrimalInventoryBP_GasCollector");

	UPrimalInventoryBP_GasCollector_C_ExecuteUbergraph_PrimalInventoryBP_GasCollector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
