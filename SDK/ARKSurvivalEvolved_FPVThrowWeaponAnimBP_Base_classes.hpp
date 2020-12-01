#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVThrowWeaponAnimBP_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPVThrowWeaponAnimBP_Base.FPVThrowWeaponAnimBP_Base_C
// 0x0539 (0x0879 - 0x0340)
class UFPVThrowWeaponAnimBP_Base_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_14F63B2A4A2C26EB25F4969D8485EB95;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_349286074B7C12CE1DDDB1A965C99A24;      // 0x0368(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4E9D50F742C66A7C09C5C69516953C34;// 0x03A0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A3B5E1B24C5B995EA43D1CBDBE283811;// 0x03B8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_499199534896B9E39615789DD9F7C42D;// 0x03D0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EA66187D4549A42301522EB102721240;// 0x03E8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F00B811B4A3196F4C85E37AA7217616A;// 0x0400(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FFF86BBA4D8F4F8CB4E56AAB6C3391A2;// 0x0418(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_196EE8D049A36493C8EDA9805ACF8712;// 0x0430(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09287C9D42D6C39A303A1E89E0DE2A29;// 0x0448(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B05C1AB84D8C4BF2DC9D21A46FC166AD;// 0x0460(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8151B23247D427BEF093A2BFC2B7475C;// 0x0478(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1DF9F22D40C56BB5BE4EE1A4C1283498;// 0x0490(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_68A46BDB41A6E41A8AD81884EFC0673F;// 0x04A8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A8D0A73D4E09341CDC4272BA5DB61762;// 0x04C0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B4113F2A4AB28D8DD52DC1B06AAAB009;// 0x04D8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D548778C4665849BAF7E6B997742F4E4;// 0x04F0(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19E3103A4ABACC03A2A9CAB12B31C8D6;// 0x0508(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_90B27B61473FB28B96F80891D1F7F4BE;// 0x0538(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C463F9C04B15D9A5E7E9C7826695D81C;// 0x0560(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A63391BE419E53957057089D740A39AD;// 0x0590(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10385CA34A32927AB1262CA1E61CE7E8;// 0x05B8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_030409DA466A8312005DB693D432A83F;// 0x05E8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_772221504E7F6750A7043C8766CBB1CA;// 0x0610(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_81B8ED644B5A44ED0B5C45A482F334B2;// 0x0640(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EA2D88994CEB060BDA03678D8E1F36CD;// 0x0668(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_91E347AC468A2344106401977E2F3712;// 0x0698(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2F82DE444AF0256FFFB34D9949781AB4;// 0x06C0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5C2BA4024B81957D363237BF71AED082;// 0x06F0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37D1DE9E426EBE94AE8C5E894A2525AD;// 0x0718(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_918EF08A488C5AF4BBF055BA4AB71381;// 0x0748(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1131B1454FC08B42204A66A2F9FFD8A0;// 0x0770(0x0060)
	bool                                               IsRunning;                                                // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPullingString;                                          // 0x07D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTargeting;                                              // 0x07D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMoving;                                                 // 0x07D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DidFireWeapon;                                            // 0x07D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NoAmmoToReload;                                           // 0x07D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReturnToIdle;                                             // 0x07D6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x07D7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x07D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x07D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x07DA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x07DB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x07DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x07DD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x07DE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x07DF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x07E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x07E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x07E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x07E3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x07E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x07E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x07E6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x07E7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x07E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x07E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue10;                       // 0x07EA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x07EB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue11;                       // 0x07EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07ED(0x0003) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue;// 0x07F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x07F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x07F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x07F9(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0800(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x0808(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0810(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0811(0x0007) MISSED OFFSET
	class APrimalWeaponBow*                            K2Node_DynamicCast_AsPrimalWeaponBow;                     // 0x0818(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0820(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0821(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x0828(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0830(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0838(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0839(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0x083C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x0848(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x084C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x0850(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTargeting_ReturnValue;                         // 0x0854(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0855(0x0003) MISSED OFFSET
	struct FVector2D                                   CallFunc_MakeVector2D_ReturnValue;                        // 0x0858(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x0860(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x0864(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0865(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0866(0x0002) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0868(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x086C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue12;                       // 0x086D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x086E(0x0002) MISSED OFFSET
	class USkeletalMeshComponent*                      CallFunc_GetOwningComponent_ReturnValue;                  // 0x0870(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_BoolBool_ReturnValue;                   // 0x0878(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVThrowWeaponAnimBP_Base.FPVThrowWeaponAnimBP_Base_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1014();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1013();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1012();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1011();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1010();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1009();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1008();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1007();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1006();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1005();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1004();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1003();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1002();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1001();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1000();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_EnterIdle();
	void AnimNotify_EnterTargetIdle();
	void AnimNotify_EndPullString();
	void ExecuteUbergraph_FPVThrowWeaponAnimBP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
