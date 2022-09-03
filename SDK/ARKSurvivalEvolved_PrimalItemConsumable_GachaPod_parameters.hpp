#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_GachaPod_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BPOnItemConsumed
struct UPrimalItemConsumable_GachaPod_C_BPOnItemConsumed_Params
{
	class UPrimalInventoryComponent**                  inventory;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               remainingQuantity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.RollLoot
struct UPrimalItemConsumable_GachaPod_C_RollLoot_Params
{
	class UPrimalInventoryComponent*                   Inv;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.ShowHUDNotification
struct UPrimalItemConsumable_GachaPod_C_ShowHUDNotification_Params
{
	class UPrimalItem*                                 Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Resource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quanity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent*                   Inv;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BPPostInitializeItem
struct UPrimalItemConsumable_GachaPod_C_BPPostInitializeItem_Params
{
	class UWorld**                                     OptionalInitWorld;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BlueprintUsed
struct UPrimalItemConsumable_GachaPod_C_BlueprintUsed_Params
{
};

// Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.ExecuteUbergraph_PrimalItemConsumable_GachaPod
struct UPrimalItemConsumable_GachaPod_C_ExecuteUbergraph_PrimalItemConsumable_GachaPod_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
