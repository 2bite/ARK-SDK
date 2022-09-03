#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceKaiju_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
struct AIceKaiju_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideHealthBarOffset
struct AIceKaiju_Character_BP_C_BPOverrideHealthBarOffset_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDinoARKDownloadedBegin
struct AIceKaiju_Character_BP_C_BPDinoARKDownloadedBegin_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetDebugInfoString
struct AIceKaiju_Character_BP_C_BPGetDebugInfoString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventRiding
struct AIceKaiju_Character_BP_C_BPPreventRiding_Params
{
	class AShooterCharacter**                          ByPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDontCheckDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOnDinoCheat
struct AIceKaiju_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanBaseOnCharacter
struct AIceKaiju_Character_BP_C_BPCanBaseOnCharacter_Params
{
	class APrimalCharacter**                           BaseCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ActorIsKaiju
struct AIceKaiju_Character_BP_C_ActorIsKaiju_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsKaiju;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDinoARKDownloadedEnd
struct AIceKaiju_Character_BP_C_BPDinoARKDownloadedEnd_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.OnRep_UseTamedPhysics
struct AIceKaiju_Character_BP_C_OnRep_UseTamedPhysics_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
struct AIceKaiju_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideCharacterSound
struct AIceKaiju_Character_BP_C_BPOverrideCharacterSound_Params
{
	class USoundBase**                                 SoundIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintCanRiderAttack
struct AIceKaiju_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.HealNodesAndHealthFromLeashing
struct AIceKaiju_Character_BP_C_HealNodesAndHealthFromLeashing_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker
struct AIceKaiju_Character_BP_C_BPOverrideDamageCauserHitMarker_Params
{
	class AShooterPlayerController**                   DamageCauserController;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHitFriendlyTarget;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PreDamageHealth;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  PointDamageHitResult;                                     // (Parm, OutParm, ReferenceParm)
	struct FHitMarkerSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.K2_OnMovementModeChanged
struct AIceKaiju_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideCharacterNewFallVelocity
struct AIceKaiju_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InterpSpawnInMICs
struct AIceKaiju_Character_BP_C_InterpSpawnInMICs_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetHealthBarColor
struct AIceKaiju_Character_BP_C_BPGetHealthBarColor_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetRiderUnboardLocation
struct AIceKaiju_Character_BP_C_BPGetRiderUnboardLocation_Params
{
	class APrimalCharacter**                           RidingCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IsLocomotionBlocked
struct AIceKaiju_Character_BP_C_IsLocomotionBlocked_Params
{
	bool                                               bLocked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetMovementMontage
struct AIceKaiju_Character_BP_C_GetMovementMontage_Params
{
	TEnumAsByte<ERootMotionMovementMode>*              Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InterpNodeActiveStates
struct AIceKaiju_Character_BP_C_InterpNodeActiveStates_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClientUpdateNodeStatus
struct AIceKaiju_Character_BP_C_ClientUpdateNodeStatus_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleUseButtonPress
struct AIceKaiju_Character_BP_C_BPHandleUseButtonPress_Params
{
	class AShooterPlayerController**                   RiderController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPNotifyClearRider
struct AIceKaiju_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOnAnimPlayedNotify
struct AIceKaiju_Character_BP_C_BPOnAnimPlayedNotify_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicateToOwner;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseAndServerUpdateMesh;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseOnServer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPSetupTamed
struct AIceKaiju_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventFirstPerson
struct AIceKaiju_Character_BP_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetCrosshairColor
struct AIceKaiju_Character_BP_C_BPGetCrosshairColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventInputType
struct AIceKaiju_Character_BP_C_BPPreventInputType_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetTPVCamOffset
struct AIceKaiju_Character_BP_C_SetTPVCamOffset_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlinkDamageNodeInterp
struct AIceKaiju_Character_BP_C_BlinkDamageNodeInterp_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPModifyRootMotionDeltaRotation
struct AIceKaiju_Character_BP_C_BPModifyRootMotionDeltaRotation_Params
{
	struct FRotator                                    Delta;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPModifyRootMotionDeltaTranslation
struct AIceKaiju_Character_BP_C_BPModifyRootMotionDeltaTranslation_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetGravityZScale
struct AIceKaiju_Character_BP_C_BPGetGravityZScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DealAOECollisionDamage
struct AIceKaiju_Character_BP_C_DealAOECollisionDamage_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Init Fur
struct AIceKaiju_Character_BP_C_Init_Fur_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InitFurRestDistance
struct AIceKaiju_Character_BP_C_InitFurRestDistance_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetLastTransforms
struct AIceKaiju_Character_BP_C_SetLastTransforms_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateFur
struct AIceKaiju_Character_BP_C_UpdateFur_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SimulateFur
struct AIceKaiju_Character_BP_C_SimulateFur_Params
{
	TArray<struct UObject_FTransform>                  InSocketTransforms;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct UObject_FTransform>                  InLastSubstepSocketTransforms;                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetFurParams
struct AIceKaiju_Character_BP_C_SetFurParams_Params
{
	TArray<struct UObject_FTransform>                  InSocketTransforms;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CreateNodeDynamicMATs
struct AIceKaiju_Character_BP_C_CreateNodeDynamicMATs_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Get Launch DirectionForWildLeap
struct AIceKaiju_Character_BP_C_Get_Launch_DirectionForWildLeap_Params
{
	class AActor*                                      CalcActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleOnStopFire
struct AIceKaiju_Character_BP_C_BPHandleOnStopFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnSetDeath
struct AIceKaiju_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.TraceForLeapCollisionDamage
struct AIceKaiju_Character_BP_C_TraceForLeapCollisionDamage_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AngryAOEDmg
struct AIceKaiju_Character_BP_C_AngryAOEDmg_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ShouldStopJumpRotation
struct AIceKaiju_Character_BP_C_ShouldStopJumpRotation_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchLiquidBomb
struct AIceKaiju_Character_BP_C_LaunchLiquidBomb_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LiquidBombTrace
struct AIceKaiju_Character_BP_C_LiquidBombTrace_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FinishLeapTamed
struct AIceKaiju_Character_BP_C_FinishLeapTamed_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetLaunchDirection
struct AIceKaiju_Character_BP_C_GetLaunchDirection_Params
{
	class AActor*                                      CalcActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchAtTracePoint
struct AIceKaiju_Character_BP_C_LaunchAtTracePoint_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ShortestAngleDistance
struct AIceKaiju_Character_BP_C_ShortestAngleDistance_Params
{
	float                                              AngleCurrent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Difference;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetClampedLookDir
struct AIceKaiju_Character_BP_C_GetClampedLookDir_Params
{
	bool                                               LimitLowerPitch;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LeapingTrace
struct AIceKaiju_Character_BP_C_LeapingTrace_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExecuteTamedLEap
struct AIceKaiju_Character_BP_C_ExecuteTamedLEap_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleOnStopTargeting
struct AIceKaiju_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateLeapTargetVFXLocation
struct AIceKaiju_Character_BP_C_UpdateLeapTargetVFXLocation_Params
{
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLoc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    WorldRot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm)
	struct FVector                                     SurfaceNormal;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Calc Leap TargetTamed
struct AIceKaiju_Character_BP_C_Calc_Leap_TargetTamed_Params
{
	struct FProjectileArc                              Arc;                                                      // (Parm)
	float                                              DebugDrawDuration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FoundValidTarget;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAirTarget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetNormal;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ArcTime;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetVerticalViewAngle
struct AIceKaiju_Character_BP_C_GetVerticalViewAngle_Params
{
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleControllerInitiatedAttack
struct AIceKaiju_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MoveBlocked
struct AIceKaiju_Character_BP_C_MoveBlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BSetupDinoTameable
struct AIceKaiju_Character_BP_C_BSetupDinoTameable_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPClientDoMultiUse
struct AIceKaiju_Character_BP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetMultiUseEntries
struct AIceKaiju_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTryMultiUse
struct AIceKaiju_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CreateIceSpearTargetArray
struct AIceKaiju_Character_BP_C_CreateIceSpearTargetArray_Params
{
	TArray<class AActor*>                              NewParam;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              NewParam1;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetImmuneToDamage
struct AIceKaiju_Character_BP_C_SetImmuneToDamage_Params
{
	bool                                               Immune;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StartTorpid
struct AIceKaiju_Character_BP_C_StartTorpid_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DestroyChestNode
struct AIceKaiju_Character_BP_C_DestroyChestNode_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageChestNode
struct AIceKaiju_Character_BP_C_DamageChestNode_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanTargetCorpse
struct AIceKaiju_Character_BP_C_BPCanTargetCorpse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExposeChestNode
struct AIceKaiju_Character_BP_C_ExposeChestNode_Params
{
	bool                                               Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DestroyRightShoulderNode
struct AIceKaiju_Character_BP_C_DestroyRightShoulderNode_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RightLegNode Destroyed
struct AIceKaiju_Character_BP_C_RightLegNode_Destroyed_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.HideLegNodes
struct AIceKaiju_Character_BP_C_HideLegNodes_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExposeLegNodes
struct AIceKaiju_Character_BP_C_ExposeLegNodes_Params
{
	bool                                               Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RightLeg;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDoAttack
struct AIceKaiju_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageRightShoulderNode
struct AIceKaiju_Character_BP_C_DamageRightShoulderNode_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageRightLegNode
struct AIceKaiju_Character_BP_C_DamageRightLegNode_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPAdjustDamage
struct AIceKaiju_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintAdjustOutputDamage
struct AIceKaiju_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClearLeapTarget
struct AIceKaiju_Character_BP_C_ClearLeapTarget_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPShouldLimitForwardDirection
struct AIceKaiju_Character_BP_C_BPShouldLimitForwardDirection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTimerNonDedicated
struct AIceKaiju_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CheckLeapAttackEnd
struct AIceKaiju_Character_BP_C_CheckLeapAttackEnd_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTimerServer
struct AIceKaiju_Character_BP_C_BPTimerServer_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FinishLeap
struct AIceKaiju_Character_BP_C_FinishLeap_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.OnRep_bDoingLeap
struct AIceKaiju_Character_BP_C_OnRep_bDoingLeap_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StartLeap
struct AIceKaiju_Character_BP_C_StartLeap_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IceKaijuShakePlayersOff
struct AIceKaiju_Character_BP_C_IceKaijuShakePlayersOff_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanBeBaseForCharacter
struct AIceKaiju_Character_BP_C_BPCanBeBaseForCharacter_Params
{
	class APawn**                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPAdjustAttackIndex
struct AIceKaiju_Character_BP_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Ice Kaiju Perform Attack
struct AIceKaiju_Character_BP_C_Ice_Kaiju_Perform_Attack_Params
{
	TEnumAsByte<EIceKaijuAttackList>                   Attack;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintCanAttack
struct AIceKaiju_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UserConstructionScript
struct AIceKaiju_Character_BP_C_UserConstructionScript_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CallFunc_StunKaiju
struct AIceKaiju_Character_BP_C_CallFunc_StunKaiju_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetVar_IKArenaManager
struct AIceKaiju_Character_BP_C_SetVar_IKArenaManager_Params
{
	class AActor*                                      ArenaManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ReceiveTick
struct AIceKaiju_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetAngry
struct AIceKaiju_Character_BP_C_SetAngry_Params
{
	bool                                               IsAngry;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MulticastApplyLeapDownForce
struct AIceKaiju_Character_BP_C_MulticastApplyLeapDownForce_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature
struct AIceKaiju_Character_BP_C_BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.PlayLeapAttackHitFX
struct AIceKaiju_Character_BP_C_PlayLeapAttackHitFX_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ReceiveBeginPlay
struct AIceKaiju_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeLegNodesWithDelay
struct AIceKaiju_Character_BP_C_Rep_ExposeLegNodesWithDelay_Params
{
	bool                                               Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RightLeg;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeLegNodes
struct AIceKaiju_Character_BP_C_Rep_ExposeLegNodes_Params
{
	bool                                               Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RightLeg;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_TurnForAttack
struct AIceKaiju_Character_BP_C_AnimNotify_TurnForAttack_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RotateAttack
struct AIceKaiju_Character_BP_C_RotateAttack_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_AttackTurnFinished
struct AIceKaiju_Character_BP_C_AnimNotify_AttackTurnFinished_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeChestNodeWithDelay
struct AIceKaiju_Character_BP_C_Rep_ExposeChestNodeWithDelay_Params
{
	bool                                               Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeChestNode
struct AIceKaiju_Character_BP_C_Rep_ExposeChestNode_Params
{
	bool                                               Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_LeapAttackBegin
struct AIceKaiju_Character_BP_C_AnimNotify_LeapAttackBegin_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchIceSpears
struct AIceKaiju_Character_BP_C_LaunchIceSpears_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FreezeAOE
struct AIceKaiju_Character_BP_C_FreezeAOE_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DelayedPress
struct AIceKaiju_Character_BP_C_DelayedPress_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Server_TraceTargetDir
struct AIceKaiju_Character_BP_C_Server_TraceTargetDir_Params
{
	struct FVector                                     AimLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AimHit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LeapInstant;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxDistLeapTraceGroundLoc;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FailedToFindMaxDistLeapTraceGroundLoc;                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_TraceTargetDir
struct AIceKaiju_Character_BP_C_Multi_TraceTargetDir_Params
{
	struct FVector                                     AimLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AimHit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxDistLeapTraceGroundLoc;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FailedToFindMaxDistLeapTraceGroundLoc;                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RequestLeapResponse
struct AIceKaiju_Character_BP_C_RequestLeapResponse_Params
{
	bool                                               IsHoldingLeap;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnJumpReleased
struct AIceKaiju_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnJumpPressed
struct AIceKaiju_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_SetInput
struct AIceKaiju_Character_BP_C_Multicast_SetInput_Params
{
	bool                                               PreventInput;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ServerDoAttack
struct AIceKaiju_Character_BP_C_ServerDoAttack_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_LaunchBomb
struct AIceKaiju_Character_BP_C_AnimNotify_LaunchBomb_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DelayedClearLeap
struct AIceKaiju_Character_BP_C_DelayedClearLeap_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClearLeap
struct AIceKaiju_Character_BP_C_ClearLeap_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateAllJumpRotation
struct AIceKaiju_Character_BP_C_UpdateAllJumpRotation_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateJumpRotation
struct AIceKaiju_Character_BP_C_UpdateJumpRotation_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MultiRestoreInput
struct AIceKaiju_Character_BP_C_MultiRestoreInput_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_TamedLeapDamage
struct AIceKaiju_Character_BP_C_AnimNotify_TamedLeapDamage_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_ApplyFreezeFromIceAura
struct AIceKaiju_Character_BP_C_Multi_ApplyFreezeFromIceAura_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IceAuraCheck
struct AIceKaiju_Character_BP_C_IceAuraCheck_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BndEvt__LeapCheckSphere_K2Node_ComponentBoundEvent_215_ComponentBeginOverlapSignature__DelegateSignature
struct AIceKaiju_Character_BP_C_BndEvt__LeapCheckSphere_K2Node_ComponentBoundEvent_215_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MultiToggleIceAuraVFX
struct AIceKaiju_Character_BP_C_MultiToggleIceAuraVFX_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_EnableIK
struct AIceKaiju_Character_BP_C_AnimNotify_EnableIK_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IsDoneAttacking
struct AIceKaiju_Character_BP_C_IsDoneAttacking_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_SetNodeColor
struct AIceKaiju_Character_BP_C_Multi_SetNodeColor_Params
{
	int                                                Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_IceKaijuDebugInfo
struct AIceKaiju_Character_BP_C_Multicast_IceKaijuDebugInfo_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_DrawDebugSphere
struct AIceKaiju_Character_BP_C_Multicast_DrawDebugSphere_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_InterpRightLegNode
struct AIceKaiju_Character_BP_C_Multi_InterpRightLegNode_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_InterpRightShoulderNode
struct AIceKaiju_Character_BP_C_Multi_InterpRightShoulderNode_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Server_SetHoldLeftClick
struct AIceKaiju_Character_BP_C_Server_SetHoldLeftClick_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StunKaiju
struct AIceKaiju_Character_BP_C_StunKaiju_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.EquipSaddle
struct AIceKaiju_Character_BP_C_EquipSaddle_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_PlayNodeDestroyFX
struct AIceKaiju_Character_BP_C_Multi_PlayNodeDestroyFX_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateSaddlePhysics
struct AIceKaiju_Character_BP_C_UpdateSaddlePhysics_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen
struct AIceKaiju_Character_BP_C_Multi_DelayedTurnOffHealthRegen_Params
{
};

// Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExecuteUbergraph_IceKaiju_Character_BP
struct AIceKaiju_Character_BP_C_ExecuteUbergraph_IceKaiju_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
