#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionTrigger_RaceCheckpoint_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ReceiveBeginPlay
struct AMissionTrigger_RaceCheckpoint_C_ReceiveBeginPlay_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ResetCheckpoint
struct AMissionTrigger_RaceCheckpoint_C_ResetCheckpoint_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.IsCheckpointActive_PURE
struct AMissionTrigger_RaceCheckpoint_C_IsCheckpointActive_PURE_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.IsCheckpointActive
struct AMissionTrigger_RaceCheckpoint_C_IsCheckpointActive_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DeactivateCheckpoint
struct AMissionTrigger_RaceCheckpoint_C_DeactivateCheckpoint_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.InitCheckpoint
struct AMissionTrigger_RaceCheckpoint_C_InitCheckpoint_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.SetCheckpointEnabled
struct AMissionTrigger_RaceCheckpoint_C_SetCheckpointEnabled_Params
{
	bool                                               NewEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.OnCheckpointHit
struct AMissionTrigger_RaceCheckpoint_C_OnCheckpointHit_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.SetCheckpointFX_Active
struct AMissionTrigger_RaceCheckpoint_C_SetCheckpointFX_Active_Params
{
	bool                                               newActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AlsoEnable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.BP_OverrideTargetingLocation
struct AMissionTrigger_RaceCheckpoint_C_BP_OverrideTargetingLocation_Params
{
	class AActor**                                     Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.UserConstructionScript
struct AMissionTrigger_RaceCheckpoint_C_UserConstructionScript_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_PulseColor__FinishedFunc
struct AMissionTrigger_RaceCheckpoint_C_Timeline_PulseColor__FinishedFunc_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_PulseColor__UpdateFunc
struct AMissionTrigger_RaceCheckpoint_C_Timeline_PulseColor__UpdateFunc_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_CheckpointActivate__FinishedFunc
struct AMissionTrigger_RaceCheckpoint_C_Timeline_CheckpointActivate__FinishedFunc_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_CheckpointActivate__UpdateFunc
struct AMissionTrigger_RaceCheckpoint_C_Timeline_CheckpointActivate__UpdateFunc_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_FadeInCheckpoint__FinishedFunc
struct AMissionTrigger_RaceCheckpoint_C_Timeline_FadeInCheckpoint__FinishedFunc_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_FadeInCheckpoint__UpdateFunc
struct AMissionTrigger_RaceCheckpoint_C_Timeline_FadeInCheckpoint__UpdateFunc_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.FadeOut
struct AMissionTrigger_RaceCheckpoint_C_FadeOut_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.FadeIn
struct AMissionTrigger_RaceCheckpoint_C_FadeIn_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.CheckpointPulse
struct AMissionTrigger_RaceCheckpoint_C_CheckpointPulse_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DisableCheckpoint
struct AMissionTrigger_RaceCheckpoint_C_DisableCheckpoint_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.EnableCheckpoint
struct AMissionTrigger_RaceCheckpoint_C_EnableCheckpoint_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DisableCheckpoint_NOW
struct AMissionTrigger_RaceCheckpoint_C_DisableCheckpoint_NOW_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.EnableCheckpoint_NOW
struct AMissionTrigger_RaceCheckpoint_C_EnableCheckpoint_NOW_Params
{
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.CheckpointHitServerReaction
struct AMissionTrigger_RaceCheckpoint_C_CheckpointHitServerReaction_Params
{
	class APrimalCharacter*                            TriggeringActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ExecuteUbergraph_MissionTrigger_RaceCheckpoint
struct AMissionTrigger_RaceCheckpoint_C_ExecuteUbergraph_MissionTrigger_RaceCheckpoint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
