#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExosuitHUD_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ExosuitHUD.ExosuitHUD_C.SetupDynamicMaterial
struct UExosuitHUD_C_SetupDynamicMaterial_Params
{
};

// Function ExosuitHUD.ExosuitHUD_C.SyncHUDWidget
struct UExosuitHUD_C_SyncHUDWidget_Params
{
	class FString                                      ModeString;                                               // (Parm, ZeroConstructor)
	class FString                                      RepairRequirementsString;                                 // (Parm, ZeroConstructor)
	float                                              BeamAvailabilityPercent;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BeamPressAndHoldPercent;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsesChestBeam;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanUseChestBeam;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChestBeamState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalStructure*                            LastAimedStructure;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HUDModeTextFadeOutTimeMultiplier;                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExosuitHUD.ExosuitHUD_C.Initialize HUD Widget
struct UExosuitHUD_C_Initialize_HUD_Widget_Params
{
};

// Function ExosuitHUD.ExosuitHUD_C.Reset HUD Widget
struct UExosuitHUD_C_Reset_HUD_Widget_Params
{
};

// Function ExosuitHUD.ExosuitHUD_C.DestroyWidget
struct UExosuitHUD_C_DestroyWidget_Params
{
};

// Function ExosuitHUD.ExosuitHUD_C.StartClosingWidget
struct UExosuitHUD_C_StartClosingWidget_Params
{
	float                                              NewLifeSpan;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExosuitHUD.ExosuitHUD_C.ExecuteUbergraph_ExosuitHUD
struct UExosuitHUD_C_ExecuteUbergraph_ExosuitHUD_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExosuitHUD.ExosuitHUD_C.OnWidgetDestroyed__DelegateSignature
struct UExosuitHUD_C_OnWidgetDestroyed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
