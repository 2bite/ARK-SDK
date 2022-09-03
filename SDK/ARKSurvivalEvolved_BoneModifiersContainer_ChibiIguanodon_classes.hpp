#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiIguanodon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiIguanodon.BoneModifiersContainer_ChibiIguanodon_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiIguanodon_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiIguanodon.BoneModifiersContainer_ChibiIguanodon_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiIguanodon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
