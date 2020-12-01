// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ScoutTracker_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ScoutTracker.Buff_ScoutTracker_C.BPGetDebugInfoString
// (NetReliable, NetRequest, Native, Static, NetMulticast, Private, NetServer, HasDefaults, NetClient, DLLImport, Const, NetValidate)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ABuff_ScoutTracker_C::STATIC_BPGetDebugInfoString()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutTracker.Buff_ScoutTracker_C.BPGetDebugInfoString");

	ABuff_ScoutTracker_C_BPGetDebugInfoString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ScoutTracker.Buff_ScoutTracker_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ScoutTracker_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutTracker.Buff_ScoutTracker_C.BuffTickClient");

	ABuff_ScoutTracker_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ScoutTracker.Buff_ScoutTracker_C.UpdateTrackerState
// ()

void ABuff_ScoutTracker_C::UpdateTrackerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutTracker.Buff_ScoutTracker_C.UpdateTrackerState");

	ABuff_ScoutTracker_C_UpdateTrackerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ScoutTracker.Buff_ScoutTracker_C.OnRep_TrackerStateReplicated
// ()

void ABuff_ScoutTracker_C::OnRep_TrackerStateReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutTracker.Buff_ScoutTracker_C.OnRep_TrackerStateReplicated");

	ABuff_ScoutTracker_C_OnRep_TrackerStateReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ScoutTracker.Buff_ScoutTracker_C.DisableAllEmitters
// ()
// Parameters:
// TEnumAsByte<EScoutTrackerStates> ButEnableThis                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ScoutTracker_C::DisableAllEmitters(TEnumAsByte<EScoutTrackerStates> ButEnableThis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutTracker.Buff_ScoutTracker_C.DisableAllEmitters");

	ABuff_ScoutTracker_C_DisableAllEmitters_Params params;
	params.ButEnableThis = ButEnableThis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ScoutTracker.Buff_ScoutTracker_C.UpdateFX
// ()
// Parameters:
// class UParticleSystemComponent* ParticleSystemComp             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ScoutTracker_C::UpdateFX(class UParticleSystemComponent* ParticleSystemComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutTracker.Buff_ScoutTracker_C.UpdateFX");

	ABuff_ScoutTracker_C_UpdateFX_Params params;
	params.ParticleSystemComp = ParticleSystemComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ScoutTracker.Buff_ScoutTracker_C.ReceiveBeginPlay
// ()

void ABuff_ScoutTracker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutTracker.Buff_ScoutTracker_C.ReceiveBeginPlay");

	ABuff_ScoutTracker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ScoutTracker.Buff_ScoutTracker_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ScoutTracker_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutTracker.Buff_ScoutTracker_C.BuffTickServer");

	ABuff_ScoutTracker_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ScoutTracker.Buff_ScoutTracker_C.UserConstructionScript
// ()

void ABuff_ScoutTracker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutTracker.Buff_ScoutTracker_C.UserConstructionScript");

	ABuff_ScoutTracker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ScoutTracker.Buff_ScoutTracker_C.SetIsPreviewTracker
// ()
// Parameters:
// bool                           IsPreviewTracker               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ScoutTracker_C::SetIsPreviewTracker(bool IsPreviewTracker, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutTracker.Buff_ScoutTracker_C.SetIsPreviewTracker");

	ABuff_ScoutTracker_C_SetIsPreviewTracker_Params params;
	params.IsPreviewTracker = IsPreviewTracker;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ScoutTracker.Buff_ScoutTracker_C.ExecuteUbergraph_Buff_ScoutTracker
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ScoutTracker_C::ExecuteUbergraph_Buff_ScoutTracker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutTracker.Buff_ScoutTracker_C.ExecuteUbergraph_Buff_ScoutTracker");

	ABuff_ScoutTracker_C_ExecuteUbergraph_Buff_ScoutTracker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
