#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Sinomacrops_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Sinomacrops.DinoTamedInventoryComponent_Sinomacrops_C.OverrideUseItem
struct UDinoTamedInventoryComponent_Sinomacrops_C_OverrideUseItem_Params
{
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Sinomacrops.DinoTamedInventoryComponent_Sinomacrops_C.BPAllowUseInInventory
struct UDinoTamedInventoryComponent_Sinomacrops_C_BPAllowUseInInventory_Params
{
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsRemoteInventory;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ByPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Sinomacrops.DinoTamedInventoryComponent_Sinomacrops_C.ExecuteUbergraph_DinoTamedInventoryComponent_Sinomacrops
struct UDinoTamedInventoryComponent_Sinomacrops_C_ExecuteUbergraph_DinoTamedInventoryComponent_Sinomacrops_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
