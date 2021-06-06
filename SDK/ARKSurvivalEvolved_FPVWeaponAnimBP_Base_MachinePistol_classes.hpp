#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVWeaponAnimBP_Base_MachinePistol_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPVWeaponAnimBP_Base_MachinePistol.FPVWeaponAnimBP_Base_MachinePistol_C
// 0x05BF (0x08FF - 0x0340)
class UFPVWeaponAnimBP_Base_MachinePistol_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_864F5ECB40517F3B85F59F97C2A1AEE9;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_10D41F974803A452F8A293B2DAF8DB12;      // 0x0368(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0646FF6B4CCB2FFBD54FD3B01988B18A;// 0x03A0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D82C382C43A4A7874D264EAB61C43628;// 0x03B8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26B30DD243A308F72F68ACAB5121C3F0;// 0x03D0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0D084ECB41C753BF83F289B38D5D594A;// 0x03E8(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A31F850B46150DDDBD4FD49A3DC676AB;// 0x0400(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4B80A5BC49044A60C0D61891AE90F1F6;// 0x0430(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_463CFB8D436506011CB263BA49DA074F;// 0x0458(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_71BF4BC1424AACE2AEDA6D981C05A5B7;// 0x0488(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30317C7A41BAB6DFA26A7098DF8044DE;// 0x04B0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9CE7BB254705E328E5C2EF916391B17F;// 0x04E0(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_63DD6C2941EF3FF851FA8BBA5ACCAA0B;// 0x0540(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6C162B334D648AFF017465B67C3DAF20;// 0x0568(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8851BBCC4D39AB7D1C5FD5956C5CAC27;// 0x0590(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5952CFA146B2EFFFCEA2AA8D740D64DB;// 0x0640(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B2BA9DA243394F27328CAEBCBB9F0094;// 0x0670(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CFA7B63B4B3AA99C2647B0BF22F87A84;// 0x06D0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3E47CFD24D0C7E944B8C8ABFCA602275;// 0x0700(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_00BBB13448502F37C9D85FB36C768286;// 0x0760(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AB4E75C24A98C223DC119DA137860A19;// 0x0790(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_59177E804902241A9FE64CB867B43BB0;// 0x07B8(0x0060)
	bool                                               IsRunning;                                                // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTargeting;                                              // 0x0819(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMoving;                                                // 0x081A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMoving;                                               // 0x081B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MovementAnimRate;                                         // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwimming;                                              // 0x0820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSwimming;                                             // 0x0821(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0822(0x0006) MISSED OFFSET
	double                                             LastSwimmingTime;                                         // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseInventory;                                            // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInventory;                                             // 0x0831(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0832(0x0002) MISSED OFFSET
	struct FVector                                     DefaultTranslation;                                       // 0x0834(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0840(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0841(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0842(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0843(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0844(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0848(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x0850(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0858(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0859(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x0860(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0868(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0870(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0871(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x0874(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Conv_RotatorToVector_ReturnValue;                // 0x0880(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x088C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTargeting_ReturnValue;                         // 0x0890(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0891(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetCurrentAcceleration_ReturnValue;              // 0x0894(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x08A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x08AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x08B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x08B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x08B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x08BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x08BD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x08BE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x08BF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x08C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x08C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x08CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x08D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x08D1(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x08D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x08D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x08D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x08DA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x08DB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x08DC(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x08E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x08E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x08E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x08EA(0x0006) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x08F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x08F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x08FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x08FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x08FE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVWeaponAnimBP_Base_MachinePistol.FPVWeaponAnimBP_Base_MachinePistol_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_TransitionResult_1982();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_TransitionResult_1981();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_TransitionResult_1980();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_TransitionResult_1979();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_BlendListByBool_2148();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_ModifyBone_500();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_SequencePlayer_3154();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_BlendListByBool_2149();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_SequencePlayer_3155();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_BlendListByBool_2150();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
