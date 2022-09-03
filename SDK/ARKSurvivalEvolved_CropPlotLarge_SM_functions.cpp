// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CropPlotLarge_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CropPlotLarge_SM.CropPlotLarge_SM_C.AllowManualMultiUseActivation
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACropPlotLarge_SM_C::AllowManualMultiUseActivation(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function CropPlotLarge_SM.CropPlotLarge_SM_C.AllowManualMultiUseActivation");

	ACropPlotLarge_SM_C_AllowManualMultiUseActivation_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CropPlotLarge_SM.CropPlotLarge_SM_C.ReceiveBeginPlay
// ()

void ACropPlotLarge_SM_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CropPlotLarge_SM.CropPlotLarge_SM_C.ReceiveBeginPlay");

	ACropPlotLarge_SM_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CropPlotLarge_SM.CropPlotLarge_SM_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ACropPlotLarge_SM_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CropPlotLarge_SM.CropPlotLarge_SM_C.ReceiveTick");

	ACropPlotLarge_SM_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CropPlotLarge_SM.CropPlotLarge_SM_C.UserConstructionScript
// ()

void ACropPlotLarge_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CropPlotLarge_SM.CropPlotLarge_SM_C.UserConstructionScript");

	ACropPlotLarge_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CropPlotLarge_SM.CropPlotLarge_SM_C.ExecuteUbergraph_CropPlotLarge_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACropPlotLarge_SM_C::ExecuteUbergraph_CropPlotLarge_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CropPlotLarge_SM.CropPlotLarge_SM_C.ExecuteUbergraph_CropPlotLarge_SM");

	ACropPlotLarge_SM_C_ExecuteUbergraph_CropPlotLarge_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
