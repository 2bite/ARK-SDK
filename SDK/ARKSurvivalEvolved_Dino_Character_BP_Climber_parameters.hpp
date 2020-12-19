#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_Climber_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnClimberFinishedAttaching
struct ADino_Character_BP_Climber_C_OnClimberFinishedAttaching_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimbingTraceHitResultValid
struct ADino_Character_BP_Climber_C_IsClimbingTraceHitResultValid_Params
{
	bool                                               bValidHit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
	struct FVector                                     TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                traceIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TraceRetryNum;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberOverrideRetriedTraceResult
struct ADino_Character_BP_Climber_C_CanClimberOverrideRetriedTraceResult_Params
{
	struct FHitResult                                  WithHit;                                                  // (Parm, OutParm, ReferenceParm)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AdjustClimbTraceTransform
struct ADino_Character_BP_Climber_C_AdjustClimbTraceTransform_Params
{
	struct FName                                       WithSocketName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct UObject_FTransform                          WithTraceTransform;                                       // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct UObject_FTransform                          climberTransform;                                         // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct UObject_FTransform                          AdjustedTransform;                                        // (Parm, OutParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Tick_SimulateSeekingBetweenFrames
struct ADino_Character_BP_Climber_C_Tick_SimulateSeekingBetweenFrames_Params
{
	bool                                               bFoundSurface;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearCachedServerClimberMoveData
struct ADino_Character_BP_Climber_C_ClearCachedServerClimberMoveData_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CacheServerClimberMoveData
struct ADino_Character_BP_Climber_C_CacheServerClimberMoveData_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Tick_SimulateClimbingBetweenFrames
struct ADino_Character_BP_Climber_C_Tick_SimulateClimbingBetweenFrames_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnWalkableGroundFoundWhileClimbing
struct ADino_Character_BP_Climber_C_OnWalkableGroundFoundWhileClimbing_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetDesiredMoveDirection
struct ADino_Character_BP_Climber_C_GetDesiredMoveDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Surface Trace Offset Use Trace Map Override
struct ADino_Character_BP_Climber_C_Get_Correct_Surface_Trace_Offset_Use_Trace_Map_Override_Params
{
	TArray<bool>                                       UseTraceMap;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeightOverride
struct ADino_Character_BP_Climber_C_GetCorrectClimbingTraceWeightOverride_Params
{
	bool                                               UseResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimerByClimberStateOverride
struct ADino_Character_BP_Climber_C_ClimberUpdateServerTimerByClimberStateOverride_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Calc Current Climbing Velocity Override State
struct ADino_Character_BP_Climber_C_Calc_Current_Climbing_Velocity_Override_State_Params
{
	struct FVector                                     CurrentVelocity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldOverrideVelocity;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AllowMovementWhileClimbing
struct ADino_Character_BP_Climber_C_Climber_AllowMovementWhileClimbing_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberDetaching_Pure
struct ADino_Character_BP_Climber_C_IsClimberDetaching_Pure_Params
{
	bool                                               checkPrevious;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberCanEverJump_Pure
struct ADino_Character_BP_Climber_C_ClimberCanEverJump_Pure_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_CanEverJump
struct ADino_Character_BP_Climber_C_Climber_CanEverJump_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnJumped
struct ADino_Character_BP_Climber_C_OnJumped_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.NetSync_ClimberIsJumping
struct ADino_Character_BP_Climber_C_NetSync_ClimberIsJumping_Params
{
	bool                                               newVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnPostNetReplication
struct ADino_Character_BP_Climber_C_BP_OnPostNetReplication_Params
{
	struct FVector*                                    ReplicatedLoc;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   ReplicatedRot;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnPreventStopServerTick
struct ADino_Character_BP_Climber_C_Climber_AI_OnPreventStopServerTick_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanStopServerTick
struct ADino_Character_BP_Climber_C_Climber_AI_CanStopServerTick_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberLockInputsWhileAttached
struct ADino_Character_BP_Climber_C_ShouldClimberLockInputsWhileAttached_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_ClimbingCanAttack
struct ADino_Character_BP_Climber_C_Climber_AI_ClimbingCanAttack_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnFlee
struct ADino_Character_BP_Climber_C_Climber_AI_OnFlee_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CheckForAttackWhileClimbing
struct ADino_Character_BP_Climber_C_Climber_AI_CheckForAttackWhileClimbing_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOnStartJump
struct ADino_Character_BP_Climber_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnRunReleased
struct ADino_Character_BP_Climber_C_Climber_OnRunReleased_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnRunPressed
struct ADino_Character_BP_Climber_C_Climber_OnRunPressed_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterUnsleeped
struct ADino_Character_BP_Climber_C_BPCharacterUnsleeped_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterSleeped
struct ADino_Character_BP_Climber_C_BPCharacterSleeped_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberAI_UpdateHasTargetWhileClimbing
struct ADino_Character_BP_Climber_C_ClimberAI_UpdateHasTargetWhileClimbing_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberPlayingPreventInputAnim
struct ADino_Character_BP_Climber_C_IsClimberPlayingPreventInputAnim_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnSetDeath
struct ADino_Character_BP_Climber_C_BP_OnSetDeath_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberInClimbingStateRange
struct ADino_Character_BP_Climber_C_IsClimberInClimbingStateRange_Params
{
	TEnumAsByte<E_DinoClimberState>                    startState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_DinoClimberState>                    EndState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               checkPrevious;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOrderedMoveToLoc
struct ADino_Character_BP_Climber_C_BPOrderedMoveToLoc_Params
{
	struct FVector                                     DestLoc;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_IsCharacterHardAttached
struct ADino_Character_BP_Climber_C_BP_IsCharacterHardAttached_Params
{
	bool*                                              bIgnoreRiding;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIgnoreCarried;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterDetach
struct ADino_Character_BP_Climber_C_BPCharacterDetach_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberNearWaterSurface
struct ADino_Character_BP_Climber_C_IsClimberNearWaterSurface_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbing_Pure
struct ADino_Character_BP_Climber_C_IsClimberClimbing_Pure_Params
{
	bool                                               isFinishedAttaching;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               includeSeeking__when_above_false_;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               includeDetaching;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               checkPrevious;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectWallJumpAnim
struct ADino_Character_BP_Climber_C_GetCorrectWallJumpAnim_Params
{
	struct FVector                                     wallJumpVelocity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Anim;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldUseTraceHitForClimbingMovement
struct ADino_Character_BP_Climber_C_ShouldUseTraceHitForClimbingMovement_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberCheckNewClimbingRotation
struct ADino_Character_BP_Climber_C_ShouldClimberCheckNewClimbingRotation_Params
{
	struct FRotator                                    climbingRotation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberMovingOnSurface_Pure
struct ADino_Character_BP_Climber_C_IsClimberMovingOnSurface_Pure_Params
{
	bool                                               checkPrevious;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSoftSetRotation
struct ADino_Character_BP_Climber_C_CanClimberSoftSetRotation_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertClimberSpaceVectorToWorld_Pure
struct ADino_Character_BP_Climber_C_ConvertClimberSpaceVectorToWorld_Pure_Params
{
	struct FVector                                     climberSpaceVector;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldVector;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertClimberSpaceVectorToWorld
struct ADino_Character_BP_Climber_C_ConvertClimberSpaceVectorToWorld_Params
{
	struct FVector                                     climberSpaceVector;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldVector;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertVectorToWorld_Pure
struct ADino_Character_BP_Climber_C_ConvertVectorToWorld_Pure_Params
{
	struct FVector                                     localVector;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldVector;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToWorld_Pure
struct ADino_Character_BP_Climber_C_ConvertRotatorToWorld_Pure_Params
{
	struct FRotator                                    localRotator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    worldRotator;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToWorld
struct ADino_Character_BP_Climber_C_ConvertRotatorToWorld_Params
{
	struct FRotator                                    localRotator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    worldRotator;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertVectorToWorld
struct ADino_Character_BP_Climber_C_ConvertVectorToWorld_Params
{
	struct FVector                                     localVector;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldVector;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimer
struct ADino_Character_BP_Climber_C_ClimberUpdateServerTimer_Params
{
	float                                              newMin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              newMAX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberFalling_Pure
struct ADino_Character_BP_Climber_C_IsClimberFalling_Pure_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberFalling
struct ADino_Character_BP_Climber_C_IsClimberFalling_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_TraceForMoveNormal
struct ADino_Character_BP_Climber_C_Climber_TraceForMoveNormal_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               foundHit;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     newMoveNormal;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberRestoreToSeeking
struct ADino_Character_BP_Climber_C_CanClimberRestoreToSeeking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanWanderOntoWalls
struct ADino_Character_BP_Climber_C_Climber_AI_CanWanderOntoWalls_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_SetNewBlendspaceAxes
struct ADino_Character_BP_Climber_C_ClimbingIK_SetNewBlendspaceAxes_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Box
struct ADino_Character_BP_Climber_C_DebugClimber_NetDrawDebug_Box_Params
{
	struct FVector                                     Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               allowDraw;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forceDebug;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               preventReplication;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Sphere
struct ADino_Character_BP_Climber_C_DebugClimber_NetDrawDebug_Sphere_Params
{
	struct FVector                                     Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Segments;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               allowDraw;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forceDebug;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               preventReplication;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimerByClimberState
struct ADino_Character_BP_Climber_C_ClimberUpdateServerTimerByClimberState_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanStopAttachedServerTick
struct ADino_Character_BP_Climber_C_Climber_AI_CanStopAttachedServerTick_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_ClimbWandering_Duration
struct ADino_Character_BP_Climber_C_Climber_AI_Update_ClimbWandering_Duration_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanUpdateClimbWandering
struct ADino_Character_BP_Climber_C_Climber_AI_CanUpdateClimbWandering_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingClimber_AI
struct ADino_Character_BP_Climber_C_UpdateClimbingClimber_AI_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_IsClimbWandering
struct ADino_Character_BP_Climber_C_Climber_AI_Update_IsClimbWandering_Params
{
	bool                                               forceStartWandering;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_ClimbWander_TargetRotation
struct ADino_Character_BP_Climber_C_Climber_AI_Update_ClimbWander_TargetRotation_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToLocal
struct ADino_Character_BP_Climber_C_ConvertRotatorToLocal_Params
{
	struct FRotator                                    Rotator;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    localRotator;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_UpdateMeshBendDotProducts
struct ADino_Character_BP_Climber_C_ClimbingIK_UpdateMeshBendDotProducts_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanWanderWhileClimbing
struct ADino_Character_BP_Climber_C_Climber_AI_CanWanderWhileClimbing_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceMaxRetryCount_Pure
struct ADino_Character_BP_Climber_C_GetCorrectClimbingTraceMaxRetryCount_Pure_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceMaxRetryCount
struct ADino_Character_BP_Climber_C_GetCorrectClimbingTraceMaxRetryCount_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceType_Pure
struct ADino_Character_BP_Climber_C_GetCorrectClimbingTraceType_Pure_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_DinoClimber_TraceType>               Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceType
struct ADino_Character_BP_Climber_C_GetCorrectClimbingTraceType_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_DinoClimber_TraceType>               Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectLookLockDot_Pure
struct ADino_Character_BP_Climber_C_GetCorrectLookLockDot_Pure_Params
{
	int                                                traceIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dot;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectLookLockDot
struct ADino_Character_BP_Climber_C_GetCorrectLookLockDot_Params
{
	int                                                traceIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dot;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeight_Pure
struct ADino_Character_BP_Climber_C_GetCorrectClimbingTraceWeight_Pure_Params
{
	int                                                traceIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isForReplace;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeight
struct ADino_Character_BP_Climber_C_GetCorrectClimbingTraceWeight_Params
{
	int                                                traceIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isForReplace;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Should Climber Use Climbing Trace Hit
struct ADino_Character_BP_Climber_C_Should_Climber_Use_Climbing_Trace_Hit_Params
{
	int                                                traceIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberRetryClimbingTrace
struct ADino_Character_BP_Climber_C_CanClimberRetryClimbingTrace_Params
{
	int                                                traceIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ProcessResultsOfClimbingTraces
struct ADino_Character_BP_Climber_C_ProcessResultsOfClimbingTraces_Params
{
	int                                                numValidTraceHits;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        traceIndecesArray;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               requireAllTraceHitsValid;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                numTraceSockets;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct UObject_FTransform                          currentClimberTransform;                                  // (Parm, IsPlainOldData)
	TArray<bool>                                       traceHitsArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             traceHitLocationsArray;                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             traceNormalsArray;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               centerTraceHit;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     desiredSurfaceLocation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isSurfaceValid;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SurfaceLocation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SurfaceNormal;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SurfaceLocation_Move;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     surfaceNormal_Move;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CenterSphereTraceForSurfaceLocation
struct ADino_Character_BP_Climber_C_CenterSphereTraceForSurfaceLocation_Params
{
	struct UObject_FTransform                          currTransform;                                            // (Parm, IsPlainOldData)
	bool                                               foundSurface;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SurfaceLocation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.TraceForClimbableSurface
struct ADino_Character_BP_Climber_C_TraceForClimbableSurface_Params
{
	TArray<struct UObject_FTransform>                  traceSocketOffsetTransforms;                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct UObject_FTransform                          climberTransform;                                         // (Parm, IsPlainOldData)
	float                                              TraceLength;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               preventTraceRetries;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        currSurfaceTraceIndecesArray;                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               foundAnyValidTraceHits;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                numValidTraceHits;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       validTraceHits;                                           // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             traceHitLocations;                                        // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             traceHitNormals;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToLocal_Pure
struct ADino_Character_BP_Climber_C_ConvertRotatorToLocal_Pure_Params
{
	struct FRotator                                    Rotator;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    localRotator;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_TraceForNewSurfaceNormals
struct ADino_Character_BP_Climber_C_ClimbingIK_TraceForNewSurfaceNormals_Params
{
	class FString                                      socketGroupSubstring;                                     // (Parm, ZeroConstructor)
	float                                              dot;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_UpdateMeshHeightOffset
struct ADino_Character_BP_Climber_C_ClimbingIK_UpdateMeshHeightOffset_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingIK
struct ADino_Character_BP_Climber_C_UpdateClimbingIK_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberDesiredWallJumpDir
struct ADino_Character_BP_Climber_C_GetClimberDesiredWallJumpDir_Params
{
	struct FVector                                     desiredDir;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnStartSeeking
struct ADino_Character_BP_Climber_C_OnStartSeeking_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveHit
struct ADino_Character_BP_Climber_C_ReceiveHit_Params
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

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BlueprintAnimNotifyCustomEvent
struct ADino_Character_BP_Climber_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.On ClimberAttached
struct ADino_Character_BP_Climber_C_On_ClimberAttached_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_PlayCameraShake_Client
struct ADino_Character_BP_Climber_C_Climber_PlayCameraShake_Client_Params
{
	class UClass*                                      Shake;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnZoomOut
struct ADino_Character_BP_Climber_C_BP_OnZoomOut_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnZoomIn
struct ADino_Character_BP_Climber_C_BP_OnZoomIn_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Average Max Delta with Rotator Array
struct ADino_Character_BP_Climber_C_Get_Average_Max_Delta_with_Rotator_Array_Params
{
	TArray<struct FRotator>                            Array;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FRotator                                    Rotator;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              averageDelta;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get AverageMeanDelta with Rotator Array
struct ADino_Character_BP_Climber_C_Get_AverageMeanDelta_with_Rotator_Array_Params
{
	TArray<struct FRotator>                            Array;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FRotator                                    Rotator;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              averageDelta;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetMaxDeltaBetweenRotators
struct ADino_Character_BP_Climber_C_GetMaxDeltaBetweenRotators_Params
{
	struct FRotator                                    A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetAverageDeltaBetweenRotators
struct ADino_Character_BP_Climber_C_GetAverageDeltaBetweenRotators_Params
{
	struct FRotator                                    A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AddRiderToFinalCameraRotationArrays
struct ADino_Character_BP_Climber_C_AddRiderToFinalCameraRotationArrays_Params
{
	class AShooterCharacter*                           RiderToAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DetermineNewRiderFinalCameraRotationIndex
struct ADino_Character_BP_Climber_C_DetermineNewRiderFinalCameraRotationIndex_Params
{
	class AShooterCharacter*                           theRider;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RemoveRiderFromFinalCameraRotationArrays
struct ADino_Character_BP_Climber_C_RemoveRiderFromFinalCameraRotationArrays_Params
{
	class AShooterCharacter*                           RiderToRemove;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDirDotToClimbingNormal_Pure
struct ADino_Character_BP_Climber_C_GetClimberLookDirDotToClimbingNormal_Pure_Params
{
	float                                              dot;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDirDotToClimbingNormal
struct ADino_Character_BP_Climber_C_GetClimberLookDirDotToClimbingNormal_Params
{
	float                                              dot;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberUpVector_Pure
struct ADino_Character_BP_Climber_C_GetClimberUpVector_Pure_Params
{
	struct FVector                                     Up;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentRiderFinalCameraRotationArrayIndex
struct ADino_Character_BP_Climber_C_GetCurrentRiderFinalCameraRotationArrayIndex_Params
{
	class AShooterCharacter*                           thisRider;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Riding Players Final Camera Rotations
struct ADino_Character_BP_Climber_C_Update_Riding_Players_Final_Camera_Rotations_Params
{
	bool                                               StartedClimbing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPDoAttack
struct ADino_Character_BP_Climber_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanNonControlledClimberNotClimbingOverrideTransformInterpolation
struct ADino_Character_BP_Climber_C_CanNonControlledClimberNotClimbingOverrideTransformInterpolation_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberStopNonDediTick_NonControlled
struct ADino_Character_BP_Climber_C_CanClimberStopNonDediTick_NonControlled_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Jump_Released
struct ADino_Character_BP_Climber_C_Input_Jump_Released_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Jump_Pressed
struct ADino_Character_BP_Climber_C_Input_Jump_Pressed_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanAttachOnSpawn
struct ADino_Character_BP_Climber_C_Climber_AI_CanAttachOnSpawn_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDir
struct ADino_Character_BP_Climber_C_GetClimberLookDir_Params
{
	struct FVector                                     lookDir;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsPrimalCharacterFriendly
struct ADino_Character_BP_Climber_C_IsPrimalCharacterFriendly_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Look Dir Dot to Normal
struct ADino_Character_BP_Climber_C_Get_Climber_Look_Dir_Dot_to_Normal_Params
{
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dot;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberViewLocation_Pure
struct ADino_Character_BP_Climber_C_GetClimberViewLocation_Pure_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberViewLocation
struct ADino_Character_BP_Climber_C_GetClimberViewLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSeek
struct ADino_Character_BP_Climber_C_CanClimberSeek_Params
{
	bool                                               isForStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbingSimple_Pure
struct ADino_Character_BP_Climber_C_IsClimberClimbingSimple_Pure_Params
{
	bool                                               excludeDetaching;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               checkPrev;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbing_Simple
struct ADino_Character_BP_Climber_C_IsClimberClimbing_Simple_Params
{
	bool                                               excludeDetaching;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               checkPrev;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberOn Server Run Released
struct ADino_Character_BP_Climber_C_ClimberOn_Server_Run_Released_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnServerRunPressed
struct ADino_Character_BP_Climber_C_Climber_OnServerRunPressed_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_UpdateClimberTarget FOV
struct ADino_Character_BP_Climber_C_ClientTick_UpdateClimberTarget_FOV_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberStopNonDediTick_Controlled
struct ADino_Character_BP_Climber_C_CanClimberStopNonDediTick_Controlled_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyFOV
struct ADino_Character_BP_Climber_C_BPModifyFOV_Params
{
	float*                                             FOVIn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.HasClimberResetTPVCamera
struct ADino_Character_BP_Climber_C_HasClimberResetTPVCamera_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Stop All Climber Logic
struct ADino_Character_BP_Climber_C_Stop_All_Climber_Logic_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingSurfaceNormalFromRotation
struct ADino_Character_BP_Climber_C_GetClimbingSurfaceNormalFromRotation_Params
{
	struct FRotator                                    climbingRotation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SurfaceNormal;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetAngleDeltaBetweenVectors
struct ADino_Character_BP_Climber_C_GetAngleDeltaBetweenVectors_Params
{
	struct FVector                                     VectorA;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorB;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AroundAxis;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              theta;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Rotate RotatorForwardVector to Target Constant
struct ADino_Character_BP_Climber_C_Rotate_RotatorForwardVector_to_Target_Constant_Params
{
	struct FRotator                                    currentRotator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     targetForward;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationRate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    newRotator;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RemoveAxisFromVector
struct ADino_Character_BP_Climber_C_RemoveAxisFromVector_Params
{
	struct FVector                                     Vector;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     newVector;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSwimming_Pure
struct ADino_Character_BP_Climber_C_IsClimberSwimming_Pure_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Finish Attaching
struct ADino_Character_BP_Climber_C_Can_Climber_Finish_Attaching_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Finish Skidding
struct ADino_Character_BP_Climber_C_Can_Climber_Finish_Skidding_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSkid
struct ADino_Character_BP_Climber_C_CanClimberSkid_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Flipping
struct ADino_Character_BP_Climber_C_ServerTick_Flipping_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DoesClimberHaveEnough Stamina Pure
struct ADino_Character_BP_Climber_C_DoesClimberHaveEnough_Stamina_Pure_Params
{
	float                                              needsStamina;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DoesClimberHave Enough Stamina
struct ADino_Character_BP_Climber_C_DoesClimberHave_Enough_Stamina_Params
{
	float                                              needsStamina;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberCallServerRunInputEvents
struct ADino_Character_BP_Climber_C_CanClimberCallServerRunInputEvents_Params
{
	bool                                               newRunPressed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Grounded_Pure
struct ADino_Character_BP_Climber_C_Is_Climber_Grounded_Pure_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Toggle
struct ADino_Character_BP_Climber_C_Input_Run_Toggle_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Released
struct ADino_Character_BP_Climber_C_Input_Run_Released_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Pressed
struct ADino_Character_BP_Climber_C_Input_Run_Pressed_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ResetShouldDrawCrosshair
struct ADino_Character_BP_Climber_C_ResetShouldDrawCrosshair_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber Check for ObstaclesInDir
struct ADino_Character_BP_Climber_C_Climber_Check_for_ObstaclesInDir_Params
{
	struct FVector                                     checkDir;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              checkTrace_Distance;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              checkTrace_Padding;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       checkTrace_Channel;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forceDebug;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NoObstacles;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  obstacleHit;                                              // (Parm, OutParm)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Line
struct ADino_Character_BP_Climber_C_DebugClimber_NetDrawDebug_Line_Params
{
	struct FVector                                     LineStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               allowDraw;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forceDebug;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               preventReplication;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Right Vector_Pure
struct ADino_Character_BP_Climber_C_Get_Climber_Right_Vector_Pure_Params
{
	struct FVector                                     Right;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Forward Vector_Pure
struct ADino_Character_BP_Climber_C_Get_Climber_Forward_Vector_Pure_Params
{
	struct FVector                                     Forward;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnWallJump
struct ADino_Character_BP_Climber_C_OnWallJump_Params
{
	struct FVector                                     wallJumpVelocity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanWallJump
struct ADino_Character_BP_Climber_C_CanWallJump_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_PreventMovementMode
struct ADino_Character_BP_Climber_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOverrideCharacterNewFallVelocity
struct ADino_Character_BP_Climber_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Current Climber LookRotation
struct ADino_Character_BP_Climber_C_Get_Current_Climber_LookRotation_Params
{
	bool                                               bIgnoreDeadzone;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    lookRot;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsRemoteClientClimber
struct ADino_Character_BP_Climber_C_IsRemoteClientClimber_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnSetTamedFollowTarget
struct ADino_Character_BP_Climber_C_Climber_AI_OnSetTamedFollowTarget_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AllowGrappling
struct ADino_Character_BP_Climber_C_AllowGrappling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnSetTarget
struct ADino_Character_BP_Climber_C_Climber_AI_OnSetTarget_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberStartSeeking
struct ADino_Character_BP_Climber_C_ClimberStartSeeking_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberStopSeeking
struct ADino_Character_BP_Climber_C_ClimberStopSeeking_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Set Climber IK_Active
struct ADino_Character_BP_Climber_C_Set_Climber_IK_Active_Params
{
	bool                                               newActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingIK_BlendspaceAxes_Back
struct ADino_Character_BP_Climber_C_GetClimbingIK_BlendspaceAxes_Back_Params
{
	struct FVector2D                                   axes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingIK_BlendspaceAxes_Front
struct ADino_Character_BP_Climber_C_GetClimbingIK_BlendspaceAxes_Front_Params
{
	struct FVector2D                                   axes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update NonDedi Climber Mesh
struct ADino_Character_BP_Climber_C_Update_NonDedi_Climber_Mesh_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPDesiredRotationIsLocalSpace
struct ADino_Character_BP_Climber_C_BPDesiredRotationIsLocalSpace_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberCheckForAboveWalkableGround
struct ADino_Character_BP_Climber_C_ClimberCheckForAboveWalkableGround_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyDesiredRotation
struct ADino_Character_BP_Climber_C_BPModifyDesiredRotation_Params
{
	struct FRotator                                    InDesiredRotation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OutDesiredRotation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPSetupTamed
struct ADino_Character_BP_Climber_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSeeking
struct ADino_Character_BP_Climber_C_IsClimberSeeking_Params
{
	bool                                               checkPrevious;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Did Climber Just Start or Stop Climbing
struct ADino_Character_BP_Climber_C_Did_Climber_Just_Start_or_Stop_Climbing_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSwimming
struct ADino_Character_BP_Climber_C_IsClimberSwimming_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ResetClimbingVars
struct ADino_Character_BP_Climber_C_ResetClimbingVars_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimber Inputs
struct ADino_Character_BP_Climber_C_UpdateClimber_Inputs_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsOwningClientClimber
struct ADino_Character_BP_Climber_C_IsOwningClientClimber_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Update ClimbingCamera Final Orientation
struct ADino_Character_BP_Climber_C_Can_Climber_Update_ClimbingCamera_Final_Orientation_Params
{
	class AShooterCharacter*                           viewingRider;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Update Climber TPV_Camera Offset
struct ADino_Character_BP_Climber_C_Can_Update_Climber_TPV_Camera_Offset_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Tick Update Climber TPV_Camera Offset
struct ADino_Character_BP_Climber_C_Client_Tick_Update_Climber_TPV_Camera_Offset_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateOwningClientIsClimbingBuff
struct ADino_Character_BP_Climber_C_UpdateOwningClientIsClimbingBuff_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Store NonDedi Climber Climbing Velocity
struct ADino_Character_BP_Climber_C_Store_NonDedi_Climber_Climbing_Velocity_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCameraRotationFinal
struct ADino_Character_BP_Climber_C_BPCameraRotationFinal_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InCurrentFinalRot;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Capsule BottomWorldLocation
struct ADino_Character_BP_Climber_C_Get_Climber_Capsule_BottomWorldLocation_Params
{
	float                                              offsetTowardsCenter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Bottom;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get ClimberVelocity Pure
struct ADino_Character_BP_Climber_C_Get_ClimberVelocity_Pure_Params
{
	bool                                               forceUseWorldDeltaSeconds;                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOverrideFPVViewLocation
struct ADino_Character_BP_Climber_C_BPOverrideFPVViewLocation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPGetFPVViewLocation
struct ADino_Character_BP_Climber_C_BPGetFPVViewLocation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPLimitPlayerRotation
struct ADino_Character_BP_Climber_C_BPLimitPlayerRotation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   InViewRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyViewHitDir
struct ADino_Character_BP_Climber_C_BPModifyViewHitDir_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InViewHitDir;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCameraBaseOrientation
struct ADino_Character_BP_Climber_C_BPCameraBaseOrientation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberVelocityAlongNormal
struct ADino_Character_BP_Climber_C_GetClimberVelocityAlongNormal_Params
{
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Velocity
struct ADino_Character_BP_Climber_C_Get_Climber_Velocity_Params
{
	bool                                               forceUseWorldDeltaSeconds;                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingStaminaCost
struct ADino_Character_BP_Climber_C_GetCurrentClimbingStaminaCost_Params
{
	float                                              cost;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingRotationSpeed
struct ADino_Character_BP_Climber_C_GetCurrentClimbingRotationSpeed_Params
{
	float                                              RotationSpeed;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingMoveVector
struct ADino_Character_BP_Climber_C_GetCurrentClimbingMoveVector_Params
{
	struct FVector                                     OverrideMoveDir;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     moveVector;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CurrentClimbingVelocityMax
struct ADino_Character_BP_Climber_C_Get_CurrentClimbingVelocityMax_Params
{
	float                                              Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnSeek Released
struct ADino_Character_BP_Climber_C_OnSeek_Released_Params
{
	bool                                               toggle;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnSeek Pressed
struct ADino_Character_BP_Climber_C_OnSeek_Pressed_Params
{
	bool                                               toggle;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnClientRunReleased
struct ADino_Character_BP_Climber_C_Climber_OnClientRunReleased_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnClientRunPressed
struct ADino_Character_BP_Climber_C_Climber_OnClientRunPressed_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.On Climbing Traces Found No Valid Surface
struct ADino_Character_BP_Climber_C_On_Climbing_Traces_Found_No_Valid_Surface_Params
{
	TArray<bool>                                       hitMap;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get New Trace Vectors For AroundCornerCheck
struct ADino_Character_BP_Climber_C_Get_New_Trace_Vectors_For_AroundCornerCheck_Params
{
	struct FVector                                     TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                traceIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                retryNum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               didLastTraceHit;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  lastTraceHitResult;                                       // (Parm)
	bool                                               retryTrace;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     updatedTraceStart;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     updatedTraceEnd;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               overrideTraceHit;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     newHitLoc;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     newHitNormal;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCustomSurfaceTraceDistance
struct ADino_Character_BP_Climber_C_GetCustomSurfaceTraceDistance_Params
{
	int                                                traceIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              customDistance;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimber_CenterSphereTraceForSurfaceLocation
struct ADino_Character_BP_Climber_C_ShouldClimber_CenterSphereTraceForSurfaceLocation_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetNewClimbingRotation
struct ADino_Character_BP_Climber_C_SetNewClimbingRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ForceStopClimbingNow
struct ADino_Character_BP_Climber_C_ForceStopClimbingNow_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Apply Detach Impulse
struct ADino_Character_BP_Climber_C_Can_Climber_Apply_Detach_Impulse_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.LerpRotatorToTarget
struct ADino_Character_BP_Climber_C_LerpRotatorToTarget_Params
{
	struct FRotator                                    currentRotator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    targetRotator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              lerpSpeed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    lerpedRotator;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Trace for Non Climbable Surface
struct ADino_Character_BP_Climber_C_Trace_for_Non_Climbable_Surface_Params
{
	struct FVector                                     traceDir;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Surface Trace Offset Array from UseTraceMap
struct ADino_Character_BP_Climber_C_Get_Surface_Trace_Offset_Array_from_UseTraceMap_Params
{
	TArray<bool>                                       useMap;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct UObject_FTransform>                  Result;                                                   // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        indexArray;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.MakeClimbingRotationFromForwardVector
struct ADino_Character_BP_Climber_C_MakeClimbingRotationFromForwardVector_Params
{
	struct FVector                                     newForward;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingTurnAngleDelta
struct ADino_Character_BP_Climber_C_GetCurrentClimbingTurnAngleDelta_Params
{
	float                                              Delta;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_RotationAxes
struct ADino_Character_BP_Climber_C_DebugClimber_NetDrawDebug_RotationAxes_Params
{
	struct FRotator                                    Rotator;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               allowDraw;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forceDebug;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               preventReplication;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetClimbableSurfaceVars
struct ADino_Character_BP_Climber_C_SetClimbableSurfaceVars_Params
{
	struct FVector                                     newSurfaceNormal;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     newSurfaceNormal_Move;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     newSurfaceLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     newSurfaceLocation_Move;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SnapClimberToSurface
struct ADino_Character_BP_Climber_C_SnapClimberToSurface_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get ClimberState Index
struct ADino_Character_BP_Climber_C_Get_ClimberState_Index_Params
{
	bool                                               getPrevious;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimber Update Climbing Rotation
struct ADino_Character_BP_Climber_C_CanClimber_Update_Climbing_Rotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    approvedRotation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckForRetrySurfaceTrace
struct ADino_Character_BP_Climber_C_CheckForRetrySurfaceTrace_Params
{
	struct FVector                                     TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                traceIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                retryNum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               didLastTraceHit;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  lastTraceHitResult;                                       // (Parm)
	bool                                               retry;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     retryStart;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     retryEnd;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               overrideTraceHit;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     newNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingTurnDirection
struct ADino_Character_BP_Climber_C_GetClimbingTurnDirection_Params
{
	int                                                turnDir;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Flipped Rotation
struct ADino_Character_BP_Climber_C_Get_Climber_Flipped_Rotation_Params
{
	struct FRotator                                    flipRotation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberFlipAxis
struct ADino_Character_BP_Climber_C_GetClimberFlipAxis_Params
{
	struct FVector                                     Axis;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingMoveDirFromRotation
struct ADino_Character_BP_Climber_C_GetClimbingMoveDirFromRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     moveDir;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Make Climbing Rotation fromSurfaceNormal
struct ADino_Character_BP_Climber_C_Make_Climbing_Rotation_fromSurfaceNormal_Params
{
	struct FVector                                     SurfaceNormal;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Right Vector
struct ADino_Character_BP_Climber_C_Get_Climber_Right_Vector_Params
{
	struct FVector                                     Right;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Forward Vector
struct ADino_Character_BP_Climber_C_Get_Climber_Forward_Vector_Params
{
	struct FVector                                     Forward;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Up Vector
struct ADino_Character_BP_Climber_C_Get_Climber_Up_Vector_Params
{
	struct FVector                                     Up;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetClimberCanIgnoreWater
struct ADino_Character_BP_Climber_C_SetClimberCanIgnoreWater_Params
{
	bool                                               restoreToDefault;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               newVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Currently Climb Out Of Water
struct ADino_Character_BP_Climber_C_Can_Climber_Currently_Climb_Out_Of_Water_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckForClimbOutOfWater
struct ADino_Character_BP_Climber_C_CheckForClimbOutOfWater_Params
{
	bool                                               allowClimbing;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateControlledClientClimber
struct ADino_Character_BP_Climber_C_UpdateControlledClientClimber_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberTick_Server
struct ADino_Character_BP_Climber_C_ClimberTick_Server_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberTick_NonDedi
struct ADino_Character_BP_Climber_C_ClimberTick_NonDedi_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateNonControlledClimber
struct ADino_Character_BP_Climber_C_UpdateNonControlledClimber_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberMovementMode
struct ADino_Character_BP_Climber_C_UpdateClimberMovementMode_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnClimberDetached
struct ADino_Character_BP_Climber_C_OnClimberDetached_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberOverrideFallVelocity
struct ADino_Character_BP_Climber_C_UpdateClimberOverrideFallVelocity_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Rotate to Target Rotation
struct ADino_Character_BP_Climber_C_Can_Climber_Rotate_to_Target_Rotation_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberDetaching
struct ADino_Character_BP_Climber_C_IsClimberDetaching_Params
{
	bool                                               checkPrevious;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Sync RiderLookDirection
struct ADino_Character_BP_Climber_C_Sync_RiderLookDirection_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnRep_CurrentClimberStateIndex
struct ADino_Character_BP_Climber_C_OnRep_CurrentClimberStateIndex_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberMeshInterpolate
struct ADino_Character_BP_Climber_C_CanClimberMeshInterpolate_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Flip CheckNormal
struct ADino_Character_BP_Climber_C_Get_Climber_Flip_CheckNormal_Params
{
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectFlippingAnim
struct ADino_Character_BP_Climber_C_GetCorrectFlippingAnim_Params
{
	class UAnimMontage*                                Anim;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberAttachFromGround
struct ADino_Character_BP_Climber_C_CanClimberAttachFromGround_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CorrectClimber Rotation
struct ADino_Character_BP_Climber_C_Get_CorrectClimber_Rotation_Params
{
	bool                                               updateRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Receive Climbing Input Backward
struct ADino_Character_BP_Climber_C_Can_Receive_Climbing_Input_Backward_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanReceiveClimbingInput_Forward
struct ADino_Character_BP_Climber_C_CanReceiveClimbingInput_Forward_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectSurfaceTraceDistance
struct ADino_Character_BP_Climber_C_GetCorrectSurfaceTraceDistance_Params
{
	bool                                               isForRetry;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              traceDist;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingClimber
struct ADino_Character_BP_Climber_C_UpdateClimbingClimber_Params
{
	bool                                               IgnoreFailure;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canKeepClimbing;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Surface Trace OffsetTransforms
struct ADino_Character_BP_Climber_C_Get_Correct_Surface_Trace_OffsetTransforms_Params
{
	bool                                               overrideUseMap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       newUseMp;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct UObject_FTransform>                  offsetTransforms;                                         // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        TraceIndeces;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CorrectDetachAnim
struct ADino_Character_BP_Climber_C_Get_CorrectDetachAnim_Params
{
	class UAnimMontage*                                Anim;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberPlayingAnim
struct ADino_Character_BP_Climber_C_IsClimberPlayingAnim_Params
{
	class UAnimMontage*                                checkAnim;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Interp Climber toTransform
struct ADino_Character_BP_Climber_C_Interp_Climber_toTransform_Params
{
	struct UObject_FTransform                          Transform;                                                // (Parm, IsPlainOldData)
	float                                              LocationInterpSpeed;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationInterpSpeed;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               reachedTransform;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SoftSetClimberTransform
struct ADino_Character_BP_Climber_C_SoftSetClimberTransform_Params
{
	struct UObject_FTransform                          NewTransform;                                             // (Parm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectAttachAnim
struct ADino_Character_BP_Climber_C_GetCorrectAttachAnim_Params
{
	class UAnimMontage*                                Anim;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Mesh Offset
struct ADino_Character_BP_Climber_C_Get_Correct_Mesh_Offset_Params
{
	struct FVector                                     Offset;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.StoreClimb Trace Socket Offsets
struct ADino_Character_BP_Climber_C_StoreClimb_Trace_Socket_Offsets_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Attaching
struct ADino_Character_BP_Climber_C_Is_Climber_Attaching_Params
{
	bool                                               checkPrevious;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RotateClimber To Look Rotation
struct ADino_Character_BP_Climber_C_RotateClimber_To_Look_Rotation_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Check For Prevent Stop Climbing
struct ADino_Character_BP_Climber_C_Check_For_Prevent_Stop_Climbing_Params
{
	TArray<bool>                                       traceHitsArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                numValidHits;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                numTraces;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               allowClimbing;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update RiderWithClimberState
struct ADino_Character_BP_Climber_C_Update_RiderWithClimberState_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberInAnyClimberState
struct ADino_Character_BP_Climber_C_IsClimberInAnyClimberState_Params
{
	bool                                               checkPrevious;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Flip Attached Climber
struct ADino_Character_BP_Climber_C_Flip_Attached_Climber_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanAttached Climber Flip
struct ADino_Character_BP_Climber_C_CanAttached_Climber_Flip_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Check for Attached Climber Flip
struct ADino_Character_BP_Climber_C_Check_for_Attached_Climber_Flip_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Moving on Surface
struct ADino_Character_BP_Climber_C_Is_Climber_Moving_on_Surface_Params
{
	bool                                               checkPrevious;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climbing Forward Velocity
struct ADino_Character_BP_Climber_C_Get_Climbing_Forward_Velocity_Params
{
	float                                              forwardVelocity;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climbing Right Velocity
struct ADino_Character_BP_Climber_C_Get_Climbing_Right_Velocity_Params
{
	float                                              rightVelocity;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Detach Climber from Surface
struct ADino_Character_BP_Climber_C_Detach_Climber_from_Surface_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Detaching
struct ADino_Character_BP_Climber_C_ServerTick_Detaching_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetServerTickDeltaTime
struct ADino_Character_BP_Climber_C_GetServerTickDeltaTime_Params
{
	float                                              DeltaTime;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Skid
struct ADino_Character_BP_Climber_C_Skid_Params
{
	struct FVector                                     currVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewVelocity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Move on Surface Velocity
struct ADino_Character_BP_Climber_C_Get_Move_on_Surface_Velocity_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Continue Attaching
struct ADino_Character_BP_Climber_C_Can_Climber_Continue_Attaching_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Rotate Climber To TargetClimbingRotation
struct ADino_Character_BP_Climber_C_Rotate_Climber_To_TargetClimbingRotation_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber TargetClimbingRotation
struct ADino_Character_BP_Climber_C_Update_Climber_TargetClimbingRotation_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Attach Climber to Surface
struct ADino_Character_BP_Climber_C_Attach_Climber_to_Surface_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimbingIndexEqualToCurrent
struct ADino_Character_BP_Climber_C_IsClimbingIndexEqualToCurrent_Params
{
	unsigned char                                      index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberMoving Absolute Up
struct ADino_Character_BP_Climber_C_IsClimberMoving_Absolute_Up_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Override
struct ADino_Character_BP_Climber_C_ServerTick_Override_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.StopClimbing
struct ADino_Character_BP_Climber_C_StopClimbing_Params
{
	bool                                               resetRestoreToSeeking;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               skipDetach;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Non Dedi Climber
struct ADino_Character_BP_Climber_C_Replicate_Index_Update_Non_Dedi_Climber_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Find Valid AiSpawn Transform
struct ADino_Character_BP_Climber_C_Find_Valid_AiSpawn_Transform_Params
{
	bool                                               canSpawn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct UObject_FTransform                          validTransform;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Target TPV_Camera Offset
struct ADino_Character_BP_Climber_C_Replicate_Index_Update_Target_TPV_Camera_Offset_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Server And Client Climber
struct ADino_Character_BP_Climber_C_Replicate_Index_Update_Server_And_Client_Climber_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReachedTop Of Climb
struct ADino_Character_BP_Climber_C_ReachedTop_Of_Climb_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingVars
struct ADino_Character_BP_Climber_C_UpdateClimbingVars_Params
{
	bool                                               validSurfaceFound;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SurfaceNormal;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     surfaceNormal_Move;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SurfaceLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SurfaceLocation_Move;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       hitMap;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        traceIndexArray;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsHitSurfaceClimbable
struct ADino_Character_BP_Climber_C_IsHitSurfaceClimbable_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReplicateClimbing Index
struct ADino_Character_BP_Climber_C_ReplicateClimbing_Index_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateServerClimberByClimbingIndex
struct ADino_Character_BP_Climber_C_UpdateServerClimberByClimbingIndex_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberStateByClimbingIndex
struct ADino_Character_BP_Climber_C_UpdateClimberStateByClimbingIndex_Params
{
	unsigned char                                      newIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbing Velocity
struct ADino_Character_BP_Climber_C_UpdateClimbing_Velocity_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Calc Current Climbing Velocity
struct ADino_Character_BP_Climber_C_Calc_Current_Climbing_Velocity_Params
{
	struct FVector                                     newClimbingVel;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Climbing
struct ADino_Character_BP_Climber_C_ServerTick_Climbing_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Attached
struct ADino_Character_BP_Climber_C_ServerTick_Attached_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Skidding
struct ADino_Character_BP_Climber_C_ServerTick_Skidding_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Attaching
struct ADino_Character_BP_Climber_C_ServerTick_Attaching_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Seeking
struct ADino_Character_BP_Climber_C_ServerTick_Seeking_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_NoInput
struct ADino_Character_BP_Climber_C_ClientTick_NoInput_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Tick Input Backward
struct ADino_Character_BP_Climber_C_Client_Tick_Input_Backward_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_Input_Forward
struct ADino_Character_BP_Climber_C_ClientTick_Input_Forward_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberDraw CrosshairWhileClimbing
struct ADino_Character_BP_Climber_C_ShouldClimberDraw_CrosshairWhileClimbing_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsNormalClimbable
struct ADino_Character_BP_Climber_C_IsNormalClimbable_Params
{
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isAverageNormal;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPAdjustDamage
struct ADino_Character_BP_Climber_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReduceClimberStamina
struct ADino_Character_BP_Climber_C_ReduceClimberStamina_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DisplayMessage
struct ADino_Character_BP_Climber_C_DisplayMessage_Params
{
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberHas Enough Stamina to Climb
struct ADino_Character_BP_Climber_C_ClimberHas_Enough_Stamina_to_Climb_Params
{
	bool                                               HUD_NotifyOnFailure;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is ClimberClimbing
struct ADino_Character_BP_Climber_C_Is_ClimberClimbing_Params
{
	bool                                               isFinishedAttaching;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               includeSeeking__when_above_false_;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               includeDetaching;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               checkPrevious;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Reduce StaminaWhileClimbing
struct ADino_Character_BP_Climber_C_Reduce_StaminaWhileClimbing_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberPlayLandAnim
struct ADino_Character_BP_Climber_C_ClimberPlayLandAnim_Params
{
	bool                                               forceSuccess;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOnMovementModeChangedNotify
struct ADino_Character_BP_Climber_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Hard Set Climber RotationBut Interp Mesh Location
struct ADino_Character_BP_Climber_C_Hard_Set_Climber_RotationBut_Interp_Mesh_Location_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CleanUpClimbingAnims
struct ADino_Character_BP_Climber_C_CleanUpClimbingAnims_Params
{
	bool                                               animsClean;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Set Should Restore to Attached
struct ADino_Character_BP_Climber_C_Set_Should_Restore_to_Attached_Params
{
	bool                                               newVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SoftSetClimberRotation
struct ADino_Character_BP_Climber_C_SoftSetClimberRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.WallJump
struct ADino_Character_BP_Climber_C_WallJump_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InterpolateClimberMesh
struct ADino_Character_BP_Climber_C_InterpolateClimberMesh_Params
{
	class USkeletalMeshComponent*                      meshToInterpolate;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber Cilmbing Anims
struct ADino_Character_BP_Climber_C_Update_Climber_Cilmbing_Anims_Params
{
	bool                                               ensureAnimsPlaying;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetUse Aim Offsets
struct ADino_Character_BP_Climber_C_SetUse_Aim_Offsets_Params
{
	bool                                               newUse;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetStayOnSurfaceVelocity
struct ADino_Character_BP_Climber_C_GetStayOnSurfaceVelocity_Params
{
	bool                                               bOverrideVars;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideSurfaceLoc;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideDistFromSurface;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideClimberLoc;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventUpdatingServerTimer;                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveAnyDamage
struct ADino_Character_BP_Climber_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Init Climber
struct ADino_Character_BP_Climber_C_Init_Climber_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPUnstasis
struct ADino_Character_BP_Climber_C_BPUnstasis_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CheckForAttachToSurfaceOnSpawn
struct ADino_Character_BP_Climber_C_Climber_AI_CheckForAttachToSurfaceOnSpawn_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Set Climber State
struct ADino_Character_BP_Climber_C_Client_Set_Climber_State_Params
{
	unsigned char                                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can ClimberContinueClimbing
struct ADino_Character_BP_Climber_C_Can_ClimberContinueClimbing_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_SetAttachedToSurface
struct ADino_Character_BP_Climber_C_Climber_AI_SetAttachedToSurface_Params
{
	bool                                               newVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forceSuccess;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Ai Controller
struct ADino_Character_BP_Climber_C_Get_Climber_Ai_Controller_Params
{
	class ADino_AIController_BP_Climber_C*             Ref;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_DetachFromSurface
struct ADino_Character_BP_Climber_C_Climber_AI_DetachFromSurface_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Attached
struct ADino_Character_BP_Climber_C_Is_Climber_Attached_Params
{
	bool                                               checkPrevious;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPNotifyClearRider
struct ADino_Character_BP_Climber_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPNotifySetRider
struct ADino_Character_BP_Climber_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPTimerNonDedicated
struct ADino_Character_BP_Climber_C_BPTimerNonDedicated_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber Transforms
struct ADino_Character_BP_Climber_C_Update_Climber_Transforms_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Default Climber
struct ADino_Character_BP_Climber_C_Get_Default_Climber_Params
{
	class ADino_Character_BP_Climber_C*                Ref;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberGrounded
struct ADino_Character_BP_Climber_C_IsClimberGrounded_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CalcCurrentClimbableSurface
struct ADino_Character_BP_Climber_C_CalcCurrentClimbableSurface_Params
{
	float                                              TraceDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               preventTraceRetries;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               requireAllTraceHitsAreValid;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideClimberTransform;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct UObject_FTransform                          NewTransform;                                             // (Parm, IsPlainOldData)
	bool                                               OverrideTraceUseMap;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       newUseMap;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               validSurfaceFound;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SurfaceNormal;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     surfaceNormal_Move;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SurfaceLocation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SurfaceLocation_Move;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       hitMap;                                                   // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        traceIndexArray;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Net Set Climber State
struct ADino_Character_BP_Climber_C_Net_Set_Climber_State_Params
{
	unsigned char                                      newStateIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPTimerServer
struct ADino_Character_BP_Climber_C_BPTimerServer_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UserConstructionScript
struct ADino_Character_BP_Climber_C_UserConstructionScript_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Run_K2Node_InputActionEvent_117
struct ADino_Character_BP_Climber_C_InpActEvt_Run_K2Node_InputActionEvent_117_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Run_K2Node_InputActionEvent_116
struct ADino_Character_BP_Climber_C_InpActEvt_Run_K2Node_InputActionEvent_116_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_RunToggle_K2Node_InputActionEvent_115
struct ADino_Character_BP_Climber_C_InpActEvt_RunToggle_K2Node_InputActionEvent_115_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Jump_K2Node_InputActionEvent_114
struct ADino_Character_BP_Climber_C_InpActEvt_Jump_K2Node_InputActionEvent_114_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_StartSeeking
struct ADino_Character_BP_Climber_C_Server_StartSeeking_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_StopSeeking
struct ADino_Character_BP_Climber_C_Server_StopSeeking_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_NetSetClimberState
struct ADino_Character_BP_Climber_C_Server_NetSetClimberState_Params
{
	unsigned char                                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetReadyToClimbAfterDelay
struct ADino_Character_BP_Climber_C_SetReadyToClimbAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckUntil_SetAiAttachedToSurface
struct ADino_Character_BP_Climber_C_CheckUntil_SetAiAttachedToSurface_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.PlayAttachParticleWhenCloseToSurface
struct ADino_Character_BP_Climber_C_PlayAttachParticleWhenCloseToSurface_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.PreventLandingAnimBriefly
struct ADino_Character_BP_Climber_C_PreventLandingAnimBriefly_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckOnJumpStateAfterJumpDelay
struct ADino_Character_BP_Climber_C_CheckOnJumpStateAfterJumpDelay_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnJumpPressed
struct ADino_Character_BP_Climber_C_BP_OnJumpPressed_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnJumpReleased
struct ADino_Character_BP_Climber_C_BP_OnJumpReleased_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SyncToServer_RiderViewRotation
struct ADino_Character_BP_Climber_C_SyncToServer_RiderViewRotation_Params
{
	struct FRotator                                    ViewRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SyncToOwningClient_ClimbingVelocity
struct ADino_Character_BP_Climber_C_SyncToOwningClient_ClimbingVelocity_Params
{
	struct FVector                                     climbingVelocity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnRunPressed
struct ADino_Character_BP_Climber_C_Server_OnRunPressed_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnRunReleased
struct ADino_Character_BP_Climber_C_Server_OnRunReleased_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_Climber_OnRunPressed
struct ADino_Character_BP_Climber_C_Multi_Climber_OnRunPressed_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_Climber_OnRunReleased
struct ADino_Character_BP_Climber_C_Multi_Climber_OnRunReleased_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearClimberControlRotationRoll
struct ADino_Character_BP_Climber_C_ClearClimberControlRotationRoll_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearClimberControlRotationRoll_NextTick
struct ADino_Character_BP_Climber_C_ClearClimberControlRotationRoll_NextTick_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveBeginPlay
struct ADino_Character_BP_Climber_C_ReceiveBeginPlay_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.LockClimbingMeshRotationInterpSpeedForDuration
struct ADino_Character_BP_Climber_C_LockClimbingMeshRotationInterpSpeedForDuration_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_SyncClimberDesiredRotationOnDetach
struct ADino_Character_BP_Climber_C_Multi_SyncClimberDesiredRotationOnDetach_Params
{
	struct FRotator                                    desiredRotation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InitClimber_NextTick
struct ADino_Character_BP_Climber_C_InitClimber_NextTick_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InitClimber_Now
struct ADino_Character_BP_Climber_C_InitClimber_Now_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_OnWallJump
struct ADino_Character_BP_Climber_C_Multi_OnWallJump_Params
{
	struct FVector                                     wallJumpVelocity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Line
struct ADino_Character_BP_Climber_C_Multi_DrawDebug_Line_Params
{
	struct FVector                                     LineStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnJumpPresssed
struct ADino_Character_BP_Climber_C_Server_OnJumpPresssed_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_JumpAfterDelay
struct ADino_Character_BP_Climber_C_Climber_JumpAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_HardSetClimberActorRotation
struct ADino_Character_BP_Climber_C_Multi_HardSetClimberActorRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_WallJumpAfterDelay
struct ADino_Character_BP_Climber_C_Climber_WallJumpAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_ClimberPlayLandAnim
struct ADino_Character_BP_Climber_C_Multi_ClimberPlayLandAnim_Params
{
	bool                                               forceSuccess;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client_Jump
struct ADino_Character_BP_Climber_C_Client_Jump_Params
{
	bool                                               forceSuccess;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Sphere
struct ADino_Character_BP_Climber_C_Multi_DrawDebug_Sphere_Params
{
	struct FVector                                     Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Segments;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Box
struct ADino_Character_BP_Climber_C_Multi_DrawDebug_Box_Params
{
	struct FVector                                     Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber AI Restart Seeking After Delay
struct ADino_Character_BP_Climber_C_Climber_AI_Restart_Seeking_After_Delay_Params
{
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_SoftSetClimberActorRotation
struct ADino_Character_BP_Climber_C_Multi_SoftSetClimberActorRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_SetIsClimberJumping
struct ADino_Character_BP_Climber_C_Server_SetIsClimberJumping_Params
{
	bool                                               newVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client_SetActorLocAndRot
struct ADino_Character_BP_Climber_C_Client_SetActorLocAndRot_Params
{
	struct FVector                                     NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    newRot;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSoftSet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ExecuteUbergraph_Dino_Character_BP_Climber
struct ADino_Character_BP_Climber_C_ExecuteUbergraph_Dino_Character_BP_Climber_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
