#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_Corrupted_Huge_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoDropInventoryComponent_Corrupted_Huge.DinoDropInventoryComponent_Corrupted_Huge_C.BPAllowUseInInventory
struct UDinoDropInventoryComponent_Corrupted_Huge_C_BPAllowUseInInventory_Params
{
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsRemoteInventory;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ByPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoDropInventoryComponent_Corrupted_Huge.DinoDropInventoryComponent_Corrupted_Huge_C.BPRemoteInventoryAllowRemoveItems
struct UDinoDropInventoryComponent_Corrupted_Huge_C_BPRemoteInventoryAllowRemoveItems_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                anItemToTransfer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoDropInventoryComponent_Corrupted_Huge.DinoDropInventoryComponent_Corrupted_Huge_C.ExecuteUbergraph_DinoDropInventoryComponent_Corrupted_Huge
struct UDinoDropInventoryComponent_Corrupted_Huge_C_ExecuteUbergraph_DinoDropInventoryComponent_Corrupted_Huge_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
