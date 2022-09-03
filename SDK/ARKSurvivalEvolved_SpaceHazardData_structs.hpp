#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct SpaceHazardData.SpaceHazardData
// 0x0020
struct FSpaceHazardData
{
	struct FName                                       GroupName_29_6A79C9594CB589DB6D2E5AB36AC9789F;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SubLevels_28_4B4CCB274B519918988668ACCFFF96F1;            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SkyboxIndex_32_B671741C4FC35C65136B18965B585778;          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight_35_5B2B292B4945CBFE1D3D388F4D930163;               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
