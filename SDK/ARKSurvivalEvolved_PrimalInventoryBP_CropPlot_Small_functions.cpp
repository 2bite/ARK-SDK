// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_CropPlot_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_CropPlot_Small.PrimalInventoryBP_CropPlot_Small_C.ExecuteUbergraph_PrimalInventoryBP_CropPlot_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_CropPlot_Small_C::ExecuteUbergraph_PrimalInventoryBP_CropPlot_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_CropPlot_Small.PrimalInventoryBP_CropPlot_Small_C.ExecuteUbergraph_PrimalInventoryBP_CropPlot_Small");

	UPrimalInventoryBP_CropPlot_Small_C_ExecuteUbergraph_PrimalInventoryBP_CropPlot_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
