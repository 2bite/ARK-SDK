#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CreativeModeHelper_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPCheckPreventInput
struct ABuff_CreativeModeHelper_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDrawBuffStatusHUD
struct ABuff_CreativeModeHelper_C_BPDrawBuffStatusHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickServer
struct ABuff_CreativeModeHelper_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.IsNotRidingDino
struct ABuff_CreativeModeHelper_C_IsNotRidingDino_Params
{
	bool                                               NotRidingDino;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecConsoleCommand
struct ABuff_CreativeModeHelper_C_ExecConsoleCommand_Params
{
	class FString                                      Command;                                                  // (Parm, ZeroConstructor)
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDeactivated
struct ABuff_CreativeModeHelper_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPActivated
struct ABuff_CreativeModeHelper_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPSetupForInstigator
struct ABuff_CreativeModeHelper_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.UserConstructionScript
struct ABuff_CreativeModeHelper_C_UserConstructionScript_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Jump_K2Node_InputActionEvent_226
struct ABuff_CreativeModeHelper_C_InpActEvt_Jump_K2Node_InputActionEvent_226_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_225
struct ABuff_CreativeModeHelper_C_InpActEvt_Run_K2Node_InputActionEvent_225_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_224
struct ABuff_CreativeModeHelper_C_InpActEvt_Run_K2Node_InputActionEvent_224_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_223
struct ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_223_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_222
struct ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_222_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_221
struct ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_221_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_70
struct ABuff_CreativeModeHelper_C_InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_70_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_69
struct ABuff_CreativeModeHelper_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_69_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_68
struct ABuff_CreativeModeHelper_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_68_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_G_K2Node_InputKeyEvent_67
struct ABuff_CreativeModeHelper_C_InpActEvt_G_K2Node_InputKeyEvent_67_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlight
struct ABuff_CreativeModeHelper_C_ServerSetFlight_Params
{
	bool                                               IsFlying;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlySpeed
struct ABuff_CreativeModeHelper_C_ServerSetFlySpeed_Params
{
	float                                              newSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.SetFlySpeed
struct ABuff_CreativeModeHelper_C_SetFlySpeed_Params
{
	float                                              New_Speed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.NetServerDestroyStructure
struct ABuff_CreativeModeHelper_C_NetServerDestroyStructure_Params
{
	class APrimalStructure*                            StructureToDestroy;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ClientUpdateFlightStatus
struct ABuff_CreativeModeHelper_C_ClientUpdateFlightStatus_Params
{
	bool                                               IsFlying;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.MultiReplicationDebugData
struct ABuff_CreativeModeHelper_C_MultiReplicationDebugData_Params
{
	TArray<struct FHitResult>                          Hits;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             HitStarts;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             HitEnds;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct UObject_FTransform>                  Chars;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickClient
struct ABuff_CreativeModeHelper_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerRequestReplicationDebugging
struct ABuff_CreativeModeHelper_C_ServerRequestReplicationDebugging_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecuteUbergraph_Buff_CreativeModeHelper
struct ABuff_CreativeModeHelper_C_ExecuteUbergraph_Buff_CreativeModeHelper_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
