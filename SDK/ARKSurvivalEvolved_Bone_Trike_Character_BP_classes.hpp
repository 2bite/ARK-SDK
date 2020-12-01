#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bone_Trike_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bone_Trike_Character_BP.Bone_Trike_Character_BP_C
// 0x0017 (0x27B0 - 0x2799)
class ABone_Trike_Character_BP_C : public ATrike_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2799(0x0007) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_BoneTrike_C* DinoCharacterStatus_BP_BoneTrike_C1;                      // 0x27A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x27A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bone_Trike_Character_BP.Bone_Trike_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Bone_Trike_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
