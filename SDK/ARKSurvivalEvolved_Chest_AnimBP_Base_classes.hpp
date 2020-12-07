#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Chest_AnimBP_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Chest_AnimBP_Base.Chest_AnimBP_Base_C
// 0x0140 (0x0480 - 0x0340)
class UChest_AnimBP_Base_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_9F1291B3407708B909B4F0A375E3F8E0;      // 0x0340(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_841CF3DC40F5CC5CF00EDE9663FF07F3;// 0x0368(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B7B403FE4854938A04A4159B00E5BB70;// 0x03C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F78D2A1C443BFE2EA8E967BC04D14496;// 0x03F8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8E49264242FCE1AC9C5E4DA2500B2029;      // 0x0428(0x0038)
	bool                                               bIsUnlocked;                                              // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AExplorerChest_Base_C*                       K2Node_DynamicCast_AsExplorerChest_Base_C;                // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0478(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x047C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Chest_AnimBP_Base.Chest_AnimBP_Base_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chest_AnimBP_Base_AnimGraphNode_BlendListByBool_6294();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Chest_AnimBP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
