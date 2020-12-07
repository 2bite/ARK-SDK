#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVLassoWeaponAnimBP_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPVLassoWeaponAnimBP_Base.FPVLassoWeaponAnimBP_Base_C
// 0x0347 (0x0687 - 0x0340)
class UFPVLassoWeaponAnimBP_Base_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_816895B54865C5621CC1F6807E3311DE;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6523FD0442D4B5DDA2BD8AB7E17CE6F9;      // 0x0368(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CA0BF081430D60556C53028901FBE4EE;// 0x03A0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B2AA18764DE0CCFC70D5619C7EADEF5D;// 0x03B8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_81CAC8524F543CE549B5F5B555060862;// 0x03D0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E62D932544E5C625F1CE9C8C6486203E;// 0x03E8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DD85E00F4CB0AE3B851F78897AA936B0;// 0x0400(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_82397C0248F6AE2F3CD4CFB7D1922204;// 0x0418(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8E73AC02452792AEB956CEA5FFA652F1;// 0x0430(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9017E1C14DB129530531E0866A0478E4;// 0x0448(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C2D8E38D40D10095678597B5E62C2106;// 0x0460(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AF286E8742B3A9328F69F0A6C4E91DB92;// 0x0478(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A6E68DC3474632F16592AEA99053E49E2;// 0x04A8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0069C117491F8C6F58E863A42A9E7DD5;// 0x04D0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A76C014D46E26C75AC413885A3C11B85;// 0x0500(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AF286E8742B3A9328F69F0A6C4E91DB9;// 0x0528(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A6E68DC3474632F16592AEA99053E49E;// 0x0558(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_546A38EE4F45EE355F9F6881445921C7;// 0x0580(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_39CBF3FE4D75ED25A6A86FAFA8E91E6F;// 0x05B0(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EB25521C469F75591E329EBFA4A8F9F4;// 0x05D8(0x0060)
	bool                                               bIsSpinning;                                              // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPulling;                                               // 0x0639(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsThrowing;                                              // 0x063A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x063B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x063C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x063D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x063E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x063F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x0640(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0641(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0642(0x0002) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0644(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0648(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x0650(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0658(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0659(0x0007) MISSED OFFSET
	class AWeapLasso_C*                                K2Node_DynamicCast_AsWeapLasso_C;                         // 0x0660(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0668(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0669(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0680(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x0681(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0682(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x0683(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x0684(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x0685(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0686(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVLassoWeaponAnimBP_Base.FPVLassoWeaponAnimBP_Base_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVLassoWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1638();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVLassoWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1637();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVLassoWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1636();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVLassoWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1635();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVLassoWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1634();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVLassoWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1633();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVLassoWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1632();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVLassoWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1631();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVLassoWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1630();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPVLassoWeaponAnimBP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
