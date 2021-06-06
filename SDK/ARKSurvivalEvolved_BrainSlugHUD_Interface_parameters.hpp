#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BrainSlugHUD_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BrainSlugHUD_Interface.BrainSlugHUD_Interface_C.GetHudData
struct UBrainSlugHUD_Interface_C_GetHudData_Params
{
	class APrimalCharacter*                            TargetChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAllowedToControlTarget;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      TargetValidationString;                                   // (Parm, OutParm, ZeroConstructor)
	class FString                                      InvalidTargetString_PreventHUD;                           // (Parm, OutParm, ZeroConstructor)
	struct FHUDElement                                 HUDElementTemplate;                                       // (Parm, OutParm)
	float                                              BrainJumpTargetCheckDistance;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BrainSlugHUD_Interface.BrainSlugHUD_Interface_C.Sync Crosshair Color
struct UBrainSlugHUD_Interface_C_Sync_Crosshair_Color_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                outColor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
