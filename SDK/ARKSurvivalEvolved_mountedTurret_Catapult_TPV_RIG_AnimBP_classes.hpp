#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_mountedTurret_Catapult_TPV_RIG_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass mountedTurret_Catapult_TPV_RIG_AnimBP.mountedTurret_Catapult_TPV_RIG_AnimBP_C
// 0x0094 (0x03D4 - 0x0340)
class UmountedTurret_Catapult_TPV_RIG_AnimBP_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_EEF1AA724AB64E9D92586D96226E2969;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A7189BE14FB76D5F25439388F447123E;      // 0x0368(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F337634643C0FDC8582F44B28E0D45B3;// 0x03A0(0x0030)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x03D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass mountedTurret_Catapult_TPV_RIG_AnimBP.mountedTurret_Catapult_TPV_RIG_AnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_mountedTurret_Catapult_TPV_RIG_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
