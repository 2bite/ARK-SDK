#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_Male_Tamed_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPNotifySetRider
struct AXenomorph_Character_BP_Male_Tamed_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPTimerNonDedicated
struct AXenomorph_Character_BP_Male_Tamed_C_BPTimerNonDedicated_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPCharacterSleeped
struct AXenomorph_Character_BP_Male_Tamed_C_BPCharacterSleeped_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPOnMovementModeChangedNotify
struct AXenomorph_Character_BP_Male_Tamed_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPNotifyClearRider
struct AXenomorph_Character_BP_Male_Tamed_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Server Stop Jump
struct AXenomorph_Character_BP_Male_Tamed_C_Server_Stop_Jump_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPDoAttack
struct AXenomorph_Character_BP_Male_Tamed_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.GetLaunchDirection
struct AXenomorph_Character_BP_Male_Tamed_C_GetLaunchDirection_Params
{
	class AActor*                                      CalcActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.LaunchAtTracePoint
struct AXenomorph_Character_BP_Male_Tamed_C_LaunchAtTracePoint_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Process Launch
struct AXenomorph_Character_BP_Male_Tamed_C_Process_Launch_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ProcessJump
struct AXenomorph_Character_BP_Male_Tamed_C_ProcessJump_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Jump Trace
struct AXenomorph_Character_BP_Male_Tamed_C_Jump_Trace_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ShouldStopJumpRotation
struct AXenomorph_Character_BP_Male_Tamed_C_ShouldStopJumpRotation_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ShortestAngleDistance
struct AXenomorph_Character_BP_Male_Tamed_C_ShortestAngleDistance_Params
{
	float                                              AngleCurrent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Difference;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.GetClampedLookDir
struct AXenomorph_Character_BP_Male_Tamed_C_GetClampedLookDir_Params
{
	bool                                               LimitLowerPitch;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UserConstructionScript
struct AXenomorph_Character_BP_Male_Tamed_C_UserConstructionScript_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BP_OnJumpPressed
struct AXenomorph_Character_BP_Male_Tamed_C_BP_OnJumpPressed_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BP_OnJumpReleased
struct AXenomorph_Character_BP_Male_Tamed_C_BP_OnJumpReleased_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.DelayedPress
struct AXenomorph_Character_BP_Male_Tamed_C_DelayedPress_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Request Jump Response
struct AXenomorph_Character_BP_Male_Tamed_C_Request_Jump_Response_Params
{
	bool                                               isHoldingJump;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Multi_SetPreventMovement
struct AXenomorph_Character_BP_Male_Tamed_C_Multi_SetPreventMovement_Params
{
	bool                                               NewPreventMovement;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.DelayedClearJumping
struct AXenomorph_Character_BP_Male_Tamed_C_DelayedClearJumping_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Server_TraceTargetDir
struct AXenomorph_Character_BP_Male_Tamed_C_Server_TraceTargetDir_Params
{
	struct FVector                                     AimLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AimHit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               JumpInstant;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.StartJumpIdle
struct AXenomorph_Character_BP_Male_Tamed_C_StartJumpIdle_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ClearJump
struct AXenomorph_Character_BP_Male_Tamed_C_ClearJump_Params
{
	bool                                               ForceImmediateClear;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Multi_TraceTargetDir
struct AXenomorph_Character_BP_Male_Tamed_C_Multi_TraceTargetDir_Params
{
	struct FVector                                     AimLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AimHit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UpdateAllJumpRotation
struct AXenomorph_Character_BP_Male_Tamed_C_UpdateAllJumpRotation_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UpdateJumpRotation
struct AXenomorph_Character_BP_Male_Tamed_C_UpdateJumpRotation_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.AnimNotify_JumpStart
struct AXenomorph_Character_BP_Male_Tamed_C_AnimNotify_JumpStart_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ServerArrestMovement
struct AXenomorph_Character_BP_Male_Tamed_C_ServerArrestMovement_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ResetArrestMovement
struct AXenomorph_Character_BP_Male_Tamed_C_ResetArrestMovement_Params
{
};

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed
struct AXenomorph_Character_BP_Male_Tamed_C_ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
