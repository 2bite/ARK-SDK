#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DrumBeatWidget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DrumBeatWidget.DrumBeatWidget_C.Set Widget Content Opacity
struct UDrumBeatWidget_C_Set_Widget_Content_Opacity_Params
{
	float                                              NewOpacity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrumBeatWidget.DrumBeatWidget_C.Set Widget Coloration
struct UDrumBeatWidget_C_Set_Widget_Coloration_Params
{
	struct FLinearColor                                NewColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrumBeatWidget.DrumBeatWidget_C.ExecuteUbergraph_DrumBeatWidget
struct UDrumBeatWidget_C_ExecuteUbergraph_DrumBeatWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
