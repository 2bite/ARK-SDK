#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TEKHoverSkiff_Turret_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TEKHoverSkiff_Turret_AnimBlueprint.TEKHoverSkiff_Turret_AnimBlueprint_C
// 0x04E4 (0x0824 - 0x0340)
class UTEKHoverSkiff_Turret_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_12E08E6F4A49269EF8B91E826E3DCE5F;      // 0x0340(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0517F53847451EBFD868F8A7C1BB6248;// 0x0368(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B504DEC04BCDCB7D5D2CB0935CDA6A28;// 0x0448(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11EE43CD419C0BEF3462E49AD14590FF;// 0x0498(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0C9697744E97103BF43C7F8A967757AB;// 0x04C8(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_56CA06304320E5183C3B7DBDDC0C9849;// 0x0528(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7F88D2264BBD7A256EBE76A89AA4DFE0;// 0x0568(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_133B78504E1A4984850C67AF7BF711E1;// 0x0590(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C44CC3D64150D8D6A5DD3BBF1DCFCD38;// 0x05B8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34DAAED742ADAAC6AC728E897A0F79EA;// 0x0618(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3DBE63764A4B5CD5EC9FB2BFDD801199;// 0x0648(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_375481184993B95BA561739BD4993EE4;// 0x06A8(0x0030)
	struct FRotator                                    aimPitchRot;                                              // 0x06D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AimYawRot;                                                // 0x06E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    finalRot;                                                 // 0x06F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchRangeMin;                                            // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchRangeMax;                                            // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawRangeMin;                                              // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawRangeMax;                                              // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFiring;                                                // 0x070C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x070D(0x0003) MISSED OFFSET
	float                                              FiringBlendTime;                                          // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchBSMin;                                               // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchBSMax;                                               // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawBSMin;                                                 // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawBSMax;                                                 // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsOpen;                                                  // 0x0724(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0725(0x0003) MISSED OFFSET
	struct FVector2D                                   OpenBlendTimes;                                           // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLocked;                                                  // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0731(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x0734(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x0738(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x073C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRangeToCurveClamped_ReturnValue;              // 0x0740(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRangeToCurveClamped_ReturnValue2;             // 0x0744(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X;                                 // 0x0748(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y;                                 // 0x074C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0750(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0754(0x0004) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x0758(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ATekHoverSkiff_Character_BP_C*               K2Node_DynamicCast_AsTekHoverSkiff_Character_BP_C;        // 0x0760(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0768(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0769(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakRot_Pitch2;                                 // 0x076C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw2;                                   // 0x0770(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll2;                                  // 0x0774(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0778(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue;                        // 0x0780(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x07B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07B1(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakRot_Pitch3;                                 // 0x07B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw3;                                   // 0x07B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll3;                                  // 0x07BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x07C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x07CC(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Conv_RotatorToString_ReturnValue;                // 0x07D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x07E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_InverseTransformDirection_ReturnValue;           // 0x07EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotFromX_ReturnValue;                        // 0x07F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0804(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Conv_RotatorToString_ReturnValue2;               // 0x0808(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                                    CallFunc_QInterpTo_ReturnValue;                           // 0x0818(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TEKHoverSkiff_Turret_AnimBlueprint.TEKHoverSkiff_Turret_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_Turret_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_492();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_Turret_AnimBlueprint_AnimGraphNode_BlendListByBool_6678();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_Turret_AnimBlueprint_AnimGraphNode_BlendListByBool_6677();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_Turret_AnimBlueprint_AnimGraphNode_BlendListByBool_6676();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_TEKHoverSkiff_Turret_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
