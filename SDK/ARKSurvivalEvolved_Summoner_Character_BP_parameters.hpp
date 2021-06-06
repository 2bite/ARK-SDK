#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Summoner_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearForceSearchLightTargetPrevMovement
struct ASummoner_Character_BP_C_TimedClearForceSearchLightTargetPrevMovement_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.BPSetupTamed
struct ASummoner_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifySetRider
struct ASummoner_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifyClearRider
struct ASummoner_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintCanRiderAttack
struct ASummoner_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.BPTimerNonDedicated
struct ASummoner_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportToNearbySplinePointUnstasis
struct ASummoner_Character_BP_C_TeleportToNearbySplinePointUnstasis_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.GetMissionMinionColorSet
struct ASummoner_Character_BP_C_GetMissionMinionColorSet_Params
{
	class UClass*                                      ColorSet;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.UpdatePetalAnimStateType
struct ASummoner_Character_BP_C_UpdatePetalAnimStateType_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportAlongCurrentSplinePoint
struct ASummoner_Character_BP_C_TeleportAlongCurrentSplinePoint_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.BPUnstasis
struct ASummoner_Character_BP_C_BPUnstasis_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.ClearStartDodgeLoc
struct ASummoner_Character_BP_C_ClearStartDodgeLoc_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.ResetPerCombatVars
struct ASummoner_Character_BP_C_ResetPerCombatVars_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnMinionsInArea
struct ASummoner_Character_BP_C_SpawnMinionsInArea_Params
{
	struct FVector                                     SourceLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.BP_OnSetDeath
struct ASummoner_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.TeleportToCurrentSplinePoint
struct ASummoner_Character_BP_C_TeleportToCurrentSplinePoint_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.CheckIsBeingCarried
struct ASummoner_Character_BP_C_CheckIsBeingCarried_Params
{
	bool                                               ActuallyDoEscape;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBeingCarried;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.ManualSpawnHitVFX
struct ASummoner_Character_BP_C_ManualSpawnHitVFX_Params
{
	struct FHitResult                                  HitInfo;                                                  // (Parm)
	bool                                               Shielded;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.TogglePetalsOpen
struct ASummoner_Character_BP_C_TogglePetalsOpen_Params
{
	bool                                               Open;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.ScreamCameraShakePlayers
struct ASummoner_Character_BP_C_ScreamCameraShakePlayers_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.BPOverrideHurtAnim
struct ASummoner_Character_BP_C_BPOverrideHurtAnim_Params
{
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsLocalPath;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PointDamageLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PointDamageHitNormal;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSearchLightActive
struct ASummoner_Character_BP_C_UpdateSearchLightActive_Params
{
	bool                                               ShouldSetActive;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.TumorAttackSetup
struct ASummoner_Character_BP_C_TumorAttackSetup_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.RefreshMinionAggro
struct ASummoner_Character_BP_C_RefreshMinionAggro_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.AttemptDodgeAttack
struct ASummoner_Character_BP_C_AttemptDodgeAttack_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleCanScreamTeleport
struct ASummoner_Character_BP_C_ToggleCanScreamTeleport_Params
{
	bool                                               CanScreamTeleport;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.BPDoAttack
struct ASummoner_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.ScreamTeleport
struct ASummoner_Character_BP_C_ScreamTeleport_Params
{
	bool                                               Return;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.PlayFoundTargetAnim
struct ASummoner_Character_BP_C_PlayFoundTargetAnim_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.ExShouldAggroToActor
struct ASummoner_Character_BP_C_ExShouldAggroToActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AddAggroIfTrue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReqShooterChar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.BPNotifyBumpedByPawn
struct ASummoner_Character_BP_C_BPNotifyBumpedByPawn_Params
{
	class APrimalCharacter**                           ByPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.GetRandomMinionsToSpawn
struct ASummoner_Character_BP_C_GetRandomMinionsToSpawn_Params
{
	int                                                amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveAnyDamage
struct ASummoner_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleHealthRegen
struct ASummoner_Character_BP_C_ToggleHealthRegen_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnParticlesAtAttackSockets
struct ASummoner_Character_BP_C_SpawnParticlesAtAttackSockets_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             particle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnAttached;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearPreventMovement
struct ASummoner_Character_BP_C_TimedClearPreventMovement_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSpline
struct ASummoner_Character_BP_C_UpdateSpline_Params
{
	bool                                               ExcludeCurrent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetNewSpline;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.GetClosestSpline
struct ASummoner_Character_BP_C_GetClosestSpline_Params
{
	bool                                               ExcludeCurrent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ASplineActor*                                Spline;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateDodgeDurationByDistance
struct ASummoner_Character_BP_C_UpdateDodgeDurationByDistance_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.GetDodgeDistanceForChar
struct ASummoner_Character_BP_C_GetDodgeDistanceForChar_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateAnimBPUseTurning
struct ASummoner_Character_BP_C_UpdateAnimBPUseTurning_Params
{
	bool                                               UseTurning;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.InitSummoner
struct ASummoner_Character_BP_C_InitSummoner_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.TimedClearIsDodging
struct ASummoner_Character_BP_C_TimedClearIsDodging_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.SetIsDodging
struct ASummoner_Character_BP_C_SetIsDodging_Params
{
	bool                                               IsDodging;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bIsDodging
struct ASummoner_Character_BP_C_OnRep_bIsDodging_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.SummonerServerTick
struct ASummoner_Character_BP_C_SummonerServerTick_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bIsStunned
struct ASummoner_Character_BP_C_OnRep_bIsStunned_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.GetLocationLeastPlayerLookingAt
struct ASummoner_Character_BP_C_GetLocationLeastPlayerLookingAt_Params
{
	struct FVector                                     retLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.TickingShield
struct ASummoner_Character_BP_C_TickingShield_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.BPAdjustDamage
struct ASummoner_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_bShieldOn
struct ASummoner_Character_BP_C_OnRep_bShieldOn_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleShield
struct ASummoner_Character_BP_C_ToggleShield_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.OnRep_InSleepingState
struct ASummoner_Character_BP_C_OnRep_InSleepingState_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.BPOnLethalDamage
struct ASummoner_Character_BP_C_BPOnLethalDamage_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventDeath;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.IsBeingAimedAt
struct ASummoner_Character_BP_C_IsBeingAimedAt_Params
{
	bool                                               Aimed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.FireCircleTumor
struct ASummoner_Character_BP_C_FireCircleTumor_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DinoClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.FireLineTumor
struct ASummoner_Character_BP_C_FireLineTumor_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DinoClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.DodgeMove
struct ASummoner_Character_BP_C_DodgeMove_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.CanDodge
struct ASummoner_Character_BP_C_CanDodge_Params
{
	bool                                               IsRandomDodge;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanDodge;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.BPModifyDesiredRotation
struct ASummoner_Character_BP_C_BPModifyDesiredRotation_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InDesiredRotation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OutDesiredRotation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.PushBack
struct ASummoner_Character_BP_C_PushBack_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.Update Chasing Target
struct ASummoner_Character_BP_C_Update_Chasing_Target_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.ToggleSleepingState
struct ASummoner_Character_BP_C_ToggleSleepingState_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.TickSleepingState
struct ASummoner_Character_BP_C_TickSleepingState_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateSleep State
struct ASummoner_Character_BP_C_UpdateSleep_State_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.Get Closest PointIndex on Spline
struct ASummoner_Character_BP_C_Get_Closest_PointIndex_on_Spline_Params
{
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.TickSearchLight
struct ASummoner_Character_BP_C_TickSearchLight_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveDestroyed
struct ASummoner_Character_BP_C_ReceiveDestroyed_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.StopWander
struct ASummoner_Character_BP_C_StopWander_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.StartWanderForDuration
struct ASummoner_Character_BP_C_StartWanderForDuration_Params
{
	float                                              WanderDuration;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.CleanMinionsArray
struct ASummoner_Character_BP_C_CleanMinionsArray_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.DespawnMinions
struct ASummoner_Character_BP_C_DespawnMinions_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.DebugSpline
struct ASummoner_Character_BP_C_DebugSpline_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.OverrideRandomWanderLocation
struct ASummoner_Character_BP_C_OverrideRandomWanderLocation_Params
{
	struct FVector                                     originalDestination;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     inVec;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnTumor
struct ASummoner_Character_BP_C_SpawnTumor_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnAMinionAtLocation
struct ASummoner_Character_BP_C_SpawnAMinionAtLocation_Params
{
	struct FVector                                     SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DinoClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        SpawnedMinion;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.SpawnProjectiles
struct ASummoner_Character_BP_C_SpawnProjectiles_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintCanAttack
struct ASummoner_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.UserConstructionScript
struct ASummoner_Character_BP_C_UserConstructionScript_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_SpotLightAlert__FinishedFunc
struct ASummoner_Character_BP_C_Timeline_SpotLightAlert__FinishedFunc_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_SpotLightAlert__UpdateFunc
struct ASummoner_Character_BP_C_Timeline_SpotLightAlert__UpdateFunc_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_UpdateShieldMats__FinishedFunc
struct ASummoner_Character_BP_C_Timeline_UpdateShieldMats__FinishedFunc_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_UpdateShieldMats__UpdateFunc
struct ASummoner_Character_BP_C_Timeline_UpdateShieldMats__UpdateFunc_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_DoTeleportDissolve__FinishedFunc
struct ASummoner_Character_BP_C_Timeline_DoTeleportDissolve__FinishedFunc_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.Timeline_DoTeleportDissolve__UpdateFunc
struct ASummoner_Character_BP_C_Timeline_DoTeleportDissolve__UpdateFunc_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.BPTimerServer
struct ASummoner_Character_BP_C_BPTimerServer_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.ReceiveBeginPlay
struct ASummoner_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ASummoner_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_SpawnParticleAtAttackSockets
struct ASummoner_Character_BP_C_Multi_SpawnParticleAtAttackSockets_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             particle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnAttached;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_ManualSpawnHitVFX
struct ASummoner_Character_BP_C_Multi_ManualSpawnHitVFX_Params
{
	struct FHitResult                                  HitInfo;                                                  // (Parm)
	bool                                               Shielded;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_SpotLightAlert
struct ASummoner_Character_BP_C_Multi_SpotLightAlert_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.Multi_MinionSpawnFX
struct ASummoner_Character_BP_C_Multi_MinionSpawnFX_Params
{
	struct UObject_FTransform                          Transform;                                                // (Parm, IsPlainOldData)
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.UpdateShieldMats
struct ASummoner_Character_BP_C_UpdateShieldMats_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.DoTeleportDissolve
struct ASummoner_Character_BP_C_DoTeleportDissolve_Params
{
};

// Function Summoner_Character_BP.Summoner_Character_BP_C.ExecuteUbergraph_Summoner_Character_BP
struct ASummoner_Character_BP_C_ExecuteUbergraph_Summoner_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
