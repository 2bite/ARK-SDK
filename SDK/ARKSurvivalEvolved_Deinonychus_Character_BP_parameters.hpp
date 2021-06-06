#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deinonychus_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPRemovedAsPassenger
struct ADeinonychus_Character_BP_C_BPRemovedAsPassenger_Params
{
	class APrimalCharacter**                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_OnEndCarried
struct ADeinonychus_Character_BP_C_BP_OnEndCarried_Params
{
	bool*                                              bFromDino;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCancelAnyCarryBuffs;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPServerHandleNetExecCommand
struct ADeinonychus_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnNonInstanceJumpOffWallInput
struct ADeinonychus_Character_BP_C_OnNonInstanceJumpOffWallInput_Params
{
	float                                              HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetLatchJumpSpeedThresholdForRotate
struct ADeinonychus_Character_BP_C_GetLatchJumpSpeedThresholdForRotate_Params
{
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SpawnUberJumpFX
struct ADeinonychus_Character_BP_C_SpawnUberJumpFX_Params
{
	TArray<struct FName>                               Attach_Point_Names;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UParticleSystem*                             FX_to_Spawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Is Recently Unlatched
struct ADeinonychus_Character_BP_C_Is_Recently_Unlatched_Params
{
	float                                              Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetCameraInterpSpeed
struct ADeinonychus_Character_BP_C_GetCameraInterpSpeed_Params
{
	float                                              InterpSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnJumpFromGround
struct ADeinonychus_Character_BP_C_OnJumpFromGround_Params
{
	float                                              HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceInterpSpeed
struct ADeinonychus_Character_BP_C_GetUberpounceInterpSpeed_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CalcCurrentJump Hold Time
struct ADeinonychus_Character_BP_C_CalcCurrentJump_Hold_Time_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ClearOutOfRangeData
struct ADeinonychus_Character_BP_C_ClearOutOfRangeData_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceRangeBase
struct ADeinonychus_Character_BP_C_GetUberpounceRangeBase_Params
{
	float                                              Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceMaxRange
struct ADeinonychus_Character_BP_C_GetUberpounceMaxRange_Params
{
	float                                              Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateTickThrottles
struct ADeinonychus_Character_BP_C_UpdateTickThrottles_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPTimerNonDedicated
struct ADeinonychus_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Throttled TickFn
struct ADeinonychus_Character_BP_C_Throttled_TickFn_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPTimerServer
struct ADeinonychus_Character_BP_C_BPTimerServer_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.On Uberpounce AttachedToLocation
struct ADeinonychus_Character_BP_C_On_Uberpounce_AttachedToLocation_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ScheduleChecking Falling Latch
struct ADeinonychus_Character_BP_C_ScheduleChecking_Falling_Latch_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TryAddPinnedBuff
struct ADeinonychus_Character_BP_C_TryAddPinnedBuff_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ApplyJump
struct ADeinonychus_Character_BP_C_ApplyJump_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Anim;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Pounce Latched Anim
struct ADeinonychus_Character_BP_C_Get_Pounce_Latched_Anim_Params
{
	class UAnimMontage*                                Anim;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSectionName;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetInitialAnimationForUberpounce
struct ADeinonychus_Character_BP_C_GetInitialAnimationForUberpounce_Params
{
	bool                                               QuickUberpounce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                OutAnim;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RetStartSectionName;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Los
struct ADeinonychus_Character_BP_C_Los_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnRep_UberpounceServerState
struct ADeinonychus_Character_BP_C_OnRep_UberpounceServerState_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceSurface Normal Allows Sliding
struct ADeinonychus_Character_BP_C_UberpounceSurface_Normal_Allows_Sliding_Params
{
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               EndUberpounce;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPDoAttack
struct ADeinonychus_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsGroundRotation
struct ADeinonychus_Character_BP_C_IsGroundRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCeiling;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsPounceTarget
struct ADeinonychus_Character_BP_C_IsPounceTarget_Params
{
	class APrimalCharacter**                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceCollisionCheck
struct ADeinonychus_Character_BP_C_UberpounceCollisionCheck_Params
{
	bool                                               RetHitSomething;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SpawnNestEgg
struct ADeinonychus_Character_BP_C_SpawnNestEgg_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceLocationOffsetForSocket
struct ADeinonychus_Character_BP_C_GetUberpounceLocationOffsetForSocket_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TerrainCheck
struct ADeinonychus_Character_BP_C_TerrainCheck_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HitSomething;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsAnotherDeinonychusAttachedToSocket
struct ADeinonychus_Character_BP_C_IsAnotherDeinonychusAttachedToSocket_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AllowPlayMontage
struct ADeinonychus_Character_BP_C_AllowPlayMontage_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnPounceTargetDodged
struct ADeinonychus_Character_BP_C_OnPounceTargetDodged_Params
{
	class APrimalCharacter**                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPModifyAimOffsetNoTarget
struct ADeinonychus_Character_BP_C_BPModifyAimOffsetNoTarget_Params
{
	struct FRotator                                    Aim;                                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Uberpounce Position Offset Curves
struct ADeinonychus_Character_BP_C_Get_Uberpounce_Position_Offset_Curves_Params
{
	class UCurveFloat*                                 RetZOffset;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RetXYMult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Has Latchable Surface In Front
struct ADeinonychus_Character_BP_C_Has_Latchable_Surface_In_Front_Params
{
	bool                                               RetSucccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FUberpounceData                             RetResultUberpounceData;                                  // (Parm, OutParm)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetInitialDamageOnUberpounceLatch
struct ADeinonychus_Character_BP_C_GetInitialDamageOnUberpounceLatch_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Uberpounce Stamina Cost Over Time
struct ADeinonychus_Character_BP_C_Get_Uberpounce_Stamina_Cost_Over_Time_Params
{
	float                                              StaminaCost;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.DeductStamina
struct ADeinonychus_Character_BP_C_DeductStamina_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SuccessfullyRemovedStamina;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnPinnedBuffEnded
struct ADeinonychus_Character_BP_C_OnPinnedBuffEnded_Params
{
	class APrimalCharacter**                           BuffTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ComputeJumpVector
struct ADeinonychus_Character_BP_C_ComputeJumpVector_Params
{
	struct FVector                                     Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.PushbackAfterPounceFn
struct ADeinonychus_Character_BP_C_PushbackAfterPounceFn_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Latched Jump Launched
struct ADeinonychus_Character_BP_C_Latched_Jump_Launched_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.LatchedJumpStart
struct ADeinonychus_Character_BP_C_LatchedJumpStart_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ResetMeshRelativeRotation
struct ADeinonychus_Character_BP_C_ResetMeshRelativeRotation_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.JumpPressedAndHeldFn
struct ADeinonychus_Character_BP_C_JumpPressedAndHeldFn_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CheckForFallingLatchFn
struct ADeinonychus_Character_BP_C_CheckForFallingLatchFn_Params
{
	bool                                               AutoJumpAfterLatch;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnDeinonychusLatchedAttack
struct ADeinonychus_Character_BP_C_OnDeinonychusLatchedAttack_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AllowSurfaceNormalForUberpounce
struct ADeinonychus_Character_BP_C_AllowSurfaceNormalForUberpounce_Params
{
	struct FVector                                     surfaceNormal;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TryAIBufferedUberpounce
struct ADeinonychus_Character_BP_C_TryAIBufferedUberpounce_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetQueuedUberpounceData
struct ADeinonychus_Character_BP_C_SetQueuedUberpounceData_Params
{
	struct FUberpounceData                             Data;                                                     // (Parm)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Uberpounce Transform Public
struct ADeinonychus_Character_BP_C_Get_Uberpounce_Transform_Public_Params
{
	struct FUberpounceData                             UberpounceData;                                           // (Parm)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsGroundSurface;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnUberpounceStateChanged
struct ADeinonychus_Character_BP_C_OnUberpounceStateChanged_Params
{
	TEnumAsByte<EUberpounceState>                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUberpounceState>                      PrevState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetUberpounceState
struct ADeinonychus_Character_BP_C_SetUberpounceState_Params
{
	TEnumAsByte<EUberpounceState>                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.LatchedJump
struct ADeinonychus_Character_BP_C_LatchedJump_Params
{
	float                                              JumpStrength;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLatchedAutoJump;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WallHugDirection;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsNonAuthoritativeClient
struct ADeinonychus_Character_BP_C_IsNonAuthoritativeClient_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SendClientMovementAdjustments
struct ADeinonychus_Character_BP_C_SendClientMovementAdjustments_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsDebugModeNonAuthoritativeClient
struct ADeinonychus_Character_BP_C_IsDebugModeNonAuthoritativeClient_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartUberpounceFromFalling
struct ADeinonychus_Character_BP_C_StartUberpounceFromFalling_Params
{
	struct FUberpounceData                             Data;                                                     // (Parm)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ClearQueuedData
struct ADeinonychus_Character_BP_C_ClearQueuedData_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.on Jump Input Released
struct ADeinonychus_Character_BP_C_on_Jump_Input_Released_Params
{
	bool                                               QueryOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PounceOnly;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               QueryOnlyOnGroundTarget;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUberpounceData                             UberpounceData;                                           // (Parm, OutParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            RaptorPounceTarget;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPHandleControllerInitiatedAttack
struct ADeinonychus_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidGeoTypeForUberpounce
struct ADeinonychus_Character_BP_C_IsValidGeoTypeForUberpounce_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPAdjustAttackIndex
struct ADeinonychus_Character_BP_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanTryUberpounce
struct ADeinonychus_Character_BP_C_CanTryUberpounce_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ResetMeshRelativeLocation
struct ADeinonychus_Character_BP_C_ResetMeshRelativeLocation_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.K2_OnMovementModeChanged
struct ADeinonychus_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_OnJumpPressed
struct ADeinonychus_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceFanTrace
struct ADeinonychus_Character_BP_C_UberpounceFanTrace_Params
{
	TArray<float>                                      FanAngles;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUberpounceData                             ResultData;                                               // (Parm, OutParm)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnError
struct ADeinonychus_Character_BP_C_OnError_Params
{
	class FString                                      Msg;                                                      // (Parm, ZeroConstructor)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ComputeBufferedUberpounce
struct ADeinonychus_Character_BP_C_ComputeBufferedUberpounce_Params
{
	struct FUberpounceData                             CurrentUberpounceData;                                    // (Parm)
	struct FVector                                     PreviousUberpounceStartLocation;                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUberpounceData                             ResultData;                                               // (Parm, OutParm)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOnDinoCheat
struct ADeinonychus_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsUberpounceDataNearlyEqual
struct ADeinonychus_Character_BP_C_IsUberpounceDataNearlyEqual_Params
{
	struct FUberpounceData                             L;                                                        // (Parm)
	struct FUberpounceData                             R;                                                        // (Parm)
	float                                              FloatErrorTolerance;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.RidingTick
struct ADeinonychus_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct ADeinonychus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanJumpInternal
struct ADeinonychus_Character_BP_C_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_OnJumpReleased
struct ADeinonychus_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnLanded
struct ADeinonychus_Character_BP_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C. Uberpounce Trace
struct ADeinonychus_Character_BP_C__Uberpounce_Trace_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InClosestTargetDistance;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TraceForLocations;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DeinonychusLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DeinonychusRotation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DebugMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      TraceRadii;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               CheckDinoDotProduct;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DotProductCompareVector;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DotProductThreshold;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DotProductLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TraceForCharacters;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUberpounceData                             Result;                                                   // (Parm, OutParm)
	bool                                               RetFoundTarget;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               RetTargetOutOfRange;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RetClosestTargetDistance;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                RetFoundIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintDrawFloatingHUD
struct ADeinonychus_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetCurrentSocketLevel
struct ADeinonychus_Character_BP_C_GetCurrentSocketLevel_Params
{
	class APrimalCharacter*                            forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutLevel;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Socket Level
struct ADeinonychus_Character_BP_C_Get_Socket_Level_Params
{
	class FString                                      SocketName;                                               // (Parm, ZeroConstructor)
	int                                                OutLevel;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.EnableTurnToFaceRotation
struct ADeinonychus_Character_BP_C_EnableTurnToFaceRotation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.FindScreenEdgeLocation
struct ADeinonychus_Character_BP_C_FindScreenEdgeLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EdgeMarginPct;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetBleed HUDData for Character
struct ADeinonychus_Character_BP_C_GetBleed_HUDData_for_Character_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   WorldLocToScreenLoc;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenLoc;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ProgressBar;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      RetBuffCountString;                                       // (Parm, OutParm, ZeroConstructor)
	class FString                                      DinoName;                                                 // (Parm, OutParm, ZeroConstructor)
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPDrawToRiderHUD
struct ADeinonychus_Character_BP_C_BPDrawToRiderHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.RemoveBleed
struct ADeinonychus_Character_BP_C_RemoveBleed_Params
{
	class APrimalCharacter*                            Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AddBleed
struct ADeinonychus_Character_BP_C_AddBleed_Params
{
	class APrimalCharacter*                            Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetDebugString
struct ADeinonychus_Character_BP_C_GetDebugString_Params
{
	class FString                                      Output;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get RotationAndLocation for UberpounceOnSurface
struct ADeinonychus_Character_BP_C_Get_RotationAndLocation_for_UberpounceOnSurface_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     surfaceNormal;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DeinonychusLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    retRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     retLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidGeoLocationForUberpounce
struct ADeinonychus_Character_BP_C_IsValidGeoLocationForUberpounce_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     surfaceNormal;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DeinonychusLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DeinonychusRotation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsGround;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptTurnInput
struct ADeinonychus_Character_BP_C_BP_InterceptTurnInput_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsUberpounceActive
struct ADeinonychus_Character_BP_C_IsUberpounceActive_Params
{
	bool                                               Active;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOverrideCameraViewTarget
struct ADeinonychus_Character_BP_C_BPOverrideCameraViewTarget_Params
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

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceTransform
struct ADeinonychus_Character_BP_C_GetUberpounceTransform_Params
{
	struct FUberpounceData                             UberpounceData;                                           // (Parm)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsGroundSurface;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateAttachedUberpounceFn
struct ADeinonychus_Character_BP_C_UpdateAttachedUberpounceFn_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetUberpounceCollision
struct ADeinonychus_Character_BP_C_SetUberpounceCollision_Params
{
	bool                                               UberpounceActive;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.DebugDrawRotator
struct ADeinonychus_Character_BP_C_DebugDrawRotator_Params
{
	struct FRotator                                    Rotator;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location_;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thinkness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceRotationFromSocket
struct ADeinonychus_Character_BP_C_GetUberpounceRotationFromSocket_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StopUberpounceTargeting
struct ADeinonychus_Character_BP_C_StopUberpounceTargeting_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPNotifyClearRider
struct ADeinonychus_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPGetHUDElements
struct ADeinonychus_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.EndUberpounce
struct ADeinonychus_Character_BP_C_EndUberpounce_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                MontageToPlayOnNonZeroVelocity;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptMoveForward
struct ADeinonychus_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptMoveRight
struct ADeinonychus_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberpounceFn
struct ADeinonychus_Character_BP_C_UpdateUberpounceFn_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartUberPounce
struct ADeinonychus_Character_BP_C_StartUberPounce_Params
{
	struct FUberpounceData                             Data;                                                     // (Parm)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Find BestUberpounce Socket on Character
struct ADeinonychus_Character_BP_C_Find_BestUberpounce_Socket_on_Character_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndTrace;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentClosestSocketDistance;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewClosestSocketDistance;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RetTargetSocket;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              RetTargetMesh;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               RetFoundSocket;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RetTargetRotation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberPounceTargetingFn
struct ADeinonychus_Character_BP_C_UpdateUberPounceTargetingFn_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPNotifySetRider
struct ADeinonychus_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TryStartUberPounceTargeting
struct ADeinonychus_Character_BP_C_TryStartUberPounceTargeting_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintCanAttack
struct ADeinonychus_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintCanRiderAttack
struct ADeinonychus_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ADeinonychus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UserConstructionScript
struct ADeinonychus_Character_BP_C_UserConstructionScript_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_357
struct ADeinonychus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_357_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_356
struct ADeinonychus_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_356_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberPounceTargeting
struct ADeinonychus_Character_BP_C_UpdateUberPounceTargeting_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberpounce
struct ADeinonychus_Character_BP_C_UpdateUberpounce_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerEndUberpounce
struct ADeinonychus_Character_BP_C_ServerEndUberpounce_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                MontageToPlayOnNonZeroVelocity;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateAttachedUberpounce
struct ADeinonychus_Character_BP_C_UpdateAttachedUberpounce_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestUberpounce
struct ADeinonychus_Character_BP_C_ServerRequestUberpounce_Params
{
	struct FUberpounceData                             QueuedUberpounceData;                                     // (Parm)
	bool                                               QuickUberpounce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiEndUberpounce
struct ADeinonychus_Character_BP_C_MultiEndUberpounce_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                MontageToPlayOnNonZeroVelocity;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.JumpPressedAndHeld
struct ADeinonychus_Character_BP_C_JumpPressedAndHeld_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestPounce
struct ADeinonychus_Character_BP_C_ServerRequestPounce_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ClearPounceEvent
struct ADeinonychus_Character_BP_C_ClearPounceEvent_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestJump
struct ADeinonychus_Character_BP_C_ServerRequestJump_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiRequestJump
struct ADeinonychus_Character_BP_C_MultiRequestJump_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiSetLocation
struct ADeinonychus_Character_BP_C_MultiSetLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiUpdateCurrentDataLocation
struct ADeinonychus_Character_BP_C_MultiUpdateCurrentDataLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUberpounceState>                      VerifiedState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerStartUberpounceFromFalling
struct ADeinonychus_Character_BP_C_ServerStartUberpounceFromFalling_Params
{
	struct FUberpounceData                             Data;                                                     // (Parm)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiStartUberpounceFromFalling
struct ADeinonychus_Character_BP_C_MultiStartUberpounceFromFalling_Params
{
	struct FUberpounceData                             Data;                                                     // (Parm)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.QueuedUberpounce
struct ADeinonychus_Character_BP_C_QueuedUberpounce_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ReceiveBeginPlay
struct ADeinonychus_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartCheckingForFallingLatch
struct ADeinonychus_Character_BP_C_StartCheckingForFallingLatch_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestLatchedAutoJump
struct ADeinonychus_Character_BP_C_ServerRequestLatchedAutoJump_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CheckForFallingLatch
struct ADeinonychus_Character_BP_C_CheckForFallingLatch_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestLatchedJump
struct ADeinonychus_Character_BP_C_ServerRequestLatchedJump_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiOnPounceStarted
struct ADeinonychus_Character_BP_C_MultiOnPounceStarted_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerEndPouncing
struct ADeinonychus_Character_BP_C_ServerEndPouncing_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MULTI_ApplyAtCliffTopVelocity
struct ADeinonychus_Character_BP_C_MULTI_ApplyAtCliffTopVelocity_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MULTI_TargetDodgedUberPounce
struct ADeinonychus_Character_BP_C_MULTI_TargetDodgedUberPounce_Params
{
	struct FVector                                     newTargetLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewTargetRotation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            oldTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPUnstasis
struct ADeinonychus_Character_BP_C_BPUnstasis_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MULTI_SetLocation
struct ADeinonychus_Character_BP_C_MULTI_SetLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceDesyncDetected
struct ADeinonychus_Character_BP_C_UberpounceDesyncDetected_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerSetLocDuringLatchedJump
struct ADeinonychus_Character_BP_C_ServerSetLocDuringLatchedJump_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Client_CallServerMulticast_JumpFX
struct ADeinonychus_Character_BP_C_Client_CallServerMulticast_JumpFX_Params
{
	class UParticleSystem*                             FX_to_Spawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Attach_Point_Names;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Multicast_JumpFX
struct ADeinonychus_Character_BP_C_Multicast_JumpFX_Params
{
	class UParticleSystem*                             FX_to_Spawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Attach_Point_Names;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SpawnLocalClinetSuperJumpFX
struct ADeinonychus_Character_BP_C_SpawnLocalClinetSuperJumpFX_Params
{
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ExecuteUbergraph_Deinonychus_Character_BP
struct ADeinonychus_Character_BP_C_ExecuteUbergraph_Deinonychus_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.NewEventDispatcher__DelegateSignature
struct ADeinonychus_Character_BP_C_NewEventDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
