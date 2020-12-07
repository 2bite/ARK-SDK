#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_BeeHive_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.BPInventoryRefresh
struct UPrimalInventoryBP_BeeHive_C_BPInventoryRefresh_Params
{
};

// Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.TryToConsumeFlowers
struct UPrimalInventoryBP_BeeHive_C_TryToConsumeFlowers_Params
{
	int                                                NumToConsume;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumFailedToConsume;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumActuallyConsumed;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.BPAccessedInventory
struct UPrimalInventoryBP_BeeHive_C_BPAccessedInventory_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.ExecuteUbergraph_PrimalInventoryBP_BeeHive
struct UPrimalInventoryBP_BeeHive_C_ExecuteUbergraph_PrimalInventoryBP_BeeHive_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
