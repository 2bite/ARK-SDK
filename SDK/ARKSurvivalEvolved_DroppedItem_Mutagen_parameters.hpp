#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItem_Mutagen_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.SpawnItem
struct ADroppedItem_Mutagen_C_SpawnItem_Params
{
	class AActor*                                      Manager;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnedItem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.UnlockExplorerNote
struct ADroppedItem_Mutagen_C_UnlockExplorerNote_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPTryMultiUse
struct ADroppedItem_Mutagen_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPGetMultiUseEntries
struct ADroppedItem_Mutagen_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPOnItemPickedUp
struct ADroppedItem_Mutagen_C_BPOnItemPickedUp_Params
{
	class APlayerController**                          ByPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                InventoryItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ReceiveBeginPlay
struct ADroppedItem_Mutagen_C_ReceiveBeginPlay_Params
{
};

// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ReceiveDestroyed
struct ADroppedItem_Mutagen_C_ReceiveDestroyed_Params
{
};

// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.UserConstructionScript
struct ADroppedItem_Mutagen_C_UserConstructionScript_Params
{
};

// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.itemPickedUp
struct ADroppedItem_Mutagen_C_itemPickedUp_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ByPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.AdjustableSpawnDelayChanged
struct ADroppedItem_Mutagen_C_AdjustableSpawnDelayChanged_Params
{
};

// Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ExecuteUbergraph_DroppedItem_Mutagen
struct ADroppedItem_Mutagen_C_ExecuteUbergraph_DroppedItem_Mutagen_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
