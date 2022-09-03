// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TropeWindGustTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_TropeWindGustTarget_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.GetBuffPostprocessIntensity");

	ABuff_TropeWindGustTarget_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.ReceiveBeginPlay
// ()

void ABuff_TropeWindGustTarget_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.ReceiveBeginPlay");

	ABuff_TropeWindGustTarget_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TropeWindGustTarget_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.AllowPostProcessEffect");

	ABuff_TropeWindGustTarget_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TropeWindGustTarget_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.BPDeactivated");

	ABuff_TropeWindGustTarget_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TropeWindGustTarget_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.BPSetupForInstigator");

	ABuff_TropeWindGustTarget_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TropeWindGustTarget_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.BuffTickServer");

	ABuff_TropeWindGustTarget_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TropeWindGustTarget_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.BPActivated");

	ABuff_TropeWindGustTarget_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.UserConstructionScript
// ()

void ABuff_TropeWindGustTarget_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.UserConstructionScript");

	ABuff_TropeWindGustTarget_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.ExecuteUbergraph_Buff_TropeWindGustTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TropeWindGustTarget_C::ExecuteUbergraph_Buff_TropeWindGustTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.ExecuteUbergraph_Buff_TropeWindGustTarget");

	ABuff_TropeWindGustTarget_C_ExecuteUbergraph_Buff_TropeWindGustTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
