// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_CropPlot_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_CropPlot_Small.PrimalItemStructure_CropPlot_Small_C.ExecuteUbergraph_PrimalItemStructure_CropPlot_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_CropPlot_Small_C::ExecuteUbergraph_PrimalItemStructure_CropPlot_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_CropPlot_Small.PrimalItemStructure_CropPlot_Small_C.ExecuteUbergraph_PrimalItemStructure_CropPlot_Small");

	UPrimalItemStructure_CropPlot_Small_C_ExecuteUbergraph_PrimalItemStructure_CropPlot_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
