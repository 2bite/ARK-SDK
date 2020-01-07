#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CreditsUI_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CreditsUI.CreditsUI_C.Construct
struct UCreditsUI_C_Construct_Params
{
};

// Function CreditsUI.CreditsUI_C.Tick
struct UCreditsUI_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreditsUI.CreditsUI_C.CloseButtonEvent
struct UCreditsUI_C_CloseButtonEvent_Params
{
};

// Function CreditsUI.CreditsUI_C.RemovedFromViewport
struct UCreditsUI_C_RemovedFromViewport_Params
{
};

// Function CreditsUI.CreditsUI_C.ExecuteUbergraph_CreditsUI
struct UCreditsUI_C_ExecuteUbergraph_CreditsUI_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
