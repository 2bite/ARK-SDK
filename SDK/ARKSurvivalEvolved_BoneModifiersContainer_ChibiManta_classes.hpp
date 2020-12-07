#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiManta_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiManta.BoneModifiersContainer_ChibiManta_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiManta_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiManta.BoneModifiersContainer_ChibiManta_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiManta(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
