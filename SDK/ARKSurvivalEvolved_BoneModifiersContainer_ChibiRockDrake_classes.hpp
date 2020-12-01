#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiRockDrake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiRockDrake.BoneModifiersContainer_ChibiRockDrake_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiRockDrake_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiRockDrake.BoneModifiersContainer_ChibiRockDrake_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiRockDrake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
