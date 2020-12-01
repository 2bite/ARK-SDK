#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_DungeonEntrance_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C.BPCrafted
struct UPrimalItem_DungeonEntrance_Base_C_BPCrafted_Params
{
};

// Function PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C.BPAllowCrafting
struct UPrimalItem_DungeonEntrance_Base_C_BPAllowCrafting_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C.ExecuteUbergraph_PrimalItem_DungeonEntrance_Base
struct UPrimalItem_DungeonEntrance_Base_C_ExecuteUbergraph_PrimalItem_DungeonEntrance_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
