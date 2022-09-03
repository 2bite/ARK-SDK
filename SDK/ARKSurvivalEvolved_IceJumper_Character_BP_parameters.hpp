#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceJumper_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnTamedProcessOrder
struct AIceJumper_Character_BP_C_BPOnTamedProcessOrder_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsLowServerFPS
struct AIceJumper_Character_BP_C_IsLowServerFPS_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetPositionErrorTolerance
struct AIceJumper_Character_BP_C_SetPositionErrorTolerance_Params
{
	float                                              Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FlyingTolerance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.Queue Random Boredom
struct AIceJumper_Character_BP_C_Queue_Random_Boredom_Params
{
	bool                                               IncludePossibleInstantBoredom;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIsBored
struct AIceJumper_Character_BP_C_SetIsBored_Params
{
	bool                                               IsBored;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPTryMultiUse
struct AIceJumper_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetMultiUseEntries
struct AIceJumper_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPUnstasis
struct AIceJumper_Character_BP_C_BPUnstasis_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetDebugInfoString
struct AIceJumper_Character_BP_C_BPGetDebugInfoString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPTriggerStasisEvent
struct AIceJumper_Character_BP_C_BPTriggerStasisEvent_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyFOV
struct AIceJumper_Character_BP_C_BPModifyFOV_Params
{
	float*                                             FOVIn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyFOVInterpSpeed
struct AIceJumper_Character_BP_C_BPModifyFOVInterpSpeed_Params
{
	float*                                             FOVInterpSpeedIn;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.PlayTiredAnim
struct AIceJumper_Character_BP_C_PlayTiredAnim_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyAimOffsetNoTarget
struct AIceJumper_Character_BP_C_BPModifyAimOffsetNoTarget_Params
{
	struct FRotator                                    Aim;                                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_PreventMovementMode
struct AIceJumper_Character_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.Spawn Ice Breath
struct AIceJumper_Character_BP_C_Spawn_Ice_Breath_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandlePoop
struct AIceJumper_Character_BP_C_BPHandlePoop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetForwardDashMaxDistance2D
struct AIceJumper_Character_BP_C_GetForwardDashMaxDistance2D_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_ClientLocationInterpSpeedReplicated
struct AIceJumper_Character_BP_C_OnRep_ClientLocationInterpSpeedReplicated_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.IceBreathStateIsActive
struct AIceJumper_Character_BP_C_IceBreathStateIsActive_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIceBreathInputPressed
struct AIceJumper_Character_BP_C_SetIceBreathInputPressed_Params
{
	bool                                               Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandleControllerInitiatedAttack
struct AIceJumper_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_OnSetDeath
struct AIceJumper_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPNotifySetRider
struct AIceJumper_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPNotifyClearRider
struct AIceJumper_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveAnyDamage
struct AIceJumper_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.Get AbilityStamina Cost
struct AIceJumper_Character_BP_C_Get_AbilityStamina_Cost_Params
{
	float                                              Base;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.Is AIControlled
struct AIceJumper_Character_BP_C_Is_AIControlled_Params
{
	bool                                               AIControlled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct AIceJumper_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.Set AITargetLocation
struct AIceJumper_Character_BP_C_Set_AITargetLocation_Params
{
	struct FVector                                     TargetLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.InAirStateIsResultOfJump
struct AIceJumper_Character_BP_C_InAirStateIsResultOfJump_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.K2_OnMovementModeChanged
struct AIceJumper_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsOutOfStamina
struct AIceJumper_Character_BP_C_IsOutOfStamina_Params
{
	bool                                               OutOfStamina;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetIceBreathRange
struct AIceJumper_Character_BP_C_GetIceBreathRange_Params
{
	float                                              Range;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetForwardDashDamage
struct AIceJumper_Character_BP_C_GetForwardDashDamage_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetThawSpeed
struct AIceJumper_Character_BP_C_GetThawSpeed_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FrozenThawAmountPerRate;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsLowStamina
struct AIceJumper_Character_BP_C_IsLowStamina_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPAdjustAttackIndex
struct AIceJumper_Character_BP_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_PreviousAbilityReplicated
struct AIceJumper_Character_BP_C_OnRep_PreviousAbilityReplicated_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_InterceptMoveForward
struct AIceJumper_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.Is DecendingRapidly
struct AIceJumper_Character_BP_C_Is_DecendingRapidly_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ActivateWingTrails
struct AIceJumper_Character_BP_C_ActivateWingTrails_Params
{
	bool                                               Deactivate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RightWing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveTick
struct AIceJumper_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnDinoCheat
struct AIceJumper_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnStaminaDrained
struct AIceJumper_Character_BP_C_BPOnStaminaDrained_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_bOverrideNewFallVelocityReplicated
struct AIceJumper_Character_BP_C_OnRep_bOverrideNewFallVelocityReplicated_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOverrideCharacterNewFallVelocity
struct AIceJumper_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetActiveAbility
struct AIceJumper_Character_BP_C_SetActiveAbility_Params
{
	TEnumAsByte<EIceJumperAbilities_Enum>              Ability;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_ActiveAbilityByte
struct AIceJumper_Character_BP_C_OnRep_ActiveAbilityByte_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsAscending
struct AIceJumper_Character_BP_C_IsAscending_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPDoAttack
struct AIceJumper_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetDinoCollisionState
struct AIceJumper_Character_BP_C_SetDinoCollisionState_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_UseControlRotation
struct AIceJumper_Character_BP_C_OnRep_UseControlRotation_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_TargetYaw
struct AIceJumper_Character_BP_C_OnRep_TargetYaw_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetHUDElements
struct AIceJumper_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BlueprintCanAttack
struct AIceJumper_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeductStamina
struct AIceJumper_Character_BP_C_DeductStamina_Params
{
	float                                              Stamina;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIceBreathProjectile
struct AIceJumper_Character_BP_C_SetIceBreathProjectile_Params
{
	class AIceJumperProjIceBreath_C*                   Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.UpdateDashCollider
struct AIceJumper_Character_BP_C_UpdateDashCollider_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              damageMult;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HitTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetStartTimeForMovementAbility
struct AIceJumper_Character_BP_C_GetStartTimeForMovementAbility_Params
{
	TEnumAsByte<EIceJumperAbilities_Enum>              Ability;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             StartTime;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetCrosshairColor
struct AIceJumper_Character_BP_C_BPGetCrosshairColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandleOnStopTargeting
struct AIceJumper_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.Clear Any Active Ability State
struct AIceJumper_Character_BP_C_Clear_Any_Active_Ability_State_Params
{
	TEnumAsByte<EIceJumperAbilities_Enum>              TriggeredAbility;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ClearVelocity;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIceJumperAbilities_Enum>              ExcludingAbility;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.RidingTick
struct AIceJumper_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_InterceptMoveRight
struct AIceJumper_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveBeginPlay
struct AIceJumper_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnLanded
struct AIceJumper_Character_BP_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.UserConstructionScript
struct AIceJumper_Character_BP_C_UserConstructionScript_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_OnLanded
struct AIceJumper_Character_BP_C_MULTI_OnLanded_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_OnLandedValidated
struct AIceJumper_Character_BP_C_MULTI_OnLandedValidated_Params
{
	struct FVector                                     GroundImpactLoc;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GroundImpactNormal;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_OnJumpReleased
struct AIceJumper_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnIceBreathBegin
struct AIceJumper_Character_BP_C_OnIceBreathBegin_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MultiOnIceBreathBegin
struct AIceJumper_Character_BP_C_MultiOnIceBreathBegin_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SERVER_SetIceBreathInputPressed
struct AIceJumper_Character_BP_C_SERVER_SetIceBreathInputPressed_Params
{
	bool                                               Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ForwardDashTick
struct AIceJumper_Character_BP_C_ForwardDashTick_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_ForwardDashEnd
struct AIceJumper_Character_BP_C_MULTI_ForwardDashEnd_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.TickThrusterVFX
struct AIceJumper_Character_BP_C_TickThrusterVFX_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.FailsafeEndForestDash
struct AIceJumper_Character_BP_C_FailsafeEndForestDash_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.UpdatePositionErrorTolerance
struct AIceJumper_Character_BP_C_UpdatePositionErrorTolerance_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.EndJump
struct AIceJumper_Character_BP_C_EndJump_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInputActionJump
struct AIceJumper_Character_BP_C_ServerInputActionJump_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.RotateToTargetYawTick
struct AIceJumper_Character_BP_C_RotateToTargetYawTick_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartThrusterVFX
struct AIceJumper_Character_BP_C_StartThrusterVFX_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartForwardDash
struct AIceJumper_Character_BP_C_StartForwardDash_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateGravityScale
struct AIceJumper_Character_BP_C_SetAndReplicateGravityScale_Params
{
	float                                              GravityScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetVelocity
struct AIceJumper_Character_BP_C_SetVelocity_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateMovementMode
struct AIceJumper_Character_BP_C_SetAndReplicateMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateControlRotation
struct AIceJumper_Character_BP_C_SetAndReplicateControlRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartSideDash
struct AIceJumper_Character_BP_C_StartSideDash_Params
{
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.CameraControlDashTick
struct AIceJumper_Character_BP_C_CameraControlDashTick_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInterceptMoveRight
struct AIceJumper_Character_BP_C_ServerInterceptMoveRight_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.StopMovementFreeze
struct AIceJumper_Character_BP_C_StopMovementFreeze_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartMovementFreeze
struct AIceJumper_Character_BP_C_StartMovementFreeze_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientStopMovementFreeze
struct AIceJumper_Character_BP_C_ClientStopMovementFreeze_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateClientControlForward
struct AIceJumper_Character_BP_C_ReplicateClientControlForward_Params
{
	struct FVector                                     ClientControlForward;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInterceptMoveForward
struct AIceJumper_Character_BP_C_ServerInterceptMoveForward_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerHandleStopTargeting
struct AIceJumper_Character_BP_C_ServerHandleStopTargeting_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientSetPitch
struct AIceJumper_Character_BP_C_ClientSetPitch_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerSetIsCrosshairOverGround
struct AIceJumper_Character_BP_C_ServerSetIsCrosshairOverGround_Params
{
	bool                                               IsCrosshairOverGround;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientMovementAbilityInterrupted
struct AIceJumper_Character_BP_C_ClientMovementAbilityInterrupted_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientDamagedTarget
struct AIceJumper_Character_BP_C_ClientDamagedTarget_Params
{
	struct FVector                                     HitLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeactivateLeftDamageFX
struct AIceJumper_Character_BP_C_DeactivateLeftDamageFX_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeactivateRightDamageFX
struct AIceJumper_Character_BP_C_DeactivateRightDamageFX_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.SERVER_EndIceBreathAttack
struct AIceJumper_Character_BP_C_SERVER_EndIceBreathAttack_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnIceBreathEnd
struct AIceJumper_Character_BP_C_OnIceBreathEnd_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MultiOnIceBreathEnd
struct AIceJumper_Character_BP_C_MultiOnIceBreathEnd_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.IceBreathTick
struct AIceJumper_Character_BP_C_IceBreathTick_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateCameraLocationToServer
struct AIceJumper_Character_BP_C_ReplicateCameraLocationToServer_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartForwardDash
struct AIceJumper_Character_BP_C_MULTI_StartForwardDash_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetCollision
struct AIceJumper_Character_BP_C_MULTI_SetCollision_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateCrosshairTargetToServer
struct AIceJumper_Character_BP_C_ReplicateCrosshairTargetToServer_Params
{
	class APrimalCharacter*                            CrosshairTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBallProj
struct AIceJumper_Character_BP_C_AnimNotify_IceBallProj_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBreathHover
struct AIceJumper_Character_BP_C_AnimNotify_IceBreathHover_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_CheckStamina
struct AIceJumper_Character_BP_C_AnimNotify_CheckStamina_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartSideDash
struct AIceJumper_Character_BP_C_MULTI_StartSideDash_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SideDashInterrupted
struct AIceJumper_Character_BP_C_MULTI_SideDashInterrupted_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SideDashEnd
struct AIceJumper_Character_BP_C_MULTI_SideDashEnd_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartJump
struct AIceJumper_Character_BP_C_MULTI_StartJump_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetBreathFX
struct AIceJumper_Character_BP_C_MULTI_SetBreathFX_Params
{
	float                                              TimeDilation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.TickSideThrusterVFX
struct AIceJumper_Character_BP_C_TickSideThrusterVFX_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ExtraJumpTick
struct AIceJumper_Character_BP_C_ExtraJumpTick_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ResetShortDashType
struct AIceJumper_Character_BP_C_ResetShortDashType_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_TargetFrozen
struct AIceJumper_Character_BP_C_MULTI_TargetFrozen_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetVelocity
struct AIceJumper_Character_BP_C_MULTI_SetVelocity_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBreathGround
struct AIceJumper_Character_BP_C_AnimNotify_IceBreathGround_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartBoredom
struct AIceJumper_Character_BP_C_StartBoredom_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.FinishBoredom
struct AIceJumper_Character_BP_C_FinishBoredom_Params
{
};

// Function IceJumper_Character_BP.IceJumper_Character_BP_C.ExecuteUbergraph_IceJumper_Character_BP
struct AIceJumper_Character_BP_C_ExecuteUbergraph_IceJumper_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
