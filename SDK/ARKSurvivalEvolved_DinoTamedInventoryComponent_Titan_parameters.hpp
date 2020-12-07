#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Titan_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Titan.DinoTamedInventoryComponent_Titan_C.BPRemoteInventoryAllowRemoveItems
struct UDinoTamedInventoryComponent_Titan_C_BPRemoteInventoryAllowRemoveItems_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                anItemToTransfer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Titan.DinoTamedInventoryComponent_Titan_C.BPNotifyItemAdded
struct UDinoTamedInventoryComponent_Titan_C_BPNotifyItemAdded_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Titan.DinoTamedInventoryComponent_Titan_C.BPAllowUseInInventory
struct UDinoTamedInventoryComponent_Titan_C_BPAllowUseInInventory_Params
{
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsRemoteInventory;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ByPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Titan.DinoTamedInventoryComponent_Titan_C.ExecuteUbergraph_DinoTamedInventoryComponent_Titan
struct UDinoTamedInventoryComponent_Titan_C_ExecuteUbergraph_DinoTamedInventoryComponent_Titan_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
