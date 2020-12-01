#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVBolaWeaponAnimBP_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPVBolaWeaponAnimBP_Base.FPVBolaWeaponAnimBP_Base_C
// 0x03D9 (0x0719 - 0x0340)
class UFPVBolaWeaponAnimBP_Base_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_B2D13DCF44969EE28BA87CBB1884ECDC;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_26E4AB494EC4B954E29315908F445F09;      // 0x0368(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C22C12C84AD0E0425622BEB59CCA35CC;// 0x03A0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09E92FA04A14D52F37B921B4972334CE;// 0x03B8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9B7B24E94E539AA8DEA0BBB4614F24AE;// 0x03D0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_601C452F45EF0DE8CC399AB9D12C9379;// 0x03E8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_69F7FA794059340BA101E48330D2B6F5;// 0x0400(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_41A9882E4C91A2F83749E6BEC1E3B59A;// 0x0418(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EC8248F245C7685E401AA1A16430F2E3;// 0x0430(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E0AAA2CB4B45B4E25C6BA4BCCDBDD48A;// 0x0448(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AB205CC1467D6D4BF5C74C93D93CD428;// 0x0460(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0D6DC91644AEE79A58F88D9938E83A72;// 0x0478(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A0AB4A7147B5FE4C3E6A8D83D70F475A;// 0x04A8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C87B8B0644754974E9DAF683687BD31D;// 0x04D0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F71811234D5CA06DABE7EC85AAA9AC84;// 0x0500(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F338458C4E2AFE051578EB843C98C7EF;// 0x0528(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6572B8344FC3A6AE0ACAED886353CBA3;// 0x0558(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_89215F7A4D17E98BB5F28BBE1C81594F;// 0x0580(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_343E6A464280A519C7CDFE85E23C8ABD;// 0x05B0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AEBF39384EC251DED11EF69A640112B2;// 0x05D8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DA8D8AA0483320306B49CEB5150453B6;// 0x0608(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EDA953A64C40B0076477CCB2E877C8C6;// 0x0630(0x0060)
	bool                                               IsRunning;                                                // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMoving;                                                 // 0x0691(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCooking;                                                // 0x0692(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0693(0x0001) MISSED OFFSET
	float                                              CookingTime;                                              // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowLoopRate;                                            // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x069C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x069D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x069E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x069F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x06A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x06A1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x06A2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x06A3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x06A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x06A5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x06A6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x06A7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x06A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x06A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x06AA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x06AB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x06AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x06B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x06B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x06C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06C1(0x0007) MISSED OFFSET
	class APrimalWeaponGrenade*                        K2Node_DynamicCast_AsPrimalWeaponGrenade;                 // 0x06C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x06D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x06D1(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x06D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x06E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x06E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x06E9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0x06EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x06F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x06F9(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X;                                   // 0x06FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x0700(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x0704(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_MakeVector2D_ReturnValue;                        // 0x0708(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x0710(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0711(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x0714(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x0718(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVBolaWeaponAnimBP_Base.FPVBolaWeaponAnimBP_Base_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBolaWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1476();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBolaWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1475();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBolaWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1474();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBolaWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1473();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBolaWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1472();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBolaWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1471();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBolaWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1470();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBolaWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1469();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBolaWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1468();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBolaWeaponAnimBP_Base_AnimGraphNode_SequencePlayer_4534();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPVBolaWeaponAnimBP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
