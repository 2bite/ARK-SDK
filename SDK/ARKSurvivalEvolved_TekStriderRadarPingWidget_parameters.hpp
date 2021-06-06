#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekStriderRadarPingWidget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.Tick
struct UTekStriderRadarPingWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SetMaterialHostScaleAndLocation
struct UTekStriderRadarPingWidget_C_SetMaterialHostScaleAndLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SyncHUDData
struct UTekStriderRadarPingWidget_C_SyncHUDData_Params
{
};

// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SetupDynamicMaterial
struct UTekStriderRadarPingWidget_C_SetupDynamicMaterial_Params
{
};

// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.InitializeHUDWidget
struct UTekStriderRadarPingWidget_C_InitializeHUDWidget_Params
{
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.Reset HUD Widget
struct UTekStriderRadarPingWidget_C_Reset_HUD_Widget_Params
{
};

// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.DestroyWidget
struct UTekStriderRadarPingWidget_C_DestroyWidget_Params
{
};

// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.ExecuteUbergraph_TekStriderRadarPingWidget
struct UTekStriderRadarPingWidget_C_ExecuteUbergraph_TekStriderRadarPingWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.OnWidgetDestroyed__DelegateSignature
struct UTekStriderRadarPingWidget_C_OnWidgetDestroyed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
