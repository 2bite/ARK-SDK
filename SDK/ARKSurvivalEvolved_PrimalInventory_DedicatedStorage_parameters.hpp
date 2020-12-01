#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventory_DedicatedStorage_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPGetExtraItemDisplay
struct UPrimalInventory_DedicatedStorage_C_BPGetExtraItemDisplay_Params
{
	bool                                               bShowExtraItem;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      Description;                                              // (Parm, OutParm, ZeroConstructor)
	class FString                                      CustomString;                                             // (Parm, OutParm, ZeroConstructor)
	class UTexture2D*                                  EntryIcon;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          EntryMaterial;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPAllowAddInventoryItem
struct UPrimalInventory_DedicatedStorage_C_BPAllowAddInventoryItem_Params
{
	class UPrimalItem**                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               RequestedQuantity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOnlyAddAll;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.BPRemoteInventoryGetMaxVisibleSlots
struct UPrimalInventory_DedicatedStorage_C_BPRemoteInventoryGetMaxVisibleSlots_Params
{
	int*                                               NumItems;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsLocal;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C.ExecuteUbergraph_PrimalInventory_DedicatedStorage
struct UPrimalInventory_DedicatedStorage_C_ExecuteUbergraph_PrimalInventory_DedicatedStorage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
