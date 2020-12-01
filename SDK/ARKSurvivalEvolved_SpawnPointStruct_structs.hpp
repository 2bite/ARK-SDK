#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"
#include "ARKSurvivalEvolved_NodeNeighbor_classes.hpp"
#include "ARKSurvivalEvolved_CoreUObject_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct SpawnPointStruct.SpawnPointStruct
// 0x0040
struct FSpawnPointStruct
{
	int                                                Index_10_0C60E77A4F989E291DA246AC39666304;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NodeLevel_2_698AF0884D92A2C3728A25B991B7A9B2;             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NodeLocation_5_F611C18843A6CB16C8623391221FFFAC;          // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvalidWaypoint_29_7AE7A59A487B32C2377CE88C579C5085;     // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	TArray<struct FNodeNeighbor>                       SiblingNodes_28_97835EF54F97E494D5EA568ED25924EC;         // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FNodeNeighbor>                       ChildrenNodes_27_587068F943796D1BEBC387885BB30543;        // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class ASpawnPointActor_C*                          SpawnPointActor_37_B5B199B046674279CEB9D68A2E90CCDB;      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
