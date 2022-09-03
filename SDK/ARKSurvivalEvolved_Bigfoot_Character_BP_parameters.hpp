#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bigfoot_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateAttackAnimWeights
struct ABigfoot_Character_BP_C_UpdateAttackAnimWeights_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifySetRider
struct ABigfoot_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyAddPassenger
struct ABigfoot_Character_BP_C_BPNotifyAddPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyClearPassenger
struct ABigfoot_Character_BP_C_BPNotifyClearPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CanJumpInternal
struct ABigfoot_Character_BP_C_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.RemovePassengers
struct ABigfoot_Character_BP_C_RemovePassengers_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintCanAttack
struct ABigfoot_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintCanRiderAttack
struct ABigfoot_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPTryMultiUse
struct ABigfoot_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPGetMultiUseEntries
struct ABigfoot_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Update Non Dedi Limits
struct ABigfoot_Character_BP_C_Update_Non_Dedi_Limits_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateNonDediActive
struct ABigfoot_Character_BP_C_UpdateNonDediActive_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateCrosshair
struct ABigfoot_Character_BP_C_UpdateCrosshair_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DrawCrosshairIfNeeded
struct ABigfoot_Character_BP_C_DrawCrosshairIfNeeded_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Get Throw Anim
struct ABigfoot_Character_BP_C_Get_Throw_Anim_Params
{
	bool                                               overheadThrow;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                startThrowAnim;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsStartThrowAnimPlaying
struct ABigfoot_Character_BP_C_IsStartThrowAnimPlaying_Params
{
	bool                                               IsPlaying;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetStartThrowAnim
struct ABigfoot_Character_BP_C_GetStartThrowAnim_Params
{
	bool                                               overheadThrow;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                startThrowAnim;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsGrabbing
struct ABigfoot_Character_BP_C_IsGrabbing_Params
{
	bool                                               IsGrabbing;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.On Throw Released
struct ABigfoot_Character_BP_C_On_Throw_Released_Params
{
	bool                                               releasedOverhead;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.On Throw Pressed
struct ABigfoot_Character_BP_C_On_Throw_Pressed_Params
{
	bool                                               overheadThrow;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsThrowing
struct ABigfoot_Character_BP_C_IsThrowing_Params
{
	bool                                               retValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetLaunchDirection
struct ABigfoot_Character_BP_C_GetLaunchDirection_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.LaunchAtTracePoint
struct ABigfoot_Character_BP_C_LaunchAtTracePoint_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ThrowGrabbedCharacters
struct ABigfoot_Character_BP_C_ThrowGrabbedCharacters_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPOnMovementModeChangedNotify
struct ABigfoot_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyClearRider
struct ABigfoot_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPCharacterSleeped
struct ABigfoot_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPDoAttack
struct ABigfoot_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerStopThrow
struct ABigfoot_Character_BP_C_ServerStopThrow_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPTimerNonDedicated
struct ABigfoot_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ProcessThrow
struct ABigfoot_Character_BP_C_ProcessThrow_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsBigfootSubmerged
struct ABigfoot_Character_BP_C_IsBigfootSubmerged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ShortestAngleDistance
struct ABigfoot_Character_BP_C_ShortestAngleDistance_Params
{
	float                                              AngleCurrent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Difference;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetClampedLookDir
struct ABigfoot_Character_BP_C_GetClampedLookDir_Params
{
	bool                                               LimitLowerPitch;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ThrowTrace
struct ABigfoot_Character_BP_C_ThrowTrace_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CarryDino
struct ABigfoot_Character_BP_C_CarryDino_Params
{
	class APrimalCharacter*                            dinoToCarry;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintAdjustOutputDamage
struct ABigfoot_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPHandleOnStopTargeting
struct ABigfoot_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CanThrowRidingDino
struct ABigfoot_Character_BP_C_CanThrowRidingDino_Params
{
	bool                                               canThrow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPHandleControllerInitiatedAttack
struct ABigfoot_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPModifyHarvestDamage
struct ABigfoot_Character_BP_C_BPModifyHarvestDamage_Params
{
	class UPrimalHarvestingComponent**                 harvestComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             inDamage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UserConstructionScript
struct ABigfoot_Character_BP_C_UserConstructionScript_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_266
struct ABigfoot_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_266_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_265
struct ABigfoot_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_265_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_264
struct ABigfoot_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_264_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_263
struct ABigfoot_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_263_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_262
struct ABigfoot_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_262_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerRequestGrab
struct ABigfoot_Character_BP_C_ServerRequestGrab_Params
{
	bool                                               ButtonHeld;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerRequestThrow
struct ABigfoot_Character_BP_C_ServerRequestThrow_Params
{
	bool                                               ButtonHeld;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedGrab
struct ABigfoot_Character_BP_C_DelayedGrab_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Server_TraceTargetDir
struct ABigfoot_Character_BP_C_Server_TraceTargetDir_Params
{
	struct FVector                                     AimLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AimHit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ThrowInstant;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Multi_TraceTargetDir
struct ABigfoot_Character_BP_C_Multi_TraceTargetDir_Params
{
	struct FVector                                     AimLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AimHit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Request Throw
struct ABigfoot_Character_BP_C_Request_Throw_Params
{
	bool                                               IsHolding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ToggleAction;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               overheadThrow;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.StartThrowIdle
struct ABigfoot_Character_BP_C_StartThrowIdle_Params
{
	bool                                               overheadThrow;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Multi_SetPreventMovement
struct ABigfoot_Character_BP_C_Multi_SetPreventMovement_Params
{
	bool                                               NewPreventMovement;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ClearThrow
struct ABigfoot_Character_BP_C_ClearThrow_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedThrowPress
struct ABigfoot_Character_BP_C_DelayedThrowPress_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedClearThrowing
struct ABigfoot_Character_BP_C_DelayedClearThrowing_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ABigfoot_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.RemovePassengers_Server
struct ABigfoot_Character_BP_C_RemovePassengers_Server_Params
{
};

// Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ExecuteUbergraph_Bigfoot_Character_BP
struct ABigfoot_Character_BP_C_ExecuteUbergraph_Bigfoot_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
