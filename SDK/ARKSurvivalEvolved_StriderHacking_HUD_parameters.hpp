#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StriderHacking_HUD_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StriderHacking_HUD.StriderHacking_HUD_C.Try Trigger Win
struct UStriderHacking_HUD_C_Try_Trigger_Win_Params
{
};

// Function StriderHacking_HUD.StriderHacking_HUD_C.Receive Input
struct UStriderHacking_HUD_C_Receive_Input_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StriderHacking_HUD.StriderHacking_HUD_C.Sync Minigame Widget
struct UStriderHacking_HUD_C_Sync_Minigame_Widget_Params
{
	double                                             NextTimeOut;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BeatWindow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BeatTimeOut;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BeatsPerLoop;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsShuttingDown;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PostProcessInputColorParam;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StriderHacking_HUD.StriderHacking_HUD_C.Initialize HUD Widget
struct UStriderHacking_HUD_C_Initialize_HUD_Widget_Params
{
};

// Function StriderHacking_HUD.StriderHacking_HUD_C.Reset HUD Widget
struct UStriderHacking_HUD_C_Reset_HUD_Widget_Params
{
};

// Function StriderHacking_HUD.StriderHacking_HUD_C.StartClosingWidget
struct UStriderHacking_HUD_C_StartClosingWidget_Params
{
	float                                              NewLifeSpan;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StriderHacking_HUD.StriderHacking_HUD_C.DestroyWidget
struct UStriderHacking_HUD_C_DestroyWidget_Params
{
};

// Function StriderHacking_HUD.StriderHacking_HUD_C.ExecuteUbergraph_StriderHacking_HUD
struct UStriderHacking_HUD_C_ExecuteUbergraph_StriderHacking_HUD_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
