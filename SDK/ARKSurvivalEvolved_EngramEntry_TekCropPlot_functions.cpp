// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekCropPlot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekCropPlot.EngramEntry_TekCropPlot_C.ExecuteUbergraph_EngramEntry_TekCropPlot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekCropPlot_C::ExecuteUbergraph_EngramEntry_TekCropPlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekCropPlot.EngramEntry_TekCropPlot_C.ExecuteUbergraph_EngramEntry_TekCropPlot");

	UEngramEntry_TekCropPlot_C_ExecuteUbergraph_EngramEntry_TekCropPlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
