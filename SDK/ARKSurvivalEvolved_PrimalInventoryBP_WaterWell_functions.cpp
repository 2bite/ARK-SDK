// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_WaterWell_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_WaterWell.PrimalInventoryBP_WaterWell_C.ExecuteUbergraph_PrimalInventoryBP_WaterWell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_WaterWell_C::ExecuteUbergraph_PrimalInventoryBP_WaterWell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_WaterWell.PrimalInventoryBP_WaterWell_C.ExecuteUbergraph_PrimalInventoryBP_WaterWell");

	UPrimalInventoryBP_WaterWell_C_ExecuteUbergraph_PrimalInventoryBP_WaterWell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
