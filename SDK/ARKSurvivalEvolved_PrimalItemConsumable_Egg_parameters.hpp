#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C.BPAllowRemoteAddToInventory
struct UPrimalItemConsumable_Egg_C_BPAllowRemoteAddToInventory_Params
{
	class UPrimalInventoryComponent**                  invComp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ByPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRequestedByPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C.BPGetCustomInventoryWidgetText
struct UPrimalItemConsumable_Egg_C_BPGetCustomInventoryWidgetText_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C.ExecuteUbergraph_PrimalItemConsumable_Egg
struct UPrimalItemConsumable_Egg_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
