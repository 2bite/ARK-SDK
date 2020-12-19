#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPInstigatorUnpossessed
struct ABuff_Zipline_Base_C_BPInstigatorUnpossessed_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BuffTickServer
struct ABuff_Zipline_Base_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.Get Zipline Start and End Point NonPure
struct ABuff_Zipline_Base_C_Get_Zipline_Start_and_End_Point_NonPure_Params
{
	bool                                               NoOffset;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetAttachedCharacterTransform
struct ABuff_Zipline_Base_C_SetAttachedCharacterTransform_Params
{
	struct UObject_FTransform                          NewTransform;                                             // (Parm, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetupLocalClient
struct ABuff_Zipline_Base_C_SetupLocalClient_Params
{
	class AActor*                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.Deactivate Local Client
struct ABuff_Zipline_Base_C_Deactivate_Local_Client_Params
{
	class AActor*                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.IsStillColliding
struct ABuff_Zipline_Base_C_IsStillColliding_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.HandleCollision
struct ABuff_Zipline_Base_C_HandleCollision_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.HitZiplineEndStop
struct ABuff_Zipline_Base_C_HitZiplineEndStop_Params
{
	class UMovementComponent*                          MovementComp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalcZiplinePreservedStartVelocity
struct ABuff_Zipline_Base_C_CalcZiplinePreservedStartVelocity_Params
{
	struct FVector                                     InVelocity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalcZiplineVelocityMotorized
struct ABuff_Zipline_Base_C_CalcZiplineVelocityMotorized_Params
{
	struct FVector                                     InVelocity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutVelocity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalcZiplineVelocityNonMotorized
struct ABuff_Zipline_Base_C_CalcZiplineVelocityNonMotorized_Params
{
	struct FVector                                     InVelocity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutVelocity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.ProcessMotorInput
struct ABuff_Zipline_Base_C_ProcessMotorInput_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.IsZiplineStateBlockedOrStopped
struct ABuff_Zipline_Base_C_IsZiplineStateBlockedOrStopped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.IsAnimBlockingZiplineMovement
struct ABuff_Zipline_Base_C_IsAnimBlockingZiplineMovement_Params
{
	bool                                               bLocked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPIsCharacterHardAttached
struct ABuff_Zipline_Base_C_BPIsCharacterHardAttached_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPNonDedicatedPlayerPostAnimUpdate
struct ABuff_Zipline_Base_C_BPNonDedicatedPlayerPostAnimUpdate_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPCharacterDetach
struct ABuff_Zipline_Base_C_BPCharacterDetach_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetZiplineControlRotation
struct ABuff_Zipline_Base_C_SetZiplineControlRotation_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.PlayTurnAnimation
struct ABuff_Zipline_Base_C_PlayTurnAnimation_Params
{
	class UAnimMontage*                                Override;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BuffAdjustDamage
struct ABuff_Zipline_Base_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateFPVCameraAndMeshPosition
struct ABuff_Zipline_Base_C_UpdateFPVCameraAndMeshPosition_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetFPVViewLocation
struct ABuff_Zipline_Base_C_GetFPVViewLocation_Params
{
	struct FVector                                     ViewLoc;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateHandleMeshLocationAndRotation
struct ABuff_Zipline_Base_C_UpdateHandleMeshLocationAndRotation_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateFPVAnims
struct ABuff_Zipline_Base_C_UpdateFPVAnims_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.VectorNearlyEqual
struct ABuff_Zipline_Base_C_VectorNearlyEqual_Params
{
	float                                              ErrorTolerance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     inVec;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InVec2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.ResetCamera
struct ABuff_Zipline_Base_C_ResetCamera_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateCamera
struct ABuff_Zipline_Base_C_UpdateCamera_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.ResetFOV
struct ABuff_Zipline_Base_C_ResetFOV_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateFOV
struct ABuff_Zipline_Base_C_UpdateFOV_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.ResetMeshPosition
struct ABuff_Zipline_Base_C_ResetMeshPosition_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.JumpImpulse
struct ABuff_Zipline_Base_C_JumpImpulse_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InterpolateCharacterMeshToLine
struct ABuff_Zipline_Base_C_InterpolateCharacterMeshToLine_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetZiplineStartAndEndPoint
struct ABuff_Zipline_Base_C_GetZiplineStartAndEndPoint_Params
{
	bool                                               NoOffset;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalculateZiplineMaxVelocity
struct ABuff_Zipline_Base_C_CalculateZiplineMaxVelocity_Params
{
	float                                              Accleration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxVelocity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalculateZiplineAcceleration
struct ABuff_Zipline_Base_C_CalculateZiplineAcceleration_Params
{
	struct FVector                                     StartPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.Play Detach Animation
struct ABuff_Zipline_Base_C_Play_Detach_Animation_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.PlayAttachAnimation
struct ABuff_Zipline_Base_C_PlayAttachAnimation_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetCurrentDistanceOnLinePercent
struct ABuff_Zipline_Base_C_GetCurrentDistanceOnLinePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetStartEndOffset
struct ABuff_Zipline_Base_C_GetStartEndOffset_Params
{
	bool                                               ReturnPercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetCurrentSpeedPercentageFromMax
struct ABuff_Zipline_Base_C_GetCurrentSpeedPercentageFromMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetMotorState
struct ABuff_Zipline_Base_C_SetMotorState_Params
{
	TEnumAsByte<E_ZiplineMotorState>                   NewMotorState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetClosestPointOnLine
struct ABuff_Zipline_Base_C_GetClosestPointOnLine_Params
{
	struct FVector                                     LineStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPCheckPreventInput
struct ABuff_Zipline_Base_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateMeshAttachment
struct ABuff_Zipline_Base_C_UpdateMeshAttachment_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateFX
struct ABuff_Zipline_Base_C_UpdateFX_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BuffTickClient
struct ABuff_Zipline_Base_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetAttachOffset
struct ABuff_Zipline_Base_C_GetAttachOffset_Params
{
	struct FVector                                     AttachOffset;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPSetupForInstigator
struct ABuff_Zipline_Base_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPDeactivated
struct ABuff_Zipline_Base_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPOverrideCharacterNewFallVelocity
struct ABuff_Zipline_Base_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.AttachToZipline
struct ABuff_Zipline_Base_C_AttachToZipline_Params
{
	struct FVector                                     StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.End Move Along Zipline
struct ABuff_Zipline_Base_C_End_Move_Along_Zipline_Params
{
	bool                                               AddImpulse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.TickMoveAlongZipline
struct ABuff_Zipline_Base_C_TickMoveAlongZipline_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.StartMoveAlongZipline
struct ABuff_Zipline_Base_C_StartMoveAlongZipline_Params
{
	struct FVector                                     StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AZipline_Anchor_C*                           UpperZiplineAnchor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AZipline_Anchor_C*                           LowerZiplineAnchor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.UserConstructionScript
struct ABuff_Zipline_Base_C_UserConstructionScript_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Use_K2Node_InputActionEvent_100
struct ABuff_Zipline_Base_C_InpActEvt_Use_K2Node_InputActionEvent_100_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Prone_K2Node_InputActionEvent_99
struct ABuff_Zipline_Base_C_InpActEvt_Prone_K2Node_InputActionEvent_99_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Crouch_K2Node_InputActionEvent_98
struct ABuff_Zipline_Base_C_InpActEvt_Crouch_K2Node_InputActionEvent_98_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Jump_K2Node_InputActionEvent_97
struct ABuff_Zipline_Base_C_InpActEvt_Jump_K2Node_InputActionEvent_97_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_51
struct ABuff_Zipline_Base_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_51_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_50
struct ABuff_Zipline_Base_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_50_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_49
struct ABuff_Zipline_Base_C_InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_49_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.EndMoveAlongZipline_RunOnServer
struct ABuff_Zipline_Base_C_EndMoveAlongZipline_RunOnServer_Params
{
	bool                                               AddImpulse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87
struct ABuff_Zipline_Base_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetMotorState_RunOnServer
struct ABuff_Zipline_Base_C_SetMotorState_RunOnServer_Params
{
	TEnumAsByte<E_ZiplineMotorState>                   NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BindToHit
struct ABuff_Zipline_Base_C_BindToHit_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.PlayCameraShake
struct ABuff_Zipline_Base_C_PlayCameraShake_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.PlayAttachDelayed
struct ABuff_Zipline_Base_C_PlayAttachDelayed_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.StopMoving_Multicast
struct ABuff_Zipline_Base_C_StopMoving_Multicast_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.OnComponentHit_Event
struct ABuff_Zipline_Base_C_OnComponentHit_Event_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetInitialVelocity
struct ABuff_Zipline_Base_C_SetInitialVelocity_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.SecondJumpImpulse
struct ABuff_Zipline_Base_C_SecondJumpImpulse_Params
{
};

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.ExecuteUbergraph_Buff_Zipline_Base
struct ABuff_Zipline_Base_C_ExecuteUbergraph_Buff_Zipline_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
