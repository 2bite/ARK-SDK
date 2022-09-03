#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StriderHackingMinigameUI_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.grab beat loc from outside the ui
struct UStriderHackingMinigameUI_C_grab_beat_loc_from_outside_the_ui_Params
{
	float                                              NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Win
struct UStriderHackingMinigameUI_C_On_Win_Params
{
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Try Shut Down
struct UStriderHackingMinigameUI_C_Try_Shut_Down_Params
{
	bool                                               ForceShutDown;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Widget Visual State
struct UStriderHackingMinigameUI_C_Reset_Widget_Visual_State_Params
{
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set CanMinigamePlay
struct UStriderHackingMinigameUI_C_Set_CanMinigamePlay_Params
{
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Beat Hit Successfully
struct UStriderHackingMinigameUI_C_On_Beat_Hit_Successfully_Params
{
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Manage Beat Widgets
struct UStriderHackingMinigameUI_C_Manage_Beat_Widgets_Params
{
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Post Process Params
struct UStriderHackingMinigameUI_C_Reset_Post_Process_Params_Params
{
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set Minigame Visual State
struct UStriderHackingMinigameUI_C_Set_Minigame_Visual_State_Params
{
	bool                                               IsBeatMissedState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetPostProcessColor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Beat to Goal Time
struct UStriderHackingMinigameUI_C_Beat_to_Goal_Time_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Is Beat Too Late
struct UStriderHackingMinigameUI_C_Is_Beat_Too_Late_Params
{
	bool                                               _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Is Beat Too Soon
struct UStriderHackingMinigameUI_C_Is_Beat_Too_Soon_Params
{
	bool                                               _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Map Beat Travel Based On Timing State
struct UStriderHackingMinigameUI_C_Map_Beat_Travel_Based_On_Timing_State_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Too Soon Percent
struct UStriderHackingMinigameUI_C_Too_Soon_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.TooLatePercent
struct UStriderHackingMinigameUI_C_TooLatePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Distance Per Second
struct UStriderHackingMinigameUI_C_Distance_Per_Second_Params
{
	float                                              _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Map Percent to Position
struct UStriderHackingMinigameUI_C_Map_Percent_to_Position_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Set ProgressBar Color
struct UStriderHackingMinigameUI_C_Set_ProgressBar_Color_Params
{
	class UProgressBar*                                ProgressBar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TintColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Get Beat Travel Percent
struct UStriderHackingMinigameUI_C_Get_Beat_Travel_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Reset Beat
struct UStriderHackingMinigameUI_C_Reset_Beat_Params
{
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Stop Minigame
struct UStriderHackingMinigameUI_C_Stop_Minigame_Params
{
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.On Beat Too Late
struct UStriderHackingMinigameUI_C_On_Beat_Too_Late_Params
{
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Release Input
struct UStriderHackingMinigameUI_C_Release_Input_Params
{
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Receive Input
struct UStriderHackingMinigameUI_C_Receive_Input_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.SyncWidget
struct UStriderHackingMinigameUI_C_SyncWidget_Params
{
	double                                             NextTimeOut;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BeatWindow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BeatTimeOut;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BeatsPerLoop;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsShuttingDown;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PostProcessInputColorParam;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Tick
struct UStriderHackingMinigameUI_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.Construct
struct UStriderHackingMinigameUI_C_Construct_Params
{
};

// Function StriderHackingMinigameUI.StriderHackingMinigameUI_C.ExecuteUbergraph_StriderHackingMinigameUI
struct UStriderHackingMinigameUI_C_ExecuteUbergraph_StriderHackingMinigameUI_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
