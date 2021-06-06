#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rex_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Rex_Character_BP.Rex_Character_BP_C.BPNotifySetRider
struct ARex_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rex_Character_BP.Rex_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
struct ARex_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Rex_Character_BP.Rex_Character_BP_C.BPGetMultiUseEntries
struct ARex_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Rex_Character_BP.Rex_Character_BP_C.BPTryMultiUse
struct ARex_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Rex_Character_BP.Rex_Character_BP_C.BPDoAttack
struct ARex_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rex_Character_BP.Rex_Character_BP_C.AllowRoarStun
struct ARex_Character_BP_C_AllowRoarStun_Params
{
	class APrimalCharacter*                            primalChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Rex_Character_BP.Rex_Character_BP_C.Roar
struct ARex_Character_BP_C_Roar_Params
{
};

// Function Rex_Character_BP.Rex_Character_BP_C.BPNotifyClearRider
struct ARex_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rex_Character_BP.Rex_Character_BP_C.BPModifyFOV
struct ARex_Character_BP_C_BPModifyFOV_Params
{
	float*                                             FOVIn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Rex_Character_BP.Rex_Character_BP_C.BPHandleOnStopTargeting
struct ARex_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Rex_Character_BP.Rex_Character_BP_C.BPHandleControllerInitiatedAttack
struct ARex_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Rex_Character_BP.Rex_Character_BP_C.UserConstructionScript
struct ARex_Character_BP_C_UserConstructionScript_Params
{
};

// Function Rex_Character_BP.Rex_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_188
struct ARex_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_188_Params
{
};

// Function Rex_Character_BP.Rex_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_187
struct ARex_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_187_Params
{
};

// Function Rex_Character_BP.Rex_Character_BP_C.RoarCameraShake
struct ARex_Character_BP_C_RoarCameraShake_Params
{
};

// Function Rex_Character_BP.Rex_Character_BP_C.DoRoarOverlapsAfterDelay
struct ARex_Character_BP_C_DoRoarOverlapsAfterDelay_Params
{
};

// Function Rex_Character_BP.Rex_Character_BP_C.ExecuteUbergraph_Rex_Character_BP
struct ARex_Character_BP_C_ExecuteUbergraph_Rex_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
