// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CropPlotMedium_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CropPlotMedium_SM.CropPlotMedium_SM_C.UserConstructionScript
// ()

void ACropPlotMedium_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CropPlotMedium_SM.CropPlotMedium_SM_C.UserConstructionScript");

	ACropPlotMedium_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CropPlotMedium_SM.CropPlotMedium_SM_C.ExecuteUbergraph_CropPlotMedium_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACropPlotMedium_SM_C::ExecuteUbergraph_CropPlotMedium_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CropPlotMedium_SM.CropPlotMedium_SM_C.ExecuteUbergraph_CropPlotMedium_SM");

	ACropPlotMedium_SM_C_ExecuteUbergraph_CropPlotMedium_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
