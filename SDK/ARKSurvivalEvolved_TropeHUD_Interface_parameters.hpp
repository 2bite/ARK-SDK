#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TropeHUD_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TropeHUD_Interface.TropeHUD_Interface_C.GetHudData
struct UTropeHUD_Interface_C_GetHudData_Params
{
	bool                                               HasSaddle;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent*                   InventoryComponent;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SaddleFuelItem;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FlakCannonAmmoItem;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingSuperFlight;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingSuperFlightBoost;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FuelPercent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CannonCooldownPercent;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedPercent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
