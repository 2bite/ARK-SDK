#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StriderVision_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_StriderVision.Buff_StriderVision_C.GetHudData
struct ABuff_StriderVision_C_GetHudData_Params
{
	struct FVector                                     PingWorldLocation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ProgressBarValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BaseColor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RingScale;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Visibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderVision.Buff_StriderVision_C.stop highlighting target
struct ABuff_StriderVision_C_stop_highlighting_target_Params
{
	class APrimalCharacter*                            InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderVision.Buff_StriderVision_C.set all target bounds to 1
struct ABuff_StriderVision_C_set_all_target_bounds_to_1_Params
{
};

// Function Buff_StriderVision.Buff_StriderVision_C.update viewed targets
struct ABuff_StriderVision_C_update_viewed_targets_Params
{
	bool                                               Deactivate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderVision.Buff_StriderVision_C.Keep Visible
struct ABuff_StriderVision_C_Keep_Visible_Params
{
};

// Function Buff_StriderVision.Buff_StriderVision_C.HideBuffFromHUD
struct ABuff_StriderVision_C_HideBuffFromHUD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_StriderVision.Buff_StriderVision_C.Setup HUDWidget
struct ABuff_StriderVision_C_Setup_HUDWidget_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderVision.Buff_StriderVision_C.DestroyHUDWidget
struct ABuff_StriderVision_C_DestroyHUDWidget_Params
{
	bool                                               Bypass;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderVision.Buff_StriderVision_C.Flash Target
struct ABuff_StriderVision_C_Flash_Target_Params
{
};

// Function Buff_StriderVision.Buff_StriderVision_C.Highlight latest shared target
struct ABuff_StriderVision_C_Highlight_latest_shared_target_Params
{
};

// Function Buff_StriderVision.Buff_StriderVision_C.Keep Shared Targets Active
struct ABuff_StriderVision_C_Keep_Shared_Targets_Active_Params
{
};

// Function Buff_StriderVision.Buff_StriderVision_C.BPActivated
struct ABuff_StriderVision_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderVision.Buff_StriderVision_C.Set All Components Render Custom Depth
struct ABuff_StriderVision_C_Set_All_Components_Render_Custom_Depth_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               render_custom_depth;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderVision.Buff_StriderVision_C.Set All Components Custom Depth Stencil Value
struct ABuff_StriderVision_C_Set_All_Components_Custom_Depth_Stencil_Value_Params
{
	int                                                stencil_Value;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderVision.Buff_StriderVision_C.BuffTickClient
struct ABuff_StriderVision_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderVision.Buff_StriderVision_C.BuffTickServer
struct ABuff_StriderVision_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderVision.Buff_StriderVision_C.ReceiveBeginPlay
struct ABuff_StriderVision_C_ReceiveBeginPlay_Params
{
};

// Function Buff_StriderVision.Buff_StriderVision_C.BPDeactivated
struct ABuff_StriderVision_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderVision.Buff_StriderVision_C.UserConstructionScript
struct ABuff_StriderVision_C_UserConstructionScript_Params
{
};

// Function Buff_StriderVision.Buff_StriderVision_C.ClearHUDReference
struct ABuff_StriderVision_C_ClearHUDReference_Params
{
};

// Function Buff_StriderVision.Buff_StriderVision_C.ExecuteUbergraph_Buff_StriderVision
struct ABuff_StriderVision_C_ExecuteUbergraph_Buff_StriderVision_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
