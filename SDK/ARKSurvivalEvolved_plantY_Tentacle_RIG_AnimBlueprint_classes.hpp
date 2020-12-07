#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_plantY_Tentacle_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass plantY_Tentacle_RIG_AnimBlueprint.plantY_Tentacle_RIG_AnimBlueprint_C
// 0x0480 (0x07C0 - 0x0340)
class UplantY_Tentacle_RIG_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_91A172924DE5F27F14E4B49ACE3B13C2;      // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_049E797E44F5CC3F9A7C67987C2247A4;// 0x0368(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_921FE977416ACAA12131FAA76FCD6DC1;// 0x0380(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_232562DC4C711513B09F9289E93F756E;// 0x0398(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7FF072794E14D35079D9BB859932C512;// 0x03B0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7E5902C5467007E7815DC9A2013C6DE1;// 0x03C8(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47C5078B4E09AB96F5AEE7B6CB41CC50;// 0x03E0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1D20D4A24BB71C53A42C9DB185F32322;// 0x0410(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8C874B024FDEA769455282B0AB96886D;// 0x0438(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C7555534408E1282E4E5BBAC35EEC970;// 0x0468(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EFD5AC9944123B27DB36B1B272A31E39;// 0x0490(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CDD0BB6A4634EE9809301D9DC70F7735;// 0x04C0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BE1C2A6F46B8E0CEC2AC64AE64FEDF08;// 0x04E8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3B7D575A42B309BD0EA294B625A62AE9;// 0x0518(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B81F2A6D49C9DF9AC7793AA0E2BA5CC2;// 0x0540(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9FA7685C4CBAE6EA065C17B7EBE48AF1;// 0x0570(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_741A12BB4C80F8B16A4012A38D31928A;// 0x0598(0x0060)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05F8(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4154963C495B20ABDCBEC3BD02857FE5;// 0x0600(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_96A121F34713E7F56C988DB0616763A2;// 0x06B0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5263BA8444122A2EF10047A88E0EF700;// 0x06D8(0x0028)
	bool                                               ClosedTrap;                                               // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPrepared;                                               // 0x0701(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0702(0x0002) MISSED OFFSET
	float                                              TrapRotationAlpha;                                        // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TrapRotation;                                             // 0x0708(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0714(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructureBearTrap*                    K2Node_DynamicCast_AsPrimalStructureBearTrap;             // 0x0720(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0728(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0729(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorRightVector_ReturnValue;                 // 0x072C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0738(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTrapPrepared_ReturnValue;                      // 0x0739(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x073A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x073B(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x073C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x0748(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x074C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x0750(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0754(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0755(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x0758(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X2;                                  // 0x0764(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x0768(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x076C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x0770(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x077C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x0788(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x0794(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0798(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x079C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue;// 0x07A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x07AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07AD(0x0003) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;       // 0x07B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue2;               // 0x07B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x07B5(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x07B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x07BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass plantY_Tentacle_RIG_AnimBlueprint.plantY_Tentacle_RIG_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_plantY_Tentacle_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1310();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_plantY_Tentacle_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1309();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_plantY_Tentacle_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1308();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_plantY_Tentacle_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1307();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_plantY_Tentacle_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1306();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_plantY_Tentacle_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_462();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_plantY_Tentacle_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
