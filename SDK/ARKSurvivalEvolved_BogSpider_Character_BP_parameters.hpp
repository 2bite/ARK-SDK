#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BogSpider_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpooderInSPACE
struct ABogSpider_Character_BP_C_IsSpooderInSPACE_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWallJump
struct ABogSpider_Character_BP_C_OnWallJump_Params
{
	struct FVector*                                    wallJumpVelocity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnClimberFinishedAttaching
struct ABogSpider_Character_BP_C_OnClimberFinishedAttaching_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.StoreClimb Trace Socket Offsets
struct ABogSpider_Character_BP_C_StoreClimb_Trace_Socket_Offsets_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderClimbingTraceTransform
struct ABogSpider_Character_BP_C_GetSpiderClimbingTraceTransform_Params
{
	int                                                TraceIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct UObject_FTransform                          TraceTransform;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsClimbingTraceHitResultValid
struct ABogSpider_Character_BP_C_IsClimbingTraceHitResultValid_Params
{
	bool*                                              bValidHit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
	struct FVector*                                    TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TraceIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TraceRetryNum;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberOverrideRetriedTraceResult
struct ABogSpider_Character_BP_C_CanClimberOverrideRetriedTraceResult_Params
{
	struct FHitResult                                  WithHit;                                                  // (Parm, OutParm, ReferenceParm)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderStopNonDediTick
struct ABogSpider_Character_BP_C_CanSpiderStopNonDediTick_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberStopNonDediTick_NonControlled
struct ABogSpider_Character_BP_C_CanClimberStopNonDediTick_NonControlled_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberStopNonDediTick_Controlled
struct ABogSpider_Character_BP_C_CanClimberStopNonDediTick_Controlled_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Can ClimberContinueClimbing
struct ABogSpider_Character_BP_C_Can_ClimberContinueClimbing_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderUseAbilities
struct ABogSpider_Character_BP_C_CanSpiderUseAbilities_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateSpiderRandomTickDelay
struct ABogSpider_Character_BP_C_UpdateSpiderRandomTickDelay_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopAllSpiderCameraShake
struct ABogSpider_Character_BP_C_StopAllSpiderCameraShake_Params
{
	class APrimalCharacter*                            ForRider;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateNonControlledClimber
struct ABogSpider_Character_BP_C_UpdateNonControlledClimber_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsPlayingJumpDetachAnim
struct ABogSpider_Character_BP_C_IsPlayingJumpDetachAnim_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanPrimalCharBeUsedForTaming
struct ABogSpider_Character_BP_C_CanPrimalCharBeUsedForTaming_Params
{
	class APrimalCharacter*                            Char;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddTamingAffinityFromLifeSteal
struct ABogSpider_Character_BP_C_AddTamingAffinityFromLifeSteal_Params
{
	class AShooterCharacter*                           ForPlayer;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPClientDoMultiUse
struct ABogSpider_Character_BP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.RefreshSpiderVision
struct ABogSpider_Character_BP_C_RefreshSpiderVision_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CacheWebTracePreviewHits
struct ABogSpider_Character_BP_C_Tick_CacheWebTracePreviewHits_Params
{
	TArray<struct FHitResult>                          TraceHits;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CalcAirJumpVelocity
struct ABogSpider_Character_BP_C_CalcAirJumpVelocity_Params
{
	struct FVector2D                                   WithInputs;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WithVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    WithControlRot;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetMultiUseEntries
struct ABogSpider_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderAnimBP
struct ABogSpider_Character_BP_C_GetSpiderAnimBP_Params
{
	class UBogSpider_AnimBlueprint_C*                  animBP;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddChargeJumpVelocity
struct ABogSpider_Character_BP_C_AddChargeJumpVelocity_Params
{
	float                                              WithChargeRatio;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoChargeJump_Server
struct ABogSpider_Character_BP_C_DoChargeJump_Server_Params
{
	double                                             ClientTimestamp;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartChargeJump_Server
struct ABogSpider_Character_BP_C_StartChargeJump_Server_Params
{
	double                                             ClientTimestamp;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateClientWaterWalkingBuff
struct ABogSpider_Character_BP_C_Tick_UpdateClientWaterWalkingBuff_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPAcknowledgeServerCorrection
struct ABogSpider_Character_BP_C_BPAcknowledgeServerCorrection_Params
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

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SpiderPrintShippingMessage
struct ABogSpider_Character_BP_C_SpiderPrintShippingMessage_Params
{
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnDinoCheat
struct ABogSpider_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideRiderCameraCollisionSweep
struct ABogSpider_Character_BP_C_BP_OverrideRiderCameraCollisionSweep_Params
{
	struct FVector                                     SweepStart;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     SweepEnd;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.AdjustClimbTraceTransform
struct ABogSpider_Character_BP_C_AdjustClimbTraceTransform_Params
{
	struct FName*                                      WithSocketName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct UObject_FTransform                          WithTraceTransform;                                       // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct UObject_FTransform                          ClimberTransform;                                         // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct UObject_FTransform                          AdjustedTransform;                                        // (Parm, OutParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsRiderLookDirParallelWithClimbUp
struct ABogSpider_Character_BP_C_IsRiderLookDirParallelWithClimbUp_Params
{
	struct FVector2D                                   WithinAngleRange;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              angleDelta;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderTransformForEnsnare
struct ABogSpider_Character_BP_C_GetSpiderTransformForEnsnare_Params
{
	struct UObject_FTransform                          Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideCarriedCharacterTransform
struct ABogSpider_Character_BP_C_BP_OverrideCarriedCharacterTransform_Params
{
	class APrimalCharacter**                           ForCarriedChar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.WantsToAirBrake
struct ABogSpider_Character_BP_C_WantsToAirBrake_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimberOverrideFallVelocity
struct ABogSpider_Character_BP_C_UpdateClimberOverrideFallVelocity_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ModifySpiderFallingVelocity
struct ABogSpider_Character_BP_C_ModifySpiderFallingVelocity_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Rotate RotatorForwardVector to Target Constant
struct ABogSpider_Character_BP_C_Rotate_RotatorForwardVector_to_Target_Constant_Params
{
	struct FRotator*                                   currentRotator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    targetForward;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RotationRate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    newRotator;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCurrentClimbingRotationSpeed
struct ABogSpider_Character_BP_C_GetCurrentClimbingRotationSpeed_Params
{
	float                                              RotationSpeed;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Rotate Climber To TargetClimbingRotation
struct ABogSpider_Character_BP_C_Rotate_Climber_To_TargetClimbingRotation_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDidSetCarriedCharacter
struct ABogSpider_Character_BP_C_BPDidSetCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberRestoreToSeeking
struct ABogSpider_Character_BP_C_CanClimberRestoreToSeeking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderClimbRunning
struct ABogSpider_Character_BP_C_IsSpiderClimbRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_SimulateClimbingBetweenFrames
struct ABogSpider_Character_BP_C_Tick_SimulateClimbingBetweenFrames_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsClimberGrounded
struct ABogSpider_Character_BP_C_IsClimberGrounded_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetCrosshairColor
struct ABogSpider_Character_BP_C_BPGetCrosshairColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get CorrectDetachAnim
struct ABogSpider_Character_BP_C_Get_CorrectDetachAnim_Params
{
	class UAnimMontage*                                Anim;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderRunSeek
struct ABogSpider_Character_BP_C_CanSpiderRunSeek_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderRunSeeking
struct ABogSpider_Character_BP_C_Tick_UpdateSpiderRunSeeking_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderCameraShake
struct ABogSpider_Character_BP_C_Tick_UpdateSpiderCameraShake_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ClimberCheckForAboveWalkableGround
struct ABogSpider_Character_BP_C_ClimberCheckForAboveWalkableGround_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get Correct Surface Trace OffsetTransforms
struct ABogSpider_Character_BP_C_Get_Correct_Surface_Trace_OffsetTransforms_Params
{
	bool*                                              overrideUseMap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       newUseMp;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct UObject_FTransform>                  offsetTransforms;                                         // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        TraceIndeces;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DisplaySpiderHudNotification
struct ABogSpider_Character_BP_C_DisplaySpiderHudNotification_Params
{
	class FString                                      Notification;                                             // (Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DisplayScaleAndTime;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageBloodSuckingClientBuff
struct ABogSpider_Character_BP_C_Tick_ManageBloodSuckingClientBuff_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UnriddenSpiderTryBioGrappleTarget
struct ABogSpider_Character_BP_C_UnriddenSpiderTryBioGrappleTarget_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Climber_AllowMovementWhileClimbing
struct ABogSpider_Character_BP_C_Climber_AllowMovementWhileClimbing_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Climber_AI_OnSetTarget
struct ABogSpider_Character_BP_C_Climber_AI_OnSetTarget_Params
{
	class AActor**                                     NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimbingClimber
struct ABogSpider_Character_BP_C_UpdateClimbingClimber_Params
{
	bool*                                              IgnoreFailure;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canKeepClimbing;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVisionActive
struct ABogSpider_Character_BP_C_SetSpiderVisionActive_Params
{
	bool                                               bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleSpiderVision
struct ABogSpider_Character_BP_C_ToggleSpiderVision_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberSeek
struct ABogSpider_Character_BP_C_CanClimberSeek_Params
{
	bool*                                              isForStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get CurrentClimbingVelocityMax
struct ABogSpider_Character_BP_C_Get_CurrentClimbingVelocityMax_Params
{
	float                                              Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Can Climber Rotate to Target Rotation
struct ABogSpider_Character_BP_C_Can_Climber_Rotate_to_Target_Rotation_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClimbingMoveDirFromRotation
struct ABogSpider_Character_BP_C_GetClimbingMoveDirFromRotation_Params
{
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     moveDir;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CheckForUpdateSpiderClimbMoving
struct ABogSpider_Character_BP_C_CheckForUpdateSpiderClimbMoving_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimber Inputs
struct ABogSpider_Character_BP_C_UpdateClimber_Inputs_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Init Climber
struct ABogSpider_Character_BP_C_Init_Climber_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsNormalClimbable
struct ABogSpider_Character_BP_C_IsNormalClimbable_Params
{
	struct FVector*                                    Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isAverageNormal;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Replicate Index Update Server And Client Climber
struct ABogSpider_Character_BP_C_Replicate_Index_Update_Server_And_Client_Climber_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Check For Prevent Stop Climbing
struct ABogSpider_Character_BP_C_Check_For_Prevent_Stop_Climbing_Params
{
	TArray<bool>                                       traceHitsArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               numValidHits;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               numTraces;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowClimbing;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCorrectSurfaceTraceDistance
struct ABogSpider_Character_BP_C_GetCorrectSurfaceTraceDistance_Params
{
	bool*                                              isForRetry;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              traceDist;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterpolateClimberMesh
struct ABogSpider_Character_BP_C_InterpolateClimberMesh_Params
{
	class USkeletalMeshComponent**                     meshToInterpolate;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideCharacterNewFallVelocity
struct ABogSpider_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWebSprinting
struct ABogSpider_Character_BP_C_IsWebSprinting_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.FireQuickWebs_Both
struct ABogSpider_Character_BP_C_FireQuickWebs_Both_Params
{
	struct FVector                                     WithHitLocation_A;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WithHitLocation_B;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanQuickFireWebs
struct ABogSpider_Character_BP_C_CanQuickFireWebs_Params
{
	bool                                               bSingle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.FireQuickWebs_Single
struct ABogSpider_Character_BP_C_FireQuickWebs_Single_Params
{
	struct FVector                                     WithHitLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            WithBioGrappleTarget;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoWebSearch_Both
struct ABogSpider_Character_BP_C_DoWebSearch_Both_Params
{
	struct FRotator                                    ViewRot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundAny;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundOne;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FoundHitLoc_A;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FoundHitActor_A;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FoundHitLoc_B;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FoundHitActor_B;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoWebSearch_Single
struct ABogSpider_Character_BP_C_DoWebSearch_Single_Params
{
	struct FRotator                                    ViewRot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundHit;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FoundHitLoc;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FoundHitActor;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetAirJumpVelocity
struct ABogSpider_Character_BP_C_SetAirJumpVelocity_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoAirJump
struct ABogSpider_Character_BP_C_DoAirJump_Params
{
	struct FVector2D                                   WithMoveInputs;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WithVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    WithControlRot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanAirJump
struct ABogSpider_Character_BP_C_CanAirJump_Params
{
	bool                                               bForStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryDoAirJump
struct ABogSpider_Character_BP_C_TryDoAirJump_Params
{
	struct FVector2D                                   WithMoveInputs;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WithVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    WithControlRot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanAttachWebsToCharInPVE
struct ABogSpider_Character_BP_C_CanAttachWebsToCharInPVE_Params
{
	class APrimalCharacter*                            ToChar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually
struct ABogSpider_Character_BP_C_BreakWebVisually_Params
{
	bool                                               bBreakLeft;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebTetherImpact
struct ABogSpider_Character_BP_C_OnWebTetherImpact_Params
{
	struct FHitResult                                  WithHit;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderBloodHangry
struct ABogSpider_Character_BP_C_IsSpiderBloodHangry_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterceptRiderEmoteAnim
struct ABogSpider_Character_BP_C_InterceptRiderEmoteAnim_Params
{
	class UAnimMontage**                               EmoteAnim;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.NetSyncInputBitmask
struct ABogSpider_Character_BP_C_NetSyncInputBitmask_Params
{
	class FString                                      TriggeredByInput;                                         // (Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsBioGrappleOnCooldown
struct ABogSpider_Character_BP_C_IsBioGrappleOnCooldown_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OnStartCarried
struct ABogSpider_Character_BP_C_BP_OnStartCarried_Params
{
	class APrimalDinoCharacter**                       aDino;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebShootybangFailed
struct ABogSpider_Character_BP_C_OnWebShootybangFailed_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddBioGrappledBuffToChar
struct ABogSpider_Character_BP_C_AddBioGrappledBuffToChar_Params
{
	class APrimalCharacter*                            ToChar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 AddedBuff;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReleaseEnsnaredChar
struct ABogSpider_Character_BP_C_ReleaseEnsnaredChar_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappledCharBreakWeb
struct ABogSpider_Character_BP_C_OnBioGrappledCharBreakWeb_Params
{
	class APrimalCharacter*                            BreakingChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetEnsnaredCharRef
struct ABogSpider_Character_BP_C_SetEnsnaredCharRef_Params
{
	class APrimalCharacter*                            NewCharRef;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWebVisibility
struct ABogSpider_Character_BP_C_SetWebVisibility_Params
{
	bool                                               bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopSpiderJump
struct ABogSpider_Character_BP_C_StopSpiderJump_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoRealSpiderJump
struct ABogSpider_Character_BP_C_DoRealSpiderJump_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldPreventWebShootWhileHoldingInputs
struct ABogSpider_Character_BP_C_ShouldPreventWebShootWhileHoldingInputs_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetChargeJumpRatio
struct ABogSpider_Character_BP_C_GetChargeJumpRatio_Params
{
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnKillEnsnaredDino
struct ABogSpider_Character_BP_C_OnKillEnsnaredDino_Params
{
	class APrimalDinoCharacter*                        KilledDino;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetMeshRotation
struct ABogSpider_Character_BP_C_ResetMeshRotation_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideCameraViewTarget
struct ABogSpider_Character_BP_C_BPOverrideCameraViewTarget_Params
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

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideStencilAllianceForTarget
struct ABogSpider_Character_BP_C_BPOverrideStencilAllianceForTarget_Params
{
	class APrimalCharacter**                           TargetDino;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStencilAlliance>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideTerminalVelocity
struct ABogSpider_Character_BP_C_BP_OverrideTerminalVelocity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetImpendingLand
struct ABogSpider_Character_BP_C_SetImpendingLand_Params
{
	bool                                               NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanChargeJump
struct ABogSpider_Character_BP_C_CanChargeJump_Params
{
	bool                                               bForStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CancelChargeJump
struct ABogSpider_Character_BP_C_CancelChargeJump_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoChargeJump_Client
struct ABogSpider_Character_BP_C_DoChargeJump_Client_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartChargeJump_Client
struct ABogSpider_Character_BP_C_StartChargeJump_Client_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderChargeJump
struct ABogSpider_Character_BP_C_Tick_UpdateSpiderChargeJump_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartBioGrappleCooldown
struct ABogSpider_Character_BP_C_StartBioGrappleCooldown_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebTetherBroken
struct ABogSpider_Character_BP_C_OnWebTetherBroken_Params
{
	bool                                               bIsLeft;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGrappleTether                              BrokenTether;                                             // (Parm, OutParm, ReferenceParm)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageSpiderSounds
struct ABogSpider_Character_BP_C_Tick_ManageSpiderSounds_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.RotateDirToTargetWithLimit
struct ABogSpider_Character_BP_C_RotateDirToTargetWithLimit_Params
{
	struct FVector                                     RotateDir;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ToTargetDir;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotatingLimitDegrees;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewDir;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CheckForInstantHarvestDeadEnsnaredChar
struct ABogSpider_Character_BP_C_CheckForInstantHarvestDeadEnsnaredChar_Params
{
	class APrimalCharacter*                            forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderRotating
struct ABogSpider_Character_BP_C_IsSpiderRotating_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Net_OnWebTethersCreated
struct ABogSpider_Character_BP_C_Net_OnWebTethersCreated_Params
{
	struct FHitResult                                  TetherHits_Left;                                          // (Parm, OutParm, ReferenceParm)
	struct FHitResult                                  TetherHits_Right;                                         // (Parm, OutParm, ReferenceParm)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually
struct ABogSpider_Character_BP_C_CreateWebVisually_Params
{
	bool                                               bIsLeft;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetReelingCables
struct ABogSpider_Character_BP_C_ResetReelingCables_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnGrappleBuffActiveStateChanged
struct ABogSpider_Character_BP_C_OnGrappleBuffActiveStateChanged_Params
{
	bool                                               bIsActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnSpiderTargetSet
struct ABogSpider_Character_BP_C_OnSpiderTargetSet_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshInterpSpeed_Rotation
struct ABogSpider_Character_BP_C_GetMeshInterpSpeed_Rotation_Params
{
	float                                              InterpSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshInterpSpeed_Location
struct ABogSpider_Character_BP_C_GetMeshInterpSpeed_Location_Params
{
	float                                              InterpSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoStupidThings
struct ABogSpider_Character_BP_C_DoStupidThings_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldShowStupid Name
struct ABogSpider_Character_BP_C_ShouldShowStupid_Name_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideDinoName
struct ABogSpider_Character_BP_C_BP_OverrideDinoName_Params
{
	class FString*                                     CurrentDinoName;                                          // (Parm, ZeroConstructor)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetLocation
struct ABogSpider_Character_BP_C_Tick_UpdateSpiderTargetLocation_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshTargetRotOffset
struct ABogSpider_Character_BP_C_GetMeshTargetRotOffset_Params
{
	struct FRotator                                    TargetRotOffset;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshTargetLocOffset
struct ABogSpider_Character_BP_C_GetMeshTargetLocOffset_Params
{
	struct FVector                                     TargetLocOffset;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderVelocityVars_Pure
struct ABogSpider_Character_BP_C_GetSpiderVelocityVars_Pure_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              VelocitySize;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityDir;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Velocity2D;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              VelocitySize2D;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderVelocityVars
struct ABogSpider_Character_BP_C_GetSpiderVelocityVars_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              VelocitySize;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityDir;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Velocity2D;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              VelocitySize2D;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsAirBraking
struct ABogSpider_Character_BP_C_IsAirBraking_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.HideWebCables
struct ABogSpider_Character_BP_C_HideWebCables_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsInterpolatingMesh
struct ABogSpider_Character_BP_C_IsInterpolatingMesh_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ClearBioGrappledBuff
struct ABogSpider_Character_BP_C_ClearBioGrappledBuff_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappleReleased
struct ABogSpider_Character_BP_C_OnBioGrappleReleased_Params
{
	class APrimalCharacter*                            ReleasedChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappledChar
struct ABogSpider_Character_BP_C_OnBioGrappledChar_Params
{
	class APrimalCharacter*                            GrappledChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanTraceForLandingImpact
struct ABogSpider_Character_BP_C_CanTraceForLandingImpact_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetLastFallingVelocity
struct ABogSpider_Character_BP_C_ResetLastFallingVelocity_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetIsAirBraking
struct ABogSpider_Character_BP_C_SetIsAirBraking_Params
{
	bool                                               NewAirBraking;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVelocity
struct ABogSpider_Character_BP_C_SetSpiderVelocity_Params
{
	struct FVector                                     NewVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CacheLastVelocityVars
struct ABogSpider_Character_BP_C_CacheLastVelocityVars_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CacheCurrentVelocityVars
struct ABogSpider_Character_BP_C_CacheCurrentVelocityVars_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPSetupTamed
struct ABogSpider_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateTimerIntervals
struct ABogSpider_Character_BP_C_Tick_UpdateTimerIntervals_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanHardLand
struct ABogSpider_Character_BP_C_CanHardLand_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_TraceForLandingImpact
struct ABogSpider_Character_BP_C_Tick_TraceForLandingImpact_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnSpiderLanded
struct ABogSpider_Character_BP_C_OnSpiderLanded_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopAllWebDetachAnims
struct ABogSpider_Character_BP_C_StopAllWebDetachAnims_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.PlayWebDetachMontage
struct ABogSpider_Character_BP_C_PlayWebDetachMontage_Params
{
	bool                                               bIsJumpDetach;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsStuckToWall
struct ABogSpider_Character_BP_C_IsStuckToWall_Params
{
	bool                                               bIncludeUnsticking;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsStuckToWall_Pure
struct ABogSpider_Character_BP_C_IsStuckToWall_Pure_Params
{
	bool                                               bIncludeUnsticking;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetLookOffsetSocketName
struct ABogSpider_Character_BP_C_BPGetLookOffsetSocketName_Params
{
	class APrimalCharacter**                           ForPrimalChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDidClearCarriedCharacter
struct ABogSpider_Character_BP_C_BPDidClearCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPUnstasis
struct ABogSpider_Character_BP_C_BPUnstasis_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSwingingVelocityRatio
struct ABogSpider_Character_BP_C_GetSwingingVelocityRatio_Params
{
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.RotateCharControlRotationTowardsSpider
struct ABogSpider_Character_BP_C_RotateCharControlRotationTowardsSpider_Params
{
	class APrimalCharacter*                            forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsValidBioGrappleTarget
struct ABogSpider_Character_BP_C_IsValidBioGrappleTarget_Params
{
	class APrimalCharacter*                            ForGrappleTarget;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventTraces;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPAllowCarryCharacter
struct ABogSpider_Character_BP_C_BPAllowCarryCharacter_Params
{
	class APrimalCharacter**                           checkCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveAnyDamage
struct ABogSpider_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.InitBogSpider
struct ABogSpider_Character_BP_C_InitBogSpider_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryUnstickFromWall
struct ABogSpider_Character_BP_C_TryUnstickFromWall_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDoAttack
struct ABogSpider_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanDoBioGrapple
struct ABogSpider_Character_BP_C_CanDoBioGrapple_Params
{
	bool                                               bForStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdatePullingBioGrappledCharVars
struct ABogSpider_Character_BP_C_UpdatePullingBioGrappledCharVars_Params
{
	bool                                               bPulling;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebShootybangBioGrapple
struct ABogSpider_Character_BP_C_WebShootybangBioGrapple_Params
{
	class AActor*                                      TryBioGrappleActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnTamedProcessOrder
struct ABogSpider_Character_BP_C_BPOnTamedProcessOrder_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWebSprinting_Pure
struct ABogSpider_Character_BP_C_IsWebSprinting_Pure_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetBitmaskAsString
struct ABogSpider_Character_BP_C_GetBitmaskAsString_Params
{
	int                                                Bitmask;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_InputHeartbeat
struct ABogSpider_Character_BP_C_Tick_InputHeartbeat_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GenerateInputBitMask
struct ABogSpider_Character_BP_C_GenerateInputBitMask_Params
{
	class FString                                      TriggeredByInput;                                         // (Parm, ZeroConstructor)
	int                                                NewBitMask;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ProcessSyncedInputs
struct ABogSpider_Character_BP_C_ProcessSyncedInputs_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveDestroyed
struct ABogSpider_Character_BP_C_ReceiveDestroyed_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DestroyWebAnchors
struct ABogSpider_Character_BP_C_DestroyWebAnchors_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetupCosmeticsForRider
struct ABogSpider_Character_BP_C_SetupCosmeticsForRider_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageWebs
struct ABogSpider_Character_BP_C_Tick_ManageWebs_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsGrapplePullJumping
struct ABogSpider_Character_BP_C_IsGrapplePullJumping_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWantsToWallStick
struct ABogSpider_Character_BP_C_SetWantsToWallStick_Params
{
	bool                                               bWantsToStick;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_TraceForStickableWall
struct ABogSpider_Character_BP_C_Tick_TraceForStickableWall_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetIgnoreWebHitRadius
struct ABogSpider_Character_BP_C_GetIgnoreWebHitRadius_Params
{
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ABogSpider_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetOverrideCameraInterpSpeed
struct ABogSpider_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
{
	float*                                             DefaultTPVCameraSpeedInterpolationMultiplier;             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DefaultTPVOffsetInterpSpeed;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TPVCameraSpeedInterpolationMultiplier;                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TPVOffsetInterpSpeed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateForceSkidAnims
struct ABogSpider_Character_BP_C_Tick_UpdateForceSkidAnims_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.WantsToSwing
struct ABogSpider_Character_BP_C_WantsToSwing_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasEnoughStamina
struct ABogSpider_Character_BP_C_HasEnoughStamina_Params
{
	float                                              requiredStamina;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderStamina
struct ABogSpider_Character_BP_C_Tick_UpdateSpiderStamina_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoGrapplePullJump
struct ABogSpider_Character_BP_C_DoGrapplePullJump_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetRiderUnboardDirection
struct ABogSpider_Character_BP_C_BPGetRiderUnboardDirection_Params
{
	class APrimalCharacter**                           RidingCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleTallModeState
struct ABogSpider_Character_BP_C_ToggleTallModeState_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateGrappleState
struct ABogSpider_Character_BP_C_Tick_UpdateGrappleState_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsAirBraking_Pure
struct ABogSpider_Character_BP_C_IsAirBraking_Pure_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnRiderMountNotify
struct ABogSpider_Character_BP_C_OnRiderMountNotify_Params
{
	class APrimalCharacter*                            RiderRef;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRiding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.AllowPlayMontage
struct ABogSpider_Character_BP_C_AllowPlayMontage_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanEnsnare
struct ABogSpider_Character_BP_C_CanEnsnare_Params
{
	bool                                               bIsForStart;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TickUpdateEnsnaredChar
struct ABogSpider_Character_BP_C_TickUpdateEnsnaredChar_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_StuckToWall
struct ABogSpider_Character_BP_C_Tick_StuckToWall_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintCanAttack
struct ABogSpider_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsHangingFromWeb
struct ABogSpider_Character_BP_C_IsHangingFromWeb_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnStickToWallHit
struct ABogSpider_Character_BP_C_OnStickToWallHit_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanStickToWall
struct ABogSpider_Character_BP_C_CanStickToWall_Params
{
	bool                                               bNotifyOfInsufficientStamina;                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnorePostJumpCooldown;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveHit
struct ABogSpider_Character_BP_C_ReceiveHit_Params
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

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintCanRiderAttack
struct ABogSpider_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryManualWebDetach
struct ABogSpider_Character_BP_C_TryManualWebDetach_Params
{
	bool                                               bDetachLeft;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.PlaySpiderCameraShake
struct ABogSpider_Character_BP_C_PlaySpiderCameraShake_Params
{
	class UClass*                                      CameraShakeClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShakeScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShakeSpeed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScaleShakeWithVelocity;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShakeBaseVelocity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowReplication;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ShakeScaleClamps;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ShakeSpeedClamps;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateShowCrosshair
struct ABogSpider_Character_BP_C_Tick_UpdateShowCrosshair_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWaterWalkingSurfaceStateChanged
struct ABogSpider_Character_BP_C_OnWaterWalkingSurfaceStateChanged_Params
{
	bool                                               NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CheckForWalkingOnWaterSurface
struct ABogSpider_Character_BP_C_Tick_CheckForWalkingOnWaterSurface_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateWaterWalkingState
struct ABogSpider_Character_BP_C_UpdateWaterWalkingState_Params
{
	bool                                               NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceUpdate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCurrentJumpMontage
struct ABogSpider_Character_BP_C_GetCurrentJumpMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnStartJump
struct ABogSpider_Character_BP_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetTransform
struct ABogSpider_Character_BP_C_Tick_UpdateSpiderTargetTransform_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWalkingOnWaterSurface
struct ABogSpider_Character_BP_C_IsWalkingOnWaterSurface_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateOptimalWebHitDist
struct ABogSpider_Character_BP_C_Tick_UpdateOptimalWebHitDist_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetWebTraceHitValue
struct ABogSpider_Character_BP_C_GetWebTraceHitValue_Params
{
	struct FHitResult                                  forWebTraceHit;                                           // (Parm)
	bool                                               bDebug;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              hitValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CheckForTallMode
struct ABogSpider_Character_BP_C_Tick_CheckForTallMode_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldTallMode
struct ABogSpider_Character_BP_C_ShouldTallMode_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.RiderHasWeaponEquipped
struct ABogSpider_Character_BP_C_RiderHasWeaponEquipped_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnTakeOff
struct ABogSpider_Character_BP_C_OnTakeOff_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebTrace
struct ABogSpider_Character_BP_C_WebTrace_Params
{
	struct FVector                                     TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               confirmTraceHits;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              updateAimedCharsRadus;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowHitPullableChars;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               foundHit;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  webHit;                                                   // (Parm, OutParm)
	float                                              webHitValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TraceForBioGrappleTargetInLookDir
struct ABogSpider_Character_BP_C_TraceForBioGrappleTargetInLookDir_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  snarableCharHit;                                          // (Parm, OutParm)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPCharacterSleeped
struct ABogSpider_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OnSetDeath
struct ABogSpider_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateRotateToControlRotation
struct ABogSpider_Character_BP_C_UpdateRotateToControlRotation_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanJumpInternal
struct ABogSpider_Character_BP_C_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveTick
struct ABogSpider_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetRotation
struct ABogSpider_Character_BP_C_Tick_UpdateSpiderTargetRotation_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnGrappleBuffStateChanged
struct ABogSpider_Character_BP_C_OnGrappleBuffStateChanged_Params
{
	TEnumAsByte<EGrappleState>                         NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterpSpiderMesh
struct ABogSpider_Character_BP_C_InterpSpiderMesh_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SoftSetSpiderWorldLocation
struct ABogSpider_Character_BP_C_SoftSetSpiderWorldLocation_Params
{
	struct FVector                                     NewWorldLocation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SoftSetSpiderWorldRotation
struct ABogSpider_Character_BP_C_SoftSetSpiderWorldRotation_Params
{
	struct FRotator                                    newWorldRotation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnMovementModeChangedNotify
struct ABogSpider_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClosestLocationToScreenCenter
struct ABogSpider_Character_BP_C_GetClosestLocationToScreenCenter_Params
{
	struct FVector                                     LocationA;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationB;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    WithViewRot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               A;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsValidStickToWallHit
struct ABogSpider_Character_BP_C_IsValidStickToWallHit_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
	bool                                               bPreventConfirmTraces;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ValidStickNormal;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_InterceptMoveForward
struct ABogSpider_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_InterceptMoveRight
struct ABogSpider_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryStickingToWall
struct ABogSpider_Character_BP_C_TryStickingToWall_Params
{
	struct FVector                                     AtLocation;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryEnsnareChar
struct ABogSpider_Character_BP_C_TryEnsnareChar_Params
{
	class APrimalCharacter*                            Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TickBioGrapple
struct ABogSpider_Character_BP_C_TickBioGrapple_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPTimerNonDedicated
struct ABogSpider_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Has Webs Attached
struct ABogSpider_Character_BP_C_Has_Webs_Attached_Params
{
	int                                                RequireNumWebs;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveBeginPlay
struct ABogSpider_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_SearchForGrapplePoints
struct ABogSpider_Character_BP_C_Tick_SearchForGrapplePoints_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanJumpDetach
struct ABogSpider_Character_BP_C_CanJumpDetach_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasEnoughStaminaPure
struct ABogSpider_Character_BP_C_HasEnoughStaminaPure_Params
{
	float                                              requiredStamina;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReduceSpiderStamina
struct ABogSpider_Character_BP_C_ReduceSpiderStamina_Params
{
	float                                              Stamina;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoLifeSteal
struct ABogSpider_Character_BP_C_DoLifeSteal_Params
{
	class APrimalCharacter*                            FromChar;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPTimerServer
struct ABogSpider_Character_BP_C_BPTimerServer_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderCamera
struct ABogSpider_Character_BP_C_Tick_UpdateSpiderCamera_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetGrappledBuffClassOverride
struct ABogSpider_Character_BP_C_GetGrappledBuffClassOverride_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateGrappledVars
struct ABogSpider_Character_BP_C_UpdateGrappledVars_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPNotifyClearRider
struct ABogSpider_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPNotifySetRider
struct ABogSpider_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPModifyFOV
struct ABogSpider_Character_BP_C_BPModifyFOV_Params
{
	float*                                             FOVIn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWeb Trace Hit Valid
struct ABogSpider_Character_BP_C_IsWeb_Trace_Hit_Valid_Params
{
	struct FHitResult                                  ForHit;                                                   // (Parm)
	bool                                               bAllowHitPullableChars;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bDidHitPullableChar;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebShootybang
struct ABogSpider_Character_BP_C_WebShootybang_Params
{
	bool                                               shootOne;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     hitA;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     hitB;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ConfirmWebTraceHit
struct ABogSpider_Character_BP_C_ConfirmWebTraceHit_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateAimedChars;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowHitPullableChars;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               confirmed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  confirmedHit;                                             // (Parm, OutParm)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ProcessWebTraceHits
struct ABogSpider_Character_BP_C_ProcessWebTraceHits_Params
{
	struct FRotator                                    WithViewRotation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  centerHit;                                                // (Parm)
	struct FHitResult                                  LeftHit;                                                  // (Parm)
	struct FHitResult                                  RightHit;                                                 // (Parm)
	struct FHitResult                                  bestHit_Single;                                           // (Parm, OutParm)
	struct FHitResult                                  bestHit_Left;                                             // (Parm, OutParm)
	struct FHitResult                                  bestHit_Right;                                            // (Parm, OutParm)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SearchForAllGrapplePoints
struct ABogSpider_Character_BP_C_SearchForAllGrapplePoints_Params
{
	struct FRotator                                    WithViewRot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCachedAnchorHits;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundAny;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  foundHit_Center;                                          // (Parm, OutParm)
	struct FHitResult                                  foundHit_Left;                                            // (Parm, OutParm)
	struct FHitResult                                  foundHit_Right;                                           // (Parm, OutParm)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasWebsAttached_Pure
struct ABogSpider_Character_BP_C_HasWebsAttached_Pure_Params
{
	int                                                RequireNumWebs;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderGrappleState
struct ABogSpider_Character_BP_C_SetSpiderGrappleState_Params
{
	TEnumAsByte<EGrappleState>                         NewGrappleState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.AutoSetDesiredGrappleState
struct ABogSpider_Character_BP_C_AutoSetDesiredGrappleState_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterceptInputEvent
struct ABogSpider_Character_BP_C_InterceptInputEvent_Params
{
	class FString*                                     InputName;                                                // (Parm, ZeroConstructor)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPPreventFallDamage
struct ABogSpider_Character_BP_C_BPPreventFallDamage_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm, ReferenceParm)
	float*                                             FallDamageAmount;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoJumpDetach
struct ABogSpider_Character_BP_C_DoJumpDetach_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateGrappleBuffRef
struct ABogSpider_Character_BP_C_UpdateGrappleBuffRef_Params
{
	bool                                               bAddIfNotFound;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DetachBothWebs
struct ABogSpider_Character_BP_C_DetachBothWebs_Params
{
	bool                                               bIsJumpDetach;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventAnim;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               detachedAny;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DetachWeb
struct ABogSpider_Character_BP_C_DetachWeb_Params
{
	bool                                               bLeft;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClosestSideToLocation
struct ABogSpider_Character_BP_C_GetClosestSideToLocation_Params
{
	struct FVector                                     ToLoc;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLeft;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanDoWebTraces
struct ABogSpider_Character_BP_C_CanDoWebTraces_Params
{
	bool                                               bRequireStamina;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNotifyOfInsufficientStamina;                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateGrapplePointPreviews
struct ABogSpider_Character_BP_C_Tick_UpdateGrapplePointPreviews_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebGrappleTether
struct ABogSpider_Character_BP_C_CreateWebGrappleTether_Params
{
	struct FHitResult                                  FromHit;                                                  // (Parm)
	bool                                               bLeft;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventNetSync;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewTetherIndex;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SearchInDirForValidGrapplePoint
struct ABogSpider_Character_BP_C_SearchInDirForValidGrapplePoint_Params
{
	struct FRotator                                    WithViewRot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              traceDir;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsCenter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundAny;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  retHit;                                                   // (Parm, OutParm)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TraceForWebHit
struct ABogSpider_Character_BP_C_TraceForWebHit_Params
{
	struct FRotator                                    WithViewRot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCenterTrace;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  foundHit;                                                 // (Parm, OutParm)
	float                                              foundHitValue;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UserConstructionScript
struct ABogSpider_Character_BP_C_UserConstructionScript_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision__FinishedFunc
struct ABogSpider_Character_BP_C_BlendSpiderVision__FinishedFunc_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision__UpdateFunc
struct ABogSpider_Character_BP_C_BlendSpiderVision__UpdateFunc_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DetachBothWebs
struct ABogSpider_Character_BP_C_Server_DetachBothWebs_Params
{
	bool                                               bIsJumpDetach;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventAnim;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang
struct ABogSpider_Character_BP_C_Server_WebShootybang_Params
{
	struct FVector                                     HitRelLoc_A;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor_A;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitRelLoc_B;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor_B;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang_One
struct ABogSpider_Character_BP_C_Server_WebShootybang_One_Params
{
	struct FVector                                     HitRelLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SetWalkOnWaterState
struct ABogSpider_Character_BP_C_Multi_SetWalkOnWaterState_Params
{
	bool                                               bNewState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SetWalkOnWaterState
struct ABogSpider_Character_BP_C_Server_SetWalkOnWaterState_Params
{
	bool                                               bNewState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_TryStickingToWall
struct ABogSpider_Character_BP_C_Server_TryStickingToWall_Params
{
	struct FVector                                     AtLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_ReleaseEnsnaredChar
struct ABogSpider_Character_BP_C_Server_ReleaseEnsnaredChar_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_UnstickFromWall
struct ABogSpider_Character_BP_C_Server_UnstickFromWall_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang_BioGrapple
struct ABogSpider_Character_BP_C_Server_WebShootybang_BioGrapple_Params
{
	class AActor*                                      EnsnaredActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_ToggleTallModeState
struct ABogSpider_Character_BP_C_Server_ToggleTallModeState_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_ToggleTallModeState
struct ABogSpider_Character_BP_C_Multi_ToggleTallModeState_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SpiderJump
struct ABogSpider_Character_BP_C_Server_SpiderJump_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoSpiderJump
struct ABogSpider_Character_BP_C_DoSpiderJump_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SpiderJump
struct ABogSpider_Character_BP_C_Multi_SpiderJump_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWaterWalkingSurfaceStateChanged
struct ABogSpider_Character_BP_C_Multi_OnWaterWalkingSurfaceStateChanged_Params
{
	bool                                               NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DetachWeb
struct ABogSpider_Character_BP_C_Server_DetachWeb_Params
{
	bool                                               bLeft;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnDoubleDetach
struct ABogSpider_Character_BP_C_Multi_OnDoubleDetach_Params
{
	bool                                               bJumpDetach;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.FinishedReleasingEnsnaredChar
struct ABogSpider_Character_BP_C_FinishedReleasingEnsnaredChar_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleTallModeAfterDelay
struct ABogSpider_Character_BP_C_ToggleTallModeAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_DoGrapplePullJump
struct ABogSpider_Character_BP_C_Multi_DoGrapplePullJump_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_OnShootWeb
struct ABogSpider_Character_BP_C_Client_OnShootWeb_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncWantsToWallStick
struct ABogSpider_Character_BP_C_Server_SyncWantsToWallStick_Params
{
	bool                                               bWantsToStick;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.NextTick_SpawnCosmeticActors
struct ABogSpider_Character_BP_C_NextTick_SpawnCosmeticActors_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncInputs_OnInputChange
struct ABogSpider_Character_BP_C_Server_SyncInputs_OnInputChange_Params
{
	int                                                SyncInputBitMask;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncInputs_Heartbeat
struct ABogSpider_Character_BP_C_Server_SyncInputs_Heartbeat_Params
{
	int                                                SyncInputBitMask;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWebSprintToggle
struct ABogSpider_Character_BP_C_SetWebSprintToggle_Params
{
	bool                                               NewToggle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetControlRot
struct ABogSpider_Character_BP_C_ResetControlRot_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SetActorRotation
struct ABogSpider_Character_BP_C_Multi_SetActorRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSoftSet;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_OnJumpDetach
struct ABogSpider_Character_BP_C_Client_OnJumpDetach_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_DamageBrokeWebs
struct ABogSpider_Character_BP_C_Client_DamageBrokeWebs_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UnstickFromWallAfterDelay
struct ABogSpider_Character_BP_C_UnstickFromWallAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SetImpendingLand
struct ABogSpider_Character_BP_C_Server_SetImpendingLand_Params
{
	bool                                               bNewVal;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnSetEnsnaredChar
struct ABogSpider_Character_BP_C_Multi_OnSetEnsnaredChar_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWebTethersCreated
struct ABogSpider_Character_BP_C_Multi_OnWebTethersCreated_Params
{
	struct FHitResult                                  WithTetherHit_Left;                                       // (Parm)
	struct FHitResult                                  WithTetherHit_Right;                                      // (Parm)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnStartChargeJump
struct ABogSpider_Character_BP_C_Multi_OnStartChargeJump_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_DoChargeJump
struct ABogSpider_Character_BP_C_Multi_DoChargeJump_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_CancelChargeJump
struct ABogSpider_Character_BP_C_Multi_CancelChargeJump_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnTryWebShootyBang
struct ABogSpider_Character_BP_C_OnTryWebShootyBang_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetCreatingWeb
struct ABogSpider_Character_BP_C_ResetCreatingWeb_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWebShootybangFailed
struct ABogSpider_Character_BP_C_Multi_OnWebShootybangFailed_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_TryDoAirJump
struct ABogSpider_Character_BP_C_Server_TryDoAirJump_Params
{
	struct FVector2D                                   WithMoveInputs;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WithVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    WithControlRot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetCanAirJump
struct ABogSpider_Character_BP_C_ResetCanAirJump_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_FireQuickWebs_Single
struct ABogSpider_Character_BP_C_Server_FireQuickWebs_Single_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_FireQuickWebs_Both
struct ABogSpider_Character_BP_C_Server_FireQuickWebs_Both_Params
{
	struct FVector                                     HitLocation_A;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor_A;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation_B;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor_B;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually_Left
struct ABogSpider_Character_BP_C_CreateWebVisually_Left_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually_Right
struct ABogSpider_Character_BP_C_CreateWebVisually_Right_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually_Left
struct ABogSpider_Character_BP_C_BreakWebVisually_Left_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually_Right
struct ABogSpider_Character_BP_C_BreakWebVisually_Right_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncSpiderClimbingInputs
struct ABogSpider_Character_BP_C_Server_SyncSpiderClimbingInputs_Params
{
	struct FVector2D                                   Inputs;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision_Play
struct ABogSpider_Character_BP_C_BlendSpiderVision_Play_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision_Reverse
struct ABogSpider_Character_BP_C_BlendSpiderVision_Reverse_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.RefreshWaterWalkState
struct ABogSpider_Character_BP_C_RefreshWaterWalkState_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnQuickFireWebs
struct ABogSpider_Character_BP_C_Multi_OnQuickFireWebs_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartWebSprintToggle
struct ABogSpider_Character_BP_C_StartWebSprintToggle_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_StartChargeJump
struct ABogSpider_Character_BP_C_Server_StartChargeJump_Params
{
	double                                             ClientTimestamp;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DoChargeJump
struct ABogSpider_Character_BP_C_Server_DoChargeJump_Params
{
	double                                             ClientTimestamp;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVisionBlendTime
struct ABogSpider_Character_BP_C_SetSpiderVisionBlendTime_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetSpiderTamingVars
struct ABogSpider_Character_BP_C_ResetSpiderTamingVars_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetTamerAsRider
struct ABogSpider_Character_BP_C_SetTamerAsRider_Params
{
};

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ExecuteUbergraph_BogSpider_Character_BP
struct ABogSpider_Character_BP_C_ExecuteUbergraph_BogSpider_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
