#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_CrystalWyvern_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_CrystalWyvern.DinoTamedInventoryComponent_CrystalWyvern_C.OverrideUseItem
struct UDinoTamedInventoryComponent_CrystalWyvern_C_OverrideUseItem_Params
{
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_CrystalWyvern.DinoTamedInventoryComponent_CrystalWyvern_C.BPAllowUseInInventory
struct UDinoTamedInventoryComponent_CrystalWyvern_C_BPAllowUseInInventory_Params
{
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsRemoteInventory;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ByPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_CrystalWyvern.DinoTamedInventoryComponent_CrystalWyvern_C.ExecuteUbergraph_DinoTamedInventoryComponent_CrystalWyvern
struct UDinoTamedInventoryComponent_CrystalWyvern_C_ExecuteUbergraph_DinoTamedInventoryComponent_CrystalWyvern_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
