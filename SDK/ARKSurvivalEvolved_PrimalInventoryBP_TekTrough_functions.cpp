// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TekTrough_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TekTrough.PrimalInventoryBP_TekTrough_C.ExecuteUbergraph_PrimalInventoryBP_TekTrough
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TekTrough_C::ExecuteUbergraph_PrimalInventoryBP_TekTrough(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekTrough.PrimalInventoryBP_TekTrough_C.ExecuteUbergraph_PrimalInventoryBP_TekTrough");

	UPrimalInventoryBP_TekTrough_C_ExecuteUbergraph_PrimalInventoryBP_TekTrough_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
