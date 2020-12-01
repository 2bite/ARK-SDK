#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVThrowWeaponAnimBP_Returner_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPVThrowWeaponAnimBP_Returner_Base.FPVThrowWeaponAnimBP_Returner_Base_C
// 0x0551 (0x0891 - 0x0340)
class UFPVThrowWeaponAnimBP_Returner_Base_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_8C81EF4441CBCE5F1990AFA8B16CFE9D;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8C4FCA3549B54D170FB39A8572782E62;      // 0x0368(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_07A132B740DAC929676901A6D885A31B;// 0x03A0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_194D132343C96F9AF358F9BFC3818AAB;// 0x03B8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_07E4623D4AE6553B6BCED2A911EB8264;// 0x03D0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D86667594BF37A4AB5B7949E2FD889FF;// 0x03E8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_06E4F3A74B5BFA8D2C78FAA77D15ACC6;// 0x0400(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_45DA0AF8412F338CFE43C6936C1CB1B5;// 0x0418(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4DEC8501418F5F1219B8DF8FB102DAE0;// 0x0430(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_89278B8F45D09ECB2CFCCEADDD3A3D02;// 0x0448(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A8591B3E48B5FDEA234820B655CCAF2A;// 0x0460(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EF21DD0645964E8EF35D95AA99060BDE;// 0x0478(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A344E39244A23EB1ADDA75BBB0263C36;// 0x0490(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0122980947FA266A8726EDA42A22B8C5;// 0x04A8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_56EAFC5047CE5A51302CE38760F6D5C5;// 0x04C0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B505066E457CC1FF300BFB9D85FF29F0;// 0x04D8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_826253C7445AA9F7D08579A52CDCCCE3;// 0x04F0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15E3C2AD445AA608BAEB4E8D0F07EDCF;// 0x0508(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B313680C40095F2CAD67A4BE04EE4673;// 0x0520(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0F7CCE2541D176D8374279AFE5594662;// 0x0550(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E3BBE9964014365C81EDA09C6578C28F;// 0x0578(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_917CC8CC436B33281FAB69BDD42AA1DB;// 0x05A8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8D09816E471CC98316E39BBD9EF44CE4;// 0x05D0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6543AD1D448AC6AF3B3A168050941FE9;// 0x0600(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FD0BBDE24354F1256E3FE1865FB65A18;// 0x0628(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_934308C940E099862E47F396A1D8D872;// 0x0658(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_087301FF4FD8ABE54872CDA1DE6CF5EB;// 0x0680(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_548E74294EFF53759CFADE86DBBB23D1;// 0x06B0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A3EB44694B107DCB437FA48C242FB1E2;// 0x06D8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2055145F4EF90EF621F86DA0434F78BE;// 0x0708(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0CF28EC346DFA2930630C3B059EFEB26;// 0x0730(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_068DD50543893FF8977D07A825F80D96;// 0x0760(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9233155941BF8B12E7A817A85B722A0F;// 0x0788(0x0060)
	bool                                               IsRunning;                                                // 0x07E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPullingString;                                          // 0x07E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTargeting;                                              // 0x07EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMoving;                                                 // 0x07EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DidFireWeapon;                                            // 0x07EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NoAmmoToReload;                                           // 0x07ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReturnToIdle;                                             // 0x07EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasPlayedReload;                                          // 0x07EF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x07F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x07F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x07F2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x07F3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x07F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x07F5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x07F6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x07F7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x07F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x07F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x07FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x07FB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x07FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x07FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x07FE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x07FF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x0800(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x0801(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x0802(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue10;                       // 0x0803(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x0804(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue11;                       // 0x0805(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0806(0x0002) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue;// 0x0808(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x080C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x0810(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0811(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0818(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x0820(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0828(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0829(0x0007) MISSED OFFSET
	class APrimalWeaponBow*                            K2Node_DynamicCast_AsPrimalWeaponBow;                     // 0x0830(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0838(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0839(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x0840(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0848(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0850(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0851(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0x0854(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x0860(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x0864(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x0868(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTargeting_ReturnValue;                         // 0x086C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x086D(0x0003) MISSED OFFSET
	struct FVector2D                                   CallFunc_MakeVector2D_ReturnValue;                        // 0x0870(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x0878(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x087C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x087D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x087E(0x0002) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0880(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x0884(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue12;                       // 0x0885(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0886(0x0002) MISSED OFFSET
	class USkeletalMeshComponent*                      CallFunc_GetOwningComponent_ReturnValue;                  // 0x0888(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_BoolBool_ReturnValue;                   // 0x0890(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVThrowWeaponAnimBP_Returner_Base.FPVThrowWeaponAnimBP_Returner_Base_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base_AnimGraphNode_TransitionResult_1626();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base_AnimGraphNode_TransitionResult_1625();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base_AnimGraphNode_TransitionResult_1624();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base_AnimGraphNode_TransitionResult_1623();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base_AnimGraphNode_TransitionResult_1622();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base_AnimGraphNode_TransitionResult_1621();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base_AnimGraphNode_TransitionResult_1620();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base_AnimGraphNode_TransitionResult_1619();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base_AnimGraphNode_TransitionResult_1618();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base_AnimGraphNode_TransitionResult_1617();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base_AnimGraphNode_TransitionResult_1616();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base_AnimGraphNode_TransitionResult_1615();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base_AnimGraphNode_TransitionResult_1614();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base_AnimGraphNode_TransitionResult_1613();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base_AnimGraphNode_TransitionResult_1612();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base_AnimGraphNode_TransitionResult_1611();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_EnterIdle();
	void AnimNotify_EnterTargetIdle();
	void AnimNotify_EndPullString();
	void ExecuteUbergraph_FPVThrowWeaponAnimBP_Returner_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
