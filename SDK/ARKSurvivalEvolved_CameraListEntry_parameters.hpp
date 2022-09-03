#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CameraListEntry_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CameraListEntry.CameraListEntry_C.SetSelected
struct UCameraListEntry_C_SetSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraListEntry.CameraListEntry_C.InitForCamera
struct UCameraListEntry_C_InitForCamera_Params
{
	class USecurityCameraHUD_C*                        OwningHUD;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      CameraName;                                               // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraListEntry.CameraListEntry_C.BndEvt__Button_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature
struct UCameraListEntry_C_BndEvt__Button_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CameraListEntry.CameraListEntry_C.ExecuteUbergraph_CameraListEntry
struct UCameraListEntry_C_ExecuteUbergraph_CameraListEntry_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
