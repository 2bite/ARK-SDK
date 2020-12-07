#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiSarco_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiSarco.BoneModifiersContainer_ChibiSarco_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiSarco_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiSarco.BoneModifiersContainer_ChibiSarco_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiSarco(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
