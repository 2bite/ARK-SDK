#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bone_MegaRex_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bone_MegaRex_Character_BP.Bone_MegaRex_Character_BP_C
// 0x0008 (0x2148 - 0x2140)
class ABone_MegaRex_Character_BP_C : public AMegaRex_Character_BP_C
{
public:
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x2140(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bone_MegaRex_Character_BP.Bone_MegaRex_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Bone_MegaRex_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
