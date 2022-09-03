#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVPlacerWeaponAnimBP_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPVPlacerWeaponAnimBP_Base.FPVPlacerWeaponAnimBP_Base_C
// 0x05D4 (0x0914 - 0x0340)
class UFPVPlacerWeaponAnimBP_Base_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_90AACF0342A6265D845D75BB44A3523C;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9D4227FB416D07B09F9DE99FE9B5285C;      // 0x0368(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30B8485D4CC74466C6A286B5EA515B4D;// 0x03A0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_53130CC544A124EDF2B42FAFEAA7071E;// 0x03B8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1532EA2249E980CB0D182783F5D4EA2F;// 0x03D0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E978DC0C457E4F872B8E0A9B2D572F7E;// 0x03E8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9C8A13274BA50BF0510BD3A6124752E0;// 0x0400(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_84A2CCD248CF948428C63D9B7134CD16;// 0x0418(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_536C7C5849ACBE79D22DB8AD33221D96;// 0x0430(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_95BDCF2549540980558263B3A65702D3;// 0x0460(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_95EDA740497384E620F2AAA79F5B4B6C;// 0x0488(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9A159EB64BB258567F926098FAFFF903;// 0x04B8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AE6FAB504B3D22B7C594779DE2D290F3;// 0x04E0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2B5CB98047EF9514F5CA298813C035F1;// 0x0510(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_311B06C34EA76E07D9E9649BA0635FAB;// 0x0538(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_10F318BF4D5CACB49DA8678E8DA5CE33;// 0x0568(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_395FCBF6465BDF0A4203FA9B9D20C96E;// 0x0590(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8BFD4B8849F87AE6ECA7249FBDD8FE57;// 0x05F0(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F35F8FD24653A611C071C69153266B4B;// 0x0620(0x0080)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9A6FBB264A2969DB2F8CF388DBE4DA9A;// 0x06A0(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6F2E733B4133CC193331C187C48AD658;// 0x06E0(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0775D2E6443C38E09B568EB999CDE9C4;      // 0x0708(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E1EE5B914C86F042753C3F89344AF0ED;// 0x0740(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_82C0B52F477007645409ABACB4B786BE;// 0x0768(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7E7C9D3E41672C2A5105B6B73C1A0956;// 0x07E8(0x0080)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9700A89C4B5E537694003AA3CB4500EF;// 0x0868(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_06A5678B4BA6669AC7A2FE86D1CA17D5;      // 0x0890(0x0038)
	bool                                               IsRunning;                                                // 0x08C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTargeting;                                              // 0x08C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x08CA(0x0002) MISSED OFFSET
	float                                              HideLeftArmWeight;                                        // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HideLeftArm;                                              // 0x08D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x08D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x08D2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x08D3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x08D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x08D5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x08D6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x08D7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x08D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08D9(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x08DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x08E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x08E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x08F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x08F1(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x08F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0900(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0908(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTargeting_ReturnValue;                         // 0x0909(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x090A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x090B(0x0001) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x090C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue2;                          // 0x0910(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVPlacerWeaponAnimBP_Base.FPVPlacerWeaponAnimBP_Base_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_TransitionResult_2388();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_TransitionResult_2387();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_TransitionResult_2386();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_TransitionResult_2385();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_TransitionResult_2384();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_TransitionResult_2383();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_LayeredBoneBlend_130();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
