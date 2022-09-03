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

// UserDefinedStruct GiantTurtle_Crop_Struct.GiantTurtle_Crop_Struct
// 0x002C
struct FGiantTurtle_Crop_Struct
{
	unsigned char                                      CurrentCropPhase_11_D4A687494C0F476E485D498CAE10DFAC;     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UPrimalItemConsumableSeed_C*                 SeedItem_36_4F69BC5A46851C697E65AA81C01CD60D;             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFertilizerCache_34_46D423814653B40DC915828CB2ECD7E0;// 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      SeedItemClass_45_7CB3DB8949C6DD44EA9E2ABA7CB04AD2;        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AmountOfFruit_48_984F84974133D4439B04DE886368D2E9;        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CropFruitFertilizerCache_51_AAD5EB4D4A251E18A67682A62DFAF98E;// 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LocationIndex_54_3BDB86CF45FEC7FE8D9D58AEAA3A505B;        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
