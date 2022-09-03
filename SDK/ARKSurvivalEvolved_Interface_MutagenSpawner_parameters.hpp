#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Interface_MutagenSpawner_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.AdjustableSpawnDelayChanged
struct UInterface_MutagenSpawner_C_AdjustableSpawnDelayChanged_Params
{
};

// Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.itemPickedUp
struct UInterface_MutagenSpawner_C_itemPickedUp_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ByPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.SpawnItem
struct UInterface_MutagenSpawner_C_SpawnItem_Params
{
	class AActor*                                      Manager;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnedItem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
