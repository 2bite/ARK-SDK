#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesmodusHUD_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DesmodusHUD.DesmodusHUD_C.ClearString
struct UDesmodusHUD_C_ClearString_Params
{
};

// Function DesmodusHUD.DesmodusHUD_C.FadeOutHUDString
struct UDesmodusHUD_C_FadeOutHUDString_Params
{
};

// Function DesmodusHUD.DesmodusHUD_C.SetHUDString
struct UDesmodusHUD_C_SetHUDString_Params
{
	class FString                                      HUDString;                                                // (Parm, ZeroConstructor)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetOpacity;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentOpacity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ColorRed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesmodusHUD.DesmodusHUD_C.Initialize HUD Widget
struct UDesmodusHUD_C_Initialize_HUD_Widget_Params
{
};

// Function DesmodusHUD.DesmodusHUD_C.Reset HUD Widget
struct UDesmodusHUD_C_Reset_HUD_Widget_Params
{
};

// Function DesmodusHUD.DesmodusHUD_C.DestroyWidget
struct UDesmodusHUD_C_DestroyWidget_Params
{
};

// Function DesmodusHUD.DesmodusHUD_C.StartClosingWidget
struct UDesmodusHUD_C_StartClosingWidget_Params
{
	float                                              NewLifeSpan;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesmodusHUD.DesmodusHUD_C.ExecuteUbergraph_DesmodusHUD
struct UDesmodusHUD_C_ExecuteUbergraph_DesmodusHUD_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesmodusHUD.DesmodusHUD_C.OnWidgetDestroyed__DelegateSignature
struct UDesmodusHUD_C_OnWidgetDestroyed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
