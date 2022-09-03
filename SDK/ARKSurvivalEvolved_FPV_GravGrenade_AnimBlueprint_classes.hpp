#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_GravGrenade_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPV_GravGrenade_AnimBlueprint.FPV_GravGrenade_AnimBlueprint_C
// 0x03D9 (0x0719 - 0x0340)
class UFPV_GravGrenade_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_B6DF38784BB5C4A7860A279C3FCECDEA;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A16035924EA271F3492BF28CEC72A14D;      // 0x0368(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1066597743FE70ADEF4AA19CCA67CA18;// 0x03A0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F7FC118340AF30D6BB2AB6B6BFF8DB17;// 0x03B8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A9EEBA34FD2B9BDB88F1BB346C1C38B;// 0x03D0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_81432862469E943B3D9570BAA31652BF;// 0x03E8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1E61C71D476C24BE1AC98DA1CA2F35A6;// 0x0400(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B15B14B14F55048F5B54C19254C95D89;// 0x0418(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AAD4A32C4A6F7F3F6F68C4A1D20DCF3E;// 0x0430(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_04B238C94D54388B29CE159392056402;// 0x0448(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B2C0DC954B332212455D519DC2B37077;// 0x0460(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19731F2C42DE2006DD1CEBA7101FE42D;// 0x0478(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C34ADD234CA93FBFFC5B339FB648ADDD;// 0x04A8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2EEDF2CD423E21DB291347881DFC5FAA;// 0x04D0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5E7CB3714F7D7DE6D792F9B75477C34C;// 0x0500(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FC59A9AE4ADFA9B5D7F0BA98409C140C;// 0x0528(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_266E1E42472E6B801D1FEEBFF735246D;// 0x0558(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1F2D764F4C2EBFFAA607A69762BA3787;// 0x0580(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_393EACD44B5557D8FD9451A404C8EB9B;// 0x05B0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2113829B4956700EEB34D2AF2DD90FE6;// 0x05D8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D9B7B83A4877D679A02F19BFD655D1D3;// 0x0608(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3B897A7D41284A0AD3CDD2B973B4B002;// 0x0630(0x0060)
	bool                                               IsRunning;                                                // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMoving;                                                 // 0x0691(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCooking;                                                // 0x0692(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0693(0x0001) MISSED OFFSET
	float                                              CookingTime;                                              // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue;// 0x0698(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x069C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x069D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x069E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x069F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x06A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x06A1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x06A2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x06A3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x06A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x06A5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x06A6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x06A7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x06A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06A9(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x06AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x06B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x06B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x06C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x06C1(0x0007) MISSED OFFSET
	class APrimalWeaponGrenade*                        K2Node_DynamicCast_AsPrimalWeaponGrenade;                 // 0x06C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x06D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x06D1(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x06D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x06E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x06E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x06E9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0x06EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x06F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x06F9(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X;                                   // 0x06FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x0700(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x0704(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_MakeVector2D_ReturnValue;                        // 0x0708(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x0710(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0711(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x0714(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x0718(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_GravGrenade_AnimBlueprint.FPV_GravGrenade_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_GravGrenade_AnimBlueprint_AnimGraphNode_TransitionResult_2000();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_GravGrenade_AnimBlueprint_AnimGraphNode_TransitionResult_1999();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_GravGrenade_AnimBlueprint_AnimGraphNode_TransitionResult_1998();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_GravGrenade_AnimBlueprint_AnimGraphNode_TransitionResult_1997();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_GravGrenade_AnimBlueprint_AnimGraphNode_TransitionResult_1996();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_GravGrenade_AnimBlueprint_AnimGraphNode_TransitionResult_1995();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_GravGrenade_AnimBlueprint_AnimGraphNode_TransitionResult_1994();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_GravGrenade_AnimBlueprint_AnimGraphNode_TransitionResult_1993();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_GravGrenade_AnimBlueprint_AnimGraphNode_TransitionResult_1992();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPV_GravGrenade_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
