#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVMeleeWeaponAnimBP_Lance_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C
// 0x0768 (0x0AA8 - 0x0340)
class UFPVMeleeWeaponAnimBP_Lance_C : public UAnimInstance
{
public:
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_54D2160549C42758A2AF319CC9F3060A;// 0x0340(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_647618C54A656DE19E08A88797CD2DFC;// 0x0358(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_519400C5487408815D8A8CA178914CB4;// 0x0370(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8D5A504D49F33717BAD7BB961BA01B2B;// 0x03A0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F30A6E244318153443C20FB32974CBD6;// 0x03C8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_177AE0EC48FFC9A4E65E42B2D3F98AD9;// 0x03F8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_11F6F5E5418C1088705C3F8720B59813;// 0x0458(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_312202F644F6F0FC8B772E94D25CFF0D;// 0x04B8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5B18C3F64DF71B6EAAB26BADFFCCC800;// 0x04E8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3DE4BCB74D1E917B61525FAE204D037F;// 0x0518(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6C130A46416DD81C7300FD82B2D9E427;// 0x0540(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8EB9944E4EAB783FBA658AB029E3BE2F;// 0x05A0(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A60016864178233E961ABD93A651C402;// 0x0650(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_90EE580942676BC2C94F7CBF2157C48D;// 0x0678(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D633C8424371EBE7F7222693EF07A878;      // 0x06A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D91E538E4678BEF4CC38019322F15FE1;      // 0x06D8(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0D80B83348D6EBC76490ADBA4024292A;// 0x0710(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_599768C24198688C81B41583994EB22F;// 0x0740(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4EDC622142C3A0000B9340A32349AF2F;// 0x07A0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7322FDDE4F18FDAA89F2D69BFDE7737F;// 0x07D0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57B5AC4643ABA42FD4773FB8E1B877DD;// 0x0830(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0C61B80E44DC12EFC5D72AAAE1719D41;// 0x0860(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BA20CA2044B7CBB3B7ED50A68CE6E6BC;// 0x0888(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_Root_3A2275C0458B7C85E7374086ED646D4E;      // 0x08E8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2FE248B044108E27A0C8F58C61228639;// 0x0910(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_52D0D9594393415A23F3BABC247C0975;// 0x0990(0x0030)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_A1339CE14FA0C6CD7E40FEA9A8030229;// 0x09C0(0x0050)
	bool                                               IsRunning;                                                // 0x0A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMoving;                                                 // 0x0A11(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUsingShield;                                           // 0x0A12(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0A13(0x0001) MISSED OFFSET
	float                                              UsingShieldWeight;                                        // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBlockingWithShield;                                    // 0x0A18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A19(0x0003) MISSED OFFSET
	struct FVector                                     BlockingShieldTranslation;                                // 0x0A1C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockingShieldWeight;                                     // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BlockingShieldRotation;                                   // 0x0A2C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAttacking;                                             // 0x0A38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsAttacking;                                          // 0x0A39(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0A3A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0A3B(0x0001) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0A3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0A40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x0A48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0A50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0A51(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x0A58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0A60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0A68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0A69(0x0003) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x0A6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation;// 0x0A70(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation;// 0x0A7C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetBlockingShieldOffsets_ReturnValue;            // 0x0A88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsBlockingWithShield_ReturnValue;                // 0x0A89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsUsingShield_ReturnValue;                       // 0x0A8A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x0A8B(0x0005) MISSED OFFSET
	class AWeapLance_C*                                K2Node_DynamicCast_AsWeapLance_C;                         // 0x0A90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0A98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0A99(0x0003) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue2;                          // 0x0A9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue3;                          // 0x0AA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue4;                          // 0x0AA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_AnimGraphNode_TransitionResult_1576();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_AnimGraphNode_TransitionResult_1575();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_AnimGraphNode_BlendListByBool_2633();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_AnimGraphNode_BlendListByBool_2634();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_AnimGraphNode_ModifyBone_576();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_AnimGraphNode_BlendListByBool_2631();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_AnimGraphNode_BlendListByBool_2632();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_AnimGraphNode_LayeredBoneBlend_126();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_AnimGraphNode_TwoWayBlend_48();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
