#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RaceMissionHelper_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Tick_UpdatePowerUps
struct ABuff_RaceMissionHelper_C_Tick_UpdatePowerUps_Params
{
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ListenServerUpdateCheckpoints
struct ABuff_RaceMissionHelper_C_ListenServerUpdateCheckpoints_Params
{
	TArray<struct FMissionWorldIndicator>              MissionDataBuff;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AShooterCharacter*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UpdateCheckpoint
struct ABuff_RaceMissionHelper_C_UpdateCheckpoint_Params
{
	class AMissionTrigger_RaceCheckpoint_C*            PreviousCheckpoint;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger_RaceCheckpoint_C*            NewCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Update Out Of Bounds Particle
struct ABuff_RaceMissionHelper_C_Update_Out_Of_Bounds_Particle_Params
{
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UpdateNextCheckpointDirectionIndicator
struct ABuff_RaceMissionHelper_C_UpdateNextCheckpointDirectionIndicator_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.GetPlaceText
struct ABuff_RaceMissionHelper_C_GetPlaceText_Params
{
	int                                                Place;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Text;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPGetHUDElements
struct ABuff_RaceMissionHelper_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UserConstructionScript
struct ABuff_RaceMissionHelper_C_UserConstructionScript_Params
{
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.MissionClientDataUpdated_Event
struct ABuff_RaceMissionHelper_C_MissionClientDataUpdated_Event_Params
{
	class APrimalBuff_MissionData*                     MissionDataBuff;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BuffTickClient
struct ABuff_RaceMissionHelper_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPDeactivated
struct ABuff_RaceMissionHelper_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUpdatePlace
struct ABuff_RaceMissionHelper_C_ClientUpdatePlace_Params
{
	int                                                NewPlace;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfPlayers;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPSetupForInstigator
struct ABuff_RaceMissionHelper_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BuffTickServer
struct ABuff_RaceMissionHelper_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Client_UpdateCurrentCheckpointPowerUpTriggers
struct ABuff_RaceMissionHelper_C_Client_UpdateCurrentCheckpointPowerUpTriggers_Params
{
	TArray<class AMissionTrigger*>                     PowerUpTriggers;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivatePowerUpEmitters
struct ABuff_RaceMissionHelper_C_DeactivatePowerUpEmitters_Params
{
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivateSinglePowerUpEmitter
struct ABuff_RaceMissionHelper_C_DeactivateSinglePowerUpEmitter_Params
{
	int                                                TriggerOrder;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CustomDataInt;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.RideMissionDino
struct ABuff_RaceMissionHelper_C_RideMissionDino_Params
{
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivateSinglePowerUpTriggerEmitter
struct ABuff_RaceMissionHelper_C_DeactivateSinglePowerUpTriggerEmitter_Params
{
	class AMissionTrigger*                             TriggerHit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUnhideActors
struct ABuff_RaceMissionHelper_C_ClientUnhideActors_Params
{
	TArray<class AActor*>                              ActorsToUnhide;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUpdateBestTime
struct ABuff_RaceMissionHelper_C_ClientUpdateBestTime_Params
{
	float                                              BestTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.SetCheckPoint
struct ABuff_RaceMissionHelper_C_SetCheckPoint_Params
{
	int                                                newIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientPlayFinishFX
struct ABuff_RaceMissionHelper_C_ClientPlayFinishFX_Params
{
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DestroyDino
struct ABuff_RaceMissionHelper_C_DestroyDino_Params
{
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.TeleportBackToStart
struct ABuff_RaceMissionHelper_C_TeleportBackToStart_Params
{
};

// Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ExecuteUbergraph_Buff_RaceMissionHelper
struct ABuff_RaceMissionHelper_C_ExecuteUbergraph_Buff_RaceMissionHelper_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
