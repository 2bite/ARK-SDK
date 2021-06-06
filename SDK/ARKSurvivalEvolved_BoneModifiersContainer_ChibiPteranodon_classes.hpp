#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiPteranodon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiPteranodon.BoneModifiersContainer_ChibiPteranodon_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiPteranodon_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiPteranodon.BoneModifiersContainer_ChibiPteranodon_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiPteranodon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
