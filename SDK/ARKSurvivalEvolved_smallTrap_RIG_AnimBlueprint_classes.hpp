#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_smallTrap_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass smallTrap_RIG_AnimBlueprint.smallTrap_RIG_AnimBlueprint_C
// 0x054C (0x088C - 0x0340)
class UsmallTrap_RIG_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_33A9AB6E4899780F481B9BB288F46AC8;      // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_049E797E44F5CC3F9A7C67987C2247A4;// 0x0368(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_921FE977416ACAA12131FAA76FCD6DC1;// 0x0380(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0669F2584053DD79A7C46FB173DDA84A;// 0x0398(0x0018)
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
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A35992FC46F45482C77F2FA17D522CCF;// 0x0598(0x0060)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05F8(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_145F23DF4757AA89292BAE96916F60D3;// 0x0600(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F6BCFFBE4A962FB95784BE95E5E13A98;// 0x06B0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_947F2CD94C89A14EBEDC4F974443D839;// 0x06D8(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_030D7134412D8B7508D2A4B25A86A1EF;// 0x0700(0x00B0)
	bool                                               ClosedTrap;                                               // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07B1(0x0003) MISSED OFFSET
	struct FRotator                                    TrapRotation;                                             // 0x07B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrapRotationAlpha;                                        // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPrepared;                                               // 0x07C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsOld;                                                   // 0x07C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x07C6(0x0002) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x07C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructureBearTrap*                    K2Node_DynamicCast_AsPrimalStructureBearTrap;             // 0x07D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x07D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x07D9(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x07E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x07E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x07E9(0x0003) MISSED OFFSET
	float                                              CallFunc_TimeSince_ReturnValue;                           // 0x07EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorRightVector_ReturnValue;                 // 0x07F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x07FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTrapPrepared_ReturnValue;                      // 0x07FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x07FE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x07FF(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0800(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x080C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x0810(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x0814(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0818(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0819(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x081C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X2;                                  // 0x0828(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x082C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x0830(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x0834(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x0840(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x084C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0858(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0859(0x0003) MISSED OFFSET
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x085C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0860(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0861(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0864(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x0868(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;       // 0x0874(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x0878(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0879(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x087A(0x0002) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue2;      // 0x087C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue2;               // 0x0880(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0881(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0884(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x0888(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass smallTrap_RIG_AnimBlueprint.smallTrap_RIG_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_smallTrap_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1882();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_smallTrap_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1881();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_smallTrap_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1880();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_smallTrap_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1879();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_smallTrap_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1878();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_smallTrap_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_518();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_smallTrap_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_517();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_smallTrap_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
