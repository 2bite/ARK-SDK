#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FishingNet_Projectile_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FishingNet_Projectile_AnimBP.FishingNet_Projectile_AnimBP_C
// 0x03E6 (0x0726 - 0x0340)
class UFishingNet_Projectile_AnimBP_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_BAC0066140C96661F3473E9B8B13E366;      // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_05D8ABEC4F4141E8798F998C48808DB2;// 0x0368(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11195838445EB950A94EF9BC3EF48AE1;// 0x0380(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F50C23C646A9160963260BB8A10FC952;// 0x0398(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_645F17264005BD136367739CB9DC7484;// 0x03B0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DD851E5E4BD916A82C6B3BB1FA84F39D;// 0x03C8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_837AD8804AFE3B255553E0806D0FB995;// 0x03E0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A7CDBAEE442A713A366D23BA1287CB0C;// 0x03F8(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F623EE6B4FE38C87A43C03B5DE00665A2;// 0x0410(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_996831784C28AD6954DF6E8F0169FEC42;// 0x0440(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4C2B9444403B00F446BEDDA2F2E15084;// 0x0468(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7E0CCA6B4B9486338D07C9AEA8E8713B;// 0x0498(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E484937F4955E4A86A64D79DCE60B73B;// 0x04C0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A6A059044E40AE0D257BC99BA79A377C;// 0x04F0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4A150D794D87CB27BDF340863C3E17C0;// 0x0518(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_49DDEE684EE36BC4C3D7B2997A60FFF5;// 0x0548(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AB524C944F679BC257701AB865B20307;// 0x0570(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2AAA1C0844C11923FF6AE089422E0772;// 0x05A0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F623EE6B4FE38C87A43C03B5DE00665A;// 0x05C8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_996831784C28AD6954DF6E8F0169FEC4;// 0x05F8(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E212A6A746A3205941BDE1A35544FB39;// 0x0620(0x0060)
	bool                                               Has_Hit_Water;                                            // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Hit_Ground;                                           // 0x0681(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               reeling;                                                  // 0x0682(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Open_In_The_Air;                                          // 0x0683(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time_Before_Net_Opens_In_Air_Local_First_Person;          // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Local_Controller_Is_Owner_And_Is_First_Person;            // 0x0688(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0689(0x0003) MISSED OFFSET
	float                                              Time_Before_Net_Opens_In_Air_Third_Person;                // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0690(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0694(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0698(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x06A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x06A1(0x0007) MISSED OFFSET
	class AProjFishingNet_C*                           K2Node_DynamicCast_AsProjFishingNet_C;                    // 0x06A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x06B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x06B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x06C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x06C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x06C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x06CA(0x0006) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x06D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x06D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x06D9(0x0007) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x06E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x06E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x06F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x06F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x06F2(0x0006) MISSED OFFSET
	class AShooterPlayerCameraManager*                 K2Node_DynamicCast_AsShooterPlayerCameraManager;          // 0x06F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0700(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0701(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_GetCameraStyle_ReturnValue;                      // 0x0704(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x070C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x070D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x070E(0x0002) MISSED OFFSET
	TArray<class AShooterPlayerController*>            CallFunc_GetAllLocalPlayerControllers_ReturnValue;        // 0x0710(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Find_ReturnValue;                          // 0x0720(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue;                 // 0x0724(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue2;                        // 0x0725(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FishingNet_Projectile_AnimBP.FishingNet_Projectile_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FishingNet_Projectile_AnimBP_AnimGraphNode_TransitionResult_3039();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FishingNet_Projectile_AnimBP_AnimGraphNode_TransitionResult_3038();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FishingNet_Projectile_AnimBP_AnimGraphNode_TransitionResult_3037();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FishingNet_Projectile_AnimBP_AnimGraphNode_TransitionResult_3036();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FishingNet_Projectile_AnimBP_AnimGraphNode_TransitionResult_3035();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FishingNet_Projectile_AnimBP_AnimGraphNode_TransitionResult_3034();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FishingNet_Projectile_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
