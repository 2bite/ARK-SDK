#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CreativeModeHelper_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

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

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Jump_K2Node_InputActionEvent_206
struct ABuff_CreativeModeHelper_C_InpActEvt_Jump_K2Node_InputActionEvent_206_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_205
struct ABuff_CreativeModeHelper_C_InpActEvt_Run_K2Node_InputActionEvent_205_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_204
struct ABuff_CreativeModeHelper_C_InpActEvt_Run_K2Node_InputActionEvent_204_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Prone_K2Node_InputActionEvent_203
struct ABuff_CreativeModeHelper_C_InpActEvt_Prone_K2Node_InputActionEvent_203_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_202
struct ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_202_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_201
struct ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_201_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_200
struct ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_200_Params
{
};

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_60
struct ABuff_CreativeModeHelper_C_InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_60_Params
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
	float                                              NewSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
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
	TArray<struct FTransform>                          Chars;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
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