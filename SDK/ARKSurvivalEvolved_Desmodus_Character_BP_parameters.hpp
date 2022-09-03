#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Desmodus_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetHUDElements
struct ADesmodus_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TurnOnLifeSteal
struct ADesmodus_Character_BP_C_TurnOnLifeSteal_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetRidingMultiUseEntries
struct ADesmodus_Character_BP_C_BPGetRidingMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAdjustDamage
struct ADesmodus_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetTargetingDesirability
struct ADesmodus_Character_BP_C_BPGetTargetingDesirability_Params
{
	class AActor**                                     Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetGravityZScale
struct ADesmodus_Character_BP_C_BPGetGravityZScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.Multicast Lifesteal Sound
struct ADesmodus_Character_BP_C_Multicast_Lifesteal_Sound_Params
{
	bool                                               isStealing;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFromInit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastEchoPingSound
struct ADesmodus_Character_BP_C_MulticastEchoPingSound_Params
{
	class USceneComponent*                             CharacterComponent;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastEchoBuffSound
struct ADesmodus_Character_BP_C_MulticastEchoBuffSound_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.MulticastInvisibleSound
struct ADesmodus_Character_BP_C_MulticastInvisibleSound_Params
{
	bool                                               isInvisible;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPUnstasis
struct ADesmodus_Character_BP_C_BPUnstasis_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.InterruptLatching
struct ADesmodus_Character_BP_C_InterruptLatching_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.SetLatchValues
struct ADesmodus_Character_BP_C_SetLatchValues_Params
{
	bool                                               LatchedDownwards;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LatchingSurfaceNormal;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LatchingLoc;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InitialSpawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOnStartJump
struct ADesmodus_Character_BP_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintCanAttack
struct ADesmodus_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ShouldTryLatch
struct ADesmodus_Character_BP_C_ShouldTryLatch_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               LandOnFailureToLatch;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAllowCarryCharacter
struct ADesmodus_Character_BP_C_BPAllowCarryCharacter_Params
{
	class APrimalCharacter**                           checkCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.UpdateHUD
struct ADesmodus_Character_BP_C_UpdateHUD_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.CanScreech
struct ADesmodus_Character_BP_C_CanScreech_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintCanRiderAttack
struct ADesmodus_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPModifyFOV
struct ADesmodus_Character_BP_C_BPModifyFOV_Params
{
	float*                                             FOVIn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPCanLand
struct ADesmodus_Character_BP_C_BPCanLand_Params
{
	bool*                                              CanLand;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideCameraViewTarget
struct ADesmodus_Character_BP_C_BPOverrideCameraViewTarget_Params
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

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetCrosshairAlpha
struct ADesmodus_Character_BP_C_BPGetCrosshairAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPLimitPlayerRotation
struct ADesmodus_Character_BP_C_BPLimitPlayerRotation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   InViewRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPBecomeAdult
struct ADesmodus_Character_BP_C_BPBecomeAdult_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPBecomeBaby
struct ADesmodus_Character_BP_C_BPBecomeBaby_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPIsValidUnStasisCaster
struct ADesmodus_Character_BP_C_BPIsValidUnStasisCaster_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.LatchToCeilingOnSpawn
struct ADesmodus_Character_BP_C_LatchToCeilingOnSpawn_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BP_OnTamedOrderReceived
struct ADesmodus_Character_BP_C_BP_OnTamedOrderReceived_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideMoveToOrder
struct ADesmodus_Character_BP_C_BPOverrideMoveToOrder_Params
{
	struct FVector*                                    MoveToLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          OrderingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPHandleUseButtonPress
struct ADesmodus_Character_BP_C_BPHandleUseButtonPress_Params
{
	class AShooterPlayerController**                   RiderController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideStencilAllianceForTarget
struct ADesmodus_Character_BP_C_BPOverrideStencilAllianceForTarget_Params
{
	class APrimalCharacter**                           TargetDino;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStencilAlliance>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bInCave
struct ADesmodus_Character_BP_C_OnRep_bInCave_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.CheckInCave
struct ADesmodus_Character_BP_C_CheckInCave_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.StopInvisibility
struct ADesmodus_Character_BP_C_StopInvisibility_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.DecreaseInvisibilityStamina
struct ADesmodus_Character_BP_C_DecreaseInvisibilityStamina_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct ADesmodus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryLatch
struct ADesmodus_Character_BP_C_TryLatch_Params
{
	struct FVector*                                    Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              backwardsLatching;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsDiving
struct ADesmodus_Character_BP_C_OnRep_bIsDiving_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveHit
struct ADesmodus_Character_BP_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BP_GetCustomModifier_MaxSpeed
struct ADesmodus_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveAnyDamage
struct ADesmodus_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDidSetCarriedCharacter
struct ADesmodus_Character_BP_C_BPDidSetCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDidClearCarriedCharacter
struct ADesmodus_Character_BP_C_BPDidClearCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnKillGrabbedDino
struct ADesmodus_Character_BP_C_OnKillGrabbedDino_Params
{
	class APrimalDinoCharacter*                        KilledDino;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bNightVisionOn
struct ADesmodus_Character_BP_C_OnRep_bNightVisionOn_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPTryMultiUse
struct ADesmodus_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ShowMultiUse
struct ADesmodus_Character_BP_C_ShowMultiUse_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPGetMultiUseEntries
struct ADesmodus_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ToggleNightVision
struct ADesmodus_Character_BP_C_ToggleNightVision_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickDiving
struct ADesmodus_Character_BP_C_TickDiving_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPShouldForceFlee
struct ADesmodus_Character_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.RemoveNightVisionForRider
struct ADesmodus_Character_BP_C_RemoveNightVisionForRider_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.Add Night VisionForRider
struct ADesmodus_Character_BP_C_Add_Night_VisionForRider_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.DestroyHUD
struct ADesmodus_Character_BP_C_DestroyHUD_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.SetupHUD
struct ADesmodus_Character_BP_C_SetupHUD_Params
{
	class AShooterPlayerController*                    ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPNotifySetRider
struct ADesmodus_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.AddTamingAffinityFromLifeSteal
struct ADesmodus_Character_BP_C_AddTamingAffinityFromLifeSteal_Params
{
	class AShooterCharacter*                           ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPModifyAimOffsetTargetLocation
struct ADesmodus_Character_BP_C_BPModifyAimOffsetTargetLocation_Params
{
	struct FVector                                     AimTargetLocation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickTameGrabAttack
struct ADesmodus_Character_BP_C_TickTameGrabAttack_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsInNight
struct ADesmodus_Character_BP_C_OnRep_bIsInNight_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TickCanLatchClient
struct ADesmodus_Character_BP_C_TickCanLatchClient_Params
{
	bool                                               CanLatch;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryUseBloodPack
struct ADesmodus_Character_BP_C_TryUseBloodPack_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.SendToServerTryToggleInvisible
struct ADesmodus_Character_BP_C_SendToServerTryToggleInvisible_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPHandleControllerInitiatedAttack
struct ADesmodus_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.CanStartLifeSteal
struct ADesmodus_Character_BP_C_CanStartLifeSteal_Params
{
	bool                                               canStart;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TurnOffLifeSteal
struct ADesmodus_Character_BP_C_TurnOffLifeSteal_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsLifeStealing
struct ADesmodus_Character_BP_C_OnRep_bIsLifeStealing_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryToggleLifeSteal
struct ADesmodus_Character_BP_C_TryToggleLifeSteal_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPDoAttack
struct ADesmodus_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnRep_bIsInvisible
struct ADesmodus_Character_BP_C_OnRep_bIsInvisible_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.TryToggleInvisible
struct ADesmodus_Character_BP_C_TryToggleInvisible_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPServerHandleNetExecCommand
struct ADesmodus_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.InterceptInputEvent
struct ADesmodus_Character_BP_C_InterceptInputEvent_Params
{
	class FString*                                     InputName;                                                // (Parm, ZeroConstructor)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.RidingTick
struct ADesmodus_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPNotifyClearRider
struct ADesmodus_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.CheckTrackingActors
struct ADesmodus_Character_BP_C_CheckTrackingActors_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.AddActorToTrackingList
struct ADesmodus_Character_BP_C_AddActorToTrackingList_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.Get All Revealed TargetForCurrentScream
struct ADesmodus_Character_BP_C_Get_All_Revealed_TargetForCurrentScream_Params
{
	TArray<class AActor*>                              RevealedCharacter;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ADesmodus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.GetLifeStealAmountFromCurrentAttack
struct ADesmodus_Character_BP_C_GetLifeStealAmountFromCurrentAttack_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BPAnimNotifyCustomState_End
struct ADesmodus_Character_BP_C_BPAnimNotifyCustomState_End_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState**                           AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.LineTrace
struct ADesmodus_Character_BP_C_LineTrace_Params
{
	class UMeshComponent**                             Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              BackwardLatching;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hit_Somthing;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Hit_Actor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.UserConstructionScript
struct ADesmodus_Character_BP_C_UserConstructionScript_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_288
struct ADesmodus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_288_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_287
struct ADesmodus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_287_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_286
struct ADesmodus_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_286_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_285
struct ADesmodus_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_285_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.LocalFaceLatchingObject
struct ADesmodus_Character_BP_C_LocalFaceLatchingObject_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveTick
struct ADesmodus_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ReceiveBeginPlay
struct ADesmodus_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnStartDaytime_Event
struct ADesmodus_Character_BP_C_OnStartDaytime_Event_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.OnStartNighttime_Event
struct ADesmodus_Character_BP_C_OnStartNighttime_Event_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ClearHUDReference
struct ADesmodus_Character_BP_C_ClearHUDReference_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ResetTamingVars
struct ADesmodus_Character_BP_C_ResetTamingVars_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.Client_SpawnSuccessBloddpackVFX
struct ADesmodus_Character_BP_C_Client_SpawnSuccessBloddpackVFX_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.BindDayCycleManager
struct ADesmodus_Character_BP_C_BindDayCycleManager_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.MoveDuringUnlatching
struct ADesmodus_Character_BP_C_MoveDuringUnlatching_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ClientNotEnoughStamina
struct ADesmodus_Character_BP_C_ClientNotEnoughStamina_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ServerTryLatch
struct ADesmodus_Character_BP_C_ServerTryLatch_Params
{
	bool                                               LatchedBackwards;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LatchingSurfaceNormal;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LatchingLoc;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.CrouchTick
struct ADesmodus_Character_BP_C_CrouchTick_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.JumpTick
struct ADesmodus_Character_BP_C_JumpTick_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ServerTryToggleLifeSteal
struct ADesmodus_Character_BP_C_ServerTryToggleLifeSteal_Params
{
};

// Function Desmodus_Character_BP.Desmodus_Character_BP_C.ExecuteUbergraph_Desmodus_Character_BP
struct ADesmodus_Character_BP_C_ExecuteUbergraph_Desmodus_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
