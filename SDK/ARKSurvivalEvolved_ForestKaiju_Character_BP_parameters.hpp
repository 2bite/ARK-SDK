#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForestKaiju_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetVar_IsProtecting
struct AForestKaiju_Character_BP_C_GetVar_IsProtecting_Params
{
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideHealthBarOffset
struct AForestKaiju_Character_BP_C_BPOverrideHealthBarOffset_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPPreventRiding
struct AForestKaiju_Character_BP_C_BPPreventRiding_Params
{
	class AShooterCharacter**                          ByPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDontCheckDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPDinoARKDownloadedBegin
struct AForestKaiju_Character_BP_C_BPDinoARKDownloadedBegin_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetDebugInfoString
struct AForestKaiju_Character_BP_C_BPGetDebugInfoString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanBaseOnCharacter
struct AForestKaiju_Character_BP_C_BPCanBaseOnCharacter_Params
{
	class APrimalCharacter**                           BaseCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ActorIsKaiju
struct AForestKaiju_Character_BP_C_ActorIsKaiju_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsKaiju;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPDinoARKDownloadedEnd
struct AForestKaiju_Character_BP_C_BPDinoARKDownloadedEnd_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_UseTamedPhysics
struct AForestKaiju_Character_BP_C_OnRep_UseTamedPhysics_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideCharacterSound
struct AForestKaiju_Character_BP_C_BPOverrideCharacterSound_Params
{
	class USoundBase**                                 SoundIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.HealNodesAndHealthFromLeashing
struct AForestKaiju_Character_BP_C_HealNodesAndHealthFromLeashing_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker
struct AForestKaiju_Character_BP_C_BPOverrideDamageCauserHitMarker_Params
{
	class AShooterPlayerController**                   DamageCauserController;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHitFriendlyTarget;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PreDamageHealth;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  PointDamageHitResult;                                     // (Parm, OutParm, ReferenceParm)
	struct FHitMarkerSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOnDinoCheat
struct AForestKaiju_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.HasCantRootBuff
struct AForestKaiju_Character_BP_C_HasCantRootBuff_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RidingTick
struct AForestKaiju_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.K2_OnMovementModeChanged
struct AForestKaiju_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        newMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     newCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOverrideCharacterNewFallVelocity
struct AForestKaiju_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetRiderUnboardLocation
struct AForestKaiju_Character_BP_C_BPGetRiderUnboardLocation_Params
{
	class APrimalCharacter**                           RidingCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpSpawnInMesh
struct AForestKaiju_Character_BP_C_InterpSpawnInMesh_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CanFit
struct AForestKaiju_Character_BP_C_CanFit_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VerticalOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalOffset;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      IgnoreActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.LerpDyingMaterials
struct AForestKaiju_Character_BP_C_LerpDyingMaterials_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintAdjustOutputDamage
struct AForestKaiju_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeShowRootRadiusRing
struct AForestKaiju_Character_BP_C_MaybeShowRootRadiusRing_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ShowRootRadiusRing
struct AForestKaiju_Character_BP_C_ShowRootRadiusRing_Params
{
	bool                                               ShowRing;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_InterceptMoveForward
struct AForestKaiju_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Get Grab Attack Vine AttachTargetsSocket Name
struct AForestKaiju_Character_BP_C_Get_Grab_Attack_Vine_AttachTargetsSocket_Name_Params
{
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DissolveArm
struct AForestKaiju_Character_BP_C_DissolveArm_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Is Location Valid Vine Attack Range
struct AForestKaiju_Character_BP_C_Is_Location_Valid_Vine_Attack_Range_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeLoseArmWhileProtecting
struct AForestKaiju_Character_BP_C_MaybeLoseArmWhileProtecting_Params
{
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyAllNearbyPoisonTrees
struct AForestKaiju_Character_BP_C_DestroyAllNearbyPoisonTrees_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPSetupTamed
struct AForestKaiju_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetMovementMontageSection
struct AForestKaiju_Character_BP_C_GetMovementMontageSection_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpProtectShieldStatus
struct AForestKaiju_Character_BP_C_InterpProtectShieldStatus_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InterpNodeStates
struct AForestKaiju_Character_BP_C_InterpNodeStates_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CreateDynamicMATS
struct AForestKaiju_Character_BP_C_CreateDynamicMATS_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPOnAnimPlayedNotify
struct AForestKaiju_Character_BP_C_BPOnAnimPlayedNotify_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicateToOwner;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseAndServerUpdateMesh;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseOnServer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPModifyRootMotionDeltaRotation
struct AForestKaiju_Character_BP_C_BPModifyRootMotionDeltaRotation_Params
{
	struct FRotator                                    Delta;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.WantsLocomotionTransition
struct AForestKaiju_Character_BP_C_WantsLocomotionTransition_Params
{
	bool                                               WantsTransition;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsLocomotionBlocked
struct AForestKaiju_Character_BP_C_IsLocomotionBlocked_Params
{
	bool                                               bLocked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetMovementMontage
struct AForestKaiju_Character_BP_C_GetMovementMontage_Params
{
	TEnumAsByte<ERootMotionMovementMode>*              Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.PlayAIProtectSelfBriefly
struct AForestKaiju_Character_BP_C_PlayAIProtectSelfBriefly_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_CurrentAttackIndexReplicated
struct AForestKaiju_Character_BP_C_OnRep_CurrentAttackIndexReplicated_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnMaxVinesThisFrame
struct AForestKaiju_Character_BP_C_SpawnMaxVinesThisFrame_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnVineInternal
struct AForestKaiju_Character_BP_C_SpawnVineInternal_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintCanRiderAttack
struct AForestKaiju_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlueprintCanAttack
struct AForestKaiju_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPNotifyClearRider
struct AForestKaiju_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnSetDeath
struct AForestKaiju_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BlinkDamageNodeInterp
struct AForestKaiju_Character_BP_C_BlinkDamageNodeInterp_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonTreeSeeds
struct AForestKaiju_Character_BP_C_SpawnPoisonTreeSeeds_Params
{
	float                                              TreeCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SetLastPlayerGrabAttackTargetLocation
struct AForestKaiju_Character_BP_C_SetLastPlayerGrabAttackTargetLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_FollowControlRotation
struct AForestKaiju_Character_BP_C_OnRep_FollowControlRotation_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.OnRep_GrabAttacking
struct AForestKaiju_Character_BP_C_OnRep_GrabAttacking_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.TurnOffAttackBBKeys
struct AForestKaiju_Character_BP_C_TurnOffAttackBBKeys_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanBeBaseForCharacter
struct AForestKaiju_Character_BP_C_BPCanBeBaseForCharacter_Params
{
	class APawn**                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsRightArmGrabAttack
struct AForestKaiju_Character_BP_C_IsRightArmGrabAttack_Params
{
	bool                                               RightArmGrabAttack;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CanPlayerGrabAttack
struct AForestKaiju_Character_BP_C_CanPlayerGrabAttack_Params
{
	bool                                               GrabAttack;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Hit;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetCrosshairColor
struct AForestKaiju_Character_BP_C_BPGetCrosshairColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetGrabAttackVineSocketName
struct AForestKaiju_Character_BP_C_GetGrabAttackVineSocketName_Params
{
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnVine
struct AForestKaiju_Character_BP_C_SpawnVine_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Get GrabAttackVineStartLocation
struct AForestKaiju_Character_BP_C_Get_GrabAttackVineStartLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InitVars
struct AForestKaiju_Character_BP_C_InitVars_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.VineGrabHit
struct AForestKaiju_Character_BP_C_VineGrabHit_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.VineGrabMissed
struct AForestKaiju_Character_BP_C_VineGrabMissed_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetMultiUseEntries
struct AForestKaiju_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTryMultiUse
struct AForestKaiju_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRightComplete
struct AForestKaiju_Character_BP_C_RegrowRightComplete_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeftComplete
struct AForestKaiju_Character_BP_C_RegrowLeftComplete_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowTick
struct AForestKaiju_Character_BP_C_RegrowTick_Params
{
	class USkeletalMeshComponent*                      Appendage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurrentScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutScale;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Complete;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Regrow
struct AForestKaiju_Character_BP_C_Regrow_Params
{
	bool                                               LeftArm;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Dismember
struct AForestKaiju_Character_BP_C_Dismember_Params
{
	class USkeletalMeshComponent*                      Appendage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Is Root Attacking
struct AForestKaiju_Character_BP_C_Is_Root_Attacking_Params
{
	bool                                               IsAttacking;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetRootAttackChargeLEvel
struct AForestKaiju_Character_BP_C_GetRootAttackChargeLEvel_Params
{
	bool                                               SmoothedValues;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetHUDElements
struct AForestKaiju_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPPreventInputType
struct AForestKaiju_Character_BP_C_BPPreventInputType_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.PreventLocomotion
struct AForestKaiju_Character_BP_C_PreventLocomotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MaybeExposeNode
struct AForestKaiju_Character_BP_C_MaybeExposeNode_Params
{
	class AActor*                                      DmgCauser;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDesertKaiju_ControlNodes>             Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StartTorpid
struct AForestKaiju_Character_BP_C_StartTorpid_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonTree
struct AForestKaiju_Character_BP_C_SpawnPoisonTree_Params
{
	class AActor*                                      SpawnOnEnemy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTimerServer
struct AForestKaiju_Character_BP_C_BPTimerServer_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPHandleOnStopTargeting
struct AForestKaiju_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ShortestAngleDistance
struct AForestKaiju_Character_BP_C_ShortestAngleDistance_Params
{
	float                                              AngleCurrent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Difference;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GetClampedLookDir
struct AForestKaiju_Character_BP_C_GetClampedLookDir_Params
{
	bool                                               LimitLowerPitch;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     _return;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPHandleControllerInitiatedAttack
struct AForestKaiju_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabTrace
struct AForestKaiju_Character_BP_C_GrabTrace_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPAdjustAttackIndex
struct AForestKaiju_Character_BP_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPGetOverrideCameraInterpSpeed
struct AForestKaiju_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
{
	float*                                             DefaultTPVCameraSpeedInterpolationMultiplier;             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DefaultTPVOffsetInterpSpeed;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TPVCameraSpeedInterpolationMultiplier;                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TPVOffsetInterpSpeed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_InterceptMoveRight
struct AForestKaiju_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SwitchTPVCamView
struct AForestKaiju_Character_BP_C_SwitchTPVCamView_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.IsFirstPersonView
struct AForestKaiju_Character_BP_C_IsFirstPersonView_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPTimerNonDedicated
struct AForestKaiju_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyCenterNode
struct AForestKaiju_Character_BP_C_DestroyCenterNode_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageCenterNode
struct AForestKaiju_Character_BP_C_DamageCenterNode_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyRightNode
struct AForestKaiju_Character_BP_C_DestroyRightNode_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageRightNode
struct AForestKaiju_Character_BP_C_DamageRightNode_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExposeNode
struct AForestKaiju_Character_BP_C_ExposeNode_Params
{
	bool                                               Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Right;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DestroyLeftNode
struct AForestKaiju_Character_BP_C_DestroyLeftNode_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageLeftNode
struct AForestKaiju_Character_BP_C_DamageLeftNode_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPAdjustDamage
struct AForestKaiju_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BPCanTargetCorpse
struct AForestKaiju_Character_BP_C_BPCanTargetCorpse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UserConstructionScript
struct AForestKaiju_Character_BP_C_UserConstructionScript_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_174
struct AForestKaiju_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_174_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_173
struct AForestKaiju_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_173_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_172
struct AForestKaiju_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_172_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_171
struct AForestKaiju_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_171_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CallFunc_StunKaiju
struct AForestKaiju_Character_BP_C_CallFunc_StunKaiju_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SetVar_FKArenaManager
struct AForestKaiju_Character_BP_C_SetVar_FKArenaManager_Params
{
	class AActor*                                      ArenaManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReceiveTick
struct AForestKaiju_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReceiveBeginPlay
struct AForestKaiju_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetNodeColor
struct AForestKaiju_Character_BP_C_Multi_SetNodeColor_Params
{
	int                                                Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Activated;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DamageNode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Rep_ExposeLeftRightNodes
struct AForestKaiju_Character_BP_C_Rep_ExposeLeftRightNodes_Params
{
	bool                                               Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Right;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicateCameraDataTPVToServer
struct AForestKaiju_Character_BP_C_ReplicateCameraDataTPVToServer_Params
{
	bool                                               IsFirstPerson;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ServerExecuteGrab
struct AForestKaiju_Character_BP_C_ServerExecuteGrab_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Server_GrabTraceTargetDir
struct AForestKaiju_Character_BP_C_Server_GrabTraceTargetDir_Params
{
	struct FVector                                     AimLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AimHit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ExposeNodes
struct AForestKaiju_Character_BP_C_Multi_ExposeNodes_Params
{
	TEnumAsByte<EDesertKaiju_ControlNodes>             Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Expose;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ActivateNode
struct AForestKaiju_Character_BP_C_ActivateNode_Params
{
	TEnumAsByte<EDesertKaiju_ControlNodes>             Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_LeftNode
struct AForestKaiju_Character_BP_C_Deactivate_LeftNode_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_RightNode
struct AForestKaiju_Character_BP_C_Deactivate_RightNode_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Deactivate_CenterNode
struct AForestKaiju_Character_BP_C_Deactivate_CenterNode_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_StartAttackRoot
struct AForestKaiju_Character_BP_C_CtS_StartAttackRoot_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_ExecuteAttackRoot
struct AForestKaiju_Character_BP_C_CtS_ExecuteAttackRoot_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_EndRootAttack
struct AForestKaiju_Character_BP_C_AnimNotify_EndRootAttack_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PreventInput
struct AForestKaiju_Character_BP_C_Multi_PreventInput_Params
{
	bool                                               prevent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExecuteAttackRoot
struct AForestKaiju_Character_BP_C_ExecuteAttackRoot_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_RootTargets
struct AForestKaiju_Character_BP_C_AnimNotify_RootTargets_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AI_StartAttackRoot
struct AForestKaiju_Character_BP_C_AI_StartAttackRoot_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AI_EndAttackRoot
struct AForestKaiju_Character_BP_C_AI_EndAttackRoot_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRightArmTick
struct AForestKaiju_Character_BP_C_RegrowRightArmTick_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeftArmTick
struct AForestKaiju_Character_BP_C_RegrowLeftArmTick_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_Dismember
struct AForestKaiju_Character_BP_C_Multi_Dismember_Params
{
	bool                                               LeftArm;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowLeft
struct AForestKaiju_Character_BP_C_RegrowLeft_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.RegrowRight
struct AForestKaiju_Character_BP_C_RegrowRight_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.EndGrabAIState
struct AForestKaiju_Character_BP_C_EndGrabAIState_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackSmash
struct AForestKaiju_Character_BP_C_AnimNotify_GrabAttackSmash_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_DebugDrawLine
struct AForestKaiju_Character_BP_C_MULTI_DebugDrawLine_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationSeconds;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DebugDrawLine
struct AForestKaiju_Character_BP_C_DebugDrawLine_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationSeconds;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicateRiderTPVRight
struct AForestKaiju_Character_BP_C_ReplicateRiderTPVRight_Params
{
	bool                                               TPVRight;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_GrabAttackStateStart
struct AForestKaiju_Character_BP_C_MULTI_GrabAttackStateStart_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_GrabAttackStateEnd
struct AForestKaiju_Character_BP_C_MULTI_GrabAttackStateEnd_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ReplicatePlayerGrabAttackTargetLocation
struct AForestKaiju_Character_BP_C_ReplicatePlayerGrabAttackTargetLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SpawnPoisonSeeds
struct AForestKaiju_Character_BP_C_SpawnPoisonSeeds_Params
{
	float                                              Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PlaySeedSpawnVFX
struct AForestKaiju_Character_BP_C_Multi_PlaySeedSpawnVFX_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DamageNodeBlink
struct AForestKaiju_Character_BP_C_DamageNodeBlink_Params
{
	TEnumAsByte<EDesertKaiju_ControlNodes>             Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpLeftNode
struct AForestKaiju_Character_BP_C_Multi_InterpLeftNode_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpRightNode
struct AForestKaiju_Character_BP_C_Multi_InterpRightNode_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpCenterNode
struct AForestKaiju_Character_BP_C_Multi_InterpCenterNode_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnJumpPressed
struct AForestKaiju_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnJumpReleased
struct AForestKaiju_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Server_SetProtecting
struct AForestKaiju_Character_BP_C_Server_SetProtecting_Params
{
	bool                                               Protecting;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Client_SetDoingRootAttack
struct AForestKaiju_Character_BP_C_Client_SetDoingRootAttack_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.MULTI_StartGrabAttackAnim
struct AForestKaiju_Character_BP_C_MULTI_StartGrabAttackAnim_Params
{
	bool                                               RightArm;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LeftRight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              UpDown;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackDetachActors
struct AForestKaiju_Character_BP_C_GrabAttackDetachActors_Params
{
	TArray<class APrimalCharacter*>                    Targets;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackTick
struct AForestKaiju_Character_BP_C_GrabAttackTick_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StunForestKaiju
struct AForestKaiju_Character_BP_C_StunForestKaiju_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackPanCamera
struct AForestKaiju_Character_BP_C_AnimNotify_GrabAttackPanCamera_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_EndShieldFX
struct AForestKaiju_Character_BP_C_AnimNotify_EndShieldFX_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetProtecting
struct AForestKaiju_Character_BP_C_Multi_SetProtecting_Params
{
	bool                                               Protecting;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_InterpNodeDamage
struct AForestKaiju_Character_BP_C_Multi_InterpNodeDamage_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BP_OnSetRunning
struct AForestKaiju_Character_BP_C_BP_OnSetRunning_Params
{
	bool*                                              bNewIsRunning;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_DelayedCorruptionDestroy
struct AForestKaiju_Character_BP_C_Multi_DelayedCorruptionDestroy_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UpdateGrabAttackTPVOffset
struct AForestKaiju_Character_BP_C_UpdateGrabAttackTPVOffset_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.GrabAttackAttachActors
struct AForestKaiju_Character_BP_C_GrabAttackAttachActors_Params
{
	TArray<struct FVineTargetData>                     Targets;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.CtS_SetDoingRootAttack
struct AForestKaiju_Character_BP_C_CtS_SetDoingRootAttack_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.DissolveLeft
struct AForestKaiju_Character_BP_C_DissolveLeft_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_CreateDissolvingArmDynamicMATs
struct AForestKaiju_Character_BP_C_Multi_CreateDissolvingArmDynamicMATs_Params
{
	bool                                               LeftArm;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ShowRootRadius
struct AForestKaiju_Character_BP_C_Multi_ShowRootRadius_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetRootchargeAmount
struct AForestKaiju_Character_BP_C_Multi_SetRootchargeAmount_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StC_SetLastTimeRootAttack
struct AForestKaiju_Character_BP_C_StC_SetLastTimeRootAttack_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_PlayNodeDestroyFX
struct AForestKaiju_Character_BP_C_Multi_PlayNodeDestroyFX_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_BeginDying
struct AForestKaiju_Character_BP_C_AnimNotify_BeginDying_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_ApplyFallingDownForce
struct AForestKaiju_Character_BP_C_Multi_ApplyFallingDownForce_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.EquipSaddle
struct AForestKaiju_Character_BP_C_EquipSaddle_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_GrabAttackSpawnVines
struct AForestKaiju_Character_BP_C_AnimNotify_GrabAttackSpawnVines_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_SetDoingRootAttack
struct AForestKaiju_Character_BP_C_Multi_SetDoingRootAttack_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.StaggeredRootTargets
struct AForestKaiju_Character_BP_C_StaggeredRootTargets_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.SERVER_GrabAttackSpawnVines
struct AForestKaiju_Character_BP_C_SERVER_GrabAttackSpawnVines_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.AnimNotify_CheckForProtect
struct AForestKaiju_Character_BP_C_AnimNotify_CheckForProtect_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_280_ComponentHitSignature__DelegateSignature
struct AForestKaiju_Character_BP_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_280_ComponentHitSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature
struct AForestKaiju_Character_BP_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_283_ComponentHitSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.UpdateSaddlePhysics
struct AForestKaiju_Character_BP_C_UpdateSaddlePhysics_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen
struct AForestKaiju_Character_BP_C_Multi_DelayedTurnOffHealthRegen_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.Multi_CleanArms
struct AForestKaiju_Character_BP_C_Multi_CleanArms_Params
{
};

// Function ForestKaiju_Character_BP.ForestKaiju_Character_BP_C.ExecuteUbergraph_ForestKaiju_Character_BP
struct AForestKaiju_Character_BP_C_ExecuteUbergraph_ForestKaiju_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
