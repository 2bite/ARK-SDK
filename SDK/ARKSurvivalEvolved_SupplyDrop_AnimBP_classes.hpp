#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyDrop_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SupplyDrop_AnimBP.SupplyDrop_AnimBP_C
// 0x0270 (0x05B0 - 0x0340)
class USupplyDrop_AnimBP_C : public UAnimInstance
{
public:
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C36587EC4E15BF6677A083A899FC2F77;      // 0x0340(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_070A4E56402863FFD2087AB897313FC6;      // 0x0378(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_799F5F2C4E8D5FD3BE1301B7556C21EC;      // 0x03B0(0x0038)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_18946A5A46B504734A7BAD89B5A05A69;// 0x03E8(0x0040)
	struct FAnimNode_Root                              AnimGraphNode_Root_785D35414C099FAAA684D1A7F9C036A8;      // 0x0428(0x0028)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_A7EFA9D749DC79C9579072965C9B786B;// 0x0450(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E12FA5A449F07EF8F0D0FDA4CE762613;// 0x0470(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1DA800784BF4F5022CCD3BA653943C0B;// 0x0498(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_59CF857649DFDFDC9F020E91C627A621;// 0x04C0(0x00B0)
	float                                              AnimIncrementTime;                                        // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TowerBaseRotation;                                        // 0x0574(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSpin;                                              // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0581(0x0003) MISSED OFFSET
	float                                              CurrentTopRotation;                                       // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpinInterpSpeed;                                          // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpinInterpMultiplier;                                     // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0590(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0594(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x0598(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x059C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Percent_FloatFloat_ReturnValue;                  // 0x05A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x05A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SupplyDrop_AnimBP.SupplyDrop_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SupplyDrop_AnimBP_AnimGraphNode_SequenceEvaluator_6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SupplyDrop_AnimBP_AnimGraphNode_ModifyBone_792();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SupplyDrop_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
