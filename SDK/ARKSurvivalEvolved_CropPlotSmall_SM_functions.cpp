// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CropPlotSmall_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CropPlotSmall_SM.CropPlotSmall_SM_C.UserConstructionScript
// ()

void ACropPlotSmall_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CropPlotSmall_SM.CropPlotSmall_SM_C.UserConstructionScript");

	ACropPlotSmall_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CropPlotSmall_SM.CropPlotSmall_SM_C.ExecuteUbergraph_CropPlotSmall_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACropPlotSmall_SM_C::ExecuteUbergraph_CropPlotSmall_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CropPlotSmall_SM.CropPlotSmall_SM_C.ExecuteUbergraph_CropPlotSmall_SM");

	ACropPlotSmall_SM_C_ExecuteUbergraph_CropPlotSmall_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
