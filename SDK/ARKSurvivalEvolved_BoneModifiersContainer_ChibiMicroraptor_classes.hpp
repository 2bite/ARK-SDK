#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiMicroraptor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiMicroraptor.BoneModifiersContainer_ChibiMicroraptor_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiMicroraptor_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiMicroraptor.BoneModifiersContainer_ChibiMicroraptor_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiMicroraptor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif