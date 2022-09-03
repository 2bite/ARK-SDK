#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_LoadoutDummyHotbar_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_LoadoutDummyHotbar.PrimalInventoryBP_LoadoutDummyHotbar_C.BPRemoteInventoryAllowRemoveItems
struct UPrimalInventoryBP_LoadoutDummyHotbar_C_BPRemoteInventoryAllowRemoveItems_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                anItemToTransfer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryBP_LoadoutDummyHotbar.PrimalInventoryBP_LoadoutDummyHotbar_C.BPAllowAddInventoryItem
struct UPrimalInventoryBP_LoadoutDummyHotbar_C_BPAllowAddInventoryItem_Params
{
	class UPrimalItem**                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               RequestedQuantity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOnlyAddAll;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryBP_LoadoutDummyHotbar.PrimalInventoryBP_LoadoutDummyHotbar_C.ExecuteUbergraph_PrimalInventoryBP_LoadoutDummyHotbar
struct UPrimalInventoryBP_LoadoutDummyHotbar_C_ExecuteUbergraph_PrimalInventoryBP_LoadoutDummyHotbar_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
