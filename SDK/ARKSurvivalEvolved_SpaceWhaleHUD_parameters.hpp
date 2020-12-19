#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceWhaleHUD_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_HyperdriveValueTextBlock_Text_1
struct USpaceWhaleHUD_C_Get_HyperdriveValueTextBlock_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Set Progress Bar Foreground Color
struct USpaceWhaleHUD_C_Set_Progress_Bar_Foreground_Color_Params
{
	class UObject*                                     ProgressBarObject;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LinearColor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerBelowProgressBar_Percent_1
struct USpaceWhaleHUD_C_Get_CosmicPowerBelowProgressBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerValueTextBlock_Text_1
struct USpaceWhaleHUD_C_Get_CosmicPowerValueTextBlock_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerAboveProgressBar_Percent_1
struct USpaceWhaleHUD_C_Get_CosmicPowerAboveProgressBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_HyperdriveProgressBar_Percent_1
struct USpaceWhaleHUD_C_Get_HyperdriveProgressBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get BombsHintText 0
struct USpaceWhaleHUD_C_Get_BombsHintText_0_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SpaceWhaleHUD.SpaceWhaleHUD_C.InitFromSpaceWhale
struct USpaceWhaleHUD_C_InitFromSpaceWhale_Params
{
	class ASpaceWhale_Character_BP_C*                  SpaceWhaleCharBP;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhaleHUD.SpaceWhaleHUD_C.StartClosingWidget
struct USpaceWhaleHUD_C_StartClosingWidget_Params
{
	float                                              NewLifespan;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhaleHUD.SpaceWhaleHUD_C.DestroyHudWidget
struct USpaceWhaleHUD_C_DestroyHudWidget_Params
{
};

// Function SpaceWhaleHUD.SpaceWhaleHUD_C.ResetHudWidget
struct USpaceWhaleHUD_C_ResetHudWidget_Params
{
};

// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Tick
struct USpaceWhaleHUD_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Construct
struct USpaceWhaleHUD_C_Construct_Params
{
};

// Function SpaceWhaleHUD.SpaceWhaleHUD_C.ExecuteUbergraph_SpaceWhaleHUD
struct USpaceWhaleHUD_C_ExecuteUbergraph_SpaceWhaleHUD_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
