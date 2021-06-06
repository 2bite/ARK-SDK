#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVGrenadeWeaponAnimBP_NoCooking_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPVGrenadeWeaponAnimBP_NoCooking.FPVGrenadeWeaponAnimBP_NoCooking_C
// 0x0349 (0x0689 - 0x0340)
class UFPVGrenadeWeaponAnimBP_NoCooking_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_2293BAB74B83ADD9725630BED84119E6;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_169A7A4141173289FD83BAB56CD44284;      // 0x0368(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_43EC1ADC45E034D54662E1A6892CCA3C;// 0x03A0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DE917CEE4C089B38906E9AB0DF0BD630;// 0x03B8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B6CF99E94971576EC66F2096F03DBFBE;// 0x03D0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BE962A4247D2B472B9044BA82CD002F9;// 0x03E8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2CCA0E224001897E1748839D783D4EAD;// 0x0400(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C14C86844FFCF2254E034E8CC2F614E7;// 0x0418(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_067D42194AF1CE9503C8B3850918BDE5;// 0x0430(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_07D749274956F91B2B92B6B9593CDF98;// 0x0448(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_70BCB3654674E10686F94787944D4A25;// 0x0478(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9DAC02774E39CAA2F5B0FA842EBBF671;// 0x04A0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2BE3204E4E78B02CF065B6BF02616075;// 0x04D0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B4CD2EA34BAF0DFD1BD7E6914419B40F;// 0x04F8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AD1D985E4AB45A07F9A628ACD1D71499;// 0x0528(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F3C004264726B0AA3FE0BC91E38E9C24;// 0x0550(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_529631DC4FA1A89012D2CA9C2AFD3162;// 0x0580(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F098B94640C1009EF499EFA1E558820C;// 0x05A8(0x0060)
	bool                                               IsRunning;                                                // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMoving;                                                 // 0x0609(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCooking;                                                // 0x060A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x060B(0x0001) MISSED OFFSET
	float                                              CookingTime;                                              // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0610(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0611(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0612(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0613(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0614(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x0615(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0616(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x0617(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x0618(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0619(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x061A(0x0002) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x061C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x0628(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0630(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0631(0x0007) MISSED OFFSET
	class APrimalWeaponGrenade*                        K2Node_DynamicCast_AsPrimalWeaponGrenade;                 // 0x0638(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0640(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0641(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x0648(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0650(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0658(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0659(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0x065C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x0668(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0669(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X;                                   // 0x066C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x0670(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x0674(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_MakeVector2D_ReturnValue;                        // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x0680(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0681(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x0684(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x0688(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVGrenadeWeaponAnimBP_NoCooking.FPVGrenadeWeaponAnimBP_NoCooking_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_NoCooking_AnimGraphNode_TransitionResult_2234();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_NoCooking_AnimGraphNode_TransitionResult_2233();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_NoCooking_AnimGraphNode_TransitionResult_2232();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_NoCooking_AnimGraphNode_TransitionResult_2231();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_NoCooking_AnimGraphNode_TransitionResult_2230();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_NoCooking_AnimGraphNode_TransitionResult_2229();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_NoCooking_AnimGraphNode_TransitionResult_2228();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPVGrenadeWeaponAnimBP_NoCooking(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
