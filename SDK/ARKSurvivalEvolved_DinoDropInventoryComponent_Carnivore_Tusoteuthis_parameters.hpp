#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_Carnivore_Tusoteuthis_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoDropInventoryComponent_Carnivore_Tusoteuthis.DinoDropInventoryComponent_Carnivore_Tusoteuthis_C.BPAllowUseInInventory
struct UDinoDropInventoryComponent_Carnivore_Tusoteuthis_C_BPAllowUseInInventory_Params
{
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsRemoteInventory;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ByPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoDropInventoryComponent_Carnivore_Tusoteuthis.DinoDropInventoryComponent_Carnivore_Tusoteuthis_C.BPRemoteInventoryAllowRemoveItems
struct UDinoDropInventoryComponent_Carnivore_Tusoteuthis_C_BPRemoteInventoryAllowRemoveItems_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                anItemToTransfer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoDropInventoryComponent_Carnivore_Tusoteuthis.DinoDropInventoryComponent_Carnivore_Tusoteuthis_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Tusoteuthis
struct UDinoDropInventoryComponent_Carnivore_Tusoteuthis_C_ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Tusoteuthis_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
