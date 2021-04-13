// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GrabbedByBeam_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.ReceiveSkiffVars
// ()
// Parameters:
// struct FVector                 BeamStartLoc                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BeamEndLoc                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_HoverSkiffBeamState> BeamState                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GrabbedByBeam_C::ReceiveSkiffVars(const struct FVector& BeamStartLoc, const struct FVector& BeamEndLoc, TEnumAsByte<E_HoverSkiffBeamState> BeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.ReceiveSkiffVars");

	ABuff_GrabbedByBeam_C_ReceiveSkiffVars_Params params;
	params.BeamStartLoc = BeamStartLoc;
	params.BeamEndLoc = BeamEndLoc;
	params.BeamState = BeamState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetBeamCapturePercent
// ()
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_GrabbedByBeam_C::GetBeamCapturePercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetBeamCapturePercent");

	ABuff_GrabbedByBeam_C_GetBeamCapturePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetOwnerDragWeight
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_GrabbedByBeam_C::GetOwnerDragWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetOwnerDragWeight");

	ABuff_GrabbedByBeam_C_GetOwnerDragWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetMaxProgress
// ()
// Parameters:
// float                          maxProgress                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_GrabbedByBeam_C::GetMaxProgress(float* maxProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetMaxProgress");

	ABuff_GrabbedByBeam_C_GetMaxProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (maxProgress != nullptr)
		*maxProgress = params.maxProgress;
}


// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.Calculate Progress
// ()
// Parameters:
// float                          timeDelta                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewProgress                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_GrabbedByBeam_C::Calculate_Progress(float timeDelta, float* NewProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.Calculate Progress");

	ABuff_GrabbedByBeam_C_Calculate_Progress_Params params;
	params.timeDelta = timeDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewProgress != nullptr)
		*NewProgress = params.NewProgress;
}


// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.CalculateBeamProgressDelta
// ()
// Parameters:
// float                          timeDelta                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ProgressDelta                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bInvalidProgress               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_GrabbedByBeam_C::CalculateBeamProgressDelta(float timeDelta, float* ProgressDelta, bool* bInvalidProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.CalculateBeamProgressDelta");

	ABuff_GrabbedByBeam_C_CalculateBeamProgressDelta_Params params;
	params.timeDelta = timeDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProgressDelta != nullptr)
		*ProgressDelta = params.ProgressDelta;
	if (bInvalidProgress != nullptr)
		*bInvalidProgress = params.bInvalidProgress;
}


// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.InitializeBuff
// ()
// Parameters:
// float                          MaxBeamLength                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GrabbedByBeam_C::InitializeBuff(float MaxBeamLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.InitializeBuff");

	ABuff_GrabbedByBeam_C_InitializeBuff_Params params;
	params.MaxBeamLength = MaxBeamLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.BuffTickServer
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GrabbedByBeam_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.BuffTickServer");

	ABuff_GrabbedByBeam_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.UserConstructionScript
// ()

void ABuff_GrabbedByBeam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.UserConstructionScript");

	ABuff_GrabbedByBeam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.ExecuteUbergraph_Buff_GrabbedByBeam
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GrabbedByBeam_C::ExecuteUbergraph_Buff_GrabbedByBeam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.ExecuteUbergraph_Buff_GrabbedByBeam");

	ABuff_GrabbedByBeam_C_ExecuteUbergraph_Buff_GrabbedByBeam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
