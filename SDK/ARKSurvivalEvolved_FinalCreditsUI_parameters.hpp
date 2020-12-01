#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FinalCreditsUI_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FinalCreditsUI.FinalCreditsUI_C.Construct
struct UFinalCreditsUI_C_Construct_Params
{
};

// Function FinalCreditsUI.FinalCreditsUI_C.Tick
struct UFinalCreditsUI_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FinalCreditsUI.FinalCreditsUI_C.CloseButtonEvent
struct UFinalCreditsUI_C_CloseButtonEvent_Params
{
};

// Function FinalCreditsUI.FinalCreditsUI_C.RemovedFromViewport
struct UFinalCreditsUI_C_RemovedFromViewport_Params
{
};

// Function FinalCreditsUI.FinalCreditsUI_C.AddedToViewport
struct UFinalCreditsUI_C_AddedToViewport_Params
{
};

// Function FinalCreditsUI.FinalCreditsUI_C.ExecuteUbergraph_FinalCreditsUI
struct UFinalCreditsUI_C_ExecuteUbergraph_FinalCreditsUI_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
