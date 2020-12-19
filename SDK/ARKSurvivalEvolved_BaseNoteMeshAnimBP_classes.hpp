#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaseNoteMeshAnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C
// 0x01A9 (0x04E9 - 0x0340)
class UBaseNoteMeshAnimBP_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_BB430FF34E27A2A408537DA5C70EF3CE;      // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E0B3D8864861E3A72BFECEAAC0C96898;// 0x0368(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7AB8197743067507F0B4C2A00905C7D5;// 0x0380(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A764C9D547700928AA11728FCFAAE3E1;// 0x03B0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7DCDA5CC4A737258D9F64A93A6899F22;// 0x03D8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BEC211B64EEE1FC75C0B96AC00D1C564;// 0x0408(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DAF5E144422BE9263FF0BFAFBDDBFDF8;// 0x0430(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9C7C2F9E4BD57E22337C768D811E1E3C;      // 0x0490(0x0038)
	class UAnimMontage*                                CloseAnim;                                                // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToExitOpeningStateOverride;                           // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x04D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x04D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x04D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04DA(0x0002) MISSED OFFSET
	float                                              CallFunc_GetCurrentStateElapsedTime_ReturnValue;          // 0x04DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;       // 0x04E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x04E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x04E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x04E6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x04E7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x04E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C");
		return ptr;
	}


	void BlueprintTriggerAnimationEvent(struct FName* AnimationEventName, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseNoteMeshAnimBP_AnimGraphNode_TransitionResult_2256();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_BaseNoteMeshAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
