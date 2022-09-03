#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_MiniGun_TPV_Turret_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SK_MiniGun_TPV_Turret_RIG_AnimBlueprint.SK_MiniGun_TPV_Turret_RIG_AnimBlueprint_C
// 0x01F8 (0x0538 - 0x0340)
class USK_MiniGun_TPV_Turret_RIG_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_73BABD4B4630BF890CDD97AFF012C49A;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6B49C4644E0B33687E0B30BC9F5F9648;// 0x0368(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_79223086422DDD643E122FBDFF29785C;// 0x0398(0x00F8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3B0773E84C1F9ADFB58C0B93C31C3C8B;// 0x0490(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_05FA14A046DCE51B5FD5C5AF0665AC0F;// 0x04E0(0x0030)
	float                                              YawRotation;                                              // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchRotation;                                            // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpinRate;                                                 // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AStructureMinigunBP_C*                       K2Node_DynamicCast_AsStructureMinigunBP_C;                // 0x0528(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0530(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0534(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_MiniGun_TPV_Turret_RIG_AnimBlueprint.SK_MiniGun_TPV_Turret_RIG_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MiniGun_TPV_Turret_RIG_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_182();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MiniGun_TPV_Turret_RIG_AnimBlueprint_AnimGraphNode_SequencePlayer_4007();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SK_MiniGun_TPV_Turret_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
