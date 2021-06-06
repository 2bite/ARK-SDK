#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_Minigun_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPV_Minigun_AnimBP.FPV_Minigun_AnimBP_C
// 0x05B4 (0x08F4 - 0x0340)
class UFPV_Minigun_AnimBP_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_23A617A84739DB00AC88489FED204366;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_75DAE235474594EA7F7E3B86F8BD6171;      // 0x0368(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D2D244F0451B238DC00142A16B9DE3B8;// 0x03A0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2E9A0C994FB8A4093493328D1EA0581A;// 0x03B8(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F4A0479D4DB19ACFEC64429C05794608;// 0x03D0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9A8167C34EED6F5ACC870988E63670A6;// 0x0400(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0ED08FC3444BEB27DECF7480CD24CE61;// 0x0428(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B90CF6B247758AF169D6C8964D999508;// 0x0440(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C696C9964E3E62B6E48470BEF63FD6BB;// 0x0458(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0BA60DDA484455479D7208BA5572AF4D;// 0x0470(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0366919B487B63498771FE859FDCE73B;// 0x0488(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4B7150F5487DA6C1F96E02AF650C5C00;// 0x04A0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4C4F0C144A89F572863F4FA8CE124CC3;// 0x04B8(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EE53113844F122199924B2BD6F651277;// 0x04D0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1AAB8AD74942238199967FBC2C8A7131;// 0x0500(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D79860FD463821168DFDA9824A55CEF8;// 0x0528(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4857FDDB490AB30974D04B82C9CEDB98;// 0x0558(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3BA683954F9C50AF793998BC842CF1CC;// 0x0580(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EFE24FB0494D17E81E1E6894FD0E296F;// 0x05B0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BE469B1948DF0228FC3D6DA08205895C;// 0x05D8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C1C322E94A9DE7F3A4C93CAEA9D34AA7;// 0x0608(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D30034954453662522B7089E5BADF021;// 0x0630(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B12E45924DD70E8F4BB4EAA1118A6E66;// 0x0660(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3D98A8B54CB9FC7BA54709BBE51757BE;// 0x0688(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_13AB69354B93470869D892B493A5EB63;// 0x06E8(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B396CE27442581FA8041C9B5FC6AE751;// 0x0710(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8224E3644ACA007118F159861BC245F1;// 0x0770(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5EC6A11F407E305AE96432AB07C368CA;// 0x07C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7177EB83450D3528C1D168983BF217A4;// 0x07F0(0x0030)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_F72FA200464CC53556B058908403FBDF;// 0x0820(0x0050)
	bool                                               IsRunning;                                                // 0x0870(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTargeting;                                              // 0x0871(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0872(0x0006) MISSED OFFSET
	class AWeapMinigun_C*                              WeapMinigun;                                              // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AShooterCharacter*                           Player;                                                   // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsActivated;                                              // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOverheated;                                             // 0x0889(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFiring;                                                 // 0x088A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x088B(0x0001) MISSED OFFSET
	float                                              Heat;                                                     // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpinRate;                                                 // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenAlpha;                                              // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsActivationAnimPlaying;                                  // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDeactivating;                                           // 0x0899(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSpinningUp;                                             // 0x089A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUpToSpeed;                                              // 0x089B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;       // 0x089C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x08A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08A1(0x0003) MISSED OFFSET
	float                                              CallFunc_Conv_BoolToFloat_ReturnValue;                    // 0x08A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x08A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue2;      // 0x08AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x08B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x08B1(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x08B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AWeapMinigun_C*                              K2Node_DynamicCast_AsWeapMinigun_C;                       // 0x08C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x08C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x08C9(0x0003) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue3;      // 0x08CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue3;                    // 0x08D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x08D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x08D2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x08D3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x08D4(0x0004) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x08D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFiring_ReturnValue;                            // 0x08E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x08E1(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x08E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x08F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x08F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x08F2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x08F3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_Minigun_AnimBP.FPV_Minigun_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_TransitionResult_2502();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_TransitionResult_2501();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_TransitionResult_2500();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_TransitionResult_2499();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_TransitionResult_2498();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_TransitionResult_2497();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_TransitionResult_2496();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_TransitionResult_2495();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_TransitionResult_2494();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_SequencePlayer_3925();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_SequencePlayer_3924();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_ApplyAdditive_263();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPV_Minigun_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
