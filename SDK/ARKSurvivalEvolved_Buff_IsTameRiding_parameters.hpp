#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_IsTameRiding_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetTimeBasedAlpha
struct ABuff_IsTameRiding_C_GetTimeBasedAlpha_Params
{
	float                                              Alpha;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetBuffDescription
struct ABuff_IsTameRiding_C_GetBuffDescription_Params
{
	struct FStatusValueModifierDescription             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.DrawActiveStateText
struct ABuff_IsTameRiding_C_DrawActiveStateText_Params
{
	int                                                ActiveState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD*                                 HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetActiveTameState
struct ABuff_IsTameRiding_C_GetActiveTameState_Params
{
	class APrimalDinoCharacter*                        MyRidingDino;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IsInState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.BPDrawBuffStatusHUD
struct ABuff_IsTameRiding_C_BPDrawBuffStatusHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.BuffTickServer
struct ABuff_IsTameRiding_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.BPCheckPreventInput
struct ABuff_IsTameRiding_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.UserConstructionScript
struct ABuff_IsTameRiding_C_UserConstructionScript_Params
{
};

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Jump_K2Node_InputActionEvent_140
struct ABuff_IsTameRiding_C_InpActEvt_Jump_K2Node_InputActionEvent_140_Params
{
};

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Use_K2Node_InputActionEvent_139
struct ABuff_IsTameRiding_C_InpActEvt_Use_K2Node_InputActionEvent_139_Params
{
};

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_56
struct ABuff_IsTameRiding_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_56_Params
{
};

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.ReceiveBeginPlay
struct ABuff_IsTameRiding_C_ReceiveBeginPlay_Params
{
};

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125
struct ABuff_IsTameRiding_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.ServerTameEvent
struct ABuff_IsTameRiding_C_ServerTameEvent_Params
{
};

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_58
struct ABuff_IsTameRiding_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_58_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_77
struct ABuff_IsTameRiding_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_77_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IsTameRiding.Buff_IsTameRiding_C.ExecuteUbergraph_Buff_IsTameRiding
struct ABuff_IsTameRiding_C_ExecuteUbergraph_Buff_IsTameRiding_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
