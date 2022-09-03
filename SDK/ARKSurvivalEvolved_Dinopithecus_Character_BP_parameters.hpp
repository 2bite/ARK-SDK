#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dinopithecus_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPCanBeBaseForCharacter
struct ADinopithecus_Character_BP_C_BPCanBeBaseForCharacter_Params
{
	class APawn**                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsUsingZipline
struct ADinopithecus_Character_BP_C_IsUsingZipline_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetArmorDurabilityDecreaseMultiplier
struct ADinopithecus_Character_BP_C_BPGetArmorDurabilityDecreaseMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.EndUberpounce
struct ADinopithecus_Character_BP_C_EndUberpounce_Params
{
	struct FVector*                                    Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage**                               MontageToPlayOnNonZeroVelocity;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateAnimSpeed
struct ADinopithecus_Character_BP_C_UpdateAnimSpeed_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UberpounceDesyncDetected
struct ADinopithecus_Character_BP_C_UberpounceDesyncDetected_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetRiderUnboardLocation
struct ADinopithecus_Character_BP_C_BPGetRiderUnboardLocation_Params
{
	class APrimalCharacter**                           RidingCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Update Server Corrections
struct ADinopithecus_Character_BP_C_Update_Server_Corrections_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanUpdateRotation
struct ADinopithecus_Character_BP_C_CanUpdateRotation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceTraceStartingLocation
struct ADinopithecus_Character_BP_C_GetUberpounceTraceStartingLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidUberpounceTargetingData
struct ADinopithecus_Character_BP_C_IsValidUberpounceTargetingData_Params
{
	struct FUberpounceData*                            TargetingData;                                            // (Parm)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTriggerStasisEvent
struct ADinopithecus_Character_BP_C_BPTriggerStasisEvent_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiRequestJumpFn
struct ADinopithecus_Character_BP_C_MultiRequestJumpFn_Params
{
	struct FVector*                                    Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OverrideCameraTargetOriginLocation
struct ADinopithecus_Character_BP_C_BP_OverrideCameraTargetOriginLocation_Params
{
	struct FVector                                     OutOverrideOrigin;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      WithCameraStyle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanContinueUberpounce
struct ADinopithecus_Character_BP_C_CanContinueUberpounce_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OverrideCarriedCharacterTransform
struct ADinopithecus_Character_BP_C_BP_OverrideCarriedCharacterTransform_Params
{
	class APrimalCharacter**                           ForCarriedChar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AllowWakingTame
struct ADinopithecus_Character_BP_C_AllowWakingTame_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDelayBeforeLatchAfterLatchedJump
struct ADinopithecus_Character_BP_C_GetDelayBeforeLatchAfterLatchedJump_Params
{
	float                                              LatchedJumpTimeToAutoLatch;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.HasAnyStamina
struct ADinopithecus_Character_BP_C_HasAnyStamina_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideCameraViewTarget
struct ADinopithecus_Character_BP_C_BPOverrideCameraViewTarget_Params
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

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanAdultCarryBaby
struct ADinopithecus_Character_BP_C_CanAdultCarryBaby_Params
{
	class ADinopithecus_Character_BP_C*                Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateTaming
struct ADinopithecus_Character_BP_C_UpdateTaming_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PackMemberDied
struct ADinopithecus_Character_BP_C_PackMemberDied_Params
{
	class ADino_Character_BP_Pack_C**                  DeadDino;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateTickThrottles
struct ADinopithecus_Character_BP_C_UpdateTickThrottles_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateBabyRiding
struct ADinopithecus_Character_BP_C_UpdateBabyRiding_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyStopRiding
struct ADinopithecus_Character_BP_C_BabyStopRiding_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyStartRiding
struct ADinopithecus_Character_BP_C_BabyStartRiding_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.FindAdultToRide
struct ADinopithecus_Character_BP_C_FindAdultToRide_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanBabyRide
struct ADinopithecus_Character_BP_C_CanBabyRide_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetDragSocketDinoName
struct ADinopithecus_Character_BP_C_BPGetDragSocketDinoName_Params
{
	class APrimalDinoCharacter**                       aGrabbedDino;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDidClearCarriedCharacter
struct ADinopithecus_Character_BP_C_BPDidClearCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyTryMount
struct ADinopithecus_Character_BP_C_BabyTryMount_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OverrideRandomWanderLocation
struct ADinopithecus_Character_BP_C_OverrideRandomWanderLocation_Params
{
	struct FVector                                     originalDestination;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     inVec;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Update Camera 
struct ADinopithecus_Character_BP_C_Update_Camera__Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateClientInterpSpeeds
struct ADinopithecus_Character_BP_C_UpdateClientInterpSpeeds_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAdjustAttackIndex
struct ADinopithecus_Character_BP_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandleRightShoulderButton
struct ADinopithecus_Character_BP_C_BPHandleRightShoulderButton_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PlaySplashVFXAWaterSurfaceFromLocation
struct ADinopithecus_Character_BP_C_PlaySplashVFXAWaterSurfaceFromLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetPingMult
struct ADinopithecus_Character_BP_C_GetPingMult_Params
{
	float                                              Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateAOEGroundPound
struct ADinopithecus_Character_BP_C_UpdateAOEGroundPound_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AOEGroundPound
struct ADinopithecus_Character_BP_C_AOEGroundPound_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PickupPoop
struct ADinopithecus_Character_BP_C_PickupPoop_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPForceCameraStyle
struct ADinopithecus_Character_BP_C_BPForceCameraStyle_Params
{
	class APrimalCharacter**                           ForViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraStyle>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideMoveToOrder
struct ADinopithecus_Character_BP_C_BPOverrideMoveToOrder_Params
{
	struct FVector*                                    MoveToLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          OrderingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsCheckingForFallingLatch
struct ADinopithecus_Character_BP_C_IsCheckingForFallingLatch_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetTargetFOV
struct ADinopithecus_Character_BP_C_GetTargetFOV_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateHUDWidget
struct ADinopithecus_Character_BP_C_UpdateHUDWidget_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveDestroyed
struct ADinopithecus_Character_BP_C_ReceiveDestroyed_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifyToggleHUD
struct ADinopithecus_Character_BP_C_BPNotifyToggleHUD_Params
{
	bool*                                              bHudHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetupHUDWidget
struct ADinopithecus_Character_BP_C_SetupHUDWidget_Params
{
	class AActor*                                      Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DestroyHudWidget
struct ADinopithecus_Character_BP_C_DestroyHudWidget_Params
{
	bool                                               DestroyNow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandlePoop
struct ADinopithecus_Character_BP_C_BPHandlePoop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPShouldCancelDoAttack
struct ADinopithecus_Character_BP_C_BPShouldCancelDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPLimitPlayerRotation
struct ADinopithecus_Character_BP_C_BPLimitPlayerRotation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   InViewRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateVFX
struct ADinopithecus_Character_BP_C_UpdateVFX_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ApplyJump
struct ADinopithecus_Character_BP_C_ApplyJump_Params
{
	struct FVector*                                    Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage**                               Anim;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetGravityZScale
struct ADinopithecus_Character_BP_C_BPGetGravityZScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.TickBattlecryAttack
struct ADinopithecus_Character_BP_C_TickBattlecryAttack_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DoBattlecryAttack
struct ADinopithecus_Character_BP_C_DoBattlecryAttack_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetCrosshairColor
struct ADinopithecus_Character_BP_C_BPGetCrosshairColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDoAttack
struct ADinopithecus_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DoBattlecry
struct ADinopithecus_Character_BP_C_DoBattlecry_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.TickSetRotation
struct ADinopithecus_Character_BP_C_TickSetRotation_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Has Latchable SurfaceWhileFalling
struct ADinopithecus_Character_BP_C_Has_Latchable_SurfaceWhileFalling_Params
{
	bool                                               RetSucccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FUberpounceData                             RetResultUberpounceData;                                  // (Parm, OutParm)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CheckForFallingLatchFn
struct ADinopithecus_Character_BP_C_CheckForFallingLatchFn_Params
{
	bool*                                              AutoJumpAfterLatch;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsAllowedToThrowPoop
struct ADinopithecus_Character_BP_C_IsAllowedToThrowPoop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnAmmoWheelSlotSelected
struct ADinopithecus_Character_BP_C_OnAmmoWheelSlotSelected_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetAmmoWheelVisibility
struct ADinopithecus_Character_BP_C_SetAmmoWheelVisibility_Params
{
	bool                                               bNewVisible;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnDinoFiredProjectile
struct ADinopithecus_Character_BP_C_BPOnDinoFiredProjectile_Params
{
	class AShooterProjectile**                         Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPSetInitialAimOffsetTargets
struct ADinopithecus_Character_BP_C_BPSetInitialAimOffsetTargets_Params
{
	struct FVector*                                    TargetRootLoc;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   TargetAimRot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutTargetRootLoc;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutTargetAimRot;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetFallingLatchingAngles
struct ADinopithecus_Character_BP_C_GetFallingLatchingAngles_Params
{
	TArray<float>                                      FallingLatchingAngles;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidUberpounceDataForLatching
struct ADinopithecus_Character_BP_C_IsValidUberpounceDataForLatching_Params
{
	struct FUberpounceData*                            Data;                                                     // (Parm)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidDirectionForLatchingSurfaceTrace
struct ADinopithecus_Character_BP_C_IsValidDirectionForLatchingSurfaceTrace_Params
{
	struct FVector*                                    Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Left Pressed
struct ADinopithecus_Character_BP_C_On_Move_Left_Pressed_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Left Released
struct ADinopithecus_Character_BP_C_On_Move_Left_Released_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Right Pressed
struct ADinopithecus_Character_BP_C_On_Move_Right_Pressed_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Right Released
struct ADinopithecus_Character_BP_C_On_Move_Right_Released_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Backward Pressed
struct ADinopithecus_Character_BP_C_On_Move_Backward_Pressed_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Forward Pressed
struct ADinopithecus_Character_BP_C_On_Move_Forward_Pressed_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Backward Released
struct ADinopithecus_Character_BP_C_On_Move_Backward_Released_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnMoveForwardReleased
struct ADinopithecus_Character_BP_C_OnMoveForwardReleased_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.InterceptInputEvent
struct ADinopithecus_Character_BP_C_InterceptInputEvent_Params
{
	class FString*                                     InputName;                                                // (Parm, ZeroConstructor)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Find Next Valid Uberpounce Location
struct ADinopithecus_Character_BP_C_Find_Next_Valid_Uberpounce_Location_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ADinopithecus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnStartJump
struct ADinopithecus_Character_BP_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTimerServer
struct ADinopithecus_Character_BP_C_BPTimerServer_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTimerNonDedicated
struct ADinopithecus_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.HasRequiredAmmoItems
struct ADinopithecus_Character_BP_C_HasRequiredAmmoItems_Params
{
	int                                                TypeIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundAllItems;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutQuantity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintCanRiderAttack
struct ADinopithecus_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetBestPoopItem
struct ADinopithecus_Character_BP_C_GetBestPoopItem_Params
{
	class UPrimalItem*                                 BestPoop;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetAmmoItemsToConsume
struct ADinopithecus_Character_BP_C_GetAmmoItemsToConsume_Params
{
	int                                                TypeIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         Items;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               bFoundAllItems;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetMeshForProjectileType
struct ADinopithecus_Character_BP_C_GetMeshForProjectileType_Params
{
	int                                                SelectedIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.WantsToRun
struct ADinopithecus_Character_BP_C_WantsToRun_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnNonInstanceJumpOffWallInput
struct ADinopithecus_Character_BP_C_OnNonInstanceJumpOffWallInput_Params
{
	float*                                             HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetLatchJumpSpeedThresholdForRotate
struct ADinopithecus_Character_BP_C_GetLatchJumpSpeedThresholdForRotate_Params
{
	float                                              Res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandleControllerInitiatedAttack
struct ADinopithecus_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AdjustIKHalfLegLength
struct ADinopithecus_Character_BP_C_AdjustIKHalfLegLength_Params
{
	bool                                               Default;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPCanCryo
struct ADinopithecus_Character_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanSequentialJump
struct ADinopithecus_Character_BP_C_CanSequentialJump_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Throttled TickFn
struct ADinopithecus_Character_BP_C_Throttled_TickFn_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAcknowledgeServerCorrection
struct ADinopithecus_Character_BP_C_BPAcknowledgeServerCorrection_Params
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

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReplicateMovementToSimulatedClients
struct ADinopithecus_Character_BP_C_ReplicateMovementToSimulatedClients_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateBerzerk
struct ADinopithecus_Character_BP_C_UpdateBerzerk_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetCameraInterpSpeed
struct ADinopithecus_Character_BP_C_GetCameraInterpSpeed_Params
{
	float                                              InterpSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnJumpFromGround
struct ADinopithecus_Character_BP_C_OnJumpFromGround_Params
{
	float*                                             HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetProjectileTypeForRockThrow
struct ADinopithecus_Character_BP_C_GetProjectileTypeForRockThrow_Params
{
	class UClass*                                      TypeName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get RockThrowAttack Anim Index from Idle Anim
struct ADinopithecus_Character_BP_C_Get_RockThrowAttack_Anim_Index_from_Idle_Anim_Params
{
	int                                                Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GrabRock
struct ADinopithecus_Character_BP_C_GrabRock_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanJumpInternal
struct ADinopithecus_Character_BP_C_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ThrowRock
struct ADinopithecus_Character_BP_C_ThrowRock_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Is Super Uberpounce
struct ADinopithecus_Character_BP_C_Is_Super_Uberpounce_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceInterpSpeed
struct ADinopithecus_Character_BP_C_GetUberpounceInterpSpeed_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetInitialAnimationForUberpounce
struct ADinopithecus_Character_BP_C_GetInitialAnimationForUberpounce_Params
{
	bool*                                              QuickUberpounce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                OutAnim;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RetStartSectionName;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateIdleAnim
struct ADinopithecus_Character_BP_C_UpdateIdleAnim_Params
{
	TEnumAsByte<EShapeshifterIdleAnimEnum>             newIdle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceRangeBase
struct ADinopithecus_Character_BP_C_GetUberpounceRangeBase_Params
{
	float                                              Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceMaxRange
struct ADinopithecus_Character_BP_C_GetUberpounceMaxRange_Params
{
	float                                              Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetCrosshairAlpha
struct ADinopithecus_Character_BP_C_BPGetCrosshairAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDamageResistancePercentFromAddiction
struct ADinopithecus_Character_BP_C_GetDamageResistancePercentFromAddiction_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get AnimSpeedBonus from Addiction
struct ADinopithecus_Character_BP_C_Get_AnimSpeedBonus_from_Addiction_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDamageMultiFromAddiction
struct ADinopithecus_Character_BP_C_GetDamageMultiFromAddiction_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnUberpounceStateChanged
struct ADinopithecus_Character_BP_C_OnUberpounceStateChanged_Params
{
	TEnumAsByte<EUberpounceState>*                     NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUberpounceState>*                     PrevState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar
struct ADinopithecus_Character_BP_C_BPDinoTooltipCustomTorpidityProgressBar_Params
{
	bool                                               overrideTorpidityProgressBarIfActive;                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              progressPercent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      Label;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetMultiUseEntries
struct ADinopithecus_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AddBerzerkDamage
struct ADinopithecus_Character_BP_C_AddBerzerkDamage_Params
{
	float                                              Dmg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_LatchIdleAnimRep
struct ADinopithecus_Character_BP_C_OnRep_LatchIdleAnimRep_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideTamingDescriptionLabel
struct ADinopithecus_Character_BP_C_BPOverrideTamingDescriptionLabel_Params
{
	struct FSlateColor                                 TextColor;                                                // (Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AllowPlayMontage
struct ADinopithecus_Character_BP_C_AllowPlayMontage_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PrintHealth
struct ADinopithecus_Character_BP_C_PrintHealth_Params
{
	class UPrimalCharacterStatusComponent*             Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartUberPounce
struct ADinopithecus_Character_BP_C_StartUberPounce_Params
{
	struct FUberpounceData*                            Data;                                                     // (Parm)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.K2_OnMovementModeChanged
struct ADinopithecus_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_LastUberpounceJumpTime
struct ADinopithecus_Character_BP_C_OnRep_LastUberpounceJumpTime_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.LatchedJumpAttached
struct ADinopithecus_Character_BP_C_LatchedJumpAttached_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Uberpounce AttachedToLocation
struct ADinopithecus_Character_BP_C_On_Uberpounce_AttachedToLocation_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDisplayTamedMessage
struct ADinopithecus_Character_BP_C_BPDisplayTamedMessage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PrintStats
struct ADinopithecus_Character_BP_C_PrintStats_Params
{
	class UPrimalCharacterStatusComponent*             StatusComp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get Pounce Latched Anim
struct ADinopithecus_Character_BP_C_Get_Pounce_Latched_Anim_Params
{
	class UAnimMontage*                                Anim;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSectionName;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ResetMeshRelativeLocation
struct ADinopithecus_Character_BP_C_ResetMeshRelativeLocation_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.RidingTick
struct ADinopithecus_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnAnimPlayedNotify
struct ADinopithecus_Character_BP_C_BPOnAnimPlayedNotify_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicateToOwner;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseAndServerUpdateMesh;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseOnServer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
struct ADinopithecus_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params
{
	bool                                               overrideTamingProgressBarIfActive;                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              progressPercent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      Label;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintCanAttack
struct ADinopithecus_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CalculateDamageTakenRequiredForBerzerk
struct ADinopithecus_Character_BP_C_CalculateDamageTakenRequiredForBerzerk_Params
{
	float                                              Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAdjustDamage
struct ADinopithecus_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CalculateTotalTimeTransformed
struct ADinopithecus_Character_BP_C_CalculateTotalTimeTransformed_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetSmallsInstance
struct ADinopithecus_Character_BP_C_SetSmallsInstance_Params
{
	class APrimalDinoCharacter*                        Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SpawnSmalls
struct ADinopithecus_Character_BP_C_SpawnSmalls_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_InterceptMoveRight
struct ADinopithecus_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnPinnedBuffEnded
struct ADinopithecus_Character_BP_C_OnPinnedBuffEnded_Params
{
	class APrimalCharacter**                           BuffTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_InterceptMoveForward
struct ADinopithecus_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceRotationFromSocket
struct ADinopithecus_Character_BP_C_GetUberpounceRotationFromSocket_Params
{
	class APrimalCharacter**                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.QueueSequential Jump
struct ADinopithecus_Character_BP_C_QueueSequential_Jump_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_PreventMovementMode
struct ADinopithecus_Character_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct ADinopithecus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetHUDElements
struct ADinopithecus_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartBerzerk
struct ADinopithecus_Character_BP_C_StartBerzerk_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsBerzerk
struct ADinopithecus_Character_BP_C_IsBerzerk_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OnJumpReleased
struct ADinopithecus_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPUnstasis
struct ADinopithecus_Character_BP_C_BPUnstasis_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDebugString
struct ADinopithecus_Character_BP_C_GetDebugString_Params
{
	class FString                                      Output;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateUberpounceFn
struct ADinopithecus_Character_BP_C_UpdateUberpounceFn_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetInitialAnimationForUberpouncePublic
struct ADinopithecus_Character_BP_C_GetInitialAnimationForUberpouncePublic_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnPounceStarted
struct ADinopithecus_Character_BP_C_OnPounceStarted_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdatePounceFn
struct ADinopithecus_Character_BP_C_UpdatePounceFn_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Compute Pounce Transform
struct ADinopithecus_Character_BP_C_Compute_Pounce_Transform_Params
{
	struct FVector                                     CurrentLoc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CurrentRot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               UpdatedTransform;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPPreventOrderAllowed
struct ADinopithecus_Character_BP_C_BPPreventOrderAllowed_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get Pounce Target
struct ADinopithecus_Character_BP_C_Get_Pounce_Target_Params
{
	struct FVector                                     Loc;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPServerHandleNetExecCommand
struct ADinopithecus_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PounceAttachToCharacter
struct ADinopithecus_Character_BP_C_PounceAttachToCharacter_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_PounceStateReplicated
struct ADinopithecus_Character_BP_C_OnRep_PounceStateReplicated_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetPounceState
struct ADinopithecus_Character_BP_C_SetPounceState_Params
{
	TEnumAsByte<EShapeshifter_Large_PounceState>       NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.EndPounce
struct ADinopithecus_Character_BP_C_EndPounce_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartPounce
struct ADinopithecus_Character_BP_C_StartPounce_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetPounceTarget
struct ADinopithecus_Character_BP_C_SetPounceTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifyClearRider
struct ADinopithecus_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifySetRider
struct ADinopithecus_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnLanded
struct ADinopithecus_Character_BP_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DrawDebugRotator
struct ADinopithecus_Character_BP_C_DrawDebugRotator_Params
{
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveTick
struct ADinopithecus_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceivePossessed
struct ADinopithecus_Character_BP_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveBeginPlay
struct ADinopithecus_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UserConstructionScript
struct ADinopithecus_Character_BP_C_UserConstructionScript_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_256
struct ADinopithecus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_256_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiOnLanded
struct ADinopithecus_Character_BP_C_MultiOnLanded_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetPounceTarget
struct ADinopithecus_Character_BP_C_ServerSetPounceTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerEndPounce
struct ADinopithecus_Character_BP_C_ServerEndPounce_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiEndPounce
struct ADinopithecus_Character_BP_C_MultiEndPounce_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdatePounce
struct ADinopithecus_Character_BP_C_UpdatePounce_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerStartJump
struct ADinopithecus_Character_BP_C_ServerStartJump_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DoJump
struct ADinopithecus_Character_BP_C_AnimNotify_DoJump_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.QueueSequentialJumpEvent
struct ADinopithecus_Character_BP_C_QueueSequentialJumpEvent_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLastTimeReleaseJumpWhileFalling
struct ADinopithecus_Character_BP_C_ServerSetLastTimeReleaseJumpWhileFalling_Params
{
	double                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_SequentialJumpTakeOff
struct ADinopithecus_Character_BP_C_AnimNotify_SequentialJumpTakeOff_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerForwardInputDuringSequentialJump
struct ADinopithecus_Character_BP_C_ServerForwardInputDuringSequentialJump_Params
{
	float                                              Axis;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiUpdateVelocity
struct ADinopithecus_Character_BP_C_MultiUpdateVelocity_Params
{
	struct FVector                                     NewVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEGroundPound
struct ADinopithecus_Character_BP_C_AnimNotify_AOEGroundPound_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_SwipeAttack
struct ADinopithecus_Character_BP_C_AnimNotify_SwipeAttack_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ChargingMeleeStart
struct ADinopithecus_Character_BP_C_AnimNotify_ChargingMeleeStart_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ChargingMeleeEnd
struct ADinopithecus_Character_BP_C_AnimNotify_ChargingMeleeEnd_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ChargingMeleeTick
struct ADinopithecus_Character_BP_C_ChargingMeleeTick_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CameraShake
struct ADinopithecus_Character_BP_C_AnimNotify_CameraShake_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerLeftRightInputDuringSequentialJump
struct ADinopithecus_Character_BP_C_ServerLeftRightInputDuringSequentialJump_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CameraShakeLight
struct ADinopithecus_Character_BP_C_AnimNotify_CameraShakeLight_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DeleteSmallsEvent
struct ADinopithecus_Character_BP_C_DeleteSmallsEvent_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartBerzerkEvent
struct ADinopithecus_Character_BP_C_StartBerzerkEvent_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ResetAnimSpeed
struct ADinopithecus_Character_BP_C_AnimNotify_ResetAnimSpeed_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ThrowRider
struct ADinopithecus_Character_BP_C_AnimNotify_ThrowRider_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_StartRoar
struct ADinopithecus_Character_BP_C_AnimNotify_StartRoar_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_StopRoar
struct ADinopithecus_Character_BP_C_AnimNotify_StopRoar_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ClearRider
struct ADinopithecus_Character_BP_C_AnimNotify_ClearRider_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CheckForFallingLatch
struct ADinopithecus_Character_BP_C_AnimNotify_CheckForFallingLatch_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestUberpounceJump
struct ADinopithecus_Character_BP_C_ServerRequestUberpounceJump_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DoUberpounceJump
struct ADinopithecus_Character_BP_C_AnimNotify_DoUberpounceJump_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BackupDestroy
struct ADinopithecus_Character_BP_C_BackupDestroy_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_LatchedJumpAttached
struct ADinopithecus_Character_BP_C_AnimNotify_LatchedJumpAttached_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_QueuedRoar
struct ADinopithecus_Character_BP_C_AnimNotify_QueuedRoar_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetPounceAnticipationIdle
struct ADinopithecus_Character_BP_C_ServerSetPounceAnticipationIdle_Params
{
	bool                                               IsAnticipIdle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetIsHoldingProne
struct ADinopithecus_Character_BP_C_ServerSetIsHoldingProne_Params
{
	bool                                               HoldingCrouch;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_GrabRock
struct ADinopithecus_Character_BP_C_AnimNotify_GrabRock_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ThrowRock
struct ADinopithecus_Character_BP_C_AnimNotify_ThrowRock_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestSequentialJump
struct ADinopithecus_Character_BP_C_ServerRequestSequentialJump_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEJumpStart
struct ADinopithecus_Character_BP_C_AnimNotify_AOEJumpStart_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEJumpEnd
struct ADinopithecus_Character_BP_C_AnimNotify_AOEJumpEnd_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_EnableIK
struct ADinopithecus_Character_BP_C_AnimNotify_EnableIK_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DisableIK
struct ADinopithecus_Character_BP_C_AnimNotify_DisableIK_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ShouldCancelLatch
struct ADinopithecus_Character_BP_C_AnimNotify_ShouldCancelLatch_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestJumpOffWallWithAnticipation
struct ADinopithecus_Character_BP_C_ServerRequestJumpOffWallWithAnticipation_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_PushOffWall
struct ADinopithecus_Character_BP_C_AnimNotify_PushOffWall_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLatchJumpType
struct ADinopithecus_Character_BP_C_ServerSetLatchJumpType_Params
{
	TEnumAsByte<ELatchedJumpType>                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiExplodeProjectile
struct ADinopithecus_Character_BP_C_MultiExplodeProjectile_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetAmmoType
struct ADinopithecus_Character_BP_C_ServerSetAmmoType_Params
{
	int                                                NewAmmoType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetIsHoldingCrouch
struct ADinopithecus_Character_BP_C_ServerSetIsHoldingCrouch_Params
{
	bool                                               HoldingCrouch;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLastJumpHoldTime
struct ADinopithecus_Character_BP_C_ServerSetLastJumpHoldTime_Params
{
	float                                              HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multicast_BattlecryHitFX
struct ADinopithecus_Character_BP_C_Multicast_BattlecryHitFX_Params
{
	int                                                NrOfHits;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClearHUDReference
struct ADinopithecus_Character_BP_C_ClearHUDReference_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Server_HideWeapon
struct ADinopithecus_Character_BP_C_Server_HideWeapon_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Server_ShowWeapon
struct ADinopithecus_Character_BP_C_Server_ShowWeapon_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.RunOnServer_UpdateInventory
struct ADinopithecus_Character_BP_C_RunOnServer_UpdateInventory_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multi_ResetProjectileM esh
struct ADinopithecus_Character_BP_C_Multi_ResetProjectileM_esh_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClientStartBabyRiding
struct ADinopithecus_Character_BP_C_ClientStartBabyRiding_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multi_GrabRock
struct ADinopithecus_Character_BP_C_Multi_GrabRock_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClearUberpounceOnClearRider
struct ADinopithecus_Character_BP_C_ClearUberpounceOnClearRider_Params
{
};

// Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ExecuteUbergraph_Dinopithecus_Character_BP
struct ADinopithecus_Character_BP_C_ExecuteUbergraph_Dinopithecus_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
