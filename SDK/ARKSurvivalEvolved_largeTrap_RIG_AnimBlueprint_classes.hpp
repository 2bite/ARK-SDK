#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_largeTrap_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass largeTrap_RIG_AnimBlueprint.largeTrap_RIG_AnimBlueprint_C
// 0x048C (0x07CC - 0x0340)
class UlargeTrap_RIG_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_C2D97A914ABBCB895555B9A77E92251D;      // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31137D7C4145898379EBE6A65F28B792;// 0x0368(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CFD8396C4A4F8D234AD9CCA9754BE7B7;// 0x0380(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E4EC78914068FEC0071573A3A5CC44ED;// 0x0398(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_352A8F534F73EA75FC0B68BDC1285924;// 0x03B0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CCE7EB8B40483C20321C6B8C42518F2C;// 0x03C8(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C00DCD384787BD60D69C0D851C6C2A97;// 0x03E0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_19D0958C40602042E119DE8F4B20B760;// 0x0410(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F347971244F864ADE21987B8BFDC5F6A;// 0x0438(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B95AECF3444EA05BC9F71AAD7FDD763A;// 0x0468(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FD8E03B34FE608182ECD8F92A65E1F62;// 0x0490(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_382AB5294BA2F211C3624CA0CEA39E84;// 0x04C0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AAC202234C277F81E68A82A5D764B3C6;// 0x04E8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_51016EAB47454630DD2B0D83C757459A;// 0x0518(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EAD25F8A4F174EC4B1921D8B1BC04D22;// 0x0540(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9B6D54C74EA8781309B46BA0F6C1B66A;// 0x0570(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_15BAC6DD4CDA5FBFA909DEA4B44450CA;// 0x0598(0x0060)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05F8(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2C6943B747E75891AFAEEF8A8EF0FC56;// 0x0600(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_90E1D6644C9244A4238E29B62D9AE36A;// 0x06B0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5A04B79F474D14B64695DB8314CDE43F;// 0x06D8(0x0028)
	bool                                               ClosedTrap;                                               // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0701(0x0003) MISSED OFFSET
	struct FRotator                                    WorldRotation;                                            // 0x0704(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WorldRotationAlpha;                                       // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPrepared;                                               // 0x0714(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsOld;                                                   // 0x0715(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0716(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0717(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;       // 0x0718(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x071C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x071D(0x0003) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue2;      // 0x0720(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue2;               // 0x0724(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0725(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0726(0x0002) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0728(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x072C(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0730(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructureBearTrap*                    K2Node_DynamicCast_AsPrimalStructureBearTrap;             // 0x0738(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0740(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0741(0x0003) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x0744(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0748(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_TimeSince_ReturnValue;                           // 0x0750(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0754(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0755(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTrapPrepared_ReturnValue;                      // 0x0756(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0757(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0758(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x0764(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x0768(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x076C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0770(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0771(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x0774(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x0778(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X2;                                  // 0x0784(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x0788(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x078C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x0790(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x079C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x07A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x07B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotFromY_ReturnValue;                        // 0x07C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass largeTrap_RIG_AnimBlueprint.largeTrap_RIG_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_largeTrap_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1320();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_largeTrap_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1319();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_largeTrap_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1318();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_largeTrap_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1317();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_largeTrap_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1316();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_largeTrap_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_578();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_largeTrap_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
