#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TPV_MinigunTurret_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TPV_MinigunTurret_AnimBP.TPV_MinigunTurret_AnimBP_C
// 0x01F8 (0x0538 - 0x0340)
class UTPV_MinigunTurret_AnimBP_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_B13FFF7F40EE5B6BD6D3C2AC7EC295E5;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FC097BE44E2D7A0369301F890207D41A;// 0x0368(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_680B724A420F91C0EC1887A94C19EDF6;// 0x0398(0x00F8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C05379504FF407CD2D380699E83A3FC6;// 0x0490(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B5C5D01547408927FBDC2BBC738C21F1;// 0x04E0(0x0030)
	float                                              YawRotation;                                              // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchRotation;                                            // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpinRate;                                                 // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AWeapMinigun_C*                              K2Node_DynamicCast_AsWeapMinigun_C;                       // 0x0528(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0530(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0534(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_MinigunTurret_AnimBP.TPV_MinigunTurret_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_MinigunTurret_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_184();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_MinigunTurret_AnimBP_AnimGraphNode_SequencePlayer_4011();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_TPV_MinigunTurret_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
