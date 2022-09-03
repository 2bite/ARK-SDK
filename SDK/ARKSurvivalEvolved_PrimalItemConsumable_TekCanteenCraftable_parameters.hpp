#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_TekCanteenCraftable_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.IsCustomContextMenuItemEnabled
struct UPrimalItemConsumable_TekCanteenCraftable_C_IsCustomContextMenuItemEnabled_Params
{
	struct FName                                       ContextItem;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPGetCustomInventoryWidgetTextColor
struct UPrimalItemConsumable_TekCanteenCraftable_C_BPGetCustomInventoryWidgetTextColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.HasEnoughPowerForUse
struct UPrimalItemConsumable_TekCanteenCraftable_C_HasEnoughPowerForUse_Params
{
	bool                                               bHasEnoughPower;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.ApplyUnpoweredBuffs
struct UPrimalItemConsumable_TekCanteenCraftable_C_ApplyUnpoweredBuffs_Params
{
};

// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.TryClearBuffs
struct UPrimalItemConsumable_TekCanteenCraftable_C_TryClearBuffs_Params
{
};

// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.GetCurrentWaterMode
struct UPrimalItemConsumable_TekCanteenCraftable_C_GetCurrentWaterMode_Params
{
	struct FName                                       WaterMode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPGetCustomInventoryWidgetText
struct UPrimalItemConsumable_TekCanteenCraftable_C_BPGetCustomInventoryWidgetText_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SetWaterMode
struct UPrimalItemConsumable_TekCanteenCraftable_C_SetWaterMode_Params
{
	struct FName                                       NewWaterMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SelectedCustomContextMenuItem
struct UPrimalItemConsumable_TekCanteenCraftable_C_SelectedCustomContextMenuItem_Params
{
	struct FName                                       ContextItem;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.TryConsumeWithPower
struct UPrimalItemConsumable_TekCanteenCraftable_C_TryConsumeWithPower_Params
{
};

// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BlueprintUsed
struct UPrimalItemConsumable_TekCanteenCraftable_C_BlueprintUsed_Params
{
};

// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SetShardDescription
struct UPrimalItemConsumable_TekCanteenCraftable_C_SetShardDescription_Params
{
};

// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.GetElementShardValue
struct UPrimalItemConsumable_TekCanteenCraftable_C_GetElementShardValue_Params
{
	bool                                               HasData;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPPostInitializeItem
struct UPrimalItemConsumable_TekCanteenCraftable_C_BPPostInitializeItem_Params
{
	class UWorld**                                     OptionalInitWorld;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.ExecuteUbergraph_PrimalItemConsumable_TekCanteenCraftable
struct UPrimalItemConsumable_TekCanteenCraftable_C_ExecuteUbergraph_PrimalItemConsumable_TekCanteenCraftable_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
