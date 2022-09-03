#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_LoadoutDummy_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPServerHandleNetExecCommand
struct AStructure_LoadoutDummy_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.UpdateInventorySize
struct AStructure_LoadoutDummy_C_UpdateInventorySize_Params
{
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.GetCurrentlyUsedHotbarSlots
struct AStructure_LoadoutDummy_C_GetCurrentlyUsedHotbarSlots_Params
{
	int                                                OutUsedSlots;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.OnRep_CurrentMaxInventoryItems
struct AStructure_LoadoutDummy_C_OnRep_CurrentMaxInventoryItems_Params
{
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddItemSafe
struct AStructure_LoadoutDummy_C_AddItemSafe_Params
{
	class UPrimalItem*                                 Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent*                   toInventory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent*                   FromInventory;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDontStack;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent*                   AnotherFallbackInventory;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 InsertAfterItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 OutItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddedToTarget;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddAndEquipItem
struct AStructure_LoadoutDummy_C_AddAndEquipItem_Params
{
	class UPrimalItem*                                 Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent*                   toInventory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent*                   FromInventory;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddToOverflowDroppedInventory
struct AStructure_LoadoutDummy_C_AddToOverflowDroppedInventory_Params
{
	class UPrimalItem*                                 anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 newItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPNotifyInventoryItemChange
struct AStructure_LoadoutDummy_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.IsControllerValid
struct AStructure_LoadoutDummy_C_IsControllerValid_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetHotbarCurrentHealth
struct AStructure_LoadoutDummy_C_SetHotbarCurrentHealth_Params
{
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveDestroyed
struct AStructure_LoadoutDummy_C_ReceiveDestroyed_Params
{
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPPlacedStructure
struct AStructure_LoadoutDummy_C_BPPlacedStructure_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPClientDoMultiUse
struct AStructure_LoadoutDummy_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPOnDemolish
struct AStructure_LoadoutDummy_C_BPOnDemolish_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetTextRendererColor
struct AStructure_LoadoutDummy_C_SetTextRendererColor_Params
{
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.OnRep_HotbarID
struct AStructure_LoadoutDummy_C_OnRep_HotbarID_Params
{
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.CreateHotbarStructure
struct AStructure_LoadoutDummy_C_CreateHotbarStructure_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Everything
struct AStructure_LoadoutDummy_C_Fill_Dummy_Everything_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Everything
struct AStructure_LoadoutDummy_C_Fill_Character_Everything_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Inventory
struct AStructure_LoadoutDummy_C_Fill_Dummy_Inventory_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Inventory
struct AStructure_LoadoutDummy_C_Fill_Character_Inventory_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap Everything
struct AStructure_LoadoutDummy_C_Swap_Everything_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Inventory
struct AStructure_LoadoutDummy_C_Swap_All_Inventory_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludingHotbar;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Hotbar
struct AStructure_LoadoutDummy_C_Swap_All_Hotbar_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         CachedCharacterItems;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Hotbar
struct AStructure_LoadoutDummy_C_Fill_Dummy_Hotbar_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Hotbar
struct AStructure_LoadoutDummy_C_Fill_Character_Hotbar_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Equipment
struct AStructure_LoadoutDummy_C_Fill_Dummy_Equipment_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Equipment
struct AStructure_LoadoutDummy_C_Fill_Character_Equipment_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SwapAllEquipment
struct AStructure_LoadoutDummy_C_SwapAllEquipment_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPTryMultiUse
struct AStructure_LoadoutDummy_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPGetMultiUseEntries
struct AStructure_LoadoutDummy_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.UserConstructionScript
struct AStructure_LoadoutDummy_C_UserConstructionScript_Params
{
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveEndPlay
struct AStructure_LoadoutDummy_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveBeginPlay
struct AStructure_LoadoutDummy_C_ReceiveBeginPlay_Params
{
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ExecuteUbergraph_Structure_LoadoutDummy
struct AStructure_LoadoutDummy_C_ExecuteUbergraph_Structure_LoadoutDummy_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
