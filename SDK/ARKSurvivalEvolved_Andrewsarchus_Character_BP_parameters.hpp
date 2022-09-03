#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Andrewsarchus_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetMaterialIndicesToSupportNet
struct AAndrewsarchus_Character_BP_C_GetMaterialIndicesToSupportNet_Params
{
	TArray<int>                                        MaterialIndices;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.HasNettedBuff
struct AAndrewsarchus_Character_BP_C_HasNettedBuff_Params
{
	bool                                               bHasBuff;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_PreventUnmounting
struct AAndrewsarchus_Character_BP_C_BP_PreventUnmounting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.DisableCC
struct AAndrewsarchus_Character_BP_C_DisableCC_Params
{
	class APrimalCharacter*                            ForTaget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetDinoLevelUpAnimation
struct AAndrewsarchus_Character_BP_C_GetDinoLevelUpAnimation_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_ToggleTurret
struct AAndrewsarchus_Character_BP_C_Server_ToggleTurret_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateCanvasVisibility
struct AAndrewsarchus_Character_BP_C_UpdateCanvasVisibility_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SetTurretIsRotatingAudio
struct AAndrewsarchus_Character_BP_C_SetTurretIsRotatingAudio_Params
{
	bool                                               IsRotating;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFromInit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_OnPaintingComponentInitialized
struct AAndrewsarchus_Character_BP_C_BP_OnPaintingComponentInitialized_Params
{
	class UStructurePaintingComponent**                PaintingComp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InitPaintTextures
struct AAndrewsarchus_Character_BP_C_InitPaintTextures_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPTryMultiUse
struct AAndrewsarchus_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetMultiUseEntries
struct AAndrewsarchus_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetPaintingMesh
struct AAndrewsarchus_Character_BP_C_GetPaintingMesh_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.IsServerSafeFiringLocation
struct AAndrewsarchus_Character_BP_C_IsServerSafeFiringLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSafe;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetDesiredTurretRotation
struct AAndrewsarchus_Character_BP_C_GetDesiredTurretRotation_Params
{
	struct FRotator                                    desiredRotation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetMinigunLocationRotation
struct AAndrewsarchus_Character_BP_C_GetMinigunLocationRotation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetBarrelPivotSocketLocationRotation
struct AAndrewsarchus_Character_BP_C_GetBarrelPivotSocketLocationRotation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.DecOxygenIfMax
struct AAndrewsarchus_Character_BP_C_DecOxygenIfMax_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OverrideRandomWanderLocation
struct AAndrewsarchus_Character_BP_C_OverrideRandomWanderLocation_Params
{
	struct FVector                                     originalDestination;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     inVec;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPCharacterSleeped
struct AAndrewsarchus_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bShouldUnderwaterSink
struct AAndrewsarchus_Character_BP_C_OnRep_bShouldUnderwaterSink_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPAddedAttachmentsForItem
struct AAndrewsarchus_Character_BP_C_BPAddedAttachmentsForItem_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SetCameraTurretVisibility
struct AAndrewsarchus_Character_BP_C_SetCameraTurretVisibility_Params
{
	bool                                               IsForFPV;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_OnCameraStyleChangedNotify
struct AAndrewsarchus_Character_BP_C_BP_OnCameraStyleChangedNotify_Params
{
	struct FName                                       NewCameraStyle;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       OldCameraStyle;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct AAndrewsarchus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderUnboardDirection
struct AAndrewsarchus_Character_BP_C_BPGetRiderUnboardDirection_Params
{
	class APrimalCharacter**                           RidingCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPSetupTamed
struct AAndrewsarchus_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SpawnJumpVFX
struct AAndrewsarchus_Character_BP_C_SpawnJumpVFX_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SpawnSlideVFX
struct AAndrewsarchus_Character_BP_C_SpawnSlideVFX_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.IncreaseTamingIneffectivenessOnIncorrectInput
struct AAndrewsarchus_Character_BP_C_IncreaseTamingIneffectivenessOnIncorrectInput_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderSocket
struct AAndrewsarchus_Character_BP_C_BPGetRiderSocket_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AggroOntoActorAfterRiding
struct AAndrewsarchus_Character_BP_C_AggroOntoActorAfterRiding_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPServerHandleNetExecCommand
struct AAndrewsarchus_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InitAndy
struct AAndrewsarchus_Character_BP_C_InitAndy_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.RegenSpeedBoost
struct AAndrewsarchus_Character_BP_C_RegenSpeedBoost_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPAdjustDamage
struct AAndrewsarchus_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleUseButtonPress
struct AAndrewsarchus_Character_BP_C_BPHandleUseButtonPress_Params
{
	class AShooterPlayerController**                   RiderController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideIsSubmergedForWaterTargeting
struct AAndrewsarchus_Character_BP_C_BPOverrideIsSubmergedForWaterTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideCharacterNewFallVelocity
struct AAndrewsarchus_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearMinigunSlideDirIndex
struct AAndrewsarchus_Character_BP_C_ClearMinigunSlideDirIndex_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearShouldAttemptMinigunSlide
struct AAndrewsarchus_Character_BP_C_ClearShouldAttemptMinigunSlide_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPPreventFallDamage
struct AAndrewsarchus_Character_BP_C_BPPreventFallDamage_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm, ReferenceParm)
	float*                                             FallDamageAmount;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_GetCustomModifier_MaxSpeed
struct AAndrewsarchus_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetIsUnderwaterSinking
struct AAndrewsarchus_Character_BP_C_GetIsUnderwaterSinking_Params
{
	bool                                               IsUnderwater;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AllowPlayMontage
struct AAndrewsarchus_Character_BP_C_AllowPlayMontage_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AAndrewsarchus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateLegIK
struct AAndrewsarchus_Character_BP_C_UpdateLegIK_Params
{
	bool                                               TwoLegged;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateMovementVars
struct AAndrewsarchus_Character_BP_C_UpdateMovementVars_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPTimerServer
struct AAndrewsarchus_Character_BP_C_BPTimerServer_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintCanAttack
struct AAndrewsarchus_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOnMovementModeChangedNotify
struct AAndrewsarchus_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ScaledJump
struct AAndrewsarchus_Character_BP_C_ScaledJump_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WantsToMoveForward;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOnStartJump
struct AAndrewsarchus_Character_BP_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandlePoop
struct AAndrewsarchus_Character_BP_C_BPHandlePoop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_InterceptMoveForward
struct AAndrewsarchus_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.EndDriftTurn
struct AAndrewsarchus_Character_BP_C_EndDriftTurn_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPShouldLimitForwardDirection
struct AAndrewsarchus_Character_BP_C_BPShouldLimitForwardDirection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.StartDriftTurn
struct AAndrewsarchus_Character_BP_C_StartDriftTurn_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderUnboardLocation
struct AAndrewsarchus_Character_BP_C_BPGetRiderUnboardLocation_Params
{
	class APrimalCharacter**                           RidingCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckTamingRiding
struct AAndrewsarchus_Character_BP_C_CheckTamingRiding_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearTamingRider
struct AAndrewsarchus_Character_BP_C_ClearTamingRider_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearAllowTamingRiding
struct AAndrewsarchus_Character_BP_C_ClearAllowTamingRiding_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPPreventRiding
struct AAndrewsarchus_Character_BP_C_BPPreventRiding_Params
{
	class AShooterCharacter**                          ByPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDontCheckDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateTaming
struct AAndrewsarchus_Character_BP_C_UpdateTaming_Params
{
	class AShooterCharacter*                           ForShooterChar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPDoAttack
struct AAndrewsarchus_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bIsSliding
struct AAndrewsarchus_Character_BP_C_OnRep_bIsSliding_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckUpdateSliding
struct AAndrewsarchus_Character_BP_C_CheckUpdateSliding_Params
{
	bool                                               ShouldSlide;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateSliding
struct AAndrewsarchus_Character_BP_C_UpdateSliding_Params
{
	bool                                               EnableSliding;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ApplySpeedBoost
struct AAndrewsarchus_Character_BP_C_ApplySpeedBoost_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearShouldAttemptSpeedBoost
struct AAndrewsarchus_Character_BP_C_ClearShouldAttemptSpeedBoost_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckCanSpeedBoost
struct AAndrewsarchus_Character_BP_C_CheckCanSpeedBoost_Params
{
	bool                                               CanSpeedBoost;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPModifyAimOffsetNoTarget
struct AAndrewsarchus_Character_BP_C_BPModifyAimOffsetNoTarget_Params
{
	struct FRotator                                    Aim;                                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintAdjustOutputDamage
struct AAndrewsarchus_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPModifyDesiredRotation
struct AAndrewsarchus_Character_BP_C_BPModifyDesiredRotation_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InDesiredRotation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OutDesiredRotation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPNotifySetRider
struct AAndrewsarchus_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetHUDElements
struct AAndrewsarchus_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetCanShootMinigun
struct AAndrewsarchus_Character_BP_C_GetCanShootMinigun_Params
{
	bool                                               CanShoot;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideCameraViewTarget
struct AAndrewsarchus_Character_BP_C_BPOverrideCameraViewTarget_Params
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

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPNotifyClearRider
struct AAndrewsarchus_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bMinigunActive
struct AAndrewsarchus_Character_BP_C_OnRep_bMinigunActive_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleOnStopTargeting
struct AAndrewsarchus_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetCanEnableMinigun
struct AAndrewsarchus_Character_BP_C_GetCanEnableMinigun_Params
{
	bool                                               CanEnable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintCanRiderAttack
struct AAndrewsarchus_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleControllerInitiatedAttack
struct AAndrewsarchus_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.RidingTick
struct AAndrewsarchus_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UserConstructionScript
struct AAndrewsarchus_Character_BP_C_UserConstructionScript_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_139
struct AAndrewsarchus_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_139_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_138
struct AAndrewsarchus_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_138_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_137
struct AAndrewsarchus_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_137_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_136
struct AAndrewsarchus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_136_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_135
struct AAndrewsarchus_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_135_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_FireMinigun
struct AAndrewsarchus_Character_BP_C_Server_FireMinigun_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Multi_SpawnFireVFX
struct AAndrewsarchus_Character_BP_C_Multi_SpawnFireVFX_Params
{
	struct FVector                                     EndLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShootDir;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_CancelMinigunFire
struct AAndrewsarchus_Character_BP_C_Server_CancelMinigunFire_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetRepAimRot
struct AAndrewsarchus_Character_BP_C_Server_SetRepAimRot_Params
{
	struct FRotator                                    Rot;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetDesiredTurnIndex
struct AAndrewsarchus_Character_BP_C_Server_SetDesiredTurnIndex_Params
{
	int                                                TurnIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_AttemptSpeedBoost
struct AAndrewsarchus_Character_BP_C_Server_AttemptSpeedBoost_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_UpdateSliding
struct AAndrewsarchus_Character_BP_C_Server_UpdateSliding_Params
{
	bool                                               EnableSliding;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_StartSlideAnim
struct AAndrewsarchus_Character_BP_C_MC_StartSlideAnim_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_EndSlideAnim
struct AAndrewsarchus_Character_BP_C_MC_EndSlideAnim_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ReceiveBeginPlay
struct AAndrewsarchus_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPUnstasis
struct AAndrewsarchus_Character_BP_C_BPUnstasis_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_ScaledJump
struct AAndrewsarchus_Character_BP_C_Server_ScaledJump_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WantsToMoveForward;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_AttemptDoMinigunSlide
struct AAndrewsarchus_Character_BP_C_Server_AttemptDoMinigunSlide_Params
{
	int                                                DirIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_RefreshMovementVars
struct AAndrewsarchus_Character_BP_C_MC_RefreshMovementVars_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_Dismount
struct AAndrewsarchus_Character_BP_C_Server_Dismount_Params
{
	float                                              LastRightVal;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.PlayPreventDismountVFX
struct AAndrewsarchus_Character_BP_C_PlayPreventDismountVFX_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_PreventMovement
struct AAndrewsarchus_Character_BP_C_MC_PreventMovement_Params
{
	bool                                               Prevent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetShouldUnderwaterSink
struct AAndrewsarchus_Character_BP_C_Server_SetShouldUnderwaterSink_Params
{
	bool                                               ShouldSink;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_EndSLideVFX
struct AAndrewsarchus_Character_BP_C_MC_EndSLideVFX_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AnimNotify_Jump
struct AAndrewsarchus_Character_BP_C_AnimNotify_Jump_Params
{
};

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ExecuteUbergraph_Andrewsarchus_Character_BP
struct AAndrewsarchus_Character_BP_C_ExecuteUbergraph_Andrewsarchus_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
