#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExosuitHUD_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ExosuitHUD_Interface.ExosuitHUD_Interface_C.GetHudData
struct UExosuitHUD_Interface_C_GetHudData_Params
{
	bool                                               bUsesChestBeam;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanUseChestBeam;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ChestBeamEnergyPercent;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ChestBeamState;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent*                   InventoryComponent;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FuelItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              EnergyPercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPreparingJump;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
