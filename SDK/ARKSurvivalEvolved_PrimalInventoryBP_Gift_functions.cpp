// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Gift_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_Gift.PrimalInventoryBP_Gift_C.ExecuteUbergraph_PrimalInventoryBP_Gift
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_Gift_C::ExecuteUbergraph_PrimalInventoryBP_Gift(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_Gift.PrimalInventoryBP_Gift_C.ExecuteUbergraph_PrimalInventoryBP_Gift");

	UPrimalInventoryBP_Gift_C_ExecuteUbergraph_PrimalInventoryBP_Gift_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
