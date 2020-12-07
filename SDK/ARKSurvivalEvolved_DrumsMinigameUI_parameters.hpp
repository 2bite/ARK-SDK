#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DrumsMinigameUI_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DrumsMinigameUI.DrumsMinigameUI_C.Set Minigame Visual State
struct UDrumsMinigameUI_C_Set_Minigame_Visual_State_Params
{
	bool                                               IsBeatMissedState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.Next Beat Time
struct UDrumsMinigameUI_C_Next_Beat_Time_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.Is Beat Too Late
struct UDrumsMinigameUI_C_Is_Beat_Too_Late_Params
{
	bool                                               _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.Is Beat Too Soon
struct UDrumsMinigameUI_C_Is_Beat_Too_Soon_Params
{
	bool                                               _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.Map Beat Travel Based On Timing State
struct UDrumsMinigameUI_C_Map_Beat_Travel_Based_On_Timing_State_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.Too Soon Percent
struct UDrumsMinigameUI_C_Too_Soon_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.TooLatePercent
struct UDrumsMinigameUI_C_TooLatePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.Map Percent to Position
struct UDrumsMinigameUI_C_Map_Percent_to_Position_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.Set ProgressBar Color
struct UDrumsMinigameUI_C_Set_ProgressBar_Color_Params
{
	class UProgressBar*                                ProgressBar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TintColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.Get Beat Travel Percent
struct UDrumsMinigameUI_C_Get_Beat_Travel_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.Reset Beat
struct UDrumsMinigameUI_C_Reset_Beat_Params
{
	bool                                               TryToResetBeatPosition;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.Stop Minigame
struct UDrumsMinigameUI_C_Stop_Minigame_Params
{
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.On Beat Too Late
struct UDrumsMinigameUI_C_On_Beat_Too_Late_Params
{
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.Release Input
struct UDrumsMinigameUI_C_Release_Input_Params
{
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.Receive Input
struct UDrumsMinigameUI_C_Receive_Input_Params
{
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.SyncWidget
struct UDrumsMinigameUI_C_SyncWidget_Params
{
	double                                             NextTimeOut;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BeatWindow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BeatTimeOut;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BeatExitWidth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BeatWidgetIcon;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseDebugMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.Tick
struct UDrumsMinigameUI_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.Construct
struct UDrumsMinigameUI_C_Construct_Params
{
};

// Function DrumsMinigameUI.DrumsMinigameUI_C.ExecuteUbergraph_DrumsMinigameUI
struct UDrumsMinigameUI_C_ExecuteUbergraph_DrumsMinigameUI_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
