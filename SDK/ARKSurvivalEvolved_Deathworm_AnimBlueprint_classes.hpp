#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deathworm_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Deathworm_AnimBlueprint.Deathworm_AnimBlueprint_C
// 0x0628 (0x0968 - 0x0340)
class UDeathworm_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_CFF4A96944B38C20EDC066BC94E1B628;      // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E7146F694055C55380B001AE63B41257;// 0x0368(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_96F8291C41157B73A8AC088C90822FC3;// 0x0380(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A9E899CC48521880815FB3B7877D0742;// 0x0398(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9EBD37104522759DFF931D95455F88F9;// 0x03B0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_399D803B4896CBDB7046B08FCDA1C387;// 0x03C8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F2AD59AE49B82A3361FE04B3A84705F1;// 0x03E0(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4B4E4832493212299A9477AFECEEFB61;// 0x03F8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_47081A314FF2E60BCE1F5FB7EDB9CD3A;// 0x0428(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C4D91D7B4021DD0E1549D79C4B5E5573;// 0x0450(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_314750614B6C27F1EB1EDE81E9736224;// 0x0480(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0E8E130240F31222C619F39B5D0A0CDE;// 0x04A8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_51AE0A424EDCC223F1BC6885CF6E682D;// 0x04D8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C18A56A64B5B3673FE7802BDC3B545DA;// 0x0500(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D063D6CD41C9FC0E94E5FCBBCA43DBC6;// 0x0530(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0B1F9D9E48D03E816115DDB638E47754;// 0x0558(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AFFD668343AA995AB5D2E39C39BA8D97;// 0x0588(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A81CFC5D460FCD67115E908E42AC62E0;// 0x05B0(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B368E5AF43AD0F656248FE8C8D11260E;      // 0x0610(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CE55327E41443ED752B5FF9F20E338A9;      // 0x0648(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3753B438428D02A6D7BEAD8631918275;// 0x0680(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4AEF33F54406DA03A703DEB5A3D293CE;// 0x0730(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D563D4BE4EF47EDA4E429E8885891D3D;// 0x0758(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_F716FD4C42C6EEFDA55329A375324A6C;// 0x0780(0x00F8)
	bool                                               bIsUnderground;                                           // 0x0878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDead;                                                  // 0x0879(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x087A(0x0002) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x087C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x0888(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x0894(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetYawScale;                                        // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetPitchScale;                                      // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PopUpPlayRate;                                            // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;       // 0x08B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x08B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x08B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x08BA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x08BB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x08BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08BD(0x0003) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x08C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x08C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x08D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x08D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08D9(0x0003) MISSED OFFSET
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x08DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x08E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x08E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x08E2(0x0002) MISSED OFFSET
	float                                              K2Node_Select_ReturnValue;                                // 0x08E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x08E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x08E9(0x0003) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue2;      // 0x08EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue2;               // 0x08F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x08F1(0x0003) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue3;      // 0x08F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x08F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue3;               // 0x08F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x08FA(0x0002) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x08FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue2;                    // 0x0900(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADeathworm_Character_BP_C*                   K2Node_DynamicCast_AsDeathworm_Character_BP_C;            // 0x0908(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0910(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0911(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_GetAimOffsets_RootRotOffset;                     // 0x0914(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsets_TheRootYawSpeed;                   // 0x0920(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsets_RootLocOffset;                     // 0x0924(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsets_ReturnValue;                       // 0x0930(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x093C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x0940(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x0944(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x0948(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x094C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0950(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x0954(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x0958(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x095C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x0960(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x0964(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Deathworm_AnimBlueprint.Deathworm_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Deathworm_AnimBlueprint_AnimGraphNode_TransitionResult_1512();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Deathworm_AnimBlueprint_AnimGraphNode_TransitionResult_1511();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Deathworm_AnimBlueprint_AnimGraphNode_TransitionResult_1510();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Deathworm_AnimBlueprint_AnimGraphNode_TransitionResult_1509();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Deathworm_AnimBlueprint_AnimGraphNode_TransitionResult_1508();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Deathworm_AnimBlueprint_AnimGraphNode_TransitionResult_1507();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Deathworm_AnimBlueprint_AnimGraphNode_SequencePlayer_4978();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Deathworm_AnimBlueprint_AnimGraphNode_ModifyBone_774();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Deathworm_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_276();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Deathworm_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
