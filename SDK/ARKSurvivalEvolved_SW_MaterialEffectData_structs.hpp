#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct SW_MaterialEffectData.SW_MaterialEffectData
// 0x001C
struct FSW_MaterialEffectData
{
	struct FName                                       NotifyName_18_B540047F431340276909B08E18FF4CE2;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName_17_DC38C3EB4C7416578C83C6B936E50232;        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitValue_8_ABA5CCF64494AFB454FECB8B5428431F;             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalValue_11_BF3C30144B7BB722DC78FD81D3C74452;           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ModFrequency_22_B2B8434A43AB23D89D0A34A37689C281;         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
