// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TekLight_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TekLight.PrimalInventoryBP_TekLight_C.ExecuteUbergraph_PrimalInventoryBP_TekLight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TekLight_C::ExecuteUbergraph_PrimalInventoryBP_TekLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekLight.PrimalInventoryBP_TekLight_C.ExecuteUbergraph_PrimalInventoryBP_TekLight");

	UPrimalInventoryBP_TekLight_C_ExecuteUbergraph_PrimalInventoryBP_TekLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
