// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TekCaveTribute_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TekCaveTribute.PrimalInventoryBP_TekCaveTribute_C.ExecuteUbergraph_PrimalInventoryBP_TekCaveTribute
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TekCaveTribute_C::ExecuteUbergraph_PrimalInventoryBP_TekCaveTribute(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekCaveTribute.PrimalInventoryBP_TekCaveTribute_C.ExecuteUbergraph_PrimalInventoryBP_TekCaveTribute");

	UPrimalInventoryBP_TekCaveTribute_C_ExecuteUbergraph_PrimalInventoryBP_TekCaveTribute_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif