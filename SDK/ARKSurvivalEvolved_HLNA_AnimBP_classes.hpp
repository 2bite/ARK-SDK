#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HLNA_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass HLNA_AnimBP.HLNA_AnimBP_C
// 0x05B4 (0x08F4 - 0x0340)
class UHLNA_AnimBP_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_59A3DB7147810542864E7DBFCA2E9EB4;      // 0x0340(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_1DDBDBE341120FD75184058B471475C9;// 0x0368(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_62B4CF5A40B2563E7B173B8625AAE8AC;// 0x0448(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_70AB28404F099CFAB0EFF4B901570680;// 0x04C8(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F790308F4D13B9489C0E85B215D09A14;// 0x05A8(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B3B075D7461BC430952B6698546B4A10;// 0x05D0(0x0060)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_48B3BF36427B84C9CC2408881D61E1C9;// 0x0630(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E273EB11408C2B2AAD486987A43E4A5C;// 0x0658(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9FEF02064E32D1D61A56159C26E50F2B;// 0x0680(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B346502F4B5F9B4BF51DFA9AA121AD52;// 0x0730(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_802F46354C5052818254F4BBCFAAC667;// 0x0780(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6E6496404F143058ACFABE8443A444EF;      // 0x07B0(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_99D31D04402C858405905B99913E8DC1;// 0x07E8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_67B75B574F5D3CD1E360A5A6C54AA4F2;// 0x0818(0x0060)
	struct FRotator                                    CurrRootOffset_Rotation;                                  // 0x0878(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrRootOffset_Location;                                  // 0x0884(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MyVelocity;                                               // 0x0890(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEarsDown;                                                // 0x089C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x089D(0x0003) MISSED OFFSET
	struct FVector                                     VelocityMovementAxes;                                     // 0x08A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               should_be_idle;                                           // 0x08AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08AD(0x0003) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x08B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_Companion_HLNA_C*                      K2Node_DynamicCast_AsBuff_Companion_HLNA_C;               // 0x08B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x08C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08C1(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X;                                   // 0x08C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x08C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x08CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x08D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x08D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x08D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x08DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAnimMoveVelocityAxes_VelocityAxes;            // 0x08E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x08EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x08F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass HLNA_AnimBP.HLNA_AnimBP_C");
		return ptr;
	}


	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_449();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_186();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_450();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_938();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_566();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_5774();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_HLNA_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
