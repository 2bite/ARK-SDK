#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer.BoneModifiersContainer_C
// 0x0010 (0x0038 - 0x0028)
class UBoneModifiersContainer_C : public UObject
{
public:
	TArray<struct FBoneModifierNamed>                  BoneModifiers;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer.BoneModifiersContainer_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
