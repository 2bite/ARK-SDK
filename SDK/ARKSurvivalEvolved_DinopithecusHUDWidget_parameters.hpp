#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinopithecusHUDWidget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.SetHUDText
struct UDinopithecusHUDWidget_C_SetHUDText_Params
{
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
	float                                              TimeToFade;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.Initialize HUD Widget
struct UDinopithecusHUDWidget_C_Initialize_HUD_Widget_Params
{
};

// Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.Reset HUD Widget
struct UDinopithecusHUDWidget_C_Reset_HUD_Widget_Params
{
};

// Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.DestroyWidget
struct UDinopithecusHUDWidget_C_DestroyWidget_Params
{
};

// Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.StartClosingWidget
struct UDinopithecusHUDWidget_C_StartClosingWidget_Params
{
	float                                              NewLifeSpan;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.ExecuteUbergraph_DinopithecusHUDWidget
struct UDinopithecusHUDWidget_C_ExecuteUbergraph_DinopithecusHUDWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.OnWidgetDestroyed__DelegateSignature
struct UDinopithecusHUDWidget_C_OnWidgetDestroyed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
