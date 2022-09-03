#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_gliderPackFemale_wings_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SK_gliderPackFemale_wings_AnimBlueprint.SK_gliderPackFemale_wings_AnimBlueprint_C
// 0x05E2 (0x0922 - 0x0340)
class USK_gliderPackFemale_wings_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_777AC29A41D23F6AB9CA818B352DEBE8;      // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EE736612443F8F2685CB3CA4EE460C2D;// 0x0368(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ABFA5F6C4FFE3EB1320CBBA1339D9439;// 0x0380(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A9123CDD43B97DF35A89D9B5050AA15B;// 0x0398(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_89520B7D49DBF8BDFB99C4AFB2937566;// 0x03B0(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C01CF0764D66E5360F03E382263EC85E;// 0x03C8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AEB0C5C34423FA15455E3C8B134C54584;// 0x03F8(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C84153B5498490AF8F7514A21CF770BA;// 0x0420(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4A75747B40C6E07FF8D3EE8D957EFC8E;// 0x0500(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C69B5A784B95D7DC66A4B7B81F1A0F87;// 0x05B0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1E3FEE1249CE34E103226D9D28B5C5B9;// 0x0660(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1A87191741501BE0B47174A825255550;// 0x0688(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CB77B3AD4B522D8CB6A4AEB29D04688C;// 0x06B0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AEB0C5C34423FA15455E3C8B134C54583;// 0x0760(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9CB5EF5942E0C2ED02DC9D87378682AD;// 0x0788(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AEB0C5C34423FA15455E3C8B134C54582;// 0x07B8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21656DF94E7B4D72414D7AB168DA846B;// 0x07E0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AEB0C5C34423FA15455E3C8B134C5458;// 0x0810(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A940A2E5413A5FA41FDA4CAD29055B6C;// 0x0838(0x0060)
	bool                                               bIsOpen;                                                  // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0899(0x0003) MISSED OFFSET
	float                                              Wing_Extension;                                           // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    WingAimOffsetAdjustment;                                  // 0x08A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08AC(0x0004) MISSED OFFSET
	class AShooterCharacter*                           GlidingCharacter;                                         // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              WingExtension;                                            // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WingsOffset_Location;                                     // 0x08BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FirstPersonWingOffset;                                    // 0x08C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    WingsOffset_Rotation;                                     // 0x08D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponEquippedPitchAdjustment;                            // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue;// 0x08E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x08E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x08E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x08EA(0x0002) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue2;// 0x08EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x08F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x08F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x08F5(0x0003) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x08F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0900(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0908(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0909(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x0910(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_Glider_C*                              K2Node_DynamicCast_AsBuff_Glider_C;                       // 0x0918(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0920(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_ByteByte_ReturnValue;                    // 0x0921(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_gliderPackFemale_wings_AnimBlueprint.SK_gliderPackFemale_wings_AnimBlueprint_C");
		return ptr;
	}


	void UpdateWingOffsets(class AShooterCharacter* ShooterCharacter);
	void UpdateVelocity(class AShooterCharacter* ShooterCharacter, float DeltaTime);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint_AnimGraphNode_TransitionResult_1972();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint_AnimGraphNode_TransitionResult_1971();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint_AnimGraphNode_TransitionResult_1970();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint_AnimGraphNode_TransitionResult_1969();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_176();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint_AnimGraphNode_ModifyBone_566();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint_AnimGraphNode_ModifyBone_567();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint_AnimGraphNode_ModifyBone_568();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
