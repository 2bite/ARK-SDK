// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Toilet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_Toilet.PrimalInventoryBP_Toilet_C.ExecuteUbergraph_PrimalInventoryBP_Toilet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_Toilet_C::ExecuteUbergraph_PrimalInventoryBP_Toilet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_Toilet.PrimalInventoryBP_Toilet_C.ExecuteUbergraph_PrimalInventoryBP_Toilet");

	UPrimalInventoryBP_Toilet_C_ExecuteUbergraph_PrimalInventoryBP_Toilet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
