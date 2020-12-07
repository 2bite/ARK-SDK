#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"
#include "ARKSurvivalEvolved_CoreUObject_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct NodeNeighbor.NodeNeighbor
// 0x0020
struct FNodeNeighbor
{
	struct FVector                                     Location_2_5451CF7641BA6AEBE09C868190237AEA;              // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBlocked_4_CA0F7F1C445FEC30EF3A2ABAC8D5D144;            // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                SpawnPointIndex_8_915A9E324E1DA4C362F6C0A81AA8ECA6;       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockedLeft_10_E3B22AC84E9DC73ACA6B7C87E6FE107E;         // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockedRight_12_9A761FD947C910A3586AED8136C0D55B;        // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	class AActor*                                      SpawnPoint_16_2C90B91F45ABD72459CE44B2521694E2;           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
