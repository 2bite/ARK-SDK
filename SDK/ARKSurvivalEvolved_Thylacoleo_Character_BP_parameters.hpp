#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Thylacoleo_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPCharacterDetach
struct AThylacoleo_Character_BP_C_BPCharacterDetach_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanThylacoCarryCharacter
struct AThylacoleo_Character_BP_C_CanThylacoCarryCharacter_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanClimbOutOfWater
struct AThylacoleo_Character_BP_C_CanClimbOutOfWater_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Set IK_Active
struct AThylacoleo_Character_BP_C_Set_IK_Active_Params
{
	bool                                               newActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsNormalClimbable
struct AThylacoleo_Character_BP_C_IsNormalClimbable_Params
{
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPAdjustDamage
struct AThylacoleo_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReduceThylacoStamina
struct AThylacoleo_Character_BP_C_ReduceThylacoStamina_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.DisplayMessage
struct AThylacoleo_Character_BP_C_DisplayMessage_Params
{
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.HasEnoughStaminaToClimb
struct AThylacoleo_Character_BP_C_HasEnoughStaminaToClimb_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Is Thylaco Climbing Down
struct AThylacoleo_Character_BP_C_Is_Thylaco_Climbing_Down_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsThylacoClimbing_Up
struct AThylacoleo_Character_BP_C_IsThylacoClimbing_Up_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsThylacoClimbing
struct AThylacoleo_Character_BP_C_IsThylacoClimbing_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReduceStaminaOverTime
struct AThylacoleo_Character_BP_C_ReduceStaminaOverTime_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ManualPlayLandAnim
struct AThylacoleo_Character_BP_C_ManualPlayLandAnim_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPOnMovementModeChangedNotify
struct AThylacoleo_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CalcThylacoPounceDir
struct AThylacoleo_Character_BP_C_CalcThylacoPounceDir_Params
{
	struct FVector                                     pounceDir;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.HardSetThylacoRotationButInterpMeshLocation
struct AThylacoleo_Character_BP_C_HardSetThylacoRotationButInterpMeshLocation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateIsAttachingToWall
struct AThylacoleo_Character_BP_C_UpdateIsAttachingToWall_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CleanUpClimbingAnims
struct AThylacoleo_Character_BP_C_CleanUpClimbingAnims_Params
{
	bool                                               animsClean;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetShouldRestoreToLatched
struct AThylacoleo_Character_BP_C_SetShouldRestoreToLatched_Params
{
	bool                                               newVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Set ThylacoRotationAnd Interp Mesh
struct AThylacoleo_Character_BP_C_Set_ThylacoRotationAnd_Interp_Mesh_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.WallJump
struct AThylacoleo_Character_BP_C_WallJump_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InterpolateMesh
struct AThylacoleo_Character_BP_C_InterpolateMesh_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPShouldForceFlee
struct AThylacoleo_Character_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckForPounceOnTarget
struct AThylacoleo_Character_BP_C_CheckForPounceOnTarget_Params
{
	bool                                               shouldPounce;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateThylacoAnims
struct AThylacoleo_Character_BP_C_UpdateThylacoAnims_Params
{
	bool                                               ensureAnimsPlaying;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetUse Aim Offsets
struct AThylacoleo_Character_BP_C_SetUse_Aim_Offsets_Params
{
	bool                                               newUse;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPModifyAimOffsetTargetLocation
struct AThylacoleo_Character_BP_C_BPModifyAimOffsetTargetLocation_Params
{
	struct FVector                                     AimTargetLocation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetWallAttachImpulse
struct AThylacoleo_Character_BP_C_GetWallAttachImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReceiveAnyDamage
struct AThylacoleo_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco
struct AThylacoleo_Character_BP_C_InitThylaco_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPUnstasis
struct AThylacoleo_Character_BP_C_BPUnstasis_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Check for Ai Attach to Tree
struct AThylacoleo_Character_BP_C_Check_for_Ai_Attach_to_Tree_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Client_SetClimbingState
struct AThylacoleo_Character_BP_C_Client_SetClimbingState_Params
{
	TEnumAsByte<E_PredatorClimbingState>               NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Is DinoAbove Ground
struct AThylacoleo_Character_BP_C_Is_DinoAbove_Ground_Params
{
	float                                              CheckDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateJumpingAnim
struct AThylacoleo_Character_BP_C_UpdateJumpingAnim_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetAI_LatchedToTree
struct AThylacoleo_Character_BP_C_SetAI_LatchedToTree_Params
{
	bool                                               newVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Get Thylaco Ai Controller
struct AThylacoleo_Character_BP_C_Get_Thylaco_Ai_Controller_Params
{
	class AThylacoleo_AIController_BP_C*               ref;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTryMultiUse
struct AThylacoleo_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPGetMultiUseEntries
struct AThylacoleo_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.AiDropFromTree
struct AThylacoleo_Character_BP_C_AiDropFromTree_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsLatched
struct AThylacoleo_Character_BP_C_IsLatched_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsLatching
struct AThylacoleo_Character_BP_C_IsLatching_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetCorrectLatchingAnim
struct AThylacoleo_Character_BP_C_GetCorrectLatchingAnim_Params
{
	class UAnimMontage*                                animRef;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPNotifyClearRider
struct AThylacoleo_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPNotifySetRider
struct AThylacoleo_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTimerNonDedicated
struct AThylacoleo_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.RemoveCarryBuffFromPrey
struct AThylacoleo_Character_BP_C_RemoveCarryBuffFromPrey_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReleasePrey
struct AThylacoleo_Character_BP_C_ReleasePrey_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BlueprintCanAttack
struct AThylacoleo_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsMaulingValidCharacter
struct AThylacoleo_Character_BP_C_IsMaulingValidCharacter_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanPounce
struct AThylacoleo_Character_BP_C_CanPounce_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.OnRep_currentClimbableSurfaceNormal
struct AThylacoleo_Character_BP_C_OnRep_currentClimbableSurfaceNormal_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateThylacoTransforms
struct AThylacoleo_Character_BP_C_UpdateThylacoTransforms_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetDesiredDirection
struct AThylacoleo_Character_BP_C_GetDesiredDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Stop
struct AThylacoleo_Character_BP_C_Pounce_Stop_Params
{
	class APrimalCharacter*                            HitTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanKeepPouncing
struct AThylacoleo_Character_BP_C_CanKeepPouncing_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Tick
struct AThylacoleo_Character_BP_C_Pounce_Tick_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Start
struct AThylacoleo_Character_BP_C_Pounce_Start_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BlueprintCanRiderAttack
struct AThylacoleo_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetDefaultDino
struct AThylacoleo_Character_BP_C_GetDefaultDino_Params
{
	class AThylacoleo_Character_BP_C*                  ref;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsDinoGrounded
struct AThylacoleo_Character_BP_C_IsDinoGrounded_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckForClimbableSurface
struct AThylacoleo_Character_BP_C_CheckForClimbableSurface_Params
{
	struct FVector                                     checkDir;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              checkDist;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.OnRep_CurrentClimbingState
struct AThylacoleo_Character_BP_C_OnRep_CurrentClimbingState_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.NetSetClimbingState
struct AThylacoleo_Character_BP_C_NetSetClimbingState_Params
{
	TEnumAsByte<E_PredatorClimbingState>               NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTimerServer
struct AThylacoleo_Character_BP_C_BPTimerServer_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UserConstructionScript
struct AThylacoleo_Character_BP_C_UserConstructionScript_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_JumpPressed
struct AThylacoleo_Character_BP_C_Server_JumpPressed_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_JumpReleased
struct AThylacoleo_Character_BP_C_Server_JumpReleased_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReceiveBeginPlay
struct AThylacoleo_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.AnimNotify_MaulPrey
struct AThylacoleo_Character_BP_C_AnimNotify_MaulPrey_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_NetSetClimbingState
struct AThylacoleo_Character_BP_C_Server_NetSetClimbingState_Params
{
	TEnumAsByte<E_PredatorClimbingState>               NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetReadyToClimbAfterDelay
struct AThylacoleo_Character_BP_C_SetReadyToClimbAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckUntil_SetAiLatchedToTree
struct AThylacoleo_Character_BP_C_CheckUntil_SetAiLatchedToTree_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnsureCorrectAnimsPlayingAfterDelay
struct AThylacoleo_Character_BP_C_EnsureCorrectAnimsPlayingAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.PlayAttachParticleWhenCloseToWall
struct AThylacoleo_Character_BP_C_PlayAttachParticleWhenCloseToWall_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnableClimbingAnimsAfterAttachDelay
struct AThylacoleo_Character_BP_C_EnableClimbingAnimsAfterAttachDelay_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SyncGravityForPounceFall
struct AThylacoleo_Character_BP_C_SyncGravityForPounceFall_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnsureLatchedAnimPlays
struct AThylacoleo_Character_BP_C_EnsureLatchedAnimPlays_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckUntil_MaulingValidCharacter
struct AThylacoleo_Character_BP_C_CheckUntil_MaulingValidCharacter_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.PreventLandingAnimBriefly
struct AThylacoleo_Character_BP_C_PreventLandingAnimBriefly_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckOnJumpStateAfterJumpDelay
struct AThylacoleo_Character_BP_C_CheckOnJumpStateAfterJumpDelay_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BP_OnJumpPressed
struct AThylacoleo_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BP_OnJumpReleased
struct AThylacoleo_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco_NextTick
struct AThylacoleo_Character_BP_C_InitThylaco_NextTick_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco_Now
struct AThylacoleo_Character_BP_C_InitThylaco_Now_Params
{
};

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ExecuteUbergraph_Thylacoleo_Character_BP
struct AThylacoleo_Character_BP_C_ExecuteUbergraph_Thylacoleo_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
