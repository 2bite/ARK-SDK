#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_compoundBow_TPV_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass compoundBow_TPV_AnimBlueprint.compoundBow_TPV_AnimBlueprint_C
// 0x0260 (0x05A0 - 0x0340)
class UcompoundBow_TPV_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_C3C0D6AD4F7303EB60C69F8D09A9F5C4;      // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_443B71C84C86601ECFEB21AB10B0E85D;// 0x0368(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F2F53E764A3F2C241F66ABA5198D1BD1;// 0x0380(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AA08BC0244042421C6DDE18BB9667F0C;// 0x0398(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_315D9E3A411092D0265E0EB3ED1771CB;// 0x03B0(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FCFF8BCD4185A3EC68EB7CA5B271A0FD;// 0x03C8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_430DD7FE4247F693810B31BC7B2B2170;// 0x03F8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E905746546C261E649FA1DBCD36244E9;// 0x0420(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_232E8A264E1DD53A6C10D2A3A012A062;// 0x0450(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF81805A4178A6B48F8DC8855F1A288A;// 0x0478(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_915A80264BDB1AAF5DB574A994FA5033;// 0x04A8(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D5C6316448248D04ABB44783940CF852;// 0x04D0(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_86C19447476D849315D53CB0D35187CA;      // 0x0530(0x0038)
	bool                                               IsPullingString;                                          // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0569(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x0578(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0580(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0581(0x0007) MISSED OFFSET
	class APrimalWeaponBow*                            K2Node_DynamicCast_AsPrimalWeaponBow;                     // 0x0588(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0590(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0591(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0592(0x0002) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;       // 0x0594(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0598(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x0599(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x059A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x059B(0x0001) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x059C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass compoundBow_TPV_AnimBlueprint.compoundBow_TPV_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_compoundBow_TPV_AnimBlueprint_AnimGraphNode_TransitionResult_1288();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_compoundBow_TPV_AnimBlueprint_AnimGraphNode_TransitionResult_1287();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_compoundBow_TPV_AnimBlueprint_AnimGraphNode_TransitionResult_1286();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_compoundBow_TPV_AnimBlueprint_AnimGraphNode_TransitionResult_1285();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_compoundBow_TPV_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
