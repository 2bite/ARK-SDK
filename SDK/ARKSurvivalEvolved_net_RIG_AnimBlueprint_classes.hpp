#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_net_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass net_RIG_AnimBlueprint.net_RIG_AnimBlueprint_C
// 0x088C (0x0BCC - 0x0340)
class Unet_RIG_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_ADBA0F1F40310B060911F4A70C4ED262;      // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8ED256C4E450845C0D8FEBC514BA662;// 0x0368(0x0018)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_5FE4CDD04F9C8DB52A8208A1ACE809A5;  // 0x0380(0x0058)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_7DBB96A748B8DB99BE0E25AF0AF47FAA;  // 0x03D8(0x0058)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_6FA3ED8B4AB9B9E24F6613864BAB0550;  // 0x0430(0x0058)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_5D3EA6134C4A3CCAA25D92B346F2503C;  // 0x0488(0x0058)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_F35BCBA3466291B33983149179C6EF45;  // 0x04E0(0x0058)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_30EF159B4B737AE50BB5828CF33639D6;  // 0x0538(0x0058)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_110B4C4949645AED0E26CDB7D8386954;// 0x0590(0x00B0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_A1CB2D5943818CB5D588FA8C13DF0694;  // 0x0640(0x0058)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9304F0FD411D76A328C18BB437E1A4B5;  // 0x0698(0x0058)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9EDDA18F4252FD7428B9D2A34EA60328;// 0x06F0(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_803EBA2A457BEE7554A8B7AFF9CBAB24;// 0x07A0(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4F84FC374F41177F239C7AB221B6E156;// 0x0850(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_08D766AA4240255CC2DB92911525F343;// 0x0900(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7BFBDF8D4CCD891C539CB68FD0F2184B;// 0x09B0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D75C703841B61AF250611990FBEDFCC6;// 0x09D8(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CD57DCF14B47F3D97789A8B7F04A3E1D;// 0x0A08(0x0028)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6E30B96E4CB131EA906FE7BC76DEE687;// 0x0A30(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5673F0C14CBCB3D553C789881F3EE1BD;// 0x0A58(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3433B81F4AFE818A280CA995BE6A2091;// 0x0A88(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_435BBEB1497E24B75481138761A9C513;// 0x0AB0(0x0060)
	struct FVector                                     d_net1_jnt;                                               // 0x0B10(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     d_net2_jnt;                                               // 0x0B1C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     d_net3_jnt;                                               // 0x0B28(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     d_net4_jnt;                                               // 0x0B34(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     d_net5_jnt;                                               // 0x0B40(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasFinishedAnimation;                                    // 0x0B4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasImpacted;                                             // 0x0B4D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasSetupBones;                                           // 0x0B4E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0B4F(0x0001) MISSED OFFSET
	struct FVector                                     d_net6_jnt;                                               // 0x0B50(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     d_net7_jnt;                                               // 0x0B5C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     d_net8_jnt;                                               // 0x0B68(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     d_net9_jnt;                                               // 0x0B74(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     d_net10_jnt;                                              // 0x0B80(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     d_net11_jnt;                                              // 0x0B8C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     d_net12_jnt;                                              // 0x0B98(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     d_net13_jnt;                                              // 0x0BA4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0BB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0BB1(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0BB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0BB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalProjectileNetGun*                     K2Node_DynamicCast_AsPrimalProjectileNetGun;              // 0x0BC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0BC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0BC9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0BCA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x0BCB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass net_RIG_AnimBlueprint.net_RIG_AnimBlueprint_C");
		return ptr;
	}


	void SetBoneVariables(class APrimalProjectileNetGun* Projectile);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_net_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_2460();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_net_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_594();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_net_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_595();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_net_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_596();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_net_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_597();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_net_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_598();
	void AnimNotify_OnFinishAnimation();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_net_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
