#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Exosuit_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetHudData
struct AExosuit_Character_BP_C_GetHudData_Params
{
	bool                                               bUsesChestBeam;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanUseChestBeam;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ChestBeamEnergyPercent;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ChestBeamState;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent*                   InventoryComponent;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FuelItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              EnergyPercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPreparingJump;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.HasOfflineRider
struct AExosuit_Character_BP_C_HasOfflineRider_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnCryo
struct AExosuit_Character_BP_C_BP_OnCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetFinalBeamTarget
struct AExosuit_Character_BP_C_GetFinalBeamTarget_Params
{
	class AActor*                                      FinalTarget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPForceCameraStyle
struct AExosuit_Character_BP_C_BPForceCameraStyle_Params
{
	class APrimalCharacter**                           ForViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraStyle>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTimerNonDedicated
struct AExosuit_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetFPVMaterialParamter
struct AExosuit_Character_BP_C_SetFPVMaterialParamter_Params
{
	bool                                               bIsFPV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnChangedCameraMode
struct AExosuit_Character_BP_C_OnChangedCameraMode_Params
{
	bool                                               bIsFPV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnJumped
struct AExosuit_Character_BP_C_OnJumped_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.DisableExperienceAndLevelUps
struct AExosuit_Character_BP_C_DisableExperienceAndLevelUps_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPSetupTamed
struct AExosuit_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.DestroyExosuit
struct AExosuit_Character_BP_C_DestroyExosuit_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ShouldRequestStructuresPlacedOnFloor
struct AExosuit_Character_BP_C_ShouldRequestStructuresPlacedOnFloor_Params
{
	class APrimalStructure*                            Structure;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ShouldKnockbackChar
struct AExosuit_Character_BP_C_ShouldKnockbackChar_Params
{
	class APrimalCharacter*                            Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldKnockback;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.RemovedAttachedStructure
struct AExosuit_Character_BP_C_RemovedAttachedStructure_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupAttachedStructure
struct AExosuit_Character_BP_C_SetupAttachedStructure_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClientInitAttachedStructure
struct AExosuit_Character_BP_C_ClientInitAttachedStructure_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_AttachedStructureID
struct AExosuit_Character_BP_C_OnRep_AttachedStructureID_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct AExosuit_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintDrawFloatingHUD
struct AExosuit_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustDamage
struct AExosuit_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.IsAllowedToAutoRepair
struct AExosuit_Character_BP_C_IsAllowedToAutoRepair_Params
{
	bool                                               IsAllowed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TimeRemaining;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTimerServer
struct AExosuit_Character_BP_C_BPTimerServer_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTryMultiUse
struct AExosuit_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetMultiUseEntries
struct AExosuit_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ModifyHudMultiUseLoc
struct AExosuit_Character_BP_C_ModifyHudMultiUseLoc_Params
{
	struct FVector2D                                   theVec;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.HasSavedMaterialForComponent
struct AExosuit_Character_BP_C_HasSavedMaterialForComponent_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalStructure*                            Structure;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnJumpPressed
struct AExosuit_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideJumpZModifier
struct AExosuit_Character_BP_C_BPOverrideJumpZModifier_Params
{
	float*                                             InJumpZModifier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAnimNotifyCustomState_End
struct AExosuit_Character_BP_C_BPAnimNotifyCustomState_End_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState**                           AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAnimNotifyCustomState_Begin
struct AExosuit_Character_BP_C_BPAnimNotifyCustomState_Begin_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TotalDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState**                           AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_InterceptMoveRight
struct AExosuit_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintPlayDying
struct AExosuit_Character_BP_C_BlueprintPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateFuel
struct AExosuit_Character_BP_C_UpdateFuel_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceUpdateEnergyPercentRep;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyInventoryItemChange
struct AExosuit_Character_BP_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnSetRunning
struct AExosuit_Character_BP_C_BP_OnSetRunning_Params
{
	bool*                                              bNewIsRunning;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_GetCustomModifier_MaxSpeed
struct AExosuit_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideCharacterParticle
struct AExosuit_Character_BP_C_BPOverrideCharacterParticle_Params
{
	class UParticleSystem**                            ParticleIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetRiderUnboardLocation
struct AExosuit_Character_BP_C_BPGetRiderUnboardLocation_Params
{
	class APrimalCharacter**                           RidingCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetRiderUnboardDirection
struct AExosuit_Character_BP_C_BPGetRiderUnboardDirection_Params
{
	class APrimalCharacter**                           RidingCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ReceiveBeginPlay
struct AExosuit_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnMovementModeChangedNotify
struct AExosuit_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyToggleHUD
struct AExosuit_Character_BP_C_BPNotifyToggleHUD_Params
{
	bool*                                              bHudHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupAimedStructure
struct AExosuit_Character_BP_C_SetupAimedStructure_Params
{
	class APrimalStructure*                            InStructure;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.AttachHandBeams
struct AExosuit_Character_BP_C_AttachHandBeams_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustAttackIndex
struct AExosuit_Character_BP_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.FillEnergy
struct AExosuit_Character_BP_C_FillEnergy_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPPostLoadedFromSaveGame
struct AExosuit_Character_BP_C_BPPostLoadedFromSaveGame_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetOverrideCameraInterpSpeed
struct AExosuit_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
{
	float*                                             DefaultTPVCameraSpeedInterpolationMultiplier;             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DefaultTPVOffsetInterpSpeed;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TPVCameraSpeedInterpolationMultiplier;                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TPVOffsetInterpSpeed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPPreventRiding
struct AExosuit_Character_BP_C_BPPreventRiding_Params
{
	class AShooterCharacter**                          ByPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDontCheckDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetChestBeamEnergy
struct AExosuit_Character_BP_C_GetChestBeamEnergy_Params
{
	float                                              RemainingEnergy;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetCrosshairColor
struct AExosuit_Character_BP_C_BPGetCrosshairColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Cycle Mode
struct AExosuit_Character_BP_C_Cycle_Mode_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SyncHUD
struct AExosuit_Character_BP_C_SyncHUD_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.DestroyHudWidget
struct AExosuit_Character_BP_C_DestroyHudWidget_Params
{
	bool                                               DestroyNow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupHUDWidget
struct AExosuit_Character_BP_C_SetupHUDWidget_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.IsModeAllowed
struct AExosuit_Character_BP_C_IsModeAllowed_Params
{
	int                                                NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAllowed;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetCurrentMode
struct AExosuit_Character_BP_C_SetCurrentMode_Params
{
	int                                                NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ReceiveDestroyed
struct AExosuit_Character_BP_C_ReceiveDestroyed_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.InterceptInputEvent
struct AExosuit_Character_BP_C_InterceptInputEvent_Params
{
	class FString*                                     InputName;                                                // (Parm, ZeroConstructor)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnJumpReleased
struct AExosuit_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetGravityZScale
struct AExosuit_Character_BP_C_BPGetGravityZScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AExosuit_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetJumpVelocity
struct AExosuit_Character_BP_C_GetJumpVelocity_Params
{
	struct FVector                                     StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForPreview;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundValidTrajectory;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Gravity;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AdjustedEndLocation;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnLanded
struct AExosuit_Character_BP_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustImpulseFromDamage
struct AExosuit_Character_BP_C_BPAdjustImpulseFromDamage_Params
{
	struct FVector*                                    DesiredImpulse;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideHurtAnim
struct AExosuit_Character_BP_C_BPOverrideHurtAnim_Params
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

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnSetDeath
struct AExosuit_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_OfflineRider
struct AExosuit_Character_BP_C_OnRep_OfflineRider_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetJumpPreviewVisibility
struct AExosuit_Character_BP_C_SetJumpPreviewVisibility_Params
{
	bool                                               NewVisibility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateJumpPreview
struct AExosuit_Character_BP_C_UpdateJumpPreview_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPLimitPlayerRotation
struct AExosuit_Character_BP_C_BPLimitPlayerRotation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   InViewRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetChestBeamState
struct AExosuit_Character_BP_C_SetChestBeamState_Params
{
	int                                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReplicateToOwner;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_ChestBeamState
struct AExosuit_Character_BP_C_OnRep_ChestBeamState_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetCrosshairAlpha
struct AExosuit_Character_BP_C_BPGetCrosshairAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanUseChestBeam
struct AExosuit_Character_BP_C_CanUseChestBeam_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	bool                                               ShouldDeplete;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnStopJump
struct AExosuit_Character_BP_C_BPOnStopJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnStartJump
struct AExosuit_Character_BP_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.LocalClientUpdateChestBeamLocation
struct AExosuit_Character_BP_C_LocalClientUpdateChestBeamLocation_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.EnableChestBeamFX
struct AExosuit_Character_BP_C_EnableChestBeamFX_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPHandleOnStopTargeting
struct AExosuit_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanJumpInternal
struct AExosuit_Character_BP_C_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetAddForwardVelocityOnJump
struct AExosuit_Character_BP_C_BPGetAddForwardVelocityOnJump_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetTargetingDesirability
struct AExosuit_Character_BP_C_BPGetTargetingDesirability_Params
{
	class AActor**                                     Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetHighlightColor
struct AExosuit_Character_BP_C_SetHighlightColor_Params
{
	class APrimalStructure*                            ForStructure;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifySetRider
struct AExosuit_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetStructureHighlighted
struct AExosuit_Character_BP_C_SetStructureHighlighted_Params
{
	class APrimalStructure*                            Structure;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewHighlighted;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.StoreStructure
struct AExosuit_Character_BP_C_StoreStructure_Params
{
	class APrimalStructure*                            StructureToGrab;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowNotifications;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetStructurePlacer
struct AExosuit_Character_BP_C_GetStructurePlacer_Params
{
	class APrimalStructurePlacer*                      OutStructurePlacer;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyClearRider
struct AExosuit_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPDrawToRiderHUD
struct AExosuit_Character_BP_C_BPDrawToRiderHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanAttachStructure
struct AExosuit_Character_BP_C_CanAttachStructure_Params
{
	class APrimalStructure*                            PrimalStructure;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanGrab;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateAimedStructure
struct AExosuit_Character_BP_C_UpdateAimedStructure_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Set Last Aimed Structure
struct AExosuit_Character_BP_C_Set_Last_Aimed_Structure_Params
{
	class APrimalStructure*                            LastAimedStructure;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ResetLastAimedStructure
struct AExosuit_Character_BP_C_ResetLastAimedStructure_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SpawnPreviewStructure
struct AExosuit_Character_BP_C_SpawnPreviewStructure_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.RidingTick
struct AExosuit_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetAimedStructure
struct AExosuit_Character_BP_C_GetAimedStructure_Params
{
	class APrimalStructure*                            OutStructure;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPHandleControllerInitiatedAttack
struct AExosuit_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.UserConstructionScript
struct AExosuit_Character_BP_C_UserConstructionScript_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestPlacement
struct AExosuit_Character_BP_C_Server_RequestPlacement_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ViewRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestAttachStructure
struct AExosuit_Character_BP_C_Server_RequestAttachStructure_Params
{
	class APrimalStructure*                            StructureToGrab;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestStoreStructure
struct AExosuit_Character_BP_C_Server_RequestStoreStructure_Params
{
	class APrimalStructure*                            StructureToGrab;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.BindReceivedStructuresDelegate
struct AExosuit_Character_BP_C_BindReceivedStructuresDelegate_Params
{
	class AShooterPlayerController*                    ShooterPC;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnClientReceiveStructuresPlacedOnFloor_Event
struct AExosuit_Character_BP_C_OnClientReceiveStructuresPlacedOnFloor_Event_Params
{
	class APrimalStructure*                            Structure;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APrimalStructure*>                    StructuresPlacedOnFloor;                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestJump
struct AExosuit_Character_BP_C_Server_RequestJump_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HeldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasBlockingHIt;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetBeamEndLocation
struct AExosuit_Character_BP_C_Server_SetBeamEndLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasHit;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_SetBeamEndLocation
struct AExosuit_Character_BP_C_Multicast_SetBeamEndLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasHit;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestChestBeamState
struct AExosuit_Character_BP_C_Server_RequestChestBeamState_Params
{
	int                                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.AttachOfflineRider
struct AExosuit_Character_BP_C_AttachOfflineRider_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoKnockback
struct AExosuit_Character_BP_C_DoKnockback_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_KnockbackFX
struct AExosuit_Character_BP_C_Multicast_KnockbackFX_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_SpawnLandedFX
struct AExosuit_Character_BP_C_Multicast_SpawnLandedFX_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.SpawnLandedFX
struct AExosuit_Character_BP_C_SpawnLandedFX_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetPreparingJump
struct AExosuit_Character_BP_C_Server_SetPreparingJump_Params
{
	bool                                               NewIsPreparingJump;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoAttachStructure
struct AExosuit_Character_BP_C_DoAttachStructure_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoPlacement
struct AExosuit_Character_BP_C_DoPlacement_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_DoPlacment
struct AExosuit_Character_BP_C_Multicast_DoPlacment_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetCurrentMode
struct AExosuit_Character_BP_C_Server_SetCurrentMode_Params
{
	int                                                NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ServerRestart
struct AExosuit_Character_BP_C_ServerRestart_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_HideAttachedStructure
struct AExosuit_Character_BP_C_Multicast_HideAttachedStructure_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_ShowAttachedStructure
struct AExosuit_Character_BP_C_Multicast_ShowAttachedStructure_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_ResetPendingAttachedStructure
struct AExosuit_Character_BP_C_Multicast_ResetPendingAttachedStructure_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnChangedPhysicsVolume
struct AExosuit_Character_BP_C_OnChangedPhysicsVolume_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetStartedRunning
struct AExosuit_Character_BP_C_Server_SetStartedRunning_Params
{
	double                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_KnockbackChars
struct AExosuit_Character_BP_C_Server_KnockbackChars_Params
{
	TArray<class APrimalCharacter*>                    Chars;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Impulses;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearMoveIgnoredActors
struct AExosuit_Character_BP_C_ClearMoveIgnoredActors_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearHUDReference
struct AExosuit_Character_BP_C_ClearHUDReference_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_StoredStructureFX
struct AExosuit_Character_BP_C_Multicast_StoredStructureFX_Params
{
	bool                                               bForceOnOwningClient;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearRiderIgnoreExosuitCollision
struct AExosuit_Character_BP_C_ClearRiderIgnoreExosuitCollision_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.DelayedRequestStoreStructure
struct AExosuit_Character_BP_C_DelayedRequestStoreStructure_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestStoreAttachedStructure
struct AExosuit_Character_BP_C_Server_RequestStoreAttachedStructure_Params
{
};

// Function Exosuit_Character_BP.Exosuit_Character_BP_C.ExecuteUbergraph_Exosuit_Character_BP
struct AExosuit_Character_BP_C_ExecuteUbergraph_Exosuit_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
