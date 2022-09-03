#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiEquus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiEquus.BoneModifiersContainer_ChibiEquus_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiEquus_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiEquus.BoneModifiersContainer_ChibiEquus_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiEquus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
