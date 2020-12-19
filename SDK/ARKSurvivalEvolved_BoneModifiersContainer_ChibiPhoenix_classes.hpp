#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiPhoenix_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiPhoenix.BoneModifiersContainer_ChibiPhoenix_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiPhoenix_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiPhoenix.BoneModifiersContainer_ChibiPhoenix_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiPhoenix(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
