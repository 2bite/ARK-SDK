#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TurretTek_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TurretTek.PrimalInventoryBP_TurretTek_C.BPCustomRemoteInventoryAllowAddItems
struct UPrimalInventoryBP_TurretTek_C_BPCustomRemoteInventoryAllowAddItems_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               anItemQuantityOverride;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRequestedByPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryBP_TurretTek.PrimalInventoryBP_TurretTek_C.ExecuteUbergraph_PrimalInventoryBP_TurretTek
struct UPrimalInventoryBP_TurretTek_C_ExecuteUbergraph_PrimalInventoryBP_TurretTek_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
