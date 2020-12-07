#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesertKaiju_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DesertKaiju_AnimBlueprint.DesertKaiju_AnimBlueprint_C
// 0x07F6 (0x0B36 - 0x0340)
class UDesertKaiju_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_D8EE666E451B3B50EA1D88A1F98F2AB3;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_803C97CA4DE1F8EBFCBC739B91C2977F;      // 0x0368(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_76B0D15D4EB5E84E6DBF9BAEC94E1B47;      // 0x03A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_30C0FF964029E1926AC2F0BC4B36CE8E;      // 0x03D8(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_895A670C415C55C01EAE6DBE4489BF2C;// 0x0410(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_716B29834D11F0E9D047E28C96669B88;// 0x0470(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FC0FEEA04B21039D00D8B1BAF68DE5DE;// 0x04A0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F66CFA2F4E6A0A5433A492B66622393D;// 0x0500(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_534476554EBA20F2B689D5A2DAF190F7;// 0x0530(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A305FBA44D7761FE9473ACA9127A04BC;// 0x0560(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BE6DEF1740F6149F813BAA8588FA2AD3;// 0x0590(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5E193A2649431F3B7779AB811E9E88D5;// 0x05C0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8BC93DE643446C46A59F47A4B111653C;// 0x0620(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_29BB58A445DF0090695F6C900A018C33;// 0x0680(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A355F11142213377B6B773B7E4ADD2F3;      // 0x06E0(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9D3B2BF344C0FDCEF31801B357AFD5C1;// 0x0718(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_09C2DEED49344F8B7D863ABD22181F38;      // 0x0778(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_612D5E004558952198533EAC6067AACF;      // 0x07B0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_29A47B1240A3C123BE8C17BCAB66F6C8;      // 0x07E8(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7FB2B2A24CA1ED48B0A3EC85D1C905CE;// 0x0820(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_915DE1A94586630C2C53069E33C1277C;// 0x08D0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C64AD10F413072C9A0B8EB9DB7E67D59;// 0x08F8(0x0028)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_75CB687E439D044646173E9B064C6E36;// 0x0920(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66259483403C5952A3E8189F0DE31CBA;// 0x0970(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7EA40F884574C19549492B991AF6B116;// 0x09A0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20F338C1419732B234397597C24ED70A;// 0x0A00(0x0030)
	bool                                               UseMontageOnly;                                           // 0x0A30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x0A31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0A32(0x0002) MISSED OFFSET
	struct FVector                                     RootLocationOffset;                                       // 0x0A34(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RootRotationOffset;                                       // 0x0A40(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x0A4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x0A4D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x0A4E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x0A4F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x0A50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A51(0x0003) MISSED OFFSET
	float                                              MinTurnRateForTurnAnimation;                              // 0x0A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMoving;                                                // 0x0A58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A59(0x0003) MISSED OFFSET
	float                                              MinimumMovementSpeedFlying;                               // 0x0A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRate;                                         // 0x0A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FullbodyBlendStrength;                                    // 0x0A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasNoMontage;                                            // 0x0A68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0A69(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0A6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x0A70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x0A78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0A80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0A81(0x0003) MISSED OFFSET
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x0A84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x0A88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x0A8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x0A90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x0A98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0A99(0x0007) MISSED OFFSET
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x0AA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0AA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0AA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0AAA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x0AAB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x0AAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0AAD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0AAE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0AAF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0AB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0AB1(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x0AB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0AB8(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetAimOffsetsTransform_RootRotOffsetTransform;   // 0x0AC0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsetsTransform_TheRootYawSpeed;          // 0x0AF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsetsTransform_RootLocOffset;            // 0x0AF4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsetsTransform_ReturnValue;              // 0x0B00(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x0B0C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x0B18(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x0B24(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x0B30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x0B34(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x0B35(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DesertKaiju_AnimBlueprint.DesertKaiju_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesertKaiju_AnimBlueprint_AnimGraphNode_BlendListByBool_2610();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesertKaiju_AnimBlueprint_AnimGraphNode_BlendListByBool_2609();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesertKaiju_AnimBlueprint_AnimGraphNode_BlendListByBool_2608();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesertKaiju_AnimBlueprint_AnimGraphNode_BlendListByBool_2607();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesertKaiju_AnimBlueprint_AnimGraphNode_BlendListByBool_2606();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesertKaiju_AnimBlueprint_AnimGraphNode_BlendListByBool_2605();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesertKaiju_AnimBlueprint_AnimGraphNode_ModifyBone_544();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesertKaiju_AnimBlueprint_AnimGraphNode_TwoWayBlend_46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesertKaiju_AnimBlueprint_AnimGraphNode_BlendListByBool_2604();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_DesertKaiju_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
