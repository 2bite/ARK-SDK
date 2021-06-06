#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_FKaijuMaybeSpawnTreesAndWyverns_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.SpawnBuffingTree
struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_SpawnBuffingTree_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnBuffingTrees
struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_ShouldSpawnBuffingTrees_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.MaybeSpawn Tree on Enemy
struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_MaybeSpawn_Tree_on_Enemy_Params
{
};

// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.SpawnWyvern
struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_SpawnWyvern_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnWyverns
struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_ShouldSpawnWyverns_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnPoisonTrees
struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_ShouldSpawnPoisonTrees_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ReceiveTick
struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ReceiveActivation
struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ExecuteUbergraph_Service_FKaijuMaybeSpawnTreesAndWyverns
struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_ExecuteUbergraph_Service_FKaijuMaybeSpawnTreesAndWyverns_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
