// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CropPlotBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CropPlotBaseBP.CropPlotBaseBP_C.UserConstructionScript
// ()

void ACropPlotBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CropPlotBaseBP.CropPlotBaseBP_C.UserConstructionScript");

	ACropPlotBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CropPlotBaseBP.CropPlotBaseBP_C.ExecuteUbergraph_CropPlotBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACropPlotBaseBP_C::ExecuteUbergraph_CropPlotBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CropPlotBaseBP.CropPlotBaseBP_C.ExecuteUbergraph_CropPlotBaseBP");

	ACropPlotBaseBP_C_ExecuteUbergraph_CropPlotBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
