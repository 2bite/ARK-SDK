#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVMeleeWeaponAnimBP_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C
// 0x0670 (0x09B0 - 0x0340)
class UFPVMeleeWeaponAnimBP_Base_C : public UAnimInstance
{
public:
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_94614EED4F7B763410C62FA7BBBEA782;// 0x0340(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9B8B44C1401EFC2B1B2F658D08A3CC15;// 0x0358(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9633ECD64E8DF2D6CD850D9698570423;// 0x0370(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C77181A64754BA48F9C040B829F0425E;// 0x03A0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DBEDD2224D957858A1474AADD2F8F09E;// 0x03C8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_678EA47D4BACAD7D44DE28A97F7843F3;// 0x03F8(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_ABD4C747415ABAB5779DB4AFF32F42F9;// 0x0420(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A5CCBFCE475451428EA0F5B41B93979E;// 0x0480(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_530F22FA4C5E4828E63319B914C9248C;// 0x0530(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_87FB25AC44ADE68779E1A7AC15A57318;// 0x0558(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4BA8FB52422889CF8211F5B70DD56242;      // 0x0580(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6570DA6D450A44843B12F5BA908E8B21;      // 0x05B8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F1ADBF664735466838311DB23F22B6B1;// 0x05F0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_065DA2A041298EF4FD5D34AA3C346BF7;// 0x0608(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E14EDB7448C30AA5D0B32291CC6FCE6F;// 0x0620(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16405A754BFCE6E36AEA429B6FA50896;// 0x0638(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C83561D4F4E1E66F2C341BC14232DA7;// 0x0650(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1B92AF4B4507F3B10E1CB6837DDD7F01;// 0x0668(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_53B3CCB04425AC6F59554DB7438EACB8;// 0x0698(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6ECFFD224138CD117C1947A32585D62D;// 0x06C0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2F1A974242CE4767995F579A0DD32AE8;// 0x06F0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C1820B544FC6E0E86CF0FB3523F2B4C;// 0x0718(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1C78BE3146D93321494858A5E171E7CF;// 0x0748(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_188407B045D52CC4D68D0B8B554849AD;// 0x0770(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_Root_E8590A10420A6342A7984D927900AB51;      // 0x07D0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C9249F6147932E42C664BFA4CF51443F;// 0x07F8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F881A60646FA36C16A214C83094FDB9C;// 0x0878(0x0030)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_13734E0145516A9FCF69059BCD55F07A;// 0x08A8(0x0050)
	bool                                               IsRunning;                                                // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMoving;                                                 // 0x08F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUsingShield;                                           // 0x08FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x08FB(0x0001) MISSED OFFSET
	float                                              UsingShieldWeight;                                        // 0x08FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBlockingWithShield;                                    // 0x0900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0901(0x0003) MISSED OFFSET
	struct FVector                                     BlockingShieldTranslation;                                // 0x0904(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockingShieldWeight;                                     // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BlockingShieldRotation;                                   // 0x0914(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0920(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0921(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0922(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0923(0x0001) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0924(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0928(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x0930(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0938(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0939(0x0003) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x093C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x0940(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0948(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0950(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0951(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation;// 0x0954(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation;// 0x0960(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetBlockingShieldOffsets_ReturnValue;            // 0x096C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x096D(0x0003) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue2;                          // 0x0970(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsBlockingWithShield_ReturnValue;                // 0x0974(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsUsingShield_ReturnValue;                       // 0x0975(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0976(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0x0978(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x0984(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0985(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X;                                   // 0x0988(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x098C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x0990(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_MakeVector2D_ReturnValue;                        // 0x0994(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x099C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x099D(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x09A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x09A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x09A5(0x0003) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue3;                          // 0x09A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue4;                          // 0x09AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1144();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1143();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_ModifyBone_442();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1142();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1141();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1140();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1139();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1138();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_LayeredBoneBlend_106();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_TwoWayBlend_34();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
