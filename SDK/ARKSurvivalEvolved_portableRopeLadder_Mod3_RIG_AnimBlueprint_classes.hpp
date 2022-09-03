#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_portableRopeLadder_Mod3_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass portableRopeLadder_Mod3_RIG_AnimBlueprint.portableRopeLadder_Mod3_RIG_AnimBlueprint_C
// 0x0064 (0x03A4 - 0x0340)
class UportableRopeLadder_Mod3_RIG_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_FC3A7E6D4CDCA6E4F43BDBB928ABA558;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_08A1C1DE4758EFB05B0E06B40025C264;      // 0x0368(0x0038)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x03A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass portableRopeLadder_Mod3_RIG_AnimBlueprint.portableRopeLadder_Mod3_RIG_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_portableRopeLadder_Mod3_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
