#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Beetle_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.CraftItem
struct UDinoTamedInventoryComponent_Beetle_C_CraftItem_Params
{
	int                                                ItemToCraftIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPInventoryRefresh
struct UDinoTamedInventoryComponent_Beetle_C_BPInventoryRefresh_Params
{
};

// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPInitializeInventory
struct UDinoTamedInventoryComponent_Beetle_C_BPInitializeInventory_Params
{
};

// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.CheckIfAnythingNewCanBeCrafted
struct UDinoTamedInventoryComponent_Beetle_C_CheckIfAnythingNewCanBeCrafted_Params
{
};

// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.Initial Set Crafting Times
struct UDinoTamedInventoryComponent_Beetle_C_Initial_Set_Crafting_Times_Params
{
};

// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.TryToCraft
struct UDinoTamedInventoryComponent_Beetle_C_TryToCraft_Params
{
};

// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.UnsetAll
struct UDinoTamedInventoryComponent_Beetle_C_UnsetAll_Params
{
};

// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.HasEnoughResources
struct UDinoTamedInventoryComponent_Beetle_C_HasEnoughResources_Params
{
	int                                                IndexClassToCheck;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hasEnough;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfTimesCanCraft;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.RemoveUncraftable
struct UDinoTamedInventoryComponent_Beetle_C_RemoveUncraftable_Params
{
};

// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPNotifyItemAdded
struct UDinoTamedInventoryComponent_Beetle_C_BPNotifyItemAdded_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPNotifyItemRemoved
struct UDinoTamedInventoryComponent_Beetle_C_BPNotifyItemRemoved_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.ExecuteUbergraph_DinoTamedInventoryComponent_Beetle
struct UDinoTamedInventoryComponent_Beetle_C_ExecuteUbergraph_DinoTamedInventoryComponent_Beetle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
