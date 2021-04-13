#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Enforcer_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsHostileTekShield
struct AEnforcer_Character_BP_C_IsHostileTekShield_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsShield;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ProjectileArcSweep
struct AEnforcer_Character_BP_C_ProjectileArcSweep_Params
{
	struct FProjectileArc                              Arc;                                                      // (Parm)
	struct FRotator                                    CapsuleRotation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleRadius;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleHalfHeight;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxArcLength;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DebugDrawDuration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm)
	struct FVector                                     EndLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              EndArcTime;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.CanNonControlledClimberNotClimbingOverrideTransformInterpolation
struct AEnforcer_Character_BP_C_CanNonControlledClimberNotClimbingOverrideTransformInterpolation_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnRefreshColorization
struct AEnforcer_Character_BP_C_BPOnRefreshColorization_Params
{
	TArray<struct FLinearColor>                        Colors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnLethalDamage
struct AEnforcer_Character_BP_C_BPOnLethalDamage_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventDeath;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveAnyDamage
struct AEnforcer_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnRep_WildAlertEnabled
struct AEnforcer_Character_BP_C_OnRep_WildAlertEnabled_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetRiderVisibility
struct AEnforcer_Character_BP_C_GetRiderVisibility_Params
{
	class AShooterCharacter*                           Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetRiderVisibility
struct AEnforcer_Character_BP_C_SetRiderVisibility_Params
{
	class AShooterCharacter*                           Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetupBlinkCooldowns
struct AEnforcer_Character_BP_C_SetupBlinkCooldowns_Params
{
	int                                                OverrideNumCooldowns;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifyLevelUp
struct AEnforcer_Character_BP_C_BPNotifyLevelUp_Params
{
	int*                                               ExtraCharacterLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.On ClimberAttached
struct AEnforcer_Character_BP_C_On_ClimberAttached_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPUnstasis
struct AEnforcer_Character_BP_C_BPUnstasis_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlueprintPlayDying
struct AEnforcer_Character_BP_C_BlueprintPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifySetRider
struct AEnforcer_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.StopClimbing
struct AEnforcer_Character_BP_C_StopClimbing_Params
{
	bool*                                              resetRestoreToSeeking;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              skipDetach;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetRiderUnboardLocation
struct AEnforcer_Character_BP_C_BPGetRiderUnboardLocation_Params
{
	class APrimalCharacter**                           RidingCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_PreventMovementMode
struct AEnforcer_Character_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.HasEnoughStaminaToBlink
struct AEnforcer_Character_BP_C_HasEnoughStaminaToBlink_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.SweepTestBlinkClimbPoint
struct AEnforcer_Character_BP_C_SweepTestBlinkClimbPoint_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DebugDrawTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsSurfaceNormalClimbable
struct AEnforcer_Character_BP_C_IsSurfaceNormalClimbable_Params
{
	struct FVector                                     surfaceNormal;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldClimb;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetCustomSurfaceTraceDistance
struct AEnforcer_Character_BP_C_GetCustomSurfaceTraceDistance_Params
{
	int*                                               TraceIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              customDistance;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsNormalClimbable
struct AEnforcer_Character_BP_C_IsNormalClimbable_Params
{
	struct FVector*                                    Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isAverageNormal;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClimbingIK_SetNewBlendspaceAxes
struct AEnforcer_Character_BP_C_ClimbingIK_SetNewBlendspaceAxes_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetClimbingIK_BlendspaceAxes_Front
struct AEnforcer_Character_BP_C_GetClimbingIK_BlendspaceAxes_Front_Params
{
	struct FVector2D                                   axes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
struct AEnforcer_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetDesiredMoveDirection
struct AEnforcer_Character_BP_C_GetDesiredMoveDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlinkCooldownToString
struct AEnforcer_Character_BP_C_BlinkCooldownToString_Params
{
	double                                             LastUsedTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Cooldown;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReadyString;                                              // (Parm, ZeroConstructor)
	class FString                                      Return_Value;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGrabDebugSnapshot
struct AEnforcer_Character_BP_C_BPGrabDebugSnapshot_Params
{
	TArray<struct FBlueprintVisualLogEntry>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkOnCooldownNonPure
struct AEnforcer_Character_BP_C_IsBlinkOnCooldownNonPure_Params
{
	bool                                               OnCooldown;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnDinoCheat
struct AEnforcer_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get CurrentClimbingVelocityMax
struct AEnforcer_Character_BP_C_Get_CurrentClimbingVelocityMax_Params
{
	float                                              Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.UseBlinkCooldown
struct AEnforcer_Character_BP_C_UseBlinkCooldown_Params
{
	bool                                               TestOnly;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkOnCooldown
struct AEnforcer_Character_BP_C_IsBlinkOnCooldown_Params
{
	bool                                               OnCooldown;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                FirstAvailableCooldown;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetHUDElements
struct AEnforcer_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifyClearRider
struct AEnforcer_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Blink Ramp Delay Status
struct AEnforcer_Character_BP_C_Get_Blink_Ramp_Delay_Status_Params
{
	bool                                               InDelay;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Controller Latency
struct AEnforcer_Character_BP_C_Get_Controller_Latency_Params
{
	float                                              Ping;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientStartBlink
struct AEnforcer_Character_BP_C_ClientStartBlink_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPModifyFOV
struct AEnforcer_Character_BP_C_BPModifyFOV_Params
{
	float*                                             FOVIn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.K2_OnMovementModeChanged
struct AEnforcer_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetClimbingMoveDirFromRotation
struct AEnforcer_Character_BP_C_GetClimbingMoveDirFromRotation_Params
{
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     moveDir;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.Can Receive Climbing Input Strafe
struct AEnforcer_Character_BP_C_Can_Receive_Climbing_Input_Strafe_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveBeginPlay
struct AEnforcer_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkInProgress
struct AEnforcer_Character_BP_C_IsBlinkInProgress_Params
{
	bool                                               InBlinkDelay;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBlinking;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.Check For Prevent Stop Climbing
struct AEnforcer_Character_BP_C_Check_For_Prevent_Stop_Climbing_Params
{
	TArray<bool>                                       traceHitsArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               numValidHits;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               numTraces;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               allowClimbing;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetCurrentCameraLoc
struct AEnforcer_Character_BP_C_GetCurrentCameraLoc_Params
{
	struct FVector                                     Loc;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOverrideCameraViewTarget
struct AEnforcer_Character_BP_C_BPOverrideCameraViewTarget_Params
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

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientSetBlinkStatus
struct AEnforcer_Character_BP_C_ClientSetBlinkStatus_Params
{
	bool                                               BlinkInProgress;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.CalcBlinkTarget
struct AEnforcer_Character_BP_C_CalcBlinkTarget_Params
{
	struct FProjectileArc                              Arc;                                                      // (Parm)
	bool                                               ForVFX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DebugDrawDuration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FoundValidTarget;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAirTarget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClimbTarget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetNormal;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ArcTime;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.Update Blink Target VFX Location
struct AEnforcer_Character_BP_C_Update_Blink_Target_VFX_Location_Params
{
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInvalid;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    WorldRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm)
	struct FVector                                     surfaceNormal;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPHandleControllerInitiatedAttack
struct AEnforcer_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPHandleOnStopTargeting
struct AEnforcer_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Vertical View Angle
struct AEnforcer_Character_BP_C_Get_Vertical_View_Angle_Params
{
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveTick
struct AEnforcer_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.Do Blink
struct AEnforcer_Character_BP_C_Do_Blink_Params
{
	struct FVector                                     BlinkLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    BlinkRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartClimbing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrigLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OrigRotation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlueprintCanRiderAttack
struct AEnforcer_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.UserConstructionScript
struct AEnforcer_Character_BP_C_UserConstructionScript_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerRequestBlink
struct AEnforcer_Character_BP_C_ServerRequestBlink_Params
{
	struct FVector                                     BlinkStartLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BlinkDirection;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RequestedDestination;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RequestedRotation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ClientVerticalViewAngle;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastOnBlinkCompleted
struct AEnforcer_Character_BP_C_MulticastOnBlinkCompleted_Params
{
	struct FVector                                     OrigLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OrigRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BlinkLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    BlinkRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartedClimbing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastBlinkAcknowledged
struct AEnforcer_Character_BP_C_MulticastBlinkAcknowledged_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_OnJumpPressed
struct AEnforcer_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_OnJumpReleased
struct AEnforcer_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerUpdateMoveDir
struct AEnforcer_Character_BP_C_ServerUpdateMoveDir_Params
{
	float                                              Forward;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.UpdateMoveDir
struct AEnforcer_Character_BP_C_UpdateMoveDir_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.DrawDebugDirection
struct AEnforcer_Character_BP_C_DrawDebugDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ArrowSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientDrawDebugDirection
struct AEnforcer_Character_BP_C_ClientDrawDebugDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ArrowSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiBlinkFailed
struct AEnforcer_Character_BP_C_MultiBlinkFailed_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiOnClimbDetach
struct AEnforcer_Character_BP_C_MultiOnClimbDetach_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastUpdateDesiredMoveDirection
struct AEnforcer_Character_BP_C_MulticastUpdateDesiredMoveDirection_Params
{
	struct FVector                                     Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnBlastAttack
struct AEnforcer_Character_BP_C_OnBlastAttack_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientOnBlastAttack
struct AEnforcer_Character_BP_C_ClientOnBlastAttack_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerRequestClimbDetatchWithJump
struct AEnforcer_Character_BP_C_ServerRequestClimbDetatchWithJump_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnWalkableGroundFoundWhileClimbing
struct AEnforcer_Character_BP_C_OnWalkableGroundFoundWhileClimbing_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.FixBlinkMaterials
struct AEnforcer_Character_BP_C_FixBlinkMaterials_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiSetBlinkValue
struct AEnforcer_Character_BP_C_MultiSetBlinkValue_Params
{
	bool                                               Forwards;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCheatOverride;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiOnClimberAttached
struct AEnforcer_Character_BP_C_MultiOnClimberAttached_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientUpdateBlinkCooldownTimes
struct AEnforcer_Character_BP_C_ClientUpdateBlinkCooldownTimes_Params
{
	TArray<double>                                     CooldownTimes;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetupBlinkCooldowns_Initial
struct AEnforcer_Character_BP_C_SetupBlinkCooldowns_Initial_Params
{
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnDinoStartled
struct AEnforcer_Character_BP_C_BPOnDinoStartled_Params
{
	class UAnimMontage**                               StartledAnimPlayed;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromAIController;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enforcer_Character_BP.Enforcer_Character_BP_C.ExecuteUbergraph_Enforcer_Character_BP
struct AEnforcer_Character_BP_C_ExecuteUbergraph_Enforcer_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
