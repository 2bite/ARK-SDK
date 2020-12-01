#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Crab_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Crab_Character_BP.Crab_Character_BP_C.BPCanCryo
struct ACrab_Character_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BPGetDragSocketDinoName
struct ACrab_Character_BP_C_BPGetDragSocketDinoName_Params
{
	class APrimalDinoCharacter**                       aGrabbedDino;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BPOnMovementModeChangedNotify
struct ACrab_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.Should Stop Jump Rotation
struct ACrab_Character_BP_C_Should_Stop_Jump_Rotation_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BPShouldCancelDoAttack
struct ACrab_Character_BP_C_BPShouldCancelDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BlueprintAdjustOutputDamage
struct ACrab_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.ImpulseTowardTarget
struct ACrab_Character_BP_C_ImpulseTowardTarget_Params
{
	bool                                               IsApex;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.Shortest Angle Distance
struct ACrab_Character_BP_C_Shortest_Angle_Distance_Params
{
	float                                              AngleCurrent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Difference;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.StopThrowOrReleaseGrab
struct ACrab_Character_BP_C_StopThrowOrReleaseGrab_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReleasedCharacter;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BPHandleOnStopFire
struct ACrab_Character_BP_C_BPHandleOnStopFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BPHandleOnStopTargeting
struct ACrab_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BPHandleControllerInitiatedAttack
struct ACrab_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BPAdjustAttackIndex
struct ACrab_Character_BP_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.ProcessThrow
struct ACrab_Character_BP_C_ProcessThrow_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.ProcessJump
struct ACrab_Character_BP_C_ProcessJump_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.BP_InterceptMoveForward
struct ACrab_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BP_InterceptMoveRight
struct ACrab_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BPNotifySetRider
struct ACrab_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.Crab Adjust Attack Index
struct ACrab_Character_BP_C_Crab_Adjust_Attack_Index_Params
{
	int                                                InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RetAttackIndex;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.HasSecondaryCarriedChar
struct ACrab_Character_BP_C_HasSecondaryCarriedChar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.IsCarryingCharacterSecondary
struct ACrab_Character_BP_C_IsCarryingCharacterSecondary_Params
{
	bool                                               OutputPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.GetCarriedCharacterSecondary
struct ACrab_Character_BP_C_GetCarriedCharacterSecondary_Params
{
	class APrimalCharacter*                            OutputPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.LaunchAtTracePoint
struct ACrab_Character_BP_C_LaunchAtTracePoint_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.GetClampedLookDir
struct ACrab_Character_BP_C_GetClampedLookDir_Params
{
	bool                                               LimitLowerPitch;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.ThrowTrace
struct ACrab_Character_BP_C_ThrowTrace_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.BPAdjustDamage
struct ACrab_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.IsCrabSubmerged
struct ACrab_Character_BP_C_IsCrabSubmerged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.SlamIfDoubleClicking
struct ACrab_Character_BP_C_SlamIfDoubleClicking_Params
{
	int                                                CurrentAttackIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.PlayGrabbedIdle
struct ACrab_Character_BP_C_PlayGrabbedIdle_Params
{
	bool                                               IsMoving;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BPTimerServer
struct ACrab_Character_BP_C_BPTimerServer_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.GrabFoundCharacter
struct ACrab_Character_BP_C_GrabFoundCharacter_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.Is Better Grab Target
struct ACrab_Character_BP_C_Is_Better_Grab_Target_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewTargHitLoc;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.Find Proper Grab Target
struct ACrab_Character_BP_C_Find_Proper_Grab_Target_Params
{
	class APrimalCharacter*                            TestChar;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            TargetChar;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.Check Proper Can Carry
struct ACrab_Character_BP_C_Check_Proper_Can_Carry_Params
{
	class APrimalCharacter*                            TestActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanCarry;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.Throw Grabbed Characters
struct ACrab_Character_BP_C_Throw_Grabbed_Characters_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.Retrieve Any Grabbable Character
struct ACrab_Character_BP_C_Retrieve_Any_Grabbable_Character_Params
{
	bool                                               FoundCharacter;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.GetGrabClawLocation
struct ACrab_Character_BP_C_GetGrabClawLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BPNotifyClearRider
struct ACrab_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BPCharacterSleeped
struct ACrab_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.BPTimerNonDedicated
struct ACrab_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.BPDoAttack
struct ACrab_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.Server_StopThrow
struct ACrab_Character_BP_C_Server_StopThrow_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.BlueprintCanRiderAttack
struct ACrab_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.SharedCanAttack
struct ACrab_Character_BP_C_SharedCanAttack_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanAttack;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BlueprintCanAttack
struct ACrab_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.GetLaunchDirection
struct ACrab_Character_BP_C_GetLaunchDirection_Params
{
	class AActor*                                      CalcActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BPDidClearCarriedCharacter
struct ACrab_Character_BP_C_BPDidClearCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BPDidSetCarriedCharacter
struct ACrab_Character_BP_C_BPDidSetCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.UserConstructionScript
struct ACrab_Character_BP_C_UserConstructionScript_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_146
struct ACrab_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_146_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_145
struct ACrab_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_145_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_144
struct ACrab_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_144_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_143
struct ACrab_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_143_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.Request Tertiary Pressed
struct ACrab_Character_BP_C_Request_Tertiary_Pressed_Params
{
	bool                                               IsHolding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ToggleAction;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.Request Jump Response
struct ACrab_Character_BP_C_Request_Jump_Response_Params
{
	bool                                               isHoldingJump;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_StartGrabLeftTracing
struct ACrab_Character_BP_C_AnimNotify_StartGrabLeftTracing_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_EndGrabTracing
struct ACrab_Character_BP_C_AnimNotify_EndGrabTracing_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.TraceGrab
struct ACrab_Character_BP_C_TraceGrab_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_StartGrabRightTracing
struct ACrab_Character_BP_C_AnimNotify_StartGrabRightTracing_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_ReleaseGrabbedCharacters
struct ACrab_Character_BP_C_AnimNotify_ReleaseGrabbedCharacters_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.Multi_SwimUp
struct ACrab_Character_BP_C_Multi_SwimUp_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.SwimUp
struct ACrab_Character_BP_C_SwimUp_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.SwimJump
struct ACrab_Character_BP_C_SwimJump_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_MidGrabTrace
struct ACrab_Character_BP_C_AnimNotify_MidGrabTrace_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_GroundPoundLeft
struct ACrab_Character_BP_C_AnimNotify_GroundPoundLeft_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.PlayTracedVFX
struct ACrab_Character_BP_C_PlayTracedVFX_Params
{
	class UParticleSystem*                             ParticleSystem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLoc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_GroundPoundRight
struct ACrab_Character_BP_C_AnimNotify_GroundPoundRight_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.Server_DropCharacters
struct ACrab_Character_BP_C_Server_DropCharacters_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.Multi_SetPreventMovement
struct ACrab_Character_BP_C_Multi_SetPreventMovement_Params
{
	bool                                               NewPreventMovement;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.DelayedClearThrowing
struct ACrab_Character_BP_C_DelayedClearThrowing_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.Server_TraceTargetDir
struct ACrab_Character_BP_C_Server_TraceTargetDir_Params
{
	struct FVector                                     AimLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AimHit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               JumpInstant;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ThrowInstant;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.StartThrowIdle
struct ACrab_Character_BP_C_StartThrowIdle_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.ClearThrow
struct ACrab_Character_BP_C_ClearThrow_Params
{
	bool                                               ForceImmediateClear;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.Multi_TraceTargetDir
struct ACrab_Character_BP_C_Multi_TraceTargetDir_Params
{
	struct FVector                                     AimLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AimHit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.BP_OnJumpPressed
struct ACrab_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.BP_OnJumpReleased
struct ACrab_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.DelayedPress
struct ACrab_Character_BP_C_DelayedPress_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.UpdateAllJumpRotation
struct ACrab_Character_BP_C_UpdateAllJumpRotation_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.UpdateJumpRotation
struct ACrab_Character_BP_C_UpdateJumpRotation_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_CrabLand
struct ACrab_Character_BP_C_AnimNotify_CrabLand_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestRightAttack
struct ACrab_Character_BP_C_ServerRequestRightAttack_Params
{
	bool                                               buttonHeld;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestLeftAttack
struct ACrab_Character_BP_C_ServerRequestLeftAttack_Params
{
	bool                                               buttonHeld;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.DelayedRightAttack
struct ACrab_Character_BP_C_DelayedRightAttack_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.DelayedLeftAttack
struct ACrab_Character_BP_C_DelayedLeftAttack_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.Server_DropRight
struct ACrab_Character_BP_C_Server_DropRight_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.Server_DropLeft
struct ACrab_Character_BP_C_Server_DropLeft_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestDoubleSmash
struct ACrab_Character_BP_C_ServerRequestDoubleSmash_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.DelayedThrowPress
struct ACrab_Character_BP_C_DelayedThrowPress_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.AIWaterJump
struct ACrab_Character_BP_C_AIWaterJump_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.Multi_HurtResponse
struct ACrab_Character_BP_C_Multi_HurtResponse_Params
{
	bool                                               WasBullet;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crab_Character_BP.Crab_Character_BP_C.ClearTorporHit
struct ACrab_Character_BP_C_ClearTorporHit_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.TorporHit
struct ACrab_Character_BP_C_TorporHit_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.ServerArrestMovement
struct ACrab_Character_BP_C_ServerArrestMovement_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.ResetArrestMovement
struct ACrab_Character_BP_C_ResetArrestMovement_Params
{
};

// Function Crab_Character_BP.Crab_Character_BP_C.ExecuteUbergraph_Crab_Character_BP
struct ACrab_Character_BP_C_ExecuteUbergraph_Crab_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
