#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GiantTurtleHUD_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GiantTurtleHUD.GiantTurtleHUD_C.Get_AbilityTextBlock_Text_1
struct UGiantTurtleHUD_C_Get_AbilityTextBlock_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GiantTurtleHUD.GiantTurtleHUD_C.Get_BubbleBreathProgressBar_Percent_1
struct UGiantTurtleHUD_C_Get_BubbleBreathProgressBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GiantTurtleHUD.GiantTurtleHUD_C.InitFromGiantTurtle
struct UGiantTurtleHUD_C_InitFromGiantTurtle_Params
{
	class AGiantTurtle_Character_BP_C*                 GiantTurtle_Char_BP;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtleHUD.GiantTurtleHUD_C.StartClosingWidget
struct UGiantTurtleHUD_C_StartClosingWidget_Params
{
	float                                              NewLifeSpan;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtleHUD.GiantTurtleHUD_C.DestroyHUDWidget
struct UGiantTurtleHUD_C_DestroyHUDWidget_Params
{
};

// Function GiantTurtleHUD.GiantTurtleHUD_C.ResetHudWidget
struct UGiantTurtleHUD_C_ResetHudWidget_Params
{
};

// Function GiantTurtleHUD.GiantTurtleHUD_C.Tick
struct UGiantTurtleHUD_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtleHUD.GiantTurtleHUD_C.ExecuteUbergraph_GiantTurtleHUD
struct UGiantTurtleHUD_C_ExecuteUbergraph_GiantTurtleHUD_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
