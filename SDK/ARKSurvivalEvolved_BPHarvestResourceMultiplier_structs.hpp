#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BPHarvestResourceMultiplier.BPHarvestResourceMultiplier
// 0x0010
struct FBPHarvestResourceMultiplier
{
	class UClass*                                      ItemType_13_5FCB3BBE40D81BD655C8F1AF3EAFE518;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeightPerLevelMultiplier_7_CBF4E43549210FC676CD9FBC0CC43571;// 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AddedValuePerLevelMultiplier_11_E472E23E418CB0A0692E6A8508F3BF50;// 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
