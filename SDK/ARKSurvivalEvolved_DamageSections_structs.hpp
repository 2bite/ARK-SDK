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

// UserDefinedStruct DamageSections.DamageSections
// 0x0020
struct FDamageSections
{
	struct FName                                       RootBone_10_FC6CA66A4D9AFAC4EA531C889B0F6014;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitPoints_5_F9FFB009443116F3407382BB98FD9AAC;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EffectSocket_8_96D0BFD5499F62A52793E180725B178F;          // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AlternateLeft_13_829E8FAD401DCD3005A301AE32339669;        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AlternateRight_16_BB63A7B64DE8F59D575B84BDE809245F;       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeBeforeHardening_19_ED27B4F947C31765AC144D9EC4E8979C;  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
