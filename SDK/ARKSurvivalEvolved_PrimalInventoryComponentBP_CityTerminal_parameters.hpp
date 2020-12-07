#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryComponentBP_CityTerminal_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalInventoryComponentBP_CityTerminal.PrimalInventoryComponentBP_CityTerminal_C.BPIsCraftingAllowed
struct UPrimalInventoryComponentBP_CityTerminal_C_BPIsCraftingAllowed_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryComponentBP_CityTerminal.PrimalInventoryComponentBP_CityTerminal_C.BPRemoteInventoryAllowCrafting
struct UPrimalInventoryComponentBP_CityTerminal_C_BPRemoteInventoryAllowCrafting_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryComponentBP_CityTerminal.PrimalInventoryComponentBP_CityTerminal_C.BPIsValidCraftingResource
struct UPrimalInventoryComponentBP_CityTerminal_C_BPIsValidCraftingResource_Params
{
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryComponentBP_CityTerminal.PrimalInventoryComponentBP_CityTerminal_C.ExecuteUbergraph_PrimalInventoryComponentBP_CityTerminal
struct UPrimalInventoryComponentBP_CityTerminal_C_ExecuteUbergraph_PrimalInventoryComponentBP_CityTerminal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
