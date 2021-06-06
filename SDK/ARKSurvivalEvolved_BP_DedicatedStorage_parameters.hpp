#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_DedicatedStorage_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.IsPlayerControllerValid
struct ABP_DedicatedStorage_C_IsPlayerControllerValid_Params
{
	class APlayerController*                           thePC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.DropAllInventoryOnGround
struct ABP_DedicatedStorage_C_DropAllInventoryOnGround_Params
{
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPOverrideAllowStructureAccess
struct ABP_DedicatedStorage_C_BPOverrideAllowStructureAccess_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsAccessAllowed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForInventoryOnly;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.GetResourceStackSize
struct ABP_DedicatedStorage_C_GetResourceStackSize_Params
{
	int                                                StackSize;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPOnDemolish
struct ABP_DedicatedStorage_C_BPOnDemolish_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.FillInventory
struct ABP_DedicatedStorage_C_FillInventory_Params
{
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BlueprintDrawHUD
struct ABP_DedicatedStorage_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.IsFuel
struct ABP_DedicatedStorage_C_IsFuel_Params
{
	class UPrimalInventoryComponent*                   inventory;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fuel;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.DropRestrictedItems
struct ABP_DedicatedStorage_C_DropRestrictedItems_Params
{
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPUnstasis
struct ABP_DedicatedStorage_C_BPUnstasis_Params
{
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.HandleConsolidate
struct ABP_DedicatedStorage_C_HandleConsolidate_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.HandleWithdraw
struct ABP_DedicatedStorage_C_HandleWithdraw_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.HandleDeposit
struct ABP_DedicatedStorage_C_HandleDeposit_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.OnRep_ResourceCount
struct ABP_DedicatedStorage_C_OnRep_ResourceCount_Params
{
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPNotifyInventoryItemChange
struct ABP_DedicatedStorage_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.OnRep_SelectedResourceClass
struct ABP_DedicatedStorage_C_OnRep_SelectedResourceClass_Params
{
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.ReceiveBeginPlay
struct ABP_DedicatedStorage_C_ReceiveBeginPlay_Params
{
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPTryMultiUse
struct ABP_DedicatedStorage_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPGetMultiUseEntries
struct ABP_DedicatedStorage_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.UserConstructionScript
struct ABP_DedicatedStorage_C_UserConstructionScript_Params
{
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.MultiClearResourceClass
struct ABP_DedicatedStorage_C_MultiClearResourceClass_Params
{
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPDied
struct ABP_DedicatedStorage_C_BPDied_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPOnStructurePickup
struct ABP_DedicatedStorage_C_BPOnStructurePickup_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                NewlyPickedUpItem;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsQuickPickup;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DedicatedStorage.BP_DedicatedStorage_C.ExecuteUbergraph_BP_DedicatedStorage
struct ABP_DedicatedStorage_C_ExecuteUbergraph_BP_DedicatedStorage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
