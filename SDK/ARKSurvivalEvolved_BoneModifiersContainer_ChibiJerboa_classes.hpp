#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiJerboa_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiJerboa.BoneModifiersContainer_ChibiJerboa_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiJerboa_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiJerboa.BoneModifiersContainer_ChibiJerboa_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiJerboa(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
