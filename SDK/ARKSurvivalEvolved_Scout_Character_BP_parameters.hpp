#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Scout_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Scout_Character_BP.Scout_Character_BP_C.BPCanCryo
struct AScout_Character_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.BPOnRefreshColorization
struct AScout_Character_BP_C_BPOnRefreshColorization_Params
{
	TArray<struct FLinearColor>                        Colors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Scout_Character_BP.Scout_Character_BP_C.BP_PreventMovementMode
struct AScout_Character_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.ServerIsFiringItemInInventory
struct AScout_Character_BP_C_ServerIsFiringItemInInventory_Params
{
	bool                                               retVal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.ServerIsUsingTrackerBeam
struct AScout_Character_BP_C_ServerIsUsingTrackerBeam_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.OnCheckMek
struct AScout_Character_BP_C_OnCheckMek_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.BP_InterceptTurnInput
struct AScout_Character_BP_C_BP_InterceptTurnInput_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.Set StatsFromItem
struct AScout_Character_BP_C_Set_StatsFromItem_Params
{
	TArray<float>                                      Stats;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Scout_Character_BP.Scout_Character_BP_C.SetupScoutDisconnect
struct AScout_Character_BP_C_SetupScoutDisconnect_Params
{
	float                                              DelayTimeSeconds;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.DestroyScout
struct AScout_Character_BP_C_DestroyScout_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.BPModifyAimOffsetTargetLocation
struct AScout_Character_BP_C_BPModifyAimOffsetTargetLocation_Params
{
	struct FVector                                     AimTargetLocation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClearExpiredDinoAIData
struct AScout_Character_BP_C_ClearExpiredDinoAIData_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.SetIsFleeingForDino
struct AScout_Character_BP_C_SetIsFleeingForDino_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFleeing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.Is Dino Fleeing
struct AScout_Character_BP_C_Is_Dino_Fleeing_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFleeing;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.BPOverrideStencilAllianceForTarget
struct AScout_Character_BP_C_BPOverrideStencilAllianceForTarget_Params
{
	class APrimalCharacter**                           TargetDino;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStencilAlliance>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.BPShouldCancelDoAttack
struct AScout_Character_BP_C_BPShouldCancelDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.OnRep_LowStamina
struct AScout_Character_BP_C_OnRep_LowStamina_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.IsDashing
struct AScout_Character_BP_C_IsDashing_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.BPGetHUDElements
struct AScout_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Scout_Character_BP.Scout_Character_BP_C.ReceiveTick
struct AScout_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.ScoutIsFirstPerson
struct AScout_Character_BP_C_ScoutIsFirstPerson_Params
{
	bool                                               retVal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.InitBeamVFX
struct AScout_Character_BP_C_InitBeamVFX_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.EndBeam VFX
struct AScout_Character_BP_C_EndBeam_VFX_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.SetBeamValidTarget
struct AScout_Character_BP_C_SetBeamValidTarget_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.BPHandleOnStopFire
struct AScout_Character_BP_C_BPHandleOnStopFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.Update Target Impact VFX_Implementation
struct AScout_Character_BP_C_Update_Target_Impact_VFX_Implementation_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.Update Beam VFX Implementation
struct AScout_Character_BP_C_Update_Beam_VFX_Implementation_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.SetTargetImpactMaterial
struct AScout_Character_BP_C_SetTargetImpactMaterial_Params
{
	float                                              ImpactDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.BPPreventStasis
struct AScout_Character_BP_C_BPPreventStasis_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.BPHandleUseButtonPress
struct AScout_Character_BP_C_BPHandleUseButtonPress_Params
{
	class AShooterPlayerController**                   RiderController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.IsScoutFirst Person
struct AScout_Character_BP_C_IsScoutFirst_Person_Params
{
	bool                                               IsFirstPerson;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.SetFirstPersonMaterial
struct AScout_Character_BP_C_SetFirstPersonMaterial_Params
{
	bool                                               IsFirstPerson;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.IsServerOrSinglePlayer
struct AScout_Character_BP_C_IsServerOrSinglePlayer_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.IsClientOrSinglePlayer
struct AScout_Character_BP_C_IsClientOrSinglePlayer_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.Tracker Missed
struct AScout_Character_BP_C_Tracker_Missed_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.Update Scout Vision
struct AScout_Character_BP_C_Update_Scout_Vision_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.BPOverrideFPVViewLocation
struct AScout_Character_BP_C_BPOverrideFPVViewLocation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.BPGetFPVViewLocation
struct AScout_Character_BP_C_BPGetFPVViewLocation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.PrivateTracker Missed
struct AScout_Character_BP_C_PrivateTracker_Missed_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.Dash
struct AScout_Character_BP_C_Dash_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.BP_GetCustomModifier_RotationRate
struct AScout_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.BP_GetCustomModifier_MaxSpeed
struct AScout_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.BlueprintCanAttack
struct AScout_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.ServerIs Tracked Target
struct AScout_Character_BP_C_ServerIs_Tracked_Target_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTrackedTarget;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.Tracker Hit Character
struct AScout_Character_BP_C_Tracker_Hit_Character_Params
{
	class APrimalCharacter*                            HitCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyTracker;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidTarget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.BPAdjustDamage
struct AScout_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.BP_OnSetDeath
struct AScout_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.BPHandleControllerInitiatedAttack
struct AScout_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.Release Possessing Survivor
struct AScout_Character_BP_C_Release_Possessing_Survivor_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.GetPossessedByPlayer
struct AScout_Character_BP_C_GetPossessedByPlayer_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.Spawned From Projectile
struct AScout_Character_BP_C_Spawned_From_Projectile_Params
{
	class AShooterPlayerController*                    ShooterPlayerController;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PossessDelay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 FiringItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.BPIsValidUnStasisCaster
struct AScout_Character_BP_C_BPIsValidUnStasisCaster_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.UserConstructionScript
struct AScout_Character_BP_C_UserConstructionScript_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_124
struct AScout_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_124_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_123
struct AScout_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_123_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_122
struct AScout_Character_BP_C_InpActEvt_Jump_K2Node_InputActionEvent_122_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_121
struct AScout_Character_BP_C_InpActEvt_Jump_K2Node_InputActionEvent_121_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_120
struct AScout_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_120_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_119
struct AScout_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_119_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.CrouchTick
struct AScout_Character_BP_C_CrouchTick_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.JumpTick
struct AScout_Character_BP_C_JumpTick_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.StopPossessingPlayerMovement
struct AScout_Character_BP_C_StopPossessingPlayerMovement_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ReceiveHit
struct AScout_Character_BP_C_ReceiveHit_Params
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

// Function Scout_Character_BP.Scout_Character_BP_C.CheckMek
struct AScout_Character_BP_C_CheckMek_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.AnimNotify_RepairHandLeft
struct AScout_Character_BP_C_AnimNotify_RepairHandLeft_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.AnimNotify_RepairHandRight
struct AScout_Character_BP_C_AnimNotify_RepairHandRight_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ReplicateInputVector
struct AScout_Character_BP_C_ReplicateInputVector_Params
{
	struct FVector                                     InputVector;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.MULTI_ReplairMek
struct AScout_Character_BP_C_MULTI_ReplairMek_Params
{
	class APrimalDinoCharacter*                        Mek;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.SERVER_SetScoutTargeting
struct AScout_Character_BP_C_SERVER_SetScoutTargeting_Params
{
	bool                                               Targeting;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndDestroy
struct AScout_Character_BP_C_ReleasePossessingSurvivorAndDestroy_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.RechargeShield
struct AScout_Character_BP_C_RechargeShield_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientActivateAlertMode
struct AScout_Character_BP_C_ClientActivateAlertMode_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientScoutDamaged
struct AScout_Character_BP_C_ClientScoutDamaged_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm)
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientTickShieldDamageVFX
struct AScout_Character_BP_C_ClientTickShieldDamageVFX_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientRechargeShield
struct AScout_Character_BP_C_ClientRechargeShield_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ReceiveBeginPlay
struct AScout_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.SpawnEnd
struct AScout_Character_BP_C_SpawnEnd_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ReceiveEndPlay
struct AScout_Character_BP_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.TriggerDisconnectFX
struct AScout_Character_BP_C_TriggerDisconnectFX_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ScoutDied
struct AScout_Character_BP_C_ScoutDied_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.PossessedByPlayer
struct AScout_Character_BP_C_PossessedByPlayer_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.MULTI_ReleasePossessingSurvivor
struct AScout_Character_BP_C_MULTI_ReleasePossessingSurvivor_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ServerDashAttack
struct AScout_Character_BP_C_ServerDashAttack_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.VerifyPossessingSurvivor
struct AScout_Character_BP_C_VerifyPossessingSurvivor_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndDelayedDestroy
struct AScout_Character_BP_C_ReleasePossessingSurvivorAndDelayedDestroy_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.DelayedDestroyActor
struct AScout_Character_BP_C_DelayedDestroyActor_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientTrackerMissed
struct AScout_Character_BP_C_ClientTrackerMissed_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.BP_OnJumpPressed
struct AScout_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.BP_OnJumpReleased
struct AScout_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.CheckConsumeResource
struct AScout_Character_BP_C_CheckConsumeResource_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientConsumeResource
struct AScout_Character_BP_C_ClientConsumeResource_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.TickThrusterVFX
struct AScout_Character_BP_C_TickThrusterVFX_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientTickAlertMode
struct AScout_Character_BP_C_ClientTickAlertMode_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientDeactivateAlertMode
struct AScout_Character_BP_C_ClientDeactivateAlertMode_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientRanOutOfStamina
struct AScout_Character_BP_C_ClientRanOutOfStamina_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientScoutRangeCheck
struct AScout_Character_BP_C_ClientScoutRangeCheck_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.CheckSubmerged
struct AScout_Character_BP_C_CheckSubmerged_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientDashTick
struct AScout_Character_BP_C_ClientDashTick_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientDashEnd
struct AScout_Character_BP_C_ClientDashEnd_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientInitTrackerBeamFX
struct AScout_Character_BP_C_ClientInitTrackerBeamFX_Params
{
	float                                              BeamDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.UpdateTargetImpactVFX
struct AScout_Character_BP_C_UpdateTargetImpactVFX_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.UpdateBeamVFX
struct AScout_Character_BP_C_UpdateBeamVFX_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.StartImpactVFX
struct AScout_Character_BP_C_StartImpactVFX_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ServerHandleOnStopFire
struct AScout_Character_BP_C_ServerHandleOnStopFire_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientEndTrackerBeamFX
struct AScout_Character_BP_C_ClientEndTrackerBeamFX_Params
{
	bool                                               ValidTargets;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ImpactDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.ApplyStaminaCost
struct AScout_Character_BP_C_ApplyStaminaCost_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.StaminaDrain
struct AScout_Character_BP_C_StaminaDrain_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientLowStamina
struct AScout_Character_BP_C_ClientLowStamina_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndLongDelayedDestroy
struct AScout_Character_BP_C_ReleasePossessingSurvivorAndLongDelayedDestroy_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.TickStaminaMeter
struct AScout_Character_BP_C_TickStaminaMeter_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.MULTI_InitAIStrafing
struct AScout_Character_BP_C_MULTI_InitAIStrafing_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.MULTI_InitAINonStrafing
struct AScout_Character_BP_C_MULTI_InitAINonStrafing_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.MULTI_AITargetAimingAtScout
struct AScout_Character_BP_C_MULTI_AITargetAimingAtScout_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.MULTI_AITargetNoLongerAimingAtScout
struct AScout_Character_BP_C_MULTI_AITargetNoLongerAimingAtScout_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientCheckClearExpiredDinoData
struct AScout_Character_BP_C_ClientCheckClearExpiredDinoData_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.DisableAI
struct AScout_Character_BP_C_DisableAI_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.MULTI_SpawnedFromProjectile
struct AScout_Character_BP_C_MULTI_SpawnedFromProjectile_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.DelayedReleasePossessingSurvivorAndDelayedDestroy
struct AScout_Character_BP_C_DelayedReleasePossessingSurvivorAndDelayedDestroy_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.UpdateScoutVisionBuff
struct AScout_Character_BP_C_UpdateScoutVisionBuff_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.RequestRecallScout
struct AScout_Character_BP_C_RequestRecallScout_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ClientHitTerrain
struct AScout_Character_BP_C_ClientHitTerrain_Params
{
	struct FVector                                     ImpactNormal;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_Character_BP.Scout_Character_BP_C.MULTI_SetStatsFromItem
struct AScout_Character_BP_C_MULTI_SetStatsFromItem_Params
{
	TArray<float>                                      Stats;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Scout_Character_BP.Scout_Character_BP_C.OWNINGCLIENT_TrackerHitCharacter
struct AScout_Character_BP_C_OWNINGCLIENT_TrackerHitCharacter_Params
{
};

// Function Scout_Character_BP.Scout_Character_BP_C.ExecuteUbergraph_Scout_Character_BP
struct AScout_Character_BP_C_ExecuteUbergraph_Scout_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
