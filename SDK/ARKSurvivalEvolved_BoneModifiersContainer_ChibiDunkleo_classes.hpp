#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiDunkleo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiDunkleo.BoneModifiersContainer_ChibiDunkleo_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiDunkleo_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiDunkleo.BoneModifiersContainer_ChibiDunkleo_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiDunkleo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif