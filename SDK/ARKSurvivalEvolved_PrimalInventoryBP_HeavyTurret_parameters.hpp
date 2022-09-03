#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_HeavyTurret_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_HeavyTurret.PrimalInventoryBP_HeavyTurret_C.BPCustomRemoteInventoryAllowAddItems
struct UPrimalInventoryBP_HeavyTurret_C_BPCustomRemoteInventoryAllowAddItems_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               anItemQuantityOverride;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRequestedByPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryBP_HeavyTurret.PrimalInventoryBP_HeavyTurret_C.ExecuteUbergraph_PrimalInventoryBP_HeavyTurret
struct UPrimalInventoryBP_HeavyTurret_C_ExecuteUbergraph_PrimalInventoryBP_HeavyTurret_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
