#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SecurityCameraHUD_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SecurityCameraHUD.SecurityCameraHUD_C.OnControllerButtonPressed
struct USecurityCameraHUD_C_OnControllerButtonPressed_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FControllerEvent*                           ControllerEvent;                                          // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SecurityCameraHUD.SecurityCameraHUD_C.SetInputControlsRichText
struct USecurityCameraHUD_C_SetInputControlsRichText_Params
{
	bool                                               IsCameraListShowing;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityCameraHUD.SecurityCameraHUD_C.SelectItemAtIndex
struct USecurityCameraHUD_C_SelectItemAtIndex_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityCameraHUD.SecurityCameraHUD_C.Update Camera HUD Info
struct USecurityCameraHUD_C_Update_Camera_HUD_Info_Params
{
};

// Function SecurityCameraHUD.SecurityCameraHUD_C.SwitchToCameraAtIndex
struct USecurityCameraHUD_C_SwitchToCameraAtIndex_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityCameraHUD.SecurityCameraHUD_C.HideListPanel
struct USecurityCameraHUD_C_HideListPanel_Params
{
};

// Function SecurityCameraHUD.SecurityCameraHUD_C.OnKeyUp
struct USecurityCameraHUD_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyboardEvent*                             InKeyboardEvent;                                          // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SecurityCameraHUD.SecurityCameraHUD_C.ShowListPanel
struct USecurityCameraHUD_C_ShowListPanel_Params
{
};

// Function SecurityCameraHUD.SecurityCameraHUD_C.InitFromCamera
struct USecurityCameraHUD_C_InitFromCamera_Params
{
	class ARemoteCamera_Character_BP_C*                FromCamera;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      CameraName;                                               // (Parm, ZeroConstructor)
	struct FVector                                     CameraLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Camera_Index;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityCameraHUD.SecurityCameraHUD_C.DestroyCameraHUDWidget
struct USecurityCameraHUD_C_DestroyCameraHUDWidget_Params
{
};

// Function SecurityCameraHUD.SecurityCameraHUD_C.ResetCameraHUDWidget
struct USecurityCameraHUD_C_ResetCameraHUDWidget_Params
{
};

// Function SecurityCameraHUD.SecurityCameraHUD_C.Tick
struct USecurityCameraHUD_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityCameraHUD.SecurityCameraHUD_C.ExecuteUbergraph_SecurityCameraHUD
struct USecurityCameraHUD_C_ExecuteUbergraph_SecurityCameraHUD_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
