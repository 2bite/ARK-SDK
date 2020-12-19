#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiGriffin_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiGriffin.BoneModifiersContainer_ChibiGriffin_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiGriffin_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiGriffin.BoneModifiersContainer_ChibiGriffin_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiGriffin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
