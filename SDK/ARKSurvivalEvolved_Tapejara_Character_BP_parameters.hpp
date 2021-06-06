#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tapejara_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct ATapejara_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPNotifyClearRider
struct ATapejara_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleOnStopTargeting
struct ATapejara_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyFOV
struct ATapejara_Character_BP_C_BPModifyFOV_Params
{
	float*                                             FOVIn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleControllerInitiatedAttack
struct ATapejara_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyDesiredRotation
struct ATapejara_Character_BP_C_BPModifyDesiredRotation_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InDesiredRotation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OutDesiredRotation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPSetupTamed
struct ATapejara_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPOnStartJump
struct ATapejara_Character_BP_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleUseButtonPress
struct ATapejara_Character_BP_C_BPHandleUseButtonPress_Params
{
	class AShooterPlayerController**                   RiderController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableCameraInterpolation
struct ATapejara_Character_BP_C_DisableCameraInterpolation_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.OnRep_LatchingSurfaceNormal
struct ATapejara_Character_BP_C_OnRep_LatchingSurfaceNormal_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.UpdateLatchedDinoCamera
struct ATapejara_Character_BP_C_UpdateLatchedDinoCamera_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.Controller Follow ActorRotation
struct ATapejara_Character_BP_C_Controller_Follow_ActorRotation_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReferenceLatchingObjects
struct ATapejara_Character_BP_C_ReferenceLatchingObjects_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.LineTrace
struct ATapejara_Character_BP_C_LineTrace_Params
{
	class UMeshComponent*                              Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BackwardLatching;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hit_Somthing;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Hit_Actor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.InterruptLatching
struct ATapejara_Character_BP_C_InterruptLatching_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.ProcessLatching
struct ATapejara_Character_BP_C_ProcessLatching_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.TryLatch
struct ATapejara_Character_BP_C_TryLatch_Params
{
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               backwardsLatching;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.UserConstructionScript
struct ATapejara_Character_BP_C_UserConstructionScript_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_168
struct ATapejara_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_168_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_167
struct ATapejara_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_167_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_166
struct ATapejara_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_166_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_165
struct ATapejara_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_165_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.Latch
struct ATapejara_Character_BP_C_Latch_Params
{
	bool                                               backwardsLatching;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReceiveTick
struct ATapejara_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchStartAnimation
struct ATapejara_Character_BP_C_LatchStartAnimation_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatch
struct ATapejara_Character_BP_C_UnLatch_Params
{
	bool                                               LatchingInterrupted;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchStartAnimation
struct ATapejara_Character_BP_C_UnLatchStartAnimation_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ATapejara_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.MoveToUsingDirection
struct ATapejara_Character_BP_C_MoveToUsingDirection_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchMoveAndRotate
struct ATapejara_Character_BP_C_UnLatchMoveAndRotate_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingStartEvent
struct ATapejara_Character_BP_C_LatchingStartEvent_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingEndEvent
struct ATapejara_Character_BP_C_LatchingEndEvent_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.StopMovement
struct ATapejara_Character_BP_C_StopMovement_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableFaceLatchingObjectRotation
struct ATapejara_Character_BP_C_DisableFaceLatchingObjectRotation_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
struct ATapejara_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.SetPassengersSurfaceCamera
struct ATapejara_Character_BP_C_SetPassengersSurfaceCamera_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.LocalFaceLatchingObject
struct ATapejara_Character_BP_C_LocalFaceLatchingObject_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.StartedJump
struct ATapejara_Character_BP_C_StartedJump_Params
{
};

// Function Tapejara_Character_BP.Tapejara_Character_BP_C.ExecuteUbergraph_Tapejara_Character_BP
struct ATapejara_Character_BP_C_ExecuteUbergraph_Tapejara_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
