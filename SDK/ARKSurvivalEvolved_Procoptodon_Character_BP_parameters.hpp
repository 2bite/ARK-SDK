#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Procoptodon_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyBabyAgeIncrement
struct AProcoptodon_Character_BP_C_BPNotifyBabyAgeIncrement_Params
{
	float*                                             PreviousAge;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewAge;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTimerServer
struct AProcoptodon_Character_BP_C_BPTimerServer_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateNursingBuff
struct AProcoptodon_Character_BP_C_UpdateNursingBuff_Params
{
	bool                                               ShouldAdd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            TargetToNurse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyMateBoostChanged
struct AProcoptodon_Character_BP_C_BPNotifyMateBoostChanged_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTimerNonDedicated
struct AProcoptodon_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifySetRider
struct AProcoptodon_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPCharacterSleeped
struct AProcoptodon_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyClearRider
struct AProcoptodon_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ServerStopJump
struct AProcoptodon_Character_BP_C_ServerStopJump_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPOnMovementModeChangedNotify
struct AProcoptodon_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.GetLaunchDirection
struct AProcoptodon_Character_BP_C_GetLaunchDirection_Params
{
	class AActor*                                      CalcActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.LaunchAtTracePoint
struct AProcoptodon_Character_BP_C_LaunchAtTracePoint_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ExecuteJump
struct AProcoptodon_Character_BP_C_ExecuteJump_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Prep Jump
struct AProcoptodon_Character_BP_C_Prep_Jump_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ShouldStopJumpRotation
struct AProcoptodon_Character_BP_C_ShouldStopJumpRotation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.GetClampedLookDir
struct AProcoptodon_Character_BP_C_GetClampedLookDir_Params
{
	bool                                               LimitLowerPitch;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.JumpingTrace
struct AProcoptodon_Character_BP_C_JumpingTrace_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ShortestAngleDistance
struct AProcoptodon_Character_BP_C_ShortestAngleDistance_Params
{
	float                                              AngleCurrent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Difference;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyCarriedDinoBabyAgeIncrement
struct AProcoptodon_Character_BP_C_BPNotifyCarriedDinoBabyAgeIncrement_Params
{
	class APrimalDinoCharacter**                       AgingCarriedDino;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PreviousAge;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewAge;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Find Leap Dir
struct AProcoptodon_Character_BP_C_Find_Leap_Dir_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyClearPassenger
struct AProcoptodon_Character_BP_C_BPNotifyClearPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BlueprintCanRiderAttack
struct AProcoptodon_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyAddPassenger
struct AProcoptodon_Character_BP_C_BPNotifyAddPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BlueprintAdjustOutputDamage
struct AProcoptodon_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Can Pouch Carry
struct AProcoptodon_Character_BP_C_Can_Pouch_Carry_Params
{
	class AActor*                                      GrabTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SkipCarryCheck;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPServerHandleNetExecCommand
struct AProcoptodon_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.CreatePouchGrabbableEntry
struct AProcoptodon_Character_BP_C_CreatePouchGrabbableEntry_Params
{
	class APrimalCharacter*                            CharToAdd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	struct FMultiUseEntry                              MultiUseEntry;                                            // (Parm, OutParm)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTryMultiUse
struct AProcoptodon_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPClientDoMultiUse
struct AProcoptodon_Character_BP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPDoAttack
struct AProcoptodon_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPGetMultiUseEntries
struct AProcoptodon_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UserConstructionScript
struct AProcoptodon_Character_BP_C_UserConstructionScript_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.TryPouchGrab
struct AProcoptodon_Character_BP_C_TryPouchGrab_Params
{
	class APrimalCharacter*                            TargetCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.AnimNotify_KickHop
struct AProcoptodon_Character_BP_C_AnimNotify_KickHop_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BP_OnJumpPressed
struct AProcoptodon_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BP_OnJumpReleased
struct AProcoptodon_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedPress
struct AProcoptodon_Character_BP_C_DelayedPress_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Request Jump Response
struct AProcoptodon_Character_BP_C_Request_Jump_Response_Params
{
	bool                                               isHoldingJump;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Multi_SetPreventMovement
struct AProcoptodon_Character_BP_C_Multi_SetPreventMovement_Params
{
	bool                                               NewPreventMovement;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedClearJumping
struct AProcoptodon_Character_BP_C_DelayedClearJumping_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Server_TraceTargetDir
struct AProcoptodon_Character_BP_C_Server_TraceTargetDir_Params
{
	struct FVector                                     AimLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AimHit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               JumpInstant;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.StartJumpIdle
struct AProcoptodon_Character_BP_C_StartJumpIdle_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ClearJump
struct AProcoptodon_Character_BP_C_ClearJump_Params
{
	bool                                               ForceImmediateClear;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Multi_TraceTargetDir
struct AProcoptodon_Character_BP_C_Multi_TraceTargetDir_Params
{
	struct FVector                                     AimLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AimHit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateAllJumpRotation
struct AProcoptodon_Character_BP_C_UpdateAllJumpRotation_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateJumpRotation
struct AProcoptodon_Character_BP_C_UpdateJumpRotation_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.AnimNotify_JumpStart
struct AProcoptodon_Character_BP_C_AnimNotify_JumpStart_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.RequestJumpReady
struct AProcoptodon_Character_BP_C_RequestJumpReady_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ServerArrestMovement
struct AProcoptodon_Character_BP_C_ServerArrestMovement_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ResetArrestMovement
struct AProcoptodon_Character_BP_C_ResetArrestMovement_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedCarryingResponseBehavior
struct AProcoptodon_Character_BP_C_DelayedCarryingResponseBehavior_Params
{
};

// Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ExecuteUbergraph_Procoptodon_Character_BP
struct AProcoptodon_Character_BP_C_ExecuteUbergraph_Procoptodon_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
