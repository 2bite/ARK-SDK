#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass KingKaiju_AnimBlueprint.KingKaiju_AnimBlueprint_C
// 0x03D8 (0x0718 - 0x0340)
class UKingKaiju_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7F8D28E147AC88C8D08235B4D7A8C614;// 0x0340(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0FFBE69F49EDE4577672638B8650B291;// 0x0370(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_034241DD43AEE99CDE286D84A45C3F3A;// 0x0420(0x0028)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_0D5D7ABB4947167DC2C06AB80F0855BB;// 0x0448(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A106B1E64A9885FBFC20D4902B90529C;// 0x0500(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1D53DDFD43F54588269802A71E23E51D;      // 0x0528(0x0038)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_9C7F6195412538A06566CE85E72480B2;// 0x0560(0x00F8)
	struct FAnimNode_Root                              AnimGraphNode_Root_FDB98ECC4EB0A99B4335668F45CD5BF5;      // 0x0658(0x0028)
	struct FRotator                                    RootRotationOffset;                                       // 0x0680(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x068C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x06A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue;                        // 0x06A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x06A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x06B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06B4(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x06B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x06C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06C1(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_GetAimOffsets_RootRotOffset;                     // 0x06C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsets_TheRootYawSpeed;                   // 0x06D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsets_RootLocOffset;                     // 0x06D4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsets_ReturnValue;                       // 0x06E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x06EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x06F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x06F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x06F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x06FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0700(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x0704(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x0708(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x070C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x0710(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x0714(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass KingKaiju_AnimBlueprint.KingKaiju_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_KingKaiju_AnimBlueprint_AnimGraphNode_ModifyBone_900();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KingKaiju_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_336();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_KingKaiju_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
