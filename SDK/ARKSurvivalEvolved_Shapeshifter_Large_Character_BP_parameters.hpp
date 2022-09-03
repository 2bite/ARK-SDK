#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Shapeshifter_Large_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.WantsToRun
struct AShapeshifter_Large_Character_BP_C_WantsToRun_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnNonInstanceJumpOffWallInput
struct AShapeshifter_Large_Character_BP_C_OnNonInstanceJumpOffWallInput_Params
{
	float*                                             HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetLatchJumpSpeedThresholdForRotate
struct AShapeshifter_Large_Character_BP_C_GetLatchJumpSpeedThresholdForRotate_Params
{
	float                                              Res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPHandleControllerInitiatedAttack
struct AShapeshifter_Large_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AdjustIKHalfLegLength
struct AShapeshifter_Large_Character_BP_C_AdjustIKHalfLegLength_Params
{
	bool                                               Default;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPCanCryo
struct AShapeshifter_Large_Character_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoPostBeginPlay
struct AShapeshifter_Large_Character_BP_C_BPDinoPostBeginPlay_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CanSequentialJump
struct AShapeshifter_Large_Character_BP_C_CanSequentialJump_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Throttled TickFn
struct AShapeshifter_Large_Character_BP_C_Throttled_TickFn_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPAcknowledgeServerCorrection
struct AShapeshifter_Large_Character_BP_C_BPAcknowledgeServerCorrection_Params
{
	float*                                             TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        NewBase;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReplicateMovementToSimulatedClients
struct AShapeshifter_Large_Character_BP_C_ReplicateMovementToSimulatedClients_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateBerzerk
struct AShapeshifter_Large_Character_BP_C_UpdateBerzerk_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetCameraInterpSpeed
struct AShapeshifter_Large_Character_BP_C_GetCameraInterpSpeed_Params
{
	float                                              InterpSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InitUnTransformEvents
struct AShapeshifter_Large_Character_BP_C_InitUnTransformEvents_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnJumpFromGround
struct AShapeshifter_Large_Character_BP_C_OnJumpFromGround_Params
{
	float*                                             HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_OnSetDeath
struct AShapeshifter_Large_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetProjectileTypeForRockThrow
struct AShapeshifter_Large_Character_BP_C_GetProjectileTypeForRockThrow_Params
{
	struct FName                                       TypeName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get RockThrowAttack Anim Index from Idle Anim
struct AShapeshifter_Large_Character_BP_C_Get_RockThrowAttack_Anim_Index_from_Idle_Anim_Params
{
	int                                                Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GrabRock
struct AShapeshifter_Large_Character_BP_C_GrabRock_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CanJumpInternal
struct AShapeshifter_Large_Character_BP_C_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ThrowRock
struct AShapeshifter_Large_Character_BP_C_ThrowRock_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Is Super Uberpounce
struct AShapeshifter_Large_Character_BP_C_Is_Super_Uberpounce_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceInterpSpeed
struct AShapeshifter_Large_Character_BP_C_GetUberpounceInterpSpeed_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetInitialAnimationForUberpounce
struct AShapeshifter_Large_Character_BP_C_GetInitialAnimationForUberpounce_Params
{
	bool*                                              QuickUberpounce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                OutAnim;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RetStartSectionName;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateIdleAnim
struct AShapeshifter_Large_Character_BP_C_UpdateIdleAnim_Params
{
	TEnumAsByte<EShapeshifterIdleAnimEnum>             newIdle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceRangeBase
struct AShapeshifter_Large_Character_BP_C_GetUberpounceRangeBase_Params
{
	float                                              Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceMaxRange
struct AShapeshifter_Large_Character_BP_C_GetUberpounceMaxRange_Params
{
	float                                              Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetCrosshairAlpha
struct AShapeshifter_Large_Character_BP_C_BPGetCrosshairAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDamageResistancePercentFromAddiction
struct AShapeshifter_Large_Character_BP_C_GetDamageResistancePercentFromAddiction_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Reset Untransform Time
struct AShapeshifter_Large_Character_BP_C_Reset_Untransform_Time_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Transformation Lifetime Reduction PercentFrom Addiction
struct AShapeshifter_Large_Character_BP_C_Get_Transformation_Lifetime_Reduction_PercentFrom_Addiction_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Transformation Lifetime Reduction from Addiction
struct AShapeshifter_Large_Character_BP_C_Get_Transformation_Lifetime_Reduction_from_Addiction_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get AnimSpeedBonus from Addiction
struct AShapeshifter_Large_Character_BP_C_Get_AnimSpeedBonus_from_Addiction_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDamageMultiFromAddiction
struct AShapeshifter_Large_Character_BP_C_GetDamageMultiFromAddiction_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnUberpounceStateChanged
struct AShapeshifter_Large_Character_BP_C_OnUberpounceStateChanged_Params
{
	TEnumAsByte<EUberpounceState>*                     NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUberpounceState>*                     PrevState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar
struct AShapeshifter_Large_Character_BP_C_BPDinoTooltipCustomTorpidityProgressBar_Params
{
	bool                                               overrideTorpidityProgressBarIfActive;                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              progressPercent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      Label;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetMultiUseEntries
struct AShapeshifter_Large_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AddBerzerkDamage
struct AShapeshifter_Large_Character_BP_C_AddBerzerkDamage_Params
{
	float                                              Dmg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_LatchIdleAnimRep
struct AShapeshifter_Large_Character_BP_C_OnRep_LatchIdleAnimRep_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOverrideTamingDescriptionLabel
struct AShapeshifter_Large_Character_BP_C_BPOverrideTamingDescriptionLabel_Params
{
	struct FSlateColor                                 TextColor;                                                // (Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AllowPlayMontage
struct AShapeshifter_Large_Character_BP_C_AllowPlayMontage_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PrintHealth
struct AShapeshifter_Large_Character_BP_C_PrintHealth_Params
{
	class UPrimalCharacterStatusComponent*             Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_FullyReplicatedOnInitialize
struct AShapeshifter_Large_Character_BP_C_OnRep_FullyReplicatedOnInitialize_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartUberPounce
struct AShapeshifter_Large_Character_BP_C_StartUberPounce_Params
{
	struct FUberpounceData*                            Data;                                                     // (Parm)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.K2_OnMovementModeChanged
struct AShapeshifter_Large_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_LastUberpounceJumpTime
struct AShapeshifter_Large_Character_BP_C_OnRep_LastUberpounceJumpTime_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.LatchedJumpAttached
struct AShapeshifter_Large_Character_BP_C_LatchedJumpAttached_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.On Uberpounce AttachedToLocation
struct AShapeshifter_Large_Character_BP_C_On_Uberpounce_AttachedToLocation_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDisplayTamedMessage
struct AShapeshifter_Large_Character_BP_C_BPDisplayTamedMessage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PrintStats
struct AShapeshifter_Large_Character_BP_C_PrintStats_Params
{
	class UPrimalCharacterStatusComponent*             StatusComp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Pounce Latched Anim
struct AShapeshifter_Large_Character_BP_C_Get_Pounce_Latched_Anim_Params
{
	class UAnimMontage*                                Anim;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSectionName;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ResetMeshRelativeLocation
struct AShapeshifter_Large_Character_BP_C_ResetMeshRelativeLocation_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BlueprintAdjustOutputDamage
struct AShapeshifter_Large_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.RidingTick
struct AShapeshifter_Large_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOnAnimPlayedNotify
struct AShapeshifter_Large_Character_BP_C_BPOnAnimPlayedNotify_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicateToOwner;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseAndServerUpdateMesh;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseOnServer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
struct AShapeshifter_Large_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params
{
	bool                                               overrideTamingProgressBarIfActive;                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              progressPercent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      Label;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BlueprintCanAttack
struct AShapeshifter_Large_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CalculateDamageTakenRequiredForBerzerk
struct AShapeshifter_Large_Character_BP_C_CalculateDamageTakenRequiredForBerzerk_Params
{
	float                                              Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPAdjustDamage
struct AShapeshifter_Large_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CalculateTotalTimeTransformed
struct AShapeshifter_Large_Character_BP_C_CalculateTotalTimeTransformed_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetSmallsInstance
struct AShapeshifter_Large_Character_BP_C_SetSmallsInstance_Params
{
	class APrimalDinoCharacter*                        Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SpawnSmalls
struct AShapeshifter_Large_Character_BP_C_SpawnSmalls_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_InterceptMoveRight
struct AShapeshifter_Large_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnPinnedBuffEnded
struct AShapeshifter_Large_Character_BP_C_OnPinnedBuffEnded_Params
{
	class APrimalCharacter**                           BuffTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_InterceptMoveForward
struct AShapeshifter_Large_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceRotationFromSocket
struct AShapeshifter_Large_Character_BP_C_GetUberpounceRotationFromSocket_Params
{
	class APrimalCharacter**                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.QueueSequential Jump
struct AShapeshifter_Large_Character_BP_C_QueueSequential_Jump_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_PreventMovementMode
struct AShapeshifter_Large_Character_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct AShapeshifter_Large_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetHUDElements
struct AShapeshifter_Large_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetSmalls
struct AShapeshifter_Large_Character_BP_C_GetSmalls_Params
{
	class AShapeshifter_Small_Character_BP_C*          Smalls;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartBerzerk
struct AShapeshifter_Large_Character_BP_C_StartBerzerk_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOnDinoCheat
struct AShapeshifter_Large_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.IsBerzerk
struct AShapeshifter_Large_Character_BP_C_IsBerzerk_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_OnJumpReleased
struct AShapeshifter_Large_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPUnstasis
struct AShapeshifter_Large_Character_BP_C_BPUnstasis_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Un TransformFn
struct AShapeshifter_Large_Character_BP_C_Un_TransformFn_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPIsBasedOnActor
struct AShapeshifter_Large_Character_BP_C_BPIsBasedOnActor_Params
{
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDebugString
struct AShapeshifter_Large_Character_BP_C_GetDebugString_Params
{
	class FString                                      Output;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateUberpounceFn
struct AShapeshifter_Large_Character_BP_C_UpdateUberpounceFn_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetInitialAnimationForUberpouncePublic
struct AShapeshifter_Large_Character_BP_C_GetInitialAnimationForUberpouncePublic_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnPounceStarted
struct AShapeshifter_Large_Character_BP_C_OnPounceStarted_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdatePounceFn
struct AShapeshifter_Large_Character_BP_C_UpdatePounceFn_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Compute Pounce Transform
struct AShapeshifter_Large_Character_BP_C_Compute_Pounce_Transform_Params
{
	struct FVector                                     CurrentLoc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CurrentRot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               UpdatedTransform;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPPreventOrderAllowed
struct AShapeshifter_Large_Character_BP_C_BPPreventOrderAllowed_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Pounce Target
struct AShapeshifter_Large_Character_BP_C_Get_Pounce_Target_Params
{
	struct FVector                                     Loc;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPServerHandleNetExecCommand
struct AShapeshifter_Large_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PounceAttachToCharacter
struct AShapeshifter_Large_Character_BP_C_PounceAttachToCharacter_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_PounceStateReplicated
struct AShapeshifter_Large_Character_BP_C_OnRep_PounceStateReplicated_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetPounceState
struct AShapeshifter_Large_Character_BP_C_SetPounceState_Params
{
	TEnumAsByte<EShapeshifter_Large_PounceState>       NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.EndPounce
struct AShapeshifter_Large_Character_BP_C_EndPounce_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartPounce
struct AShapeshifter_Large_Character_BP_C_StartPounce_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetPounceTarget
struct AShapeshifter_Large_Character_BP_C_SetPounceTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPNotifyClearRider
struct AShapeshifter_Large_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPNotifySetRider
struct AShapeshifter_Large_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnLanded
struct AShapeshifter_Large_Character_BP_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.TrySet Collision
struct AShapeshifter_Large_Character_BP_C_TrySet_Collision_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.DrawDebugRotator
struct AShapeshifter_Large_Character_BP_C_DrawDebugRotator_Params
{
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceiveTick
struct AShapeshifter_Large_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceivePossessed
struct AShapeshifter_Large_Character_BP_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceiveBeginPlay
struct AShapeshifter_Large_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UserConstructionScript
struct AShapeshifter_Large_Character_BP_C_UserConstructionScript_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_254
struct AShapeshifter_Large_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_254_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_253
struct AShapeshifter_Large_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_253_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_252
struct AShapeshifter_Large_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_252_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_251
struct AShapeshifter_Large_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_251_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_250
struct AShapeshifter_Large_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_250_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_68
struct AShapeshifter_Large_Character_BP_C_InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_68_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Initialize
struct AShapeshifter_Large_Character_BP_C_Initialize_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_Initialize
struct AShapeshifter_Large_Character_BP_C_AnimNotify_Initialize_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CompleteTransform
struct AShapeshifter_Large_Character_BP_C_AnimNotify_CompleteTransform_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiOnLanded
struct AShapeshifter_Large_Character_BP_C_MultiOnLanded_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetPounceTarget
struct AShapeshifter_Large_Character_BP_C_ServerSetPounceTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerEndPounce
struct AShapeshifter_Large_Character_BP_C_ServerEndPounce_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiEndPounce
struct AShapeshifter_Large_Character_BP_C_MultiEndPounce_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdatePounce
struct AShapeshifter_Large_Character_BP_C_UpdatePounce_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UnTransform
struct AShapeshifter_Large_Character_BP_C_UnTransform_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerStartJump
struct AShapeshifter_Large_Character_BP_C_ServerStartJump_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DoJump
struct AShapeshifter_Large_Character_BP_C_AnimNotify_DoJump_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AteElement
struct AShapeshifter_Large_Character_BP_C_AnimNotify_AteElement_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.QueueSequentialJumpEvent
struct AShapeshifter_Large_Character_BP_C_QueueSequentialJumpEvent_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetLastTimeReleaseJumpWhileFalling
struct AShapeshifter_Large_Character_BP_C_ServerSetLastTimeReleaseJumpWhileFalling_Params
{
	double                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_SequentialJumpTakeOff
struct AShapeshifter_Large_Character_BP_C_AnimNotify_SequentialJumpTakeOff_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerForwardInputDuringSequentialJump
struct AShapeshifter_Large_Character_BP_C_ServerForwardInputDuringSequentialJump_Params
{
	float                                              Axis;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiUpdateVelocity
struct AShapeshifter_Large_Character_BP_C_MultiUpdateVelocity_Params
{
	struct FVector                                     NewVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEGroundPound
struct AShapeshifter_Large_Character_BP_C_AnimNotify_AOEGroundPound_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_SwipeAttack
struct AShapeshifter_Large_Character_BP_C_AnimNotify_SwipeAttack_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ChargingMeleeStart
struct AShapeshifter_Large_Character_BP_C_AnimNotify_ChargingMeleeStart_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ChargingMeleeEnd
struct AShapeshifter_Large_Character_BP_C_AnimNotify_ChargingMeleeEnd_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ChargingMeleeTick
struct AShapeshifter_Large_Character_BP_C_ChargingMeleeTick_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CameraShake
struct AShapeshifter_Large_Character_BP_C_AnimNotify_CameraShake_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerLeftRightInputDuringSequentialJump
struct AShapeshifter_Large_Character_BP_C_ServerLeftRightInputDuringSequentialJump_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CameraShakeLight
struct AShapeshifter_Large_Character_BP_C_AnimNotify_CameraShakeLight_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.DeleteSmallsEvent
struct AShapeshifter_Large_Character_BP_C_DeleteSmallsEvent_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartBerzerkEvent
struct AShapeshifter_Large_Character_BP_C_StartBerzerkEvent_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BerzerkPassout
struct AShapeshifter_Large_Character_BP_C_BerzerkPassout_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetAllowRiding
struct AShapeshifter_Large_Character_BP_C_SetAllowRiding_Params
{
	bool                                               Allowed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ResetAnimSpeed
struct AShapeshifter_Large_Character_BP_C_AnimNotify_ResetAnimSpeed_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ThrowRider
struct AShapeshifter_Large_Character_BP_C_AnimNotify_ThrowRider_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StartRoar
struct AShapeshifter_Large_Character_BP_C_AnimNotify_StartRoar_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StopRoar
struct AShapeshifter_Large_Character_BP_C_AnimNotify_StopRoar_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartUnTransform
struct AShapeshifter_Large_Character_BP_C_StartUnTransform_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_UnTransform
struct AShapeshifter_Large_Character_BP_C_AnimNotify_UnTransform_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ClearRider
struct AShapeshifter_Large_Character_BP_C_AnimNotify_ClearRider_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_InitializeSize
struct AShapeshifter_Large_Character_BP_C_AnimNotify_InitializeSize_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CheckForFallingLatch
struct AShapeshifter_Large_Character_BP_C_AnimNotify_CheckForFallingLatch_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestUberpounceJump
struct AShapeshifter_Large_Character_BP_C_ServerRequestUberpounceJump_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DoUberpounceJump
struct AShapeshifter_Large_Character_BP_C_AnimNotify_DoUberpounceJump_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BackupDestroy
struct AShapeshifter_Large_Character_BP_C_BackupDestroy_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_LatchedJumpAttached
struct AShapeshifter_Large_Character_BP_C_AnimNotify_LatchedJumpAttached_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InitSmalls
struct AShapeshifter_Large_Character_BP_C_InitSmalls_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_QueuedRoar
struct AShapeshifter_Large_Character_BP_C_AnimNotify_QueuedRoar_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetPounceAnticipationIdle
struct AShapeshifter_Large_Character_BP_C_ServerSetPounceAnticipationIdle_Params
{
	bool                                               IsAnticipIdle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetIsHoldingCrouch
struct AShapeshifter_Large_Character_BP_C_ServerSetIsHoldingCrouch_Params
{
	bool                                               HoldingCrouch;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_GrabRock
struct AShapeshifter_Large_Character_BP_C_AnimNotify_GrabRock_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ThrowRock
struct AShapeshifter_Large_Character_BP_C_AnimNotify_ThrowRock_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerUpdateCameraLocationForBoulderThrow
struct AShapeshifter_Large_Character_BP_C_ServerUpdateCameraLocationForBoulderThrow_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestSequentialJump
struct AShapeshifter_Large_Character_BP_C_ServerRequestSequentialJump_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEJumpStart
struct AShapeshifter_Large_Character_BP_C_AnimNotify_AOEJumpStart_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEJumpEnd
struct AShapeshifter_Large_Character_BP_C_AnimNotify_AOEJumpEnd_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_EnableIK
struct AShapeshifter_Large_Character_BP_C_AnimNotify_EnableIK_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DisableIK
struct AShapeshifter_Large_Character_BP_C_AnimNotify_DisableIK_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ShouldCancelLatch
struct AShapeshifter_Large_Character_BP_C_AnimNotify_ShouldCancelLatch_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestJumpOffWallWithAnticipation
struct AShapeshifter_Large_Character_BP_C_ServerRequestJumpOffWallWithAnticipation_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_PushOffWall
struct AShapeshifter_Large_Character_BP_C_AnimNotify_PushOffWall_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StartTransform
struct AShapeshifter_Large_Character_BP_C_AnimNotify_StartTransform_Params
{
};

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ExecuteUbergraph_Shapeshifter_Large_Character_BP
struct AShapeshifter_Large_Character_BP_C_ExecuteUbergraph_Shapeshifter_Large_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
