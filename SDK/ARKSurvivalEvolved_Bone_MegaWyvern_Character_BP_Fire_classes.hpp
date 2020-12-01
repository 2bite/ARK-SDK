#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bone_MegaWyvern_Character_BP_Fire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bone_MegaWyvern_Character_BP_Fire.Bone_MegaWyvern_Character_BP_Fire_C
// 0x0008 (0x21D0 - 0x21C8)
class ABone_MegaWyvern_Character_BP_Fire_C : public AMegaWyvern_Character_BP_Fire_C
{
public:
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x21C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bone_MegaWyvern_Character_BP_Fire.Bone_MegaWyvern_Character_BP_Fire_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Bone_MegaWyvern_Character_BP_Fire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
