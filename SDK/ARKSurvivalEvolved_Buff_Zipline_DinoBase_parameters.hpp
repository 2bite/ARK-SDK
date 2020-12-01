#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_DinoBase_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineFaceUpDirection
struct ABuff_Zipline_DinoBase_C_SetZiplineFaceUpDirection_Params
{
	bool                                               FaceUpDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetDistanceToAnchor
struct ABuff_Zipline_DinoBase_C_GetDistanceToAnchor_Params
{
	bool                                               GetLower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CanZiplineFlip
struct ABuff_Zipline_DinoBase_C_CanZiplineFlip_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetZiplineSpeedAndAcceleration
struct ABuff_Zipline_DinoBase_C_ResetZiplineSpeedAndAcceleration_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineSliding
struct ABuff_Zipline_DinoBase_C_SetZiplineSliding_Params
{
	bool                                               Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration
struct ABuff_Zipline_DinoBase_C_SetZiplineRunningSpeedAndAcceleration_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.RotationNearlyEqual
struct ABuff_Zipline_DinoBase_C_RotationNearlyEqual_Params
{
	struct FRotator                                    RotA;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    rotB;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ErrorTolerance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ReceiveBeginPlay
struct ABuff_Zipline_DinoBase_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateActorZiplineOffset
struct ABuff_Zipline_DinoBase_C_UpdateActorZiplineOffset_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetHurtAnim
struct ABuff_Zipline_DinoBase_C_SetHurtAnim_Params
{
	bool                                               Hanging;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPInstigatorUnpossessed
struct ABuff_Zipline_DinoBase_C_BPInstigatorUnpossessed_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffTickServer
struct ABuff_Zipline_DinoBase_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Get Zipline Start and End Point NonPure
struct ABuff_Zipline_DinoBase_C_Get_Zipline_Start_and_End_Point_NonPure_Params
{
	bool                                               NoOffset;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetAttachedCharacterTransform
struct ABuff_Zipline_DinoBase_C_SetAttachedCharacterTransform_Params
{
	struct UObject_FTransform                          NewTransform;                                             // (Parm, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetupLocalClient
struct ABuff_Zipline_DinoBase_C_SetupLocalClient_Params
{
	class AActor*                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Deactivate Local Client
struct ABuff_Zipline_DinoBase_C_Deactivate_Local_Client_Params
{
	class AActor*                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsStillColliding
struct ABuff_Zipline_DinoBase_C_IsStillColliding_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.HandleCollision
struct ABuff_Zipline_DinoBase_C_HandleCollision_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.HitZiplineEndStop
struct ABuff_Zipline_DinoBase_C_HitZiplineEndStop_Params
{
	class UMovementComponent*                          MovementComp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplinePreservedStartVelocity
struct ABuff_Zipline_DinoBase_C_CalcZiplinePreservedStartVelocity_Params
{
	struct FVector                                     InVelocity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplineVelocityMotorized
struct ABuff_Zipline_DinoBase_C_CalcZiplineVelocityMotorized_Params
{
	struct FVector                                     InVelocity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutVelocity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplineVelocityNonMotorized
struct ABuff_Zipline_DinoBase_C_CalcZiplineVelocityNonMotorized_Params
{
	struct FVector                                     InVelocity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutVelocity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ProcessMotorInput
struct ABuff_Zipline_DinoBase_C_ProcessMotorInput_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsZiplineStateBlockedOrStopped
struct ABuff_Zipline_DinoBase_C_IsZiplineStateBlockedOrStopped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsAnimBlockingZiplineMovement
struct ABuff_Zipline_DinoBase_C_IsAnimBlockingZiplineMovement_Params
{
	bool                                               bLocked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPIsCharacterHardAttached
struct ABuff_Zipline_DinoBase_C_BPIsCharacterHardAttached_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPNonDedicatedPlayerPostAnimUpdate
struct ABuff_Zipline_DinoBase_C_BPNonDedicatedPlayerPostAnimUpdate_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPCharacterDetach
struct ABuff_Zipline_DinoBase_C_BPCharacterDetach_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineControlRotation
struct ABuff_Zipline_DinoBase_C_SetZiplineControlRotation_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayTurnAnimation
struct ABuff_Zipline_DinoBase_C_PlayTurnAnimation_Params
{
	class UAnimMontage*                                override;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffAdjustDamage
struct ABuff_Zipline_DinoBase_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFPVCameraAndMeshPosition
struct ABuff_Zipline_DinoBase_C_UpdateFPVCameraAndMeshPosition_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetFPVViewLocation
struct ABuff_Zipline_DinoBase_C_GetFPVViewLocation_Params
{
	struct FVector                                     ViewLoc;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateHandleMeshLocationAndRotation
struct ABuff_Zipline_DinoBase_C_UpdateHandleMeshLocationAndRotation_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFPVAnims
struct ABuff_Zipline_DinoBase_C_UpdateFPVAnims_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.VectorNearlyEqual
struct ABuff_Zipline_DinoBase_C_VectorNearlyEqual_Params
{
	float                                              ErrorTolerance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     inVec;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InVec2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetCamera
struct ABuff_Zipline_DinoBase_C_ResetCamera_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateCamera
struct ABuff_Zipline_DinoBase_C_UpdateCamera_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetFOV
struct ABuff_Zipline_DinoBase_C_ResetFOV_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFOV
struct ABuff_Zipline_DinoBase_C_UpdateFOV_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetMeshPosition
struct ABuff_Zipline_DinoBase_C_ResetMeshPosition_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.JumpImpulse
struct ABuff_Zipline_DinoBase_C_JumpImpulse_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InterpolateCharacterMeshToLine
struct ABuff_Zipline_DinoBase_C_InterpolateCharacterMeshToLine_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetZiplineStartAndEndPoint
struct ABuff_Zipline_DinoBase_C_GetZiplineStartAndEndPoint_Params
{
	bool                                               NoOffset;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalculateZiplineMaxVelocity
struct ABuff_Zipline_DinoBase_C_CalculateZiplineMaxVelocity_Params
{
	float                                              Accleration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxVelocity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalculateZiplineAcceleration
struct ABuff_Zipline_DinoBase_C_CalculateZiplineAcceleration_Params
{
	struct FVector                                     StartPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Play Detach Animation
struct ABuff_Zipline_DinoBase_C_Play_Detach_Animation_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayAttachAnimation
struct ABuff_Zipline_DinoBase_C_PlayAttachAnimation_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetCurrentDistanceOnLinePercent
struct ABuff_Zipline_DinoBase_C_GetCurrentDistanceOnLinePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetStartEndOffset
struct ABuff_Zipline_DinoBase_C_GetStartEndOffset_Params
{
	bool                                               ReturnPercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetCurrentSpeedPercentageFromMax
struct ABuff_Zipline_DinoBase_C_GetCurrentSpeedPercentageFromMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetMotorState
struct ABuff_Zipline_DinoBase_C_SetMotorState_Params
{
	TEnumAsByte<E_ZiplineMotorState>                   NewMotorState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetClosestPointOnLine
struct ABuff_Zipline_DinoBase_C_GetClosestPointOnLine_Params
{
	struct FVector                                     LineStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPCheckPreventInput
struct ABuff_Zipline_DinoBase_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateMeshAttachment
struct ABuff_Zipline_DinoBase_C_UpdateMeshAttachment_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFX
struct ABuff_Zipline_DinoBase_C_UpdateFX_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffTickClient
struct ABuff_Zipline_DinoBase_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetAttachOffset
struct ABuff_Zipline_DinoBase_C_GetAttachOffset_Params
{
	struct FVector                                     AttachOffset;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPSetupForInstigator
struct ABuff_Zipline_DinoBase_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPDeactivated
struct ABuff_Zipline_DinoBase_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPOverrideCharacterNewFallVelocity
struct ABuff_Zipline_DinoBase_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.AttachToZipline
struct ABuff_Zipline_DinoBase_C_AttachToZipline_Params
{
	struct FVector                                     StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.End Move Along Zipline
struct ABuff_Zipline_DinoBase_C_End_Move_Along_Zipline_Params
{
	bool                                               AddImpulse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.TickMoveAlongZipline
struct ABuff_Zipline_DinoBase_C_TickMoveAlongZipline_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.StartMoveAlongZipline
struct ABuff_Zipline_DinoBase_C_StartMoveAlongZipline_Params
{
	struct FVector                                     StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AZipline_Anchor_C*                           UpperZiplineAnchor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AZipline_Anchor_C*                           LowerZiplineAnchor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UserConstructionScript
struct ABuff_Zipline_DinoBase_C_UserConstructionScript_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Run_K2Node_InputActionEvent_113
struct ABuff_Zipline_DinoBase_C_InpActEvt_Run_K2Node_InputActionEvent_113_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Run_K2Node_InputActionEvent_112
struct ABuff_Zipline_DinoBase_C_InpActEvt_Run_K2Node_InputActionEvent_112_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Jump_K2Node_InputActionEvent_111
struct ABuff_Zipline_DinoBase_C_InpActEvt_Jump_K2Node_InputActionEvent_111_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Crouch_K2Node_InputActionEvent_110
struct ABuff_Zipline_DinoBase_C_InpActEvt_Crouch_K2Node_InputActionEvent_110_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_109
struct ABuff_Zipline_DinoBase_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_109_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_56
struct ABuff_Zipline_DinoBase_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_56_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_55
struct ABuff_Zipline_DinoBase_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_55_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_108
struct ABuff_Zipline_DinoBase_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_108_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.EndMoveAlongZipline_RunOnServer
struct ABuff_Zipline_DinoBase_C_EndMoveAlongZipline_RunOnServer_Params
{
	bool                                               AddImpulse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87
struct ABuff_Zipline_DinoBase_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetMotorState_RunOnServer
struct ABuff_Zipline_DinoBase_C_SetMotorState_RunOnServer_Params
{
	TEnumAsByte<E_ZiplineMotorState>                   NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BindToHit
struct ABuff_Zipline_DinoBase_C_BindToHit_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayCameraShake
struct ABuff_Zipline_DinoBase_C_PlayCameraShake_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayAttachDelayed
struct ABuff_Zipline_DinoBase_C_PlayAttachDelayed_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.StopMoving_Multicast
struct ABuff_Zipline_DinoBase_C_StopMoving_Multicast_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.OnComponentHit_Event
struct ABuff_Zipline_DinoBase_C_OnComponentHit_Event_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetInitialVelocity
struct ABuff_Zipline_DinoBase_C_SetInitialVelocity_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SecondJumpImpulse
struct ABuff_Zipline_DinoBase_C_SecondJumpImpulse_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.FlipOnZipline_Multicast
struct ABuff_Zipline_DinoBase_C_FlipOnZipline_Multicast_Params
{
	bool                                               Fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADinoCharacter_BP_Zipline_C*                 attachedDino;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.FlipOnZipline_RunOnServer
struct ABuff_Zipline_DinoBase_C_FlipOnZipline_RunOnServer_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetIsTurning
struct ABuff_Zipline_DinoBase_C_SetIsTurning_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.DoZiplineTurn_RunOnServer
struct ABuff_Zipline_DinoBase_C_DoZiplineTurn_RunOnServer_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.RunPressed
struct ABuff_Zipline_DinoBase_C_RunPressed_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration_Multicast
struct ABuff_Zipline_DinoBase_C_SetZiplineRunningSpeedAndAcceleration_Multicast_Params
{
	bool                                               Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration_RunOnServer
struct ABuff_Zipline_DinoBase_C_SetZiplineRunningSpeedAndAcceleration_RunOnServer_Params
{
	bool                                               Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetRunning_RunOnClient
struct ABuff_Zipline_DinoBase_C_SetRunning_RunOnClient_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetSliding_Multicast
struct ABuff_Zipline_DinoBase_C_SetSliding_Multicast_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.AI_SetZiplineRunning_Multicast
struct ABuff_Zipline_DinoBase_C_AI_SetZiplineRunning_Multicast_Params
{
};

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ExecuteUbergraph_Buff_Zipline_DinoBase
struct ABuff_Zipline_DinoBase_C_ExecuteUbergraph_Buff_Zipline_DinoBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
