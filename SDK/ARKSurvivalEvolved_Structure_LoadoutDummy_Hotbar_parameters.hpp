#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_LoadoutDummy_Hotbar_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPClientDoMultiUse
struct AStructure_LoadoutDummy_Hotbar_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPGetMultiUseEntries
struct AStructure_LoadoutDummy_Hotbar_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPRefreshedStructureColors
struct AStructure_LoadoutDummy_Hotbar_C_BPRefreshedStructureColors_Params
{
};

// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPAdjustDamage
struct AStructure_LoadoutDummy_Hotbar_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.RefreshNullSlots
struct AStructure_LoadoutDummy_Hotbar_C_RefreshNullSlots_Params
{
};

// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.RemoveAllItems
struct AStructure_LoadoutDummy_Hotbar_C_RemoveAllItems_Params
{
};

// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.BPNotifyInventoryItemChange
struct AStructure_LoadoutDummy_Hotbar_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.RefreshItemIcons
struct AStructure_LoadoutDummy_Hotbar_C_RefreshItemIcons_Params
{
};

// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.UserConstructionScript
struct AStructure_LoadoutDummy_Hotbar_C_UserConstructionScript_Params
{
};

// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.Multi_SetSlotImages
struct AStructure_LoadoutDummy_Hotbar_C_Multi_SetSlotImages_Params
{
};

// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.ReceiveBeginPlay
struct AStructure_LoadoutDummy_Hotbar_C_ReceiveBeginPlay_Params
{
};

// Function Structure_LoadoutDummy_Hotbar.Structure_LoadoutDummy_Hotbar_C.ExecuteUbergraph_Structure_LoadoutDummy_Hotbar
struct AStructure_LoadoutDummy_Hotbar_C_ExecuteUbergraph_Structure_LoadoutDummy_Hotbar_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
