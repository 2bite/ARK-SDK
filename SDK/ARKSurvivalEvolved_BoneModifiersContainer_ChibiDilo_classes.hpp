#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiDilo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiDilo.BoneModifiersContainer_ChibiDilo_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiDilo_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiDilo.BoneModifiersContainer_ChibiDilo_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiDilo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif