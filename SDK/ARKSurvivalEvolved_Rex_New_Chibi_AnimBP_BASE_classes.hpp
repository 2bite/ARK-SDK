#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rex_New_Chibi_AnimBP_BASE_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Rex_New_Chibi_AnimBP_BASE.Rex_New_Chibi_AnimBP_BASE_C
// 0x0388 (0x06C8 - 0x0340)
class URex_New_Chibi_AnimBP_BASE_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_8BDFD51241366FF219E9C78F439E8B68;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3D9C642F427DBE43EE6D058F5C64CAC7;// 0x0368(0x0030)
	struct FAnimNode_ModifyBones                       AnimGraphNode_ModifyBones_F6DC4633476F3FEB6AD417830AB59D5A;// 0x0398(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FF2E853445E8A28B2092339BF3187466;// 0x03D8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E5CAC33B466DB84427D90A942606DDBA;// 0x0400(0x0060)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1F61FEFE463E5ABD3BC19C9A8CCCF693;// 0x0460(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_64C13AD7485E22F6466D7298B2E0B287;// 0x0488(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E9DEA58C4F306BF924C0D189DE4A2B64;// 0x04E8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1BB16D674AED22CC0A820FB04D485971;// 0x0518(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B58729EF47366C63B56E40B07D367C7E;// 0x0578(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BFA041EC470A2D9F338E39A0AAF8ADE8;// 0x05A8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_931082764813DC202E7C5CAC8C89F857;      // 0x05D8(0x0038)
	bool                                               bWalking;                                                 // 0x0610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunning;                                                 // 0x0611(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0612(0x0002) MISSED OFFSET
	float                                              WalkingAnimSpeedScale;                                    // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunningAnimSpeedScale;                                    // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkingAnimSpeedPower;                                    // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkingAnimSpeedMax;                                      // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunningAnimSpeedPower;                                    // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunningAnimSpeedMax;                                      // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PrevPosition;                                             // 0x062C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0639(0x0003) MISSED OFFSET
	float                                              WalkingSpeedThreshold;                                    // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunningSpeedThreshold;                                    // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunningAnimSpeed;                                         // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkingAnimSpeed;                                         // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementSpeed;                                            // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkingAnimSpeedMin;                                      // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunningAnimSpeedMin;                                      // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalWalkSpeedMultiplier;                                 // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalRunSpeedMultiplier;                                  // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0660(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0664(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      CallFunc_GetOwningComponent_ReturnValue;                  // 0x0668(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetComponentLocation_ReturnValue;             // 0x0670(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x067C(0x0004) MISSED OFFSET
	class USKComponent_SkinAttachment_ChibiDino_C*     K2Node_DynamicCast_AsSKComponent_SkinAttachment_ChibiDino_C;// 0x0680(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0688(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0689(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x068A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x068B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x068C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x0698(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x069C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x06A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x06A1(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x06A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x06A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x06A9(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x06AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x06B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue2;        // 0x06B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x06B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x06BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x06C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x06C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Rex_New_Chibi_AnimBP_BASE.Rex_New_Chibi_AnimBP_BASE_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rex_New_Chibi_AnimBP_BASE_AnimGraphNode_BlendListByBool_5756();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rex_New_Chibi_AnimBP_BASE_AnimGraphNode_BlendListByBool_5755();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rex_New_Chibi_AnimBP_BASE_AnimGraphNode_BlendListByBool_5754();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rex_New_Chibi_AnimBP_BASE_AnimGraphNode_SequencePlayer_7156();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rex_New_Chibi_AnimBP_BASE_AnimGraphNode_SequencePlayer_7155();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Rex_New_Chibi_AnimBP_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
