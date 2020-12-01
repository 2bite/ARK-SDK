#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bone_Sauropod_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bone_Sauropod_Character_BP.Bone_Sauropod_Character_BP_C
// 0x0010 (0x20A0 - 0x2090)
class ABone_Sauropod_Character_BP_C : public ASauropod_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Sauropod_Bone_C* DinoCharacterStatus_BP_Sauropod_Bone_C1;                  // 0x2090(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x2098(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bone_Sauropod_Character_BP.Bone_Sauropod_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Bone_Sauropod_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
