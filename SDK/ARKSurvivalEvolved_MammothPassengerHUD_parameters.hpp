#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MammothPassengerHUD_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MammothPassengerHUD.MammothPassengerHUD_C.Receive Input
struct UMammothPassengerHUD_C_Receive_Input_Params
{
};

// Function MammothPassengerHUD.MammothPassengerHUD_C.Sync Minigame Widget
struct UMammothPassengerHUD_C_Sync_Minigame_Widget_Params
{
	double                                             NextTimeOut;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BeatWindow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BeatTimeOut;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BeatExitWidth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BeatWidgetIcon;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseDebugMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MammothPassengerHUD.MammothPassengerHUD_C.Initialize HUD Widget
struct UMammothPassengerHUD_C_Initialize_HUD_Widget_Params
{
	class ABuff_MammothDrummer_C*                      MammothDrummerBuff;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MammothPassengerHUD.MammothPassengerHUD_C.Reset HUD Widget
struct UMammothPassengerHUD_C_Reset_HUD_Widget_Params
{
};

// Function MammothPassengerHUD.MammothPassengerHUD_C.StartClosingWidget
struct UMammothPassengerHUD_C_StartClosingWidget_Params
{
	float                                              NewLifeSpan;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MammothPassengerHUD.MammothPassengerHUD_C.DestroySkiffHudWidget
struct UMammothPassengerHUD_C_DestroySkiffHudWidget_Params
{
};

// Function MammothPassengerHUD.MammothPassengerHUD_C.ExecuteUbergraph_MammothPassengerHUD
struct UMammothPassengerHUD_C_ExecuteUbergraph_MammothPassengerHUD_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
