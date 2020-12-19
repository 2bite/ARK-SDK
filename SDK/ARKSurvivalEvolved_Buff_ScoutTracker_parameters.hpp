#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ScoutTracker_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ScoutTracker.Buff_ScoutTracker_C.BPGetDebugInfoString
struct ABuff_ScoutTracker_C_BPGetDebugInfoString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_ScoutTracker.Buff_ScoutTracker_C.BuffTickClient
struct ABuff_ScoutTracker_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ScoutTracker.Buff_ScoutTracker_C.UpdateTrackerState
struct ABuff_ScoutTracker_C_UpdateTrackerState_Params
{
};

// Function Buff_ScoutTracker.Buff_ScoutTracker_C.OnRep_TrackerStateReplicated
struct ABuff_ScoutTracker_C_OnRep_TrackerStateReplicated_Params
{
};

// Function Buff_ScoutTracker.Buff_ScoutTracker_C.DisableAllEmitters
struct ABuff_ScoutTracker_C_DisableAllEmitters_Params
{
	TEnumAsByte<EScoutTrackerStates>                   ButEnableThis;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ScoutTracker.Buff_ScoutTracker_C.UpdateFX
struct ABuff_ScoutTracker_C_UpdateFX_Params
{
	class UParticleSystemComponent*                    ParticleSystemComp;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ScoutTracker.Buff_ScoutTracker_C.ReceiveBeginPlay
struct ABuff_ScoutTracker_C_ReceiveBeginPlay_Params
{
};

// Function Buff_ScoutTracker.Buff_ScoutTracker_C.BuffTickServer
struct ABuff_ScoutTracker_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ScoutTracker.Buff_ScoutTracker_C.UserConstructionScript
struct ABuff_ScoutTracker_C_UserConstructionScript_Params
{
};

// Function Buff_ScoutTracker.Buff_ScoutTracker_C.SetIsPreviewTracker
struct ABuff_ScoutTracker_C_SetIsPreviewTracker_Params
{
	bool                                               IsPreviewTracker;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ScoutTracker.Buff_ScoutTracker_C.ExecuteUbergraph_Buff_ScoutTracker
struct ABuff_ScoutTracker_C_ExecuteUbergraph_Buff_ScoutTracker_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
