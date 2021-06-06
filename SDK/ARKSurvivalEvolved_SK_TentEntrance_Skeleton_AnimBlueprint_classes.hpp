#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_TentEntrance_Skeleton_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SK_TentEntrance_Skeleton_AnimBlueprint.SK_TentEntrance_Skeleton_AnimBlueprint_C
// 0x0198 (0x04D8 - 0x0340)
class USK_TentEntrance_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_40AD19B649BE8C4ABACD55872032C102;      // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D3D9A849483E4320E19E91BB2331B724;// 0x0368(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B10182D245B651E4FACD9EBB71B91764;// 0x0380(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EEE2493544B53891030CC8B64BAA98E7;// 0x0398(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_07B1BDF44B03BBE59B30E2A42ACF302C;// 0x03C8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17831DEB4604C4845B51128C7A5C0736;// 0x03F0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_99E36B8E47268FC372C6BBBE076AE259;// 0x0420(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_66B21A944BD097A915F5CEAB675A9C4C;// 0x0448(0x0060)
	int                                                DoorOpenState;                                            // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x04B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	class APrimalStructureSkeletalDoor*                K2Node_DynamicCast_AsPrimalStructureSkeletalDoor;         // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x04C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	int                                                CallFunc_GetDoorOpenState_ReturnValue;                    // 0x04CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x04D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x04D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x04D2(0x0002) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x04D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_TentEntrance_Skeleton_AnimBlueprint.SK_TentEntrance_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_TentEntrance_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_3282();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_TentEntrance_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_3281();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SK_TentEntrance_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
