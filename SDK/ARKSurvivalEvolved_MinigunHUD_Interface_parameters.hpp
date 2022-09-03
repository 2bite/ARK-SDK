#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MinigunHUD_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MinigunHUD_Interface.MinigunHUD_Interface_C.GetHudData
struct UMinigunHUD_Interface_C_GetHudData_Params
{
	class UTexture2D*                                  AmmoIcon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentAmmoCount;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoPerClip;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInTurretMode;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HideAmmoCountHUDElement;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AmmoItemTemplate;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
