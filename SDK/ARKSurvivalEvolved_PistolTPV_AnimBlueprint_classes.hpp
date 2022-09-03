#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PistolTPV_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass PistolTPV_AnimBlueprint.PistolTPV_AnimBlueprint_C
// 0x0064 (0x03A4 - 0x0340)
class UPistolTPV_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_C80B94E24D9DD0BB025479834142DE11;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C4B7107C4E2E71E54748C1BA555D75CA;      // 0x0368(0x0038)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x03A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PistolTPV_AnimBlueprint.PistolTPV_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_PistolTPV_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
