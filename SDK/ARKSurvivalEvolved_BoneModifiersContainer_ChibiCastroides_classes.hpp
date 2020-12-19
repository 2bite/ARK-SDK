#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiCastroides_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiCastroides.BoneModifiersContainer_ChibiCastroides_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiCastroides_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiCastroides.BoneModifiersContainer_ChibiCastroides_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiCastroides(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
