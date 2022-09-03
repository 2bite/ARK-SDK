#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tek_Fab_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Tek_Fab_RIG_AnimBlueprint.Tek_Fab_RIG_AnimBlueprint_C
// 0x0110 (0x0450 - 0x0340)
class UTek_Fab_RIG_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_B85AE1C747C336E8D7F755A11973A7B7;      // 0x0340(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E1CA70D946F281ADD68D04A3E27A3573;// 0x0368(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8FD35E3E45337128B9F865AC2FA66C3C;// 0x03C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CF7B7C9D4E507F05BBD8829D13D2F5EA;// 0x03F8(0x0030)
	bool                                               bIsActive;                                                // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      CallFunc_GetOwningComponent_ReturnValue;                  // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructureItemContainer*               K2Node_DynamicCast_AsPrimalStructureItemContainer;        // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0448(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x044C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Tek_Fab_RIG_AnimBlueprint.Tek_Fab_RIG_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Tek_Fab_RIG_AnimBlueprint_AnimGraphNode_BlendListByBool_2518();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Tek_Fab_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
