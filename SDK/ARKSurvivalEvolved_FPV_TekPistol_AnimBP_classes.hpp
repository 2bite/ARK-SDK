#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_TekPistol_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPV_TekPistol_AnimBP.FPV_TekPistol_AnimBP_C
// 0x07F4 (0x0B34 - 0x0340)
class UFPV_TekPistol_AnimBP_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_4B97E29F419BD71965B1BC9B3E07791C;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_42F41B4F47C777324CC6BD850BFE1612;      // 0x0368(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C74F70C4ECFF5974130828590EB2750;// 0x03A0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_539F24184EAFC42D47FF3CBA7D1D6CAC;// 0x03B8(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8FD16419469938AD47EE69BFB4BEAD53;// 0x03D0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D5879DBB4E62804ECBA1FC94E00BF750;// 0x0400(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_48BE00F14F5DFB9A613A75A62B765185;// 0x0428(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_99E4EAFF4F832A3E72CF4E8262A1E9DC;// 0x0458(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_ADD408E44B602D96A278FA8B61E00337;// 0x0480(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_52ECC5C142C606EC6BDF96AFECFD73BA;// 0x04E0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B3300F4E49C44523FD0AF084B60E79FA;// 0x0530(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3146132C4299489CF5EC34AF79535503;// 0x0548(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6B731E954AEFFB7677AF64AA163C992F;// 0x0560(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_64F368EC4000A4D20938C3BB7FCC9A92;// 0x0578(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2C80AE0F436F84B28AF6C792705289D2;// 0x0590(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4E18CD1141EE6D697F9EB79E350E6E83;// 0x05A8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_294F611F4F3F4BDCCCE587946A180868;// 0x05C0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_89A0DA3B4924859DCD3246A52523936C;// 0x05D8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_371B37EA498FFEBB78C8269E33CDE190;// 0x05F0(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7A39C7F64313184413C348B42E4D8187;// 0x0608(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CB1BF33B437B1053DC84DF8A895FC0CC;// 0x0638(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_778C6D2C4B363014810097AAF3B5FF02;// 0x0660(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0D82BC3D4D499FA81B75C4B1AE8EE847;// 0x0690(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B0BB1B2040C7E1E5A200EF91977D5450;// 0x06B8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2B4396094E9CC3FAF59FF9847F5CA4E8;// 0x06E8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_556363774B994AED720C3AB003B2F725;// 0x0710(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3D9728D445396129E18F3689FCFA1E88;// 0x0740(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4217D6644C5DAAFE9FE5ADA08778414A;// 0x0768(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DCBD98504398BD7575D915AA985613BC;// 0x0798(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D9342F824FE2B1121B8877B663D407C8;// 0x07C0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E7EACF4C413DECEE44F43EA68A213271;// 0x07F0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E56B5C714C8BC6A8FA573EBB2C964FBF;// 0x0818(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F60879DF4E1ADFE4745FE58DB54A7972;// 0x0848(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_693D10ED4D11844F91CDEA9E714191D5;// 0x0870(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_9481F87E4419CE880ADBC6BA241490C5;// 0x08D0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_239721674DF1EC913176FBA515F3C8CF;// 0x0920(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CBB467B545E6D143E27B9B898F9D86F0;// 0x0938(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_848E1BC548B11725BD2ECFA4B2071000;// 0x0950(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15D48E38482D538D98AECAA0F45E6627;// 0x0968(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_75D4A77C4E1E599C33E1318A4B85F1D4;// 0x0998(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A46383DE482CD125A5BD84B50FC6C92E;// 0x09C0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_976F45B243CB123905C729B1F5880384;// 0x09F0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_703F628746826461A85AD28F918B9876;// 0x0A18(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DA833D174A87A0AA3D79C6A86B246E76;// 0x0A48(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_979CE2624145F7CF7CA28C89EF87F1EF;// 0x0A70(0x0060)
	bool                                               IsRunning;                                                // 0x0AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMoving;                                                // 0x0AD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTargeting;                                              // 0x0AD2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFiring;                                                 // 0x0AD3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FireMode;                                                 // 0x0AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasFiring;                                                // 0x0AD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x0AD9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x0ADA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x0ADB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue3;                  // 0x0ADC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue2;                    // 0x0ADD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue3;                    // 0x0ADE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0ADF(0x0001) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;       // 0x0AE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x0AE4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0AE5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0AE6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0AE7(0x0001) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue2;      // 0x0AE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0AEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x0AED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0AEE(0x0002) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue3;      // 0x0AF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x0AF4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0AF5(0x0003) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue4;      // 0x0AF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue3;                    // 0x0AFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0AFD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0AFE(0x0002) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0B00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0B04(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0B08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AWeapTekPistol_C*                            K2Node_DynamicCast_AsWeapTekPistol_C;                     // 0x0B10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0B18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0B19(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x0B20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0B28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0B30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFiring_ReturnValue;                            // 0x0B31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTargeting_ReturnValue;                         // 0x0B32(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x0B33(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_TekPistol_AnimBP.FPV_TekPistol_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_TekPistol_AnimBP_AnimGraphNode_TransitionResult_2366();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_TekPistol_AnimBP_AnimGraphNode_TransitionResult_2365();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_TekPistol_AnimBP_AnimGraphNode_TransitionResult_2364();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_TekPistol_AnimBP_AnimGraphNode_TransitionResult_2363();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_TekPistol_AnimBP_AnimGraphNode_TransitionResult_2362();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_TekPistol_AnimBP_AnimGraphNode_TransitionResult_2361();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_TekPistol_AnimBP_AnimGraphNode_TransitionResult_2360();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_TekPistol_AnimBP_AnimGraphNode_TransitionResult_2359();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_TekPistol_AnimBP_AnimGraphNode_TransitionResult_2358();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_TekPistol_AnimBP_AnimGraphNode_TransitionResult_2357();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_TekPistol_AnimBP_AnimGraphNode_TransitionResult_2356();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_TekPistol_AnimBP_AnimGraphNode_TransitionResult_2355();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_TekPistol_AnimBP_AnimGraphNode_TransitionResult_2354();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_TekPistol_AnimBP_AnimGraphNode_TransitionResult_2353();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_StartedFiring();
	void ExecuteUbergraph_FPV_TekPistol_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
