#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bone_MegaRaptor_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bone_MegaRaptor_Character_BP.Bone_MegaRaptor_Character_BP_C
// 0x0008 (0x2460 - 0x2458)
class ABone_MegaRaptor_Character_BP_C : public AMegaRaptor_Character_BP_C
{
public:
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x2458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bone_MegaRaptor_Character_BP.Bone_MegaRaptor_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Bone_MegaRaptor_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
