#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RifleTPV_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass RifleTPV_AnimBlueprint.RifleTPV_AnimBlueprint_C
// 0x0064 (0x03A4 - 0x0340)
class URifleTPV_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_1C306F6C40F8D97CBCF5E6B607C5BA33;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3F1FD8164408592CBCE8E79B752685E5;      // 0x0368(0x0038)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x03A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RifleTPV_AnimBlueprint.RifleTPV_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_RifleTPV_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
