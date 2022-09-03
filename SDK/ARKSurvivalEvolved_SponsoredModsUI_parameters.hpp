#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SponsoredModsUI_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SponsoredModsUI.SponsoredModsUI_C.Tick
struct USponsoredModsUI_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SponsoredModsUI.SponsoredModsUI_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature
struct USponsoredModsUI_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SponsoredModsUI.SponsoredModsUI_C.OnClickedObject_Event
struct USponsoredModsUI_C_OnClickedObject_Event_Params
{
	class UWidget*                                     clickedWidget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SponsoredModsUI.SponsoredModsUI_C.ExecuteUbergraph_SponsoredModsUI
struct USponsoredModsUI_C_ExecuteUbergraph_SponsoredModsUI_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
