#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"
#include "ARKSurvivalEvolved_ShooterGame_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct FlockBehaviorData.FlockBehaviorData
// 0x0068
struct FFlockBehaviorData
{
	struct FBoidBehavior                               Behavior_2_D6384EC4432A092BAA1F368BC22CCFBA;              // 0x0000(0x0040) (Edit, BlueprintVisible)
	float                                              ServerRadius_5_8960461D4A9B615DDD4B5FA4CF38DFBF;          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadialDamage_9_4C6B4EA04A83900D96B5D593FF1433B4;          // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RadialDamageType_12_A31156904638A105CDE143A20772A2B4;     // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed_15_BEAB83254AE3E96568671BAE87A9B6C1;                // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FDamageTypeAdjuster>                 DamageAdjusters_26_DEF381C3447E4F5919917891550268FD;      // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
