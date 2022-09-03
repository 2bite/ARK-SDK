#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekWyvernTameRiding_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.Get Extra Taming Effectiveness Modifier
struct ABuff_TekWyvernTameRiding_C_Get_Extra_Taming_Effectiveness_Modifier_Params
{
	float                                              ExtraEffectiveness;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.GetTimeBasedAlpha
struct ABuff_TekWyvernTameRiding_C_GetTimeBasedAlpha_Params
{
	float                                              Alpha;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.GetBuffDescription
struct ABuff_TekWyvernTameRiding_C_GetBuffDescription_Params
{
	struct FStatusValueModifierDescription             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.DrawActiveStateText
struct ABuff_TekWyvernTameRiding_C_DrawActiveStateText_Params
{
	int                                                ActiveState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD*                                 HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.GetActiveTameState
struct ABuff_TekWyvernTameRiding_C_GetActiveTameState_Params
{
	class APrimalDinoCharacter*                        MyRidingDino;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IsInState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.BPDrawBuffStatusHUD
struct ABuff_TekWyvernTameRiding_C_BPDrawBuffStatusHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.BuffTickServer
struct ABuff_TekWyvernTameRiding_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.BPCheckPreventInput
struct ABuff_TekWyvernTameRiding_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.UserConstructionScript
struct ABuff_TekWyvernTameRiding_C_UserConstructionScript_Params
{
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpActEvt_Jump_K2Node_InputActionEvent_410
struct ABuff_TekWyvernTameRiding_C_InpActEvt_Jump_K2Node_InputActionEvent_410_Params
{
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpActEvt_Use_K2Node_InputActionEvent_409
struct ABuff_TekWyvernTameRiding_C_InpActEvt_Use_K2Node_InputActionEvent_409_Params
{
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_86
struct ABuff_TekWyvernTameRiding_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_86_Params
{
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.ReceiveBeginPlay
struct ABuff_TekWyvernTameRiding_C_ReceiveBeginPlay_Params
{
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125
struct ABuff_TekWyvernTameRiding_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.ServerTameEvent
struct ABuff_TekWyvernTameRiding_C_ServerTameEvent_Params
{
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_58
struct ABuff_TekWyvernTameRiding_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_58_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_77
struct ABuff_TekWyvernTameRiding_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_77_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekWyvernTameRiding.Buff_TekWyvernTameRiding_C.ExecuteUbergraph_Buff_TekWyvernTameRiding
struct ABuff_TekWyvernTameRiding_C_ExecuteUbergraph_Buff_TekWyvernTameRiding_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
