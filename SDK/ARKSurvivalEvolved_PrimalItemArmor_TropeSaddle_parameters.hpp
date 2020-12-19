#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TropeSaddle_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TropeSaddle.PrimalItemArmor_TropeSaddle_C.BPAllowRemoteRemoveFromInventory
struct UPrimalItemArmor_TropeSaddle_C_BPAllowRemoteRemoveFromInventory_Params
{
	class UPrimalInventoryComponent**                  invComp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ByPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRequestedByPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemArmor_TropeSaddle.PrimalItemArmor_TropeSaddle_C.GetInventoryIconDisplayText
struct UPrimalItemArmor_TropeSaddle_C_GetInventoryIconDisplayText_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemArmor_TropeSaddle.PrimalItemArmor_TropeSaddle_C.ExecuteUbergraph_PrimalItemArmor_TropeSaddle
struct UPrimalItemArmor_TropeSaddle_C_ExecuteUbergraph_PrimalItemArmor_TropeSaddle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
