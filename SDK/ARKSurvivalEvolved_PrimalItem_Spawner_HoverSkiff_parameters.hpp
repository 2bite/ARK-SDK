#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Spawner_HoverSkiff_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.BPAllowCrafting
struct UPrimalItem_Spawner_HoverSkiff_C_BPAllowCrafting_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.GetValidSpawnTransform
struct UPrimalItem_Spawner_HoverSkiff_C_GetValidSpawnTransform_Params
{
	struct UObject_FTransform                          SpawnTransform;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               SpawnValid;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.BPCrafted
struct UPrimalItem_Spawner_HoverSkiff_C_BPCrafted_Params
{
};

// Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.SpawnCraftedSkiff
struct UPrimalItem_Spawner_HoverSkiff_C_SpawnCraftedSkiff_Params
{
};

// Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff
struct UPrimalItem_Spawner_HoverSkiff_C_ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
