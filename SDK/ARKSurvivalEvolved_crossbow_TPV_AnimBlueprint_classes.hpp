#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_crossbow_TPV_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass crossbow_TPV_AnimBlueprint.crossbow_TPV_AnimBlueprint_C
// 0x01DB (0x051B - 0x0340)
class Ucrossbow_TPV_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_552647944FE47FC6C97202925667A53E;      // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0E0D6482457C0809F877D398A74AD865;// 0x0368(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5B61D4B04E0B2DC15F4C73B96745E710;// 0x0380(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D19FE2714254D999A25F4F81ABF93FB0;// 0x0398(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8709CF144CEA848F88EE4CA66E570BD1;// 0x03C8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F0AAB52449B0770D98B4AB89F5E8C4C6;// 0x03F0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_87B0AB2B4F188C582DAEBAAADD636482;// 0x0420(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_38673D4C4F83ACCEE9D046A51100AE26;// 0x0448(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FECE4AB8448EB2D9355DD799E1895B17;      // 0x04A8(0x0038)
	bool                                               bHasAmmoClip;                                             // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x04E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04E2(0x0002) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x04E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x04E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x04F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x04F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	class AWeapCrossbow_Flame_C*                       K2Node_DynamicCast_AsWeapCrossbow_Flame_C;                // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0508(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
	class AWeapCrossbow_Flame_C*                       K2Node_DynamicCast_AsWeapCrossbow_Flame_C2;               // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0518(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x0519(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x051A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass crossbow_TPV_AnimBlueprint.crossbow_TPV_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_crossbow_TPV_AnimBlueprint_AnimGraphNode_TransitionResult_1292();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_crossbow_TPV_AnimBlueprint_AnimGraphNode_TransitionResult_1291();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_HideFire();
	void AnimNotify_ShowFire();
	void ExecuteUbergraph_crossbow_TPV_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
