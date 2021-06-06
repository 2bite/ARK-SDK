#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Grappled_BogSpider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanUpdateTetherLength
struct ABuff_Grappled_BogSpider_C_CanUpdateTetherLength_Params
{
	struct FGrappleTether                              ForTether;                                                // (Parm, OutParm, ReferenceParm)
	float*                                             WithLength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldUseDynamicTetherTension
struct ABuff_Grappled_BogSpider_C_ShouldUseDynamicTetherTension_Params
{
	struct FGrappleTether                              ForTether;                                                // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanDrawSpiderVisionOutlines
struct ABuff_Grappled_BogSpider_C_CanDrawSpiderVisionOutlines_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.DisplayGrappleSystemHudNotification
struct ABuff_Grappled_BogSpider_C_DisplayGrappleSystemHudNotification_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     FromActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NotificationType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NotificationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     ReasonString;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldReturnToIdleGrappleState
struct ABuff_Grappled_BogSpider_C_ShouldReturnToIdleGrappleState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsOwnerLookingAtAgainstSurface
struct ABuff_Grappled_BogSpider_C_IsOwnerLookingAtAgainstSurface_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanTraceForSwingCollisions
struct ABuff_Grappled_BogSpider_C_CanTraceForSwingCollisions_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ResetOwnerClientPositionErrorTolerance
struct ABuff_Grappled_BogSpider_C_ResetOwnerClientPositionErrorTolerance_Params
{
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetPullingSlingshotRatio
struct ABuff_Grappled_BogSpider_C_GetPullingSlingshotRatio_Params
{
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsGrappledCharHardAttached
struct ABuff_Grappled_BogSpider_C_IsGrappledCharHardAttached_Params
{
	class APrimalCharacter**                           forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherReleaseMaxVelocity
struct ABuff_Grappled_BogSpider_C_GetGrappleTetherReleaseMaxVelocity_Params
{
	class APrimalCharacter**                           ForReleasingChar;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGrappleTether                              ForTether;                                                // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetMaxTetherLength
struct ABuff_Grappled_BogSpider_C_GetMaxTetherLength_Params
{
	struct FGrappleTether                              ForTether;                                                // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetIdealSwingHeightAboveFloor
struct ABuff_Grappled_BogSpider_C_GetIdealSwingHeightAboveFloor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanSyncGrappleTetherLengths
struct ABuff_Grappled_BogSpider_C_CanSyncGrappleTetherLengths_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPOverrideCharacterNewFallVelocity
struct ABuff_Grappled_BogSpider_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnSwingTracePredictedHitFound
struct ABuff_Grappled_BogSpider_C_OnSwingTracePredictedHitFound_Params
{
	struct FVector                                     AtHitLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanUseWebSlingshot
struct ABuff_Grappled_BogSpider_C_CanUseWebSlingshot_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ResetOwnerVars
struct ABuff_Grappled_BogSpider_C_ResetOwnerVars_Params
{
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappledCharDeath
struct ABuff_Grappled_BogSpider_C_OnGrappledCharDeath_Params
{
	class APrimalCharacter**                           DyingChar;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanBeGrappledAgainstSurface
struct ABuff_Grappled_BogSpider_C_CanBeGrappledAgainstSurface_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetActorComponentsCustomDepthStencilValue
struct ABuff_Grappled_BogSpider_C_SetActorComponentsCustomDepthStencilValue_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetActorComponentsRenderCustomDepth
struct ABuff_Grappled_BogSpider_C_SetActorComponentsRenderCustomDepth_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRender;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateSpiderVisionActorBounds
struct ABuff_Grappled_BogSpider_C_UpdateSpiderVisionActorBounds_Params
{
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetSpiderVisionEnabled
struct ABuff_Grappled_BogSpider_C_SetSpiderVisionEnabled_Params
{
	class APlayerController*                           ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Tick_CheckForDeactivate
struct ABuff_Grappled_BogSpider_C_Tick_CheckForDeactivate_Params
{
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPDeactivated
struct ABuff_Grappled_BogSpider_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateSpiderVisionPostProcess
struct ABuff_Grappled_BogSpider_C_UpdateSpiderVisionPostProcess_Params
{
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanPullChar
struct ABuff_Grappled_BogSpider_C_CanPullChar_Params
{
	class APrimalCharacter**                           PullChar;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsPullingBioGrappledChar
struct ABuff_Grappled_BogSpider_C_IsPullingBioGrappledChar_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateOwnerMovementSpeed
struct ABuff_Grappled_BogSpider_C_UpdateOwnerMovementSpeed_Params
{
	struct FVector                                     WithCharVelocity;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTetherRemoved
struct ABuff_Grappled_BogSpider_C_OnGrappleTetherRemoved_Params
{
	struct FGrappleTether                              RemovedTether;                                            // (Parm, OutParm, ReferenceParm)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTetherAdded
struct ABuff_Grappled_BogSpider_C_OnGrappleTetherAdded_Params
{
	struct FGrappleTether                              AddedTether;                                              // (Parm, OutParm, ReferenceParm)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.RotateSwingingVelocityWithLookDir
struct ABuff_Grappled_BogSpider_C_RotateSwingingVelocityWithLookDir_Params
{
	struct FVector                                     CurrentVelDir;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotatedVelDir;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetVelDir;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.AddAntiGravityPullVelocity
struct ABuff_Grappled_BogSpider_C_AddAntiGravityPullVelocity_Params
{
	struct FVector                                     ToVelocity;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class APrimalCharacter*                            forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CheckForAutoBreakTether
struct ABuff_Grappled_BogSpider_C_CheckForAutoBreakTether_Params
{
	struct FGrappleTether                              CheckTether;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldReplicateOwnerInputs
struct ABuff_Grappled_BogSpider_C_ShouldReplicateOwnerInputs_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetCurrentTetherMoveDir
struct ABuff_Grappled_BogSpider_C_GetCurrentTetherMoveDir_Params
{
	struct FGrappleTether                              ForTether;                                                // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ApplyTetherMoveVelocity
struct ABuff_Grappled_BogSpider_C_ApplyTetherMoveVelocity_Params
{
	struct FVector                                     CurrentVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SyncSlingshotRatios
struct ABuff_Grappled_BogSpider_C_SyncSlingshotRatios_Params
{
	bool                                               bForceSync;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ForceStopSlingshot
struct ABuff_Grappled_BogSpider_C_ForceStopSlingshot_Params
{
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSlingshotLaunching
struct ABuff_Grappled_BogSpider_C_IsSlingshotLaunching_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSlingshotLaunchingPure
struct ABuff_Grappled_BogSpider_C_IsSlingshotLaunchingPure_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ClampGrappleVelocity
struct ABuff_Grappled_BogSpider_C_ClampGrappleVelocity_Params
{
	struct FVector                                     ClampVelocity;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetTetherBreakLimit_OwnerPastCurrentLengthDelta
struct ABuff_Grappled_BogSpider_C_GetTetherBreakLimit_OwnerPastCurrentLengthDelta_Params
{
	struct FGrappleTether                              ForTether;                                                // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldTetherBreak
struct ABuff_Grappled_BogSpider_C_ShouldTetherBreak_Params
{
	struct FGrappleTether                              ForTether;                                                // (Parm, OutParm, ReferenceParm)
	class APrimalCharacter**                           forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OverrideBreakPastDist;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSpiderTryingToSlingshot
struct ABuff_Grappled_BogSpider_C_IsSpiderTryingToSlingshot_Params
{
	struct FGrappleTether                              ForTether;                                                // (Parm, OutParm, ReferenceParm)
	struct FVector                                     WithVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SimulateTautTetherForces
struct ABuff_Grappled_BogSpider_C_SimulateTautTetherForces_Params
{
	struct FVector                                     WithCharVelocity;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             LastGravityZ;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPGetGravityZScale
struct ABuff_Grappled_BogSpider_C_BPGetGravityZScale_Params
{
	float*                                             currentScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsTetherLeftWeb
struct ABuff_Grappled_BogSpider_C_IsTetherLeftWeb_Params
{
	struct FGrappleTether                              Tether;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               bIsWebTether;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeftWeb;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.WhichWebIsOnRightSideOfView
struct ABuff_Grappled_BogSpider_C_WhichWebIsOnRightSideOfView_Params
{
	struct FRotator                                    WithViewRot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLeft;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanOwnerGrappleSwing
struct ABuff_Grappled_BogSpider_C_CanOwnerGrappleSwing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetCurrentGrappleState
struct ABuff_Grappled_BogSpider_C_GetCurrentGrappleState_Params
{
	struct FGrappleTether                              ForTether;                                                // (Parm, OutParm, ReferenceParm)
	TEnumAsByte<EGrappleState>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanRotateCharVelocity
struct ABuff_Grappled_BogSpider_C_CanRotateCharVelocity_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ModifyOverriddenCharVelocity
struct ABuff_Grappled_BogSpider_C_ModifyOverriddenCharVelocity_Params
{
	struct FVector                                     CurrentCharVelocity;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnReleasedPrimalChar
struct ABuff_Grappled_BogSpider_C_OnReleasedPrimalChar_Params
{
	class APrimalCharacter**                           ReleasedChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappledPrimalChar
struct ABuff_Grappled_BogSpider_C_OnGrappledPrimalChar_Params
{
	class APrimalCharacter**                           GrappledChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGrappleTether                              WithMasterTether;                                         // (Parm, OutParm, ReferenceParm)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsValidSwingHit
struct ABuff_Grappled_BogSpider_C_IsValidSwingHit_Params
{
	struct FHitResult                                  CheckHit;                                                 // (Parm, OutParm, ReferenceParm)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ReceiveBeginPlay
struct ABuff_Grappled_BogSpider_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ModifyTetherMoveVelocity
struct ABuff_Grappled_BogSpider_C_ModifyTetherMoveVelocity_Params
{
	struct FVector                                     CurrentMoveVelocity;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FGrappleTether                              ForTether;                                                // (Parm, OutParm, ReferenceParm)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BuffTickServer
struct ABuff_Grappled_BogSpider_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CheckForSwingCollision
struct ABuff_Grappled_BogSpider_C_CheckForSwingCollision_Params
{
	struct FVector                                     AtProjectedLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               foundHit;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  swingHit;                                                 // (Parm, OutParm)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BuffTickClient
struct ABuff_Grappled_BogSpider_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Tick_TraceForSwingCollisions
struct ABuff_Grappled_BogSpider_C_Tick_TraceForSwingCollisions_Params
{
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherPullMaxVelocity
struct ABuff_Grappled_BogSpider_C_GetGrappleTetherPullMaxVelocity_Params
{
	class APrimalCharacter**                           ForPullingChar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGrappleTether                              ForTether;                                                // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherPullAcceleration
struct ABuff_Grappled_BogSpider_C_GetGrappleTetherPullAcceleration_Params
{
	class APrimalCharacter**                           ForPullingChar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGrappleTether                              ForTether;                                                // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleVelocityDampingRate
struct ABuff_Grappled_BogSpider_C_GetGrappleVelocityDampingRate_Params
{
	class APrimalCharacter**                           forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGrappleTether                              ForTether;                                                // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanChangeGrappleState
struct ABuff_Grappled_BogSpider_C_CanChangeGrappleState_Params
{
	unsigned char*                                     DesiredGrappleState;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldForceOwnerIntoFallingState
struct ABuff_Grappled_BogSpider_C_ShouldForceOwnerIntoFallingState_Params
{
	struct FGrappleTether                              ForTether;                                                // (Parm, OutParm, ReferenceParm)
	struct FVector                                     WithOwnerVelocity;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        CheckMovementModeOverride;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTethersChanged
struct ABuff_Grappled_BogSpider_C_OnGrappleTethersChanged_Params
{
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.EndGrapple
struct ABuff_Grappled_BogSpider_C_EndGrapple_Params
{
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleStateChangedNotify
struct ABuff_Grappled_BogSpider_C_OnGrappleStateChangedNotify_Params
{
	unsigned char                                      NewGrappleState;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bIsEarlyNotify;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UserConstructionScript
struct ABuff_Grappled_BogSpider_C_UserConstructionScript_Params
{
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Server_OnSwingTracePredictedHitFound
struct ABuff_Grappled_BogSpider_C_Server_OnSwingTracePredictedHitFound_Params
{
	struct FVector                                     AtProjectedLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Multi_ForceStopSlingshot
struct ABuff_Grappled_BogSpider_C_Multi_ForceStopSlingshot_Params
{
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Multi_SyncSlingshotRatios
struct ABuff_Grappled_BogSpider_C_Multi_SyncSlingshotRatios_Params
{
	struct FVector2D                                   Ratios;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ExecuteUbergraph_Buff_Grappled_BogSpider
struct ABuff_Grappled_BogSpider_C_ExecuteUbergraph_Buff_Grappled_BogSpider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
