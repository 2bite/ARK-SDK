#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceDolphinHUD_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpaceDolphinHUD_Interface.SpaceDolphinHUD_Interface_C.GetHudData
struct USpaceDolphinHUD_Interface_C_GetHudData_Params
{
	bool                                               HasSaddle;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               isFPV;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HideHUDinFPV;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                LaserLevel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxLaserLevel;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LaserDowngradeTime;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LaserDowngradeTimerRemaining;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLaserDowngradeTimerActive;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             LastLaserLevelChangedTime;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent*                   InventoryComponent;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SaddleFuelItem;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FlakCannonAmmoItem;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingSuperFlight;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingSuperFlightBoost;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FuelPercent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CannonCooldownPercent;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              EchoOrChaffCooldownPercent;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSubmerged;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
