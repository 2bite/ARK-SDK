#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_parachute_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass parachute_RIG_AnimBlueprint.parachute_RIG_AnimBlueprint_C
// 0x0288 (0x05C8 - 0x0340)
class Uparachute_RIG_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_244E4895445B406BA0AA85A2286DC443;      // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F4D1CB92414E3E64D65AAFB76DDD2067;// 0x0368(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6F013A774929084F4793DBBA92E5AA4F;// 0x0380(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CF98243C467C53213112EA80F854FC82;// 0x03B0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A1A8493D4423E399A783FB83A6006CB1;// 0x03D8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_152B0E3B4957A3568079D997B726D71C;// 0x0408(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B1909469432C1665E2F5C98E9FF1D64F;// 0x0430(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_56D065BE4B56D2876D71E6AC03E7C454;// 0x0490(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E3543F1448BB357F732FC8A633A57375;// 0x0540(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A832DFAC450290FABAE603A7BBACD0F1;// 0x0568(0x0028)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0590(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;       // 0x0594(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USkeletalMeshComponent*                      CallFunc_GetOwningComponent_ReturnValue;                  // 0x0598(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x05A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05A1(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetComponentRotation_ReturnValue;             // 0x05A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x05B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x05B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x05B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x05BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass parachute_RIG_AnimBlueprint.parachute_RIG_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_parachute_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1518();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_parachute_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_524();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_parachute_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
