#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GasBags_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GasBags_Character_BP.GasBags_Character_BP_C.ModifyInflationValue
struct AGasBags_Character_BP_C_ModifyInflationValue_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeltaIsPercent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Subtract;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewInflationPercent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.GetInflationValue
struct AGasBags_Character_BP_C_GetInflationValue_Params
{
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPCharacterUnsleeped
struct AGasBags_Character_BP_C_BPCharacterUnsleeped_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BP_ForceAllowMountedWeapon
struct AGasBags_Character_BP_C_BP_ForceAllowMountedWeapon_Params
{
	class UClass**                                     WeaponTemplate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnLethalDamage
struct AGasBags_Character_BP_C_BPOnLethalDamage_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventDeath;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPCharacterSleeped
struct AGasBags_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.GetCurrentFloatingForceDirection
struct AGasBags_Character_BP_C_GetCurrentFloatingForceDirection_Params
{
	struct FVector                                     Dir;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.IsInhaleSocketUnderwater
struct AGasBags_Character_BP_C_IsInhaleSocketUnderwater_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.OnJumped
struct AGasBags_Character_BP_C_OnJumped_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct AGasBags_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.GetDmgDirectionHelper
struct AGasBags_Character_BP_C_GetDmgDirectionHelper_Params
{
	class AActor*                                      DmgCauser;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPointDmg;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageDir;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Dir;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPNotifySetRider
struct AGasBags_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPOverrideHurtAnim
struct AGasBags_Character_BP_C_BPOverrideHurtAnim_Params
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

// Function GasBags_Character_BP.GasBags_Character_BP_C.AllowedToInflate
struct AGasBags_Character_BP_C_AllowedToInflate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.TrySubtractStamina
struct AGasBags_Character_BP_C_TrySubtractStamina_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FailIfNotEnough;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RemainingStamina;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.GetCurrentExhaleStaminaCost
struct AGasBags_Character_BP_C_GetCurrentExhaleStaminaCost_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.RawDamageToInflationDamage
struct AGasBags_Character_BP_C_RawDamageToInflationDamage_Params
{
	float                                              RawDamageAmount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFallDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealthDamage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              InflationDamage;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.GetFloatingVFX
struct AGasBags_Character_BP_C_GetFloatingVFX_Params
{
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Comp;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.NonDediTickFloatingVFX
struct AGasBags_Character_BP_C_NonDediTickFloatingVFX_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.OnRep_IsFloating
struct AGasBags_Character_BP_C_OnRep_IsFloating_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.ServerTickRandomImpulses
struct AGasBags_Character_BP_C_ServerTickRandomImpulses_Params
{
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impulse;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPGrabDebugSnapshot
struct AGasBags_Character_BP_C_BPGrabDebugSnapshot_Params
{
	TArray<struct FBlueprintVisualLogEntry>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnDinoCheat
struct AGasBags_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPCheckJumpInput
struct AGasBags_Character_BP_C_BPCheckJumpInput_Params
{
	bool                                               bUseCustomErrorMessage;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ErrorMessageToDisplay;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.CanJumpInternal
struct AGasBags_Character_BP_C_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.ClampFloatingVelocity
struct AGasBags_Character_BP_C_ClampFloatingVelocity_Params
{
	struct FVector                                     DesiredVelocity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClampedVelocity;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPTimerServer
struct AGasBags_Character_BP_C_BPTimerServer_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.GetEnvironmentData
struct AGasBags_Character_BP_C_GetEnvironmentData_Params
{
	float                                              Temperature;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPPreventStasis
struct AGasBags_Character_BP_C_BPPreventStasis_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.GetExhaleCooldown
struct AGasBags_Character_BP_C_GetExhaleCooldown_Params
{
	double                                             Clock;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPPreventFallDamage
struct AGasBags_Character_BP_C_BPPreventFallDamage_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm, ReferenceParm)
	float*                                             FallDamageAmount;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BlueprintCanAttack
struct AGasBags_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.GetMaxInflation
struct AGasBags_Character_BP_C_GetMaxInflation_Params
{
	bool                                               GetBaseValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxInflationAmount;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetOverrideCameraInterpSpeed
struct AGasBags_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
{
	float*                                             DefaultTPVCameraSpeedInterpolationMultiplier;             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DefaultTPVOffsetInterpSpeed;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TPVCameraSpeedInterpolationMultiplier;                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TPVOffsetInterpSpeed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.GetFloatingForceDirection
struct AGasBags_Character_BP_C_GetFloatingForceDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.ReceiveBeginPlay
struct AGasBags_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnMovementModeChangedNotify
struct AGasBags_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.LaunchAbilityFinish
struct AGasBags_Character_BP_C_LaunchAbilityFinish_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.DoLaunchAbility
struct AGasBags_Character_BP_C_DoLaunchAbility_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetGravityZScale
struct AGasBags_Character_BP_C_BPGetGravityZScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.ExhaleAttackFinish
struct AGasBags_Character_BP_C_ExhaleAttackFinish_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.Get Current Aim Direction
struct AGasBags_Character_BP_C_Get_Current_Aim_Direction_Params
{
	float                                              VerticalAngleOffset;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AimDirection;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.DoExhaleAttack
struct AGasBags_Character_BP_C_DoExhaleAttack_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPHandleControllerInitiatedAttack
struct AGasBags_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPHandleOnStopTargeting
struct AGasBags_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.StopInflating
struct AGasBags_Character_BP_C_StopInflating_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.StartInflating
struct AGasBags_Character_BP_C_StartInflating_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.OnRep_IsInflating
struct AGasBags_Character_BP_C_OnRep_IsInflating_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BlueprintCanRiderAttack
struct AGasBags_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetHUDElements
struct AGasBags_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.BPAdjustDamage
struct AGasBags_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.Get Inflation
struct AGasBags_Character_BP_C_Get_Inflation_Params
{
	bool                                               SmoothedValues;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.ReceiveTick
struct AGasBags_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.UserConstructionScript
struct AGasBags_Character_BP_C_UserConstructionScript_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestStopInflating
struct AGasBags_Character_BP_C_ServerRequestStopInflating_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestStartInflating
struct AGasBags_Character_BP_C_ServerRequestStartInflating_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.ServerUpdateFloatDirection
struct AGasBags_Character_BP_C_ServerUpdateFloatDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateFloatingDirection
struct AGasBags_Character_BP_C_MultiUpdateFloatingDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateVelocity
struct AGasBags_Character_BP_C_MultiUpdateVelocity_Params
{
	struct FVector                                     vel;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestAttachment
struct AGasBags_Character_BP_C_ServerRequestAttachment_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateAttachState
struct AGasBags_Character_BP_C_MultiUpdateAttachState_Params
{
	bool                                               Attached;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestDetach
struct AGasBags_Character_BP_C_ServerRequestDetach_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.ClientUpdateFloatingAirControlValue
struct AGasBags_Character_BP_C_ClientUpdateFloatingAirControlValue_Params
{
	float                                              val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.ClientUpdateInflationMultiplier
struct AGasBags_Character_BP_C_ClientUpdateInflationMultiplier_Params
{
	float                                              val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.MultiOnHardLanding
struct AGasBags_Character_BP_C_MultiOnHardLanding_Params
{
	float                                              LandingForcePercent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.ClientShowErrorMessage
struct AGasBags_Character_BP_C_ClientShowErrorMessage_Params
{
	unsigned char                                      MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSingleton;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.MultiNotifyRandomImpulse
struct AGasBags_Character_BP_C_MultiNotifyRandomImpulse_Params
{
	struct FVector                                     RandomImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.MultiOnLaunched
struct AGasBags_Character_BP_C_MultiOnLaunched_Params
{
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.MultiExhaleImpulse
struct AGasBags_Character_BP_C_MultiExhaleImpulse_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.MultiNotifyInflationDamage
struct AGasBags_Character_BP_C_MultiNotifyInflationDamage_Params
{
	float                                              InflationDamage;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPointDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PointDamageNormal;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Character_BP.GasBags_Character_BP_C.ExecuteUbergraph_GasBags_Character_BP
struct AGasBags_Character_BP_C_ExecuteUbergraph_GasBags_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
