#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_EggIncubator_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPCustomRemoteInventoryAllowAddItems
struct UPrimalInventoryBP_EggIncubator_C_BPCustomRemoteInventoryAllowAddItems_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               anItemQuantityOverride;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRequestedByPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPCustomRemoteInventoryAllowRemoveItems
struct UPrimalInventoryBP_EggIncubator_C_BPCustomRemoteInventoryAllowRemoveItems_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                anItemToTransfer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               RequestedQuantity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRequestedByPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRequestDropping;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.InventoryCustomSortPredicate
struct UPrimalInventoryBP_EggIncubator_C_InventoryCustomSortPredicate_Params
{
	class UPrimalItem**                                LeftItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                RightItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPRemoteInventoryAllowRemoveItems
struct UPrimalInventoryBP_EggIncubator_C_BPRemoteInventoryAllowRemoveItems_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                anItemToTransfer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPNotifyItemRemoved
struct UPrimalInventoryBP_EggIncubator_C_BPNotifyItemRemoved_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPNotifyItemAdded
struct UPrimalInventoryBP_EggIncubator_C_BPNotifyItemAdded_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.ExecuteUbergraph_PrimalInventoryBP_EggIncubator
struct UPrimalInventoryBP_EggIncubator_C_ExecuteUbergraph_PrimalInventoryBP_EggIncubator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.OnFertilizedEggRemoved__DelegateSignature
struct UPrimalInventoryBP_EggIncubator_C_OnFertilizedEggRemoved__DelegateSignature_Params
{
	class UPrimalItemConsumable_Egg_C*                 EggItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.OnFertilizedEggAdded__DelegateSignature
struct UPrimalInventoryBP_EggIncubator_C_OnFertilizedEggAdded__DelegateSignature_Params
{
	class UPrimalItemConsumable_Egg_C*                 EggItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
