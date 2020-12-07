#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesertKaiju_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.HaveLineOfSightTo
struct ADesertKaiju_Character_BP_C_HaveLineOfSightTo_Params
{
	class AActor*                                      LosCheckTarget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOnDinoCheat
struct ADesertKaiju_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPPreventRiding
struct ADesertKaiju_Character_BP_C_BPPreventRiding_Params
{
	class AShooterCharacter**                          ByPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDontCheckDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetDebugInfoString
struct ADesertKaiju_Character_BP_C_BPGetDebugInfoString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDinoARKDownloadedBegin
struct ADesertKaiju_Character_BP_C_BPDinoARKDownloadedBegin_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanBaseOnCharacter
struct ADesertKaiju_Character_BP_C_BPCanBaseOnCharacter_Params
{
	class APrimalCharacter**                           BaseCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ActorIsKaiju
struct ADesertKaiju_Character_BP_C_ActorIsKaiju_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDinoARKDownloadedEnd
struct ADesertKaiju_Character_BP_C_BPDinoARKDownloadedEnd_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_UseTamedPhysics
struct ADesertKaiju_Character_BP_C_OnRep_UseTamedPhysics_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker
struct ADesertKaiju_Character_BP_C_BPOverrideDamageCauserHitMarker_Params
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

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InterpSpawnInMICs
struct ADesertKaiju_Character_BP_C_InterpSpawnInMICs_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLocomotion_1
struct ADesertKaiju_Character_BP_C_PreventLocomotion_1_Params
{
	bool                                               Prevent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.MaybeStunDesertKaiju
struct ADesertKaiju_Character_BP_C_MaybeStunDesertKaiju_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.StunKaiju
struct ADesertKaiju_Character_BP_C_StunKaiju_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetRiderUnboardLocation
struct ADesertKaiju_Character_BP_C_BPGetRiderUnboardLocation_Params
{
	class APrimalCharacter**                           RidingCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CreateNodeDynamicMICs
struct ADesertKaiju_Character_BP_C_CreateNodeDynamicMICs_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ClientUpdateNodeStatus
struct ADesertKaiju_Character_BP_C_ClientUpdateNodeStatus_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Client_ReplicateNodeStatusOnBegin
struct ADesertKaiju_Character_BP_C_Client_ReplicateNodeStatusOnBegin_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_PreventMovementMode
struct ADesertKaiju_Character_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.K2_OnMovementModeChanged
struct ADesertKaiju_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Get Kaiju Transform
struct ADesertKaiju_Character_BP_C_Get_Kaiju_Transform_Params
{
	struct UObject_FTransform                          ActualTransform;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPSetupTamed
struct ADesertKaiju_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TickLightningTargetVFX
struct ADesertKaiju_Character_BP_C_TickLightningTargetVFX_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UpdateLightningTargetVFXLocation
struct ADesertKaiju_Character_BP_C_UpdateLightningTargetVFXLocation_Params
{
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    WorldRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm)
	struct FVector                                     surfaceNormal;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FindClosestSocketName
struct ADesertKaiju_Character_BP_C_FindClosestSocketName_Params
{
	struct FVector                                     CompareLoc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ClosestSocket;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlinkDamageNodeInterp
struct ADesertKaiju_Character_BP_C_BlinkDamageNodeInterp_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_OnSetDeath
struct ADesertKaiju_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TamedFlockCheckForRespawn
struct ADesertKaiju_Character_BP_C_TamedFlockCheckForRespawn_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPLimitPlayerRotation
struct ADesertKaiju_Character_BP_C_BPLimitPlayerRotation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   InViewRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetOverrideCameraInterpSpeed
struct ADesertKaiju_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
{
	float*                                             DefaultTPVCameraSpeedInterpolationMultiplier;             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DefaultTPVOffsetInterpSpeed;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TPVCameraSpeedInterpolationMultiplier;                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TPVOffsetInterpSpeed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOverrideCameraViewTarget
struct ADesertKaiju_Character_BP_C_BPOverrideCameraViewTarget_Params
{
	struct FName*                                      CurrentCameraMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DesiredCameraLocation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   DesiredCameraRotation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DesiredFOV;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCameraLocation;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCameraRotation;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCameraFOV;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CameraFOV;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAdjustAttackIndex
struct ADesertKaiju_Character_BP_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TamedFlockScan for Enemies
struct ADesertKaiju_Character_BP_C_TamedFlockScan_for_Enemies_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Tamed Flocks Distance to Kaiju Check
struct ADesertKaiju_Character_BP_C_Tamed_Flocks_Distance_to_Kaiju_Check_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.WildFlocks Distance to Kaiju Check
struct ADesertKaiju_Character_BP_C_WildFlocks_Distance_to_Kaiju_Check_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FlockCommandTrace
struct ADesertKaiju_Character_BP_C_FlockCommandTrace_Params
{
	bool                                               FlockOne;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetHUDElements
struct ADesertKaiju_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.RecallTamedFlocks
struct ADesertKaiju_Character_BP_C_RecallTamedFlocks_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLightningAoEField
struct ADesertKaiju_Character_BP_C_PreventLightningAoEField_Params
{
	struct FVector                                     ExplosionLoc;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnKaiju;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Prevent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FindHUDOffset
struct ADesertKaiju_Character_BP_C_FindHUDOffset_Params
{
	class USceneComponent*                             HoldSocket;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DestroyFauxNode
struct ADesertKaiju_Character_BP_C_DestroyFauxNode_Params
{
	bool                                               LFin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DamageFauxNode
struct ADesertKaiju_Character_BP_C_DamageFauxNode_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LeftNode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_RWingNodeHealth
struct ADesertKaiju_Character_BP_C_OnRep_RWingNodeHealth_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDoAttack
struct ADesertKaiju_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLocomotion
struct ADesertKaiju_Character_BP_C_PreventLocomotion_Params
{
	bool                                               Prevent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Update Locomotion
struct ADesertKaiju_Character_BP_C_Update_Locomotion_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_RiderControlFlockMode
struct ADesertKaiju_Character_BP_C_OnRep_RiderControlFlockMode_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintCanAttack
struct ADesertKaiju_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintCanRiderAttack
struct ADesertKaiju_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnLanded
struct ADesertKaiju_Character_BP_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTimerServer
struct ADesertKaiju_Character_BP_C_BPTimerServer_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnGroundFlock
struct ADesertKaiju_Character_BP_C_SpawnGroundFlock_Params
{
	bool                                               FirstFlock;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintAdjustOutputDamage
struct ADesertKaiju_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ShortestAngleDistance
struct ADesertKaiju_Character_BP_C_ShortestAngleDistance_Params
{
	float                                              AngleCurrent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Difference;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.GetLookDir
struct ADesertKaiju_Character_BP_C_GetLookDir_Params
{
	struct FVector                                     Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.LightningTrace
struct ADesertKaiju_Character_BP_C_LightningTrace_Params
{
	bool                                               FireLightning;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidTarget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLoc;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HitActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               SuccessFiredLightning;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTimerNonDedicated
struct ADesertKaiju_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPHandleOnStopTargeting
struct ADesertKaiju_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPHandleControllerInitiatedAttack
struct ADesertKaiju_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPNotifyClearPassenger
struct ADesertKaiju_Character_BP_C_BPNotifyClearPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanTakePassenger
struct ADesertKaiju_Character_BP_C_BPCanTakePassenger_Params
{
	class APrimalCharacter**                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PassengerSeatIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForcePassenger;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowFlyersAndWaterDinos;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAllowCarryCharacter
struct ADesertKaiju_Character_BP_C_BPAllowCarryCharacter_Params
{
	class APrimalCharacter**                           checkCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetMultiUseEntries
struct ADesertKaiju_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTryMultiUse
struct ADesertKaiju_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.StartTorpid
struct ADesertKaiju_Character_BP_C_StartTorpid_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DestroyControlNode
struct ADesertKaiju_Character_BP_C_DestroyControlNode_Params
{
	TEnumAsByte<EDesertKaiju_ControlNodes>             Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DamageControlNode
struct ADesertKaiju_Character_BP_C_DamageControlNode_Params
{
	TEnumAsByte<EDesertKaiju_ControlNodes>             ControlNode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LightningStrike;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAdjustDamage
struct ADesertKaiju_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DealLightningStrikeExplosionDamage
struct ADesertKaiju_Character_BP_C_DealLightningStrikeExplosionDamage_Params
{
	struct FVector                                     ExplosionLoc;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnKaiju;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnBasedFlock
struct ADesertKaiju_Character_BP_C_SpawnBasedFlock_Params
{
	bool                                               FirstFlock;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanBeBaseForCharacter
struct ADesertKaiju_Character_BP_C_BPCanBeBaseForCharacter_Params
{
	class APawn**                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UserConstructionScript
struct ADesertKaiju_Character_BP_C_UserConstructionScript_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_126
struct ADesertKaiju_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_126_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_125
struct ADesertKaiju_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_125_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CallFunc_StunKaiju
struct ADesertKaiju_Character_BP_C_CallFunc_StunKaiju_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SetVar_DKArenaManager
struct ADesertKaiju_Character_BP_C_SetVar_DKArenaManager_Params
{
	class AActor*                                      ArenaManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ReceiveBeginPlay
struct ADesertKaiju_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SummonLightning
struct ADesertKaiju_Character_BP_C_SummonLightning_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LightningLoc;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseRelative;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Mutli_ExposeNodes
struct ADesertKaiju_Character_BP_C_Mutli_ExposeNodes_Params
{
	TEnumAsByte<EDesertKaiju_ControlNodes>             Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               expose;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetNodeColor
struct ADesertKaiju_Character_BP_C_Multi_SetNodeColor_Params
{
	int                                                Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Activated;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DamageNode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ActivateNode
struct ADesertKaiju_Character_BP_C_ActivateNode_Params
{
	TEnumAsByte<EDesertKaiju_ControlNodes>             ControlNode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DeactivateNode
struct ADesertKaiju_Character_BP_C_DeactivateNode_Params
{
	TEnumAsByte<EDesertKaiju_ControlNodes>             ControlNode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CtS_RightClickLightning
struct ADesertKaiju_Character_BP_C_CtS_RightClickLightning_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FireRiderLightning
struct ADesertKaiju_Character_BP_C_FireRiderLightning_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ReceiveTick
struct ADesertKaiju_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_LWingNode
struct ADesertKaiju_Character_BP_C_Deactivate_LWingNode_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_RWingNode
struct ADesertKaiju_Character_BP_C_Deactivate_RWingNode_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_CentralNode
struct ADesertKaiju_Character_BP_C_Deactivate_CentralNode_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CtS_SetRiderControlFlockMode
struct ADesertKaiju_Character_BP_C_CtS_SetRiderControlFlockMode_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_ExposeFauxNodes
struct ADesertKaiju_Character_BP_C_Multi_ExposeFauxNodes_Params
{
	bool                                               LFin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               expose;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetFauxNodeColor
struct ADesertKaiju_Character_BP_C_Multi_SetFauxNodeColor_Params
{
	bool                                               LFin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_192_ComponentHitSignature__DelegateSignature
struct ADesertKaiju_Character_BP_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_192_ComponentHitSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_PlayRollingEffects
struct ADesertKaiju_Character_BP_C_Multi_PlayRollingEffects_Params
{
	struct FRotator                                    Rotator;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_Test
struct ADesertKaiju_Character_BP_C_Multi_Test_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_OnJumpPressed
struct ADesertKaiju_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_SpawnTamedFlocks
struct ADesertKaiju_Character_BP_C_Server_SpawnTamedFlocks_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_RecallFlocks
struct ADesertKaiju_Character_BP_C_Server_RecallFlocks_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_ForceTamedFlockTarget
struct ADesertKaiju_Character_BP_C_Server_ForceTamedFlockTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FlockOne;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_UpdateRiderLightningStrikeCharges
struct ADesertKaiju_Character_BP_C_Server_UpdateRiderLightningStrikeCharges_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger1DelayedSetInterpSpeed
struct ADesertKaiju_Character_BP_C_Passenger1DelayedSetInterpSpeed_Params
{
	class APrimalCharacter*                            Passenger;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger2DelayedSetInterpSpeed
struct ADesertKaiju_Character_BP_C_Passenger2DelayedSetInterpSpeed_Params
{
	class APrimalCharacter*                            Passenger;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger3DelayedSetInterpSpeed
struct ADesertKaiju_Character_BP_C_Passenger3DelayedSetInterpSpeed_Params
{
	class APrimalCharacter*                            Passenger;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger4DelayedSetInterpSpeed
struct ADesertKaiju_Character_BP_C_Passenger4DelayedSetInterpSpeed_Params
{
	class APrimalCharacter*                            Passenger;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_InterpLeftNode
struct ADesertKaiju_Character_BP_C_Multi_InterpLeftNode_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_InterpRightNode
struct ADesertKaiju_Character_BP_C_Multi_InterpRightNode_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_CenterRightNode
struct ADesertKaiju_Character_BP_C_Multi_CenterRightNode_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_AttachLightningAOE
struct ADesertKaiju_Character_BP_C_Multi_AttachLightningAOE_Params
{
	class USceneComponent*                             Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnLightningAOE
struct ADesertKaiju_Character_BP_C_SpawnLightningAOE_Params
{
	struct FVector                                     ExplosionLoc;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnKaiju;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetLastLightningRechargeTime
struct ADesertKaiju_Character_BP_C_Multi_SetLastLightningRechargeTime_Params
{
	double                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetLastTimeStoppedTargeting
struct ADesertKaiju_Character_BP_C_Multi_SetLastTimeStoppedTargeting_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetTemplate
struct ADesertKaiju_Character_BP_C_Multi_SetTemplate_Params
{
	class APrimalBuff*                                 Buff;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetFullbodyBlendStrength
struct ADesertKaiju_Character_BP_C_Multi_SetFullbodyBlendStrength_Params
{
	float                                              Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.multi_drawnode
struct ADesertKaiju_Character_BP_C_multi_drawnode_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetCollisionProf
struct ADesertKaiju_Character_BP_C_Multi_SetCollisionProf_Params
{
	struct FName                                       ColProfName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDesertKaiju_ControlNodes>             Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_DelayedTurnOffCorruptionNode
struct ADesertKaiju_Character_BP_C_Multi_DelayedTurnOffCorruptionNode_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PlayStun
struct ADesertKaiju_Character_BP_C_PlayStun_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.EquipSaddle
struct ADesertKaiju_Character_BP_C_EquipSaddle_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_PlayNodeDestroyFX
struct ADesertKaiju_Character_BP_C_Multi_PlayNodeDestroyFX_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetNewFlySpeed
struct ADesertKaiju_Character_BP_C_Multi_SetNewFlySpeed_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UpdateSaddlePhysics
struct ADesertKaiju_Character_BP_C_UpdateSaddlePhysics_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen
struct ADesertKaiju_Character_BP_C_Multi_DelayedTurnOffHealthRegen_Params
{
};

// Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ExecuteUbergraph_DesertKaiju_Character_BP
struct ADesertKaiju_Character_BP_C_ExecuteUbergraph_DesertKaiju_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
