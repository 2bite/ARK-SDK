// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionTrigger_RaceCheckpoint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ReceiveBeginPlay
// ()

void AMissionTrigger_RaceCheckpoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ReceiveBeginPlay");

	AMissionTrigger_RaceCheckpoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ResetCheckpoint
// ()

void AMissionTrigger_RaceCheckpoint_C::ResetCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ResetCheckpoint");

	AMissionTrigger_RaceCheckpoint_C_ResetCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.IsCheckpointActive_PURE
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_RaceCheckpoint_C::IsCheckpointActive_PURE(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.IsCheckpointActive_PURE");

	AMissionTrigger_RaceCheckpoint_C_IsCheckpointActive_PURE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.IsCheckpointActive
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_RaceCheckpoint_C::IsCheckpointActive(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.IsCheckpointActive");

	AMissionTrigger_RaceCheckpoint_C_IsCheckpointActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DeactivateCheckpoint
// ()

void AMissionTrigger_RaceCheckpoint_C::DeactivateCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DeactivateCheckpoint");

	AMissionTrigger_RaceCheckpoint_C_DeactivateCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.InitCheckpoint
// ()

void AMissionTrigger_RaceCheckpoint_C::InitCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.InitCheckpoint");

	AMissionTrigger_RaceCheckpoint_C_InitCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.SetCheckpointEnabled
// ()
// Parameters:
// bool                           NewEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_RaceCheckpoint_C::SetCheckpointEnabled(bool NewEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.SetCheckpointEnabled");

	AMissionTrigger_RaceCheckpoint_C_SetCheckpointEnabled_Params params;
	params.NewEnabled = NewEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.OnCheckpointHit
// ()

void AMissionTrigger_RaceCheckpoint_C::OnCheckpointHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.OnCheckpointHit");

	AMissionTrigger_RaceCheckpoint_C_OnCheckpointHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.SetCheckpointFX_Active
// ()
// Parameters:
// bool                           newActive                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AlsoEnable                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_RaceCheckpoint_C::SetCheckpointFX_Active(bool newActive, bool AlsoEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.SetCheckpointFX_Active");

	AMissionTrigger_RaceCheckpoint_C_SetCheckpointFX_Active_Params params;
	params.newActive = newActive;
	params.AlsoEnable = AlsoEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.BP_OverrideTargetingLocation
// (NetReliable, NetRequest, Native, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient)
// Parameters:
// class AActor**                 Attacker                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMissionTrigger_RaceCheckpoint_C::BP_OverrideTargetingLocation(class AActor** Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.BP_OverrideTargetingLocation");

	AMissionTrigger_RaceCheckpoint_C_BP_OverrideTargetingLocation_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.UserConstructionScript
// ()

void AMissionTrigger_RaceCheckpoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.UserConstructionScript");

	AMissionTrigger_RaceCheckpoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_PulseColor__FinishedFunc
// ()

void AMissionTrigger_RaceCheckpoint_C::Timeline_PulseColor__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_PulseColor__FinishedFunc");

	AMissionTrigger_RaceCheckpoint_C_Timeline_PulseColor__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_PulseColor__UpdateFunc
// ()

void AMissionTrigger_RaceCheckpoint_C::Timeline_PulseColor__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_PulseColor__UpdateFunc");

	AMissionTrigger_RaceCheckpoint_C_Timeline_PulseColor__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_CheckpointActivate__FinishedFunc
// ()

void AMissionTrigger_RaceCheckpoint_C::Timeline_CheckpointActivate__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_CheckpointActivate__FinishedFunc");

	AMissionTrigger_RaceCheckpoint_C_Timeline_CheckpointActivate__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_CheckpointActivate__UpdateFunc
// ()

void AMissionTrigger_RaceCheckpoint_C::Timeline_CheckpointActivate__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_CheckpointActivate__UpdateFunc");

	AMissionTrigger_RaceCheckpoint_C_Timeline_CheckpointActivate__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_FadeInCheckpoint__FinishedFunc
// ()

void AMissionTrigger_RaceCheckpoint_C::Timeline_FadeInCheckpoint__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_FadeInCheckpoint__FinishedFunc");

	AMissionTrigger_RaceCheckpoint_C_Timeline_FadeInCheckpoint__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_FadeInCheckpoint__UpdateFunc
// ()

void AMissionTrigger_RaceCheckpoint_C::Timeline_FadeInCheckpoint__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_FadeInCheckpoint__UpdateFunc");

	AMissionTrigger_RaceCheckpoint_C_Timeline_FadeInCheckpoint__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.FadeOut
// ()

void AMissionTrigger_RaceCheckpoint_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.FadeOut");

	AMissionTrigger_RaceCheckpoint_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.FadeIn
// ()

void AMissionTrigger_RaceCheckpoint_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.FadeIn");

	AMissionTrigger_RaceCheckpoint_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.CheckpointPulse
// ()

void AMissionTrigger_RaceCheckpoint_C::CheckpointPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.CheckpointPulse");

	AMissionTrigger_RaceCheckpoint_C_CheckpointPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DisableCheckpoint
// ()

void AMissionTrigger_RaceCheckpoint_C::DisableCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DisableCheckpoint");

	AMissionTrigger_RaceCheckpoint_C_DisableCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.EnableCheckpoint
// ()

void AMissionTrigger_RaceCheckpoint_C::EnableCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.EnableCheckpoint");

	AMissionTrigger_RaceCheckpoint_C_EnableCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DisableCheckpoint_NOW
// ()

void AMissionTrigger_RaceCheckpoint_C::DisableCheckpoint_NOW()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DisableCheckpoint_NOW");

	AMissionTrigger_RaceCheckpoint_C_DisableCheckpoint_NOW_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.EnableCheckpoint_NOW
// ()

void AMissionTrigger_RaceCheckpoint_C::EnableCheckpoint_NOW()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.EnableCheckpoint_NOW");

	AMissionTrigger_RaceCheckpoint_C_EnableCheckpoint_NOW_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ExecuteUbergraph_MissionTrigger_RaceCheckpoint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_RaceCheckpoint_C::ExecuteUbergraph_MissionTrigger_RaceCheckpoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ExecuteUbergraph_MissionTrigger_RaceCheckpoint");

	AMissionTrigger_RaceCheckpoint_C_ExecuteUbergraph_MissionTrigger_RaceCheckpoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
