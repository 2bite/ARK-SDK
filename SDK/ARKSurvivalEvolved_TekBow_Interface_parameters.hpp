#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekBow_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TekBow_Interface.TekBow_Interface_C.GetAmmoMultiuseEntries
struct UTekBow_Interface_C_GetAmmoMultiuseEntries_Params
{
	TArray<struct FMultiUseEntry>                      AmmoWheelEntries;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function TekBow_Interface.TekBow_Interface_C.GetHudData
struct UTekBow_Interface_C_GetHudData_Params
{
	class FString                                      AmmoName;                                                 // (Parm, OutParm, ZeroConstructor)
	class UTexture2D*                                  AmmoIcon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentAmmoCount;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentAmmoCost;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoPerClip;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoTypeIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CurrentAmmoTypeColor;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAccessoryActive;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
