// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_WaterTank_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_WaterTank.PrimalInventoryBP_WaterTank_C.ExecuteUbergraph_PrimalInventoryBP_WaterTank
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_WaterTank_C::ExecuteUbergraph_PrimalInventoryBP_WaterTank(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_WaterTank.PrimalInventoryBP_WaterTank_C.ExecuteUbergraph_PrimalInventoryBP_WaterTank");

	UPrimalInventoryBP_WaterTank_C_ExecuteUbergraph_PrimalInventoryBP_WaterTank_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
