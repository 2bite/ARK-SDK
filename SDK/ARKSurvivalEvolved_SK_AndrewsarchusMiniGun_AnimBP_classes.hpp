#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_AndrewsarchusMiniGun_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SK_AndrewsarchusMiniGun_AnimBP.SK_AndrewsarchusMiniGun_AnimBP_C
// 0x04B2 (0x07F2 - 0x0340)
class USK_AndrewsarchusMiniGun_AnimBP_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_D0A2C9BD441C7187DC250CA5A501D7C5;      // 0x0340(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_853387734228B2221FE9F080D9703149;// 0x0368(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EFACEE7E483FA31AD3756D87B17E83BE;// 0x03B8(0x0030)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F07CDAEA4C3B4FAC1054FD897373B4F4;// 0x03F0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BF8570EC458BE8AFB66CB9962DE2DB7A;// 0x04A0(0x0028)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3AC6275F4C2990AF419FA0A6E4C234D6;// 0x04D0(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_34E7BFDA45B27587B7A37AADA634C12F;// 0x0580(0x0028)
	unsigned char                                      UnknownData02[0x8];                                       // 0x05A8(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B3A0F8004B13E5839F9ADB93F92F6EFD;// 0x05B0(0x00B0)
	float                                              YawRotation;                                              // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchRotation;                                            // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpinRate;                                                 // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotInterpSpeed;                                           // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireRateInterpSpeed;                                      // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFPVRig;                                                 // 0x0674(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0675(0x0003) MISSED OFFSET
	struct FVector                                     FPVBarrelOffset;                                          // 0x0678(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPVBarrelOffset;                                          // 0x0684(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastYawRotation;                                          // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x0694(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x06A0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue2;                            // 0x06D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue2;                      // 0x06E0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0710(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_SelectVector_ReturnValue;                        // 0x0714(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x0720(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AAndrewsarchus_Character_BP_C*               K2Node_DynamicCast_AsAndrewsarchus_Character_BP_C;        // 0x0728(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0730(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0731(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetBarrelPivotSocketLocationRotation_Location;   // 0x0734(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetBarrelPivotSocketLocationRotation_Rotation;   // 0x0740(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue3;                            // 0x074C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_NormalizedDeltaRotator_ReturnValue;              // 0x0758(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x0764(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x0770(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x0774(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x0778(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x077C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x077D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x077E(0x0002) MISSED OFFSET
	struct FRotator                                    CallFunc_MakeRot_ReturnValue4;                            // 0x0780(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x078C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x0790(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue3;                        // 0x0794(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x0798(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue5;                            // 0x079C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue6;                            // 0x07A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x07B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_RInterpTo_Constant_ReturnValue;                  // 0x07B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_RInterpTo_Constant_ReturnValue2;                 // 0x07C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch2;                                 // 0x07D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw2;                                   // 0x07D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll2;                                  // 0x07D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch3;                                 // 0x07DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw3;                                   // 0x07E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll3;                                  // 0x07E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x07E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_Constant_ReturnValue;                  // 0x07EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_FloatFloat_ReturnValue;              // 0x07F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x07F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_AndrewsarchusMiniGun_AnimBP.SK_AndrewsarchusMiniGun_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_AndrewsarchusMiniGun_AnimBP_AnimGraphNode_SequencePlayer_3874();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_AndrewsarchusMiniGun_AnimBP_AnimGraphNode_ModifyBone_608();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_AndrewsarchusMiniGun_AnimBP_AnimGraphNode_ModifyBone_607();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_AndrewsarchusMiniGun_AnimBP_AnimGraphNode_ModifyBone_606();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SK_AndrewsarchusMiniGun_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
