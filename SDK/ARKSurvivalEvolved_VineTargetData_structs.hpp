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

// UserDefinedStruct VineTargetData.VineTargetData
// 0x0018
struct FVineTargetData
{
	class APrimalCharacter*                            Target_2_649596D34CBBCA545167FB9FBC431F3B;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialLocationOffset_5_000E04F54D5A2E1E438C9A84AAC0DDBC; // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrabbedAtVineLength_8_4D11BD904700E951AFC78A8F886594BB;   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
