// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_CropPlot_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_CropPlot_Medium.EngramEntry_CropPlot_Medium_C.ExecuteUbergraph_EngramEntry_CropPlot_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_CropPlot_Medium_C::ExecuteUbergraph_EngramEntry_CropPlot_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_CropPlot_Medium.EngramEntry_CropPlot_Medium_C.ExecuteUbergraph_EngramEntry_CropPlot_Medium");

	UEngramEntry_CropPlot_Medium_C_ExecuteUbergraph_EngramEntry_CropPlot_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
