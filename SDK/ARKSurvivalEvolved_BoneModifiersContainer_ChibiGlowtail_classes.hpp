#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiGlowtail_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiGlowtail.BoneModifiersContainer_ChibiGlowtail_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiGlowtail_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiGlowtail.BoneModifiersContainer_ChibiGlowtail_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiGlowtail(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
