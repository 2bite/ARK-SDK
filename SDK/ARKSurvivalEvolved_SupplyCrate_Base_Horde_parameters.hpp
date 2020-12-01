#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Base_Horde_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetMaxSplineDistance
struct ASupplyCrate_Base_Horde_C_GetMaxSplineDistance_Params
{
	float                                              MaxDistanceFromCrate;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.PlayHordeAudio
struct ASupplyCrate_Base_Horde_C_PlayHordeAudio_Params
{
	class USoundBase*                                  audio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPPlayDying
struct ASupplyCrate_Base_Horde_C_BPPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPPostInitializeComponents
struct ASupplyCrate_Base_Horde_C_BPPostInitializeComponents_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.IntermissionEnd
struct ASupplyCrate_Base_Horde_C_IntermissionEnd_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.OnRep_CurrentWave
struct ASupplyCrate_Base_Horde_C_OnRep_CurrentWave_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CanForceComplete
struct ASupplyCrate_Base_Horde_C_CanForceComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPAdjustDamage
struct ASupplyCrate_Base_Horde_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.PushAllDinosOutward
struct ASupplyCrate_Base_Horde_C_PushAllDinosOutward_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPUnstasis
struct ASupplyCrate_Base_Horde_C_BPUnstasis_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPPreventStasis
struct ASupplyCrate_Base_Horde_C_BPPreventStasis_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPTriggerStasisEvent
struct ASupplyCrate_Base_Horde_C_BPTriggerStasisEvent_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.RunLandSequence
struct ASupplyCrate_Base_Horde_C_RunLandSequence_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GenerateLoot
struct ASupplyCrate_Base_Horde_C_GenerateLoot_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetNPCsLeft
struct ASupplyCrate_Base_Horde_C_GetNPCsLeft_Params
{
	int                                                NPCleft;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ActivateHordeBarrier
struct ASupplyCrate_Base_Horde_C_ActivateHordeBarrier_Params
{
	int                                                RadiusUnits;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShieldHealth;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.OnRep_bOpenSeqInitiated
struct ASupplyCrate_Base_Horde_C_OnRep_bOpenSeqInitiated_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetQualityParticleTemplate
struct ASupplyCrate_Base_Horde_C_GetQualityParticleTemplate_Params
{
	unsigned char                                      AQuality;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ATemplate;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.OpenCrate
struct ASupplyCrate_Base_Horde_C_OpenCrate_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.AddToAggro
struct ASupplyCrate_Base_Horde_C_AddToAggro_Params
{
	TArray<class APrimalDinoCharacter*>                DinosToAggro;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetNPCSCloseToCrate
struct ASupplyCrate_Base_Horde_C_GetNPCSCloseToCrate_Params
{
	TArray<class APrimalDinoCharacter*>                NPCsAtCrate;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CheatEndWave
struct ASupplyCrate_Base_Horde_C_CheatEndWave_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CheatEndHordeMode
struct ASupplyCrate_Base_Horde_C_CheatEndHordeMode_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPTryMultiUse
struct ASupplyCrate_Base_Horde_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPClientDoMultiUse
struct ASupplyCrate_Base_Horde_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPGetMultiUseEntries
struct ASupplyCrate_Base_Horde_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.KillExistingNPCS
struct ASupplyCrate_Base_Horde_C_KillExistingNPCS_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.RemoveHordeDino
struct ASupplyCrate_Base_Horde_C_RemoveHordeDino_Params
{
	class APrimalDinoCharacter*                        APrimalDino;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveFromArray;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.DestroyExistingStructures
struct ASupplyCrate_Base_Horde_C_DestroyExistingStructures_Params
{
	float                                              FRadius;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.SendClientNotification
struct ASupplyCrate_Base_Horde_C_SendClientNotification_Params
{
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.RemoveBarrierActive
struct ASupplyCrate_Base_Horde_C_RemoveBarrierActive_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.RemoveBarrierAttack
struct ASupplyCrate_Base_Horde_C_RemoveBarrierAttack_Params
{
	bool                                               bIsDestroyed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetQualityInfo
struct ASupplyCrate_Base_Horde_C_GetQualityInfo_Params
{
	int                                                intTier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      StringQuality;                                            // (Parm, OutParm, ZeroConstructor)
	struct FLinearColor                                ReturnVarColor;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.Initiate Horde Mode
struct ASupplyCrate_Base_Horde_C_Initiate_Horde_Mode_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CrateCleanup
struct ASupplyCrate_Base_Horde_C_CrateCleanup_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.NPCAttackCrate
struct ASupplyCrate_Base_Horde_C_NPCAttackCrate_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetNumOfNPCAtCrate
struct ASupplyCrate_Base_Horde_C_GetNumOfNPCAtCrate_Params
{
	int                                                NumNPC;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BlueprintDrawHUD
struct ASupplyCrate_Base_Horde_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.EndHordeMode
struct ASupplyCrate_Base_Horde_C_EndHordeMode_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetOctreeNPCs
struct ASupplyCrate_Base_Horde_C_GetOctreeNPCs_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.PrepareNPCForRouting
struct ASupplyCrate_Base_Horde_C_PrepareNPCForRouting_Params
{
	class APrimalDinoCharacter*                        APrimalDino;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpawned;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSpawnPointStruct                           LocationNode;                                             // (Parm)
	class AHorde_Spline_Path_C*                        WorldSpline;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ConfigureWaves
struct ASupplyCrate_Base_Horde_C_ConfigureWaves_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.IsReadyForNextWave
struct ASupplyCrate_Base_Horde_C_IsReadyForNextWave_Params
{
	bool                                               bIsReady;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFinished;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.UserConstructionScript
struct ASupplyCrate_Base_Horde_C_UserConstructionScript_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CheckProgress
struct ASupplyCrate_Base_Horde_C_CheckProgress_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BeginWaveSpawnTimer
struct ASupplyCrate_Base_Horde_C_BeginWaveSpawnTimer_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.SpawnWave
struct ASupplyCrate_Base_Horde_C_SpawnWave_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.RouteExistingActors
struct ASupplyCrate_Base_Horde_C_RouteExistingActors_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ReceiveBeginPlay
struct ASupplyCrate_Base_Horde_C_ReceiveBeginPlay_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ReceiveDestroyed
struct ASupplyCrate_Base_Horde_C_ReceiveDestroyed_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CheckHordeInitiation
struct ASupplyCrate_Base_Horde_C_CheckHordeInitiation_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.DeployHordeBarrier
struct ASupplyCrate_Base_Horde_C_DeployHordeBarrier_Params
{
	int                                                ShieldRadiusUnits;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShieldHealth;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.SpawnInitiationParticles
struct ASupplyCrate_Base_Horde_C_SpawnInitiationParticles_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.DeactivateHordeShield
struct ASupplyCrate_Base_Horde_C_DeactivateHordeShield_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CancelIntermission
struct ASupplyCrate_Base_Horde_C_CancelIntermission_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetDinoCount
struct ASupplyCrate_Base_Horde_C_GetDinoCount_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GiveItems
struct ASupplyCrate_Base_Horde_C_GiveItems_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.SetShieldColor
struct ASupplyCrate_Base_Horde_C_SetShieldColor_Params
{
	class AStorageBox_HordeShield_C*                   TekShield;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.SetClientTime
struct ASupplyCrate_Base_Horde_C_SetClientTime_Params
{
	float                                              IntermissionSeconds;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CheckHiding
struct ASupplyCrate_Base_Horde_C_CheckHiding_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.PlayCameraShake
struct ASupplyCrate_Base_Horde_C_PlayCameraShake_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetClientTime
struct ASupplyCrate_Base_Horde_C_GetClientTime_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.EjectItems
struct ASupplyCrate_Base_Horde_C_EjectItems_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ShowLostIndicator
struct ASupplyCrate_Base_Horde_C_ShowLostIndicator_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.MC_HasLanded
struct ASupplyCrate_Base_Horde_C_MC_HasLanded_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.MC_ToggleRelevancy
struct ASupplyCrate_Base_Horde_C_MC_ToggleRelevancy_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ActivateLowHealthVFX
struct ASupplyCrate_Base_Horde_C_ActivateLowHealthVFX_Params
{
	int                                                DmgLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.MULTI_WaveEnd
struct ASupplyCrate_Base_Horde_C_MULTI_WaveEnd_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.MULTI_IntermissionEnd
struct ASupplyCrate_Base_Horde_C_MULTI_IntermissionEnd_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.MULTI_HordeWin
struct ASupplyCrate_Base_Horde_C_MULTI_HordeWin_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.PlayHordeStartAudio
struct ASupplyCrate_Base_Horde_C_PlayHordeStartAudio_Params
{
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.AssignCrateToTribe
struct ASupplyCrate_Base_Horde_C_AssignCrateToTribe_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ExecuteUbergraph_SupplyCrate_Base_Horde
struct ASupplyCrate_Base_Horde_C_ExecuteUbergraph_SupplyCrate_Base_Horde_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
