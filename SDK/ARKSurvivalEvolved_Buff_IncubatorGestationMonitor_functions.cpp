// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_IncubatorGestationMonitor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IncubatorGestationMonitor_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.BuffTickServer");

	ABuff_IncubatorGestationMonitor_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.GetEnabledGestationMonitoringTargets
// ()
// Parameters:
// TArray<class APrimalDinoCharacter*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class APrimalDinoCharacter*> ABuff_IncubatorGestationMonitor_C::GetEnabledGestationMonitoringTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.GetEnabledGestationMonitoringTargets");

	ABuff_IncubatorGestationMonitor_C_GetEnabledGestationMonitoringTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.SetGestationMonitoringTarget
// (NetReliable, NetRequest, Static, MulticastDelegate, Public, Delegate, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrimalDinoCharacter**   forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IncubatorGestationMonitor_C::STATIC_SetGestationMonitoringTarget(class APrimalDinoCharacter** forTarget, bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.SetGestationMonitoringTarget");

	ABuff_IncubatorGestationMonitor_C_SetGestationMonitoringTarget_Params params;
	params.forTarget = forTarget;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.ReplicateGestationData
// ()
// Parameters:
// struct FUnreplicatedEggData    GestationData                  (Parm)
// class APrimalDinoCharacter*    forTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IncubatorGestationMonitor_C::ReplicateGestationData(const struct FUnreplicatedEggData& GestationData, class APrimalDinoCharacter* forTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.ReplicateGestationData");

	ABuff_IncubatorGestationMonitor_C_ReplicateGestationData_Params params;
	params.GestationData = GestationData;
	params.forTarget = forTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.UserConstructionScript
// ()

void ABuff_IncubatorGestationMonitor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.UserConstructionScript");

	ABuff_IncubatorGestationMonitor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.ExecuteUbergraph_Buff_IncubatorGestationMonitor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IncubatorGestationMonitor_C::ExecuteUbergraph_Buff_IncubatorGestationMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.ExecuteUbergraph_Buff_IncubatorGestationMonitor");

	ABuff_IncubatorGestationMonitor_C_ExecuteUbergraph_Buff_IncubatorGestationMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
