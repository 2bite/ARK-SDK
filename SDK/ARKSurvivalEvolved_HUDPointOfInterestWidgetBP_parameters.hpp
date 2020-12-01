#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HUDPointOfInterestWidgetBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.DestroyPointOfInterestWidget
struct UHUDPointOfInterestWidgetBP_C_DestroyPointOfInterestWidget_Params
{
};

// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.Construct
struct UHUDPointOfInterestWidgetBP_C_Construct_Params
{
};

// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.DestroyWidgetAfterAnim
struct UHUDPointOfInterestWidgetBP_C_DestroyWidgetAfterAnim_Params
{
};

// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.Tick
struct UHUDPointOfInterestWidgetBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.ExecuteUbergraph_HUDPointOfInterestWidgetBP
struct UHUDPointOfInterestWidgetBP_C_ExecuteUbergraph_HUDPointOfInterestWidgetBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
