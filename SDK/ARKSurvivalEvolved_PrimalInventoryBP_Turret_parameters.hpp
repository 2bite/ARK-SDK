#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Turret_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_Turret.PrimalInventoryBP_Turret_C.BPCustomRemoteInventoryAllowAddItems
struct UPrimalInventoryBP_Turret_C_BPCustomRemoteInventoryAllowAddItems_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               anItemQuantityOverride;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRequestedByPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryBP_Turret.PrimalInventoryBP_Turret_C.ExecuteUbergraph_PrimalInventoryBP_Turret
struct UPrimalInventoryBP_Turret_C_ExecuteUbergraph_PrimalInventoryBP_Turret_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
