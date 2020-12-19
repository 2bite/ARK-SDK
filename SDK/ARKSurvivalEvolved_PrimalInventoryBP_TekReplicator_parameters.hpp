#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TekReplicator_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.BPCraftingFinishedNotification
struct UPrimalInventoryBP_TekReplicator_C_BPCraftingFinishedNotification_Params
{
	class UPrimalItem**                                itemToBeCrafted;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.BPRemoteInventoryAllowViewing
struct UPrimalInventoryBP_TekReplicator_C_BPRemoteInventoryAllowViewing_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.ExecuteUbergraph_PrimalInventoryBP_TekReplicator
struct UPrimalInventoryBP_TekReplicator_C_ExecuteUbergraph_PrimalInventoryBP_TekReplicator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
