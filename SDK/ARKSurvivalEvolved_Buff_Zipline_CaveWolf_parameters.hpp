#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_CaveWolf_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPInstigatorUnpossessed
struct ABuff_Zipline_CaveWolf_C_BPInstigatorUnpossessed_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineFaceUpDirection
struct ABuff_Zipline_CaveWolf_C_SetZiplineFaceUpDirection_Params
{
	bool                                               FacingUpDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.Get Distance to Anchor
struct ABuff_Zipline_CaveWolf_C_Get_Distance_to_Anchor_Params
{
	bool                                               GetLower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineSliding
struct ABuff_Zipline_CaveWolf_C_SetZiplineSliding_Params
{
	bool                                               Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayAttachDelayed
struct ABuff_Zipline_CaveWolf_C_PlayAttachDelayed_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetAttachedCharacterTransform
struct ABuff_Zipline_CaveWolf_C_SetAttachedCharacterTransform_Params
{
	struct UObject_FTransform*                         NewTransform;                                             // (Parm, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayAttachAnimation
struct ABuff_Zipline_CaveWolf_C_PlayAttachAnimation_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplineVelocityMotorized
struct ABuff_Zipline_CaveWolf_C_CalcZiplineVelocityMotorized_Params
{
	struct FVector*                                    InVelocity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutVelocity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ReceiveBeginPlay
struct ABuff_Zipline_CaveWolf_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.GetAttachOffset
struct ABuff_Zipline_CaveWolf_C_GetAttachOffset_Params
{
	struct FVector                                     AttachOffset;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.Play Detach Animation
struct ABuff_Zipline_CaveWolf_C_Play_Detach_Animation_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.IsStillColliding
struct ABuff_Zipline_CaveWolf_C_IsStillColliding_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CanZiplineFlip
struct ABuff_Zipline_CaveWolf_C_CanZiplineFlip_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetCamera
struct ABuff_Zipline_CaveWolf_C_ResetCamera_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.HandleCollision
struct ABuff_Zipline_CaveWolf_C_HandleCollision_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.HitZiplineEndStop
struct ABuff_Zipline_CaveWolf_C_HitZiplineEndStop_Params
{
	class UMovementComponent**                         MovementComp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplinePreservedStartVelocity
struct ABuff_Zipline_CaveWolf_C_CalcZiplinePreservedStartVelocity_Params
{
	struct FVector*                                    InVelocity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration
struct ABuff_Zipline_CaveWolf_C_SetZiplineRunningSpeedAndAcceleration_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetZiplineSpeedAndAcceleration
struct ABuff_Zipline_CaveWolf_C_ResetZiplineSpeedAndAcceleration_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.End Move Along Zipline
struct ABuff_Zipline_CaveWolf_C_End_Move_Along_Zipline_Params
{
	bool*                                              AddImpulse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplineVelocityNonMotorized
struct ABuff_Zipline_CaveWolf_C_CalcZiplineVelocityNonMotorized_Params
{
	struct FVector*                                    InVelocity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutVelocity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateFX
struct ABuff_Zipline_CaveWolf_C_UpdateFX_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ProcessMotorInput
struct ABuff_Zipline_CaveWolf_C_ProcessMotorInput_Params
{
	float*                                             A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.JumpImpulse
struct ABuff_Zipline_CaveWolf_C_JumpImpulse_Params
{
	struct FVector*                                    Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateActorZiplineOffset
struct ABuff_Zipline_CaveWolf_C_UpdateActorZiplineOffset_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.TickMoveAlongZipline
struct ABuff_Zipline_CaveWolf_C_TickMoveAlongZipline_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetHurtAnim
struct ABuff_Zipline_CaveWolf_C_SetHurtAnim_Params
{
	bool                                               Hanging;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.AttachToZipline
struct ABuff_Zipline_CaveWolf_C_AttachToZipline_Params
{
	struct FVector*                                    StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BuffTickClient
struct ABuff_Zipline_CaveWolf_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateFPVCameraAndMeshPosition
struct ABuff_Zipline_CaveWolf_C_UpdateFPVCameraAndMeshPosition_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPOverrideCharacterNewFallVelocity
struct ABuff_Zipline_CaveWolf_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPCheckPreventInput
struct ABuff_Zipline_CaveWolf_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayTurnAnimation
struct ABuff_Zipline_CaveWolf_C_PlayTurnAnimation_Params
{
	class UAnimMontage**                               override;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineControlRotation
struct ABuff_Zipline_CaveWolf_C_SetZiplineControlRotation_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.RotationNearlyEqual
struct ABuff_Zipline_CaveWolf_C_RotationNearlyEqual_Params
{
	struct FRotator                                    RotA;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    rotB;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ErrorTolerance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPDeactivated
struct ABuff_Zipline_CaveWolf_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPSetupForInstigator
struct ABuff_Zipline_CaveWolf_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetMeshPosition
struct ABuff_Zipline_CaveWolf_C_ResetMeshPosition_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InterpolateCharacterMeshToLine
struct ABuff_Zipline_CaveWolf_C_InterpolateCharacterMeshToLine_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UserConstructionScript
struct ABuff_Zipline_CaveWolf_C_UserConstructionScript_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Run_K2Node_InputActionEvent_107
struct ABuff_Zipline_CaveWolf_C_InpActEvt_Run_K2Node_InputActionEvent_107_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Run_K2Node_InputActionEvent_106
struct ABuff_Zipline_CaveWolf_C_InpActEvt_Run_K2Node_InputActionEvent_106_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Jump_K2Node_InputActionEvent_105
struct ABuff_Zipline_CaveWolf_C_InpActEvt_Jump_K2Node_InputActionEvent_105_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Use_K2Node_InputActionEvent_104
struct ABuff_Zipline_CaveWolf_C_InpActEvt_Use_K2Node_InputActionEvent_104_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Crouch_K2Node_InputActionEvent_103
struct ABuff_Zipline_CaveWolf_C_InpActEvt_Crouch_K2Node_InputActionEvent_103_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_102
struct ABuff_Zipline_CaveWolf_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_102_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54
struct ABuff_Zipline_CaveWolf_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_53
struct ABuff_Zipline_CaveWolf_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_53_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_101
struct ABuff_Zipline_CaveWolf_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_101_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_52
struct ABuff_Zipline_CaveWolf_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_52_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.FlipOnZipline_Multicast
struct ABuff_Zipline_CaveWolf_C_FlipOnZipline_Multicast_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.FlipOnZipline_RunOnServer
struct ABuff_Zipline_CaveWolf_C_FlipOnZipline_RunOnServer_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetIsTurning
struct ABuff_Zipline_CaveWolf_C_SetIsTurning_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.DoZiplineTurn_RunOnServer
struct ABuff_Zipline_CaveWolf_C_DoZiplineTurn_RunOnServer_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.RunPressed
struct ABuff_Zipline_CaveWolf_C_RunPressed_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration_Multicast
struct ABuff_Zipline_CaveWolf_C_SetZiplineRunningSpeedAndAcceleration_Multicast_Params
{
	bool                                               Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration_RunOnServer
struct ABuff_Zipline_CaveWolf_C_SetZiplineRunningSpeedAndAcceleration_RunOnServer_Params
{
	bool                                               Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetRunning_RunOnClient
struct ABuff_Zipline_CaveWolf_C_SetRunning_RunOnClient_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.DoNothing
struct ABuff_Zipline_CaveWolf_C_DoNothing_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetSliding_Multicast
struct ABuff_Zipline_CaveWolf_C_SetSliding_Multicast_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.AI_SetZiplineRunning_Multicast
struct ABuff_Zipline_CaveWolf_C_AI_SetZiplineRunning_Multicast_Params
{
};

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ExecuteUbergraph_Buff_Zipline_CaveWolf
struct ABuff_Zipline_CaveWolf_C_ExecuteUbergraph_Buff_Zipline_CaveWolf_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
