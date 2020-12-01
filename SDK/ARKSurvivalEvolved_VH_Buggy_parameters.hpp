#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_VH_Buggy_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VH_Buggy.VH_Buggy_C.BPPlayDying
struct AVH_Buggy_C_BPPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VH_Buggy.VH_Buggy_C.UserConstructionScript
struct AVH_Buggy_C_UserConstructionScript_Params
{
};

// Function VH_Buggy.VH_Buggy_C.InpActEvt_Jump_K2Node_InputActionEvent_74
struct AVH_Buggy_C_InpActEvt_Jump_K2Node_InputActionEvent_74_Params
{
};

// Function VH_Buggy.VH_Buggy_C.InpActEvt_Jump_K2Node_InputActionEvent_73
struct AVH_Buggy_C_InpActEvt_Jump_K2Node_InputActionEvent_73_Params
{
};

// Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_33
struct AVH_Buggy_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_33_Params
{
};

// Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_32
struct AVH_Buggy_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_32_Params
{
};

// Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_31
struct AVH_Buggy_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_31_Params
{
};

// Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_30
struct AVH_Buggy_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_30_Params
{
};

// Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_29
struct AVH_Buggy_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_29_Params
{
};

// Function VH_Buggy.VH_Buggy_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_135
struct AVH_Buggy_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_135_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VH_Buggy.VH_Buggy_C.ReceivePossessed
struct AVH_Buggy_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VH_Buggy.VH_Buggy_C.ReceiveTick
struct AVH_Buggy_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VH_Buggy.VH_Buggy_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_46
struct AVH_Buggy_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_46_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VH_Buggy.VH_Buggy_C.ExecuteUbergraph_VH_Buggy
struct AVH_Buggy_C_ExecuteUbergraph_VH_Buggy_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
