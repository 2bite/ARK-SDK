#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForestKaiju_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ForestKaiju_AnimBlueprint.ForestKaiju_AnimBlueprint_C
// 0x0C7C (0x0FBC - 0x0340)
class UForestKaiju_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_955B0964409E24A5C6C92597333FD24F;// 0x0340(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_383F79DF4997317768E5D88B8E172C1C;// 0x03F0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CC04B798475C558D6CAD0DBC68226323;// 0x04A0(0x0028)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_5DED87AD4F26C634DB6731AF32CCC2F4;// 0x04C8(0x00B8)
	struct FAnimNode_MultiFabrik_Dinos                 AnimGraphNode_MultiFabrik_Dinos_FB8A4E5B49F8B54BFA59AE82817E2BA2;// 0x0580(0x0058)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05D8(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F967EBE64E75E0F1B5FBC1B452212C1E;// 0x05E0(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_28A569EB43785F94A07F7C9FB4B840AD;// 0x0690(0x0028)
	struct FAnimNode_Root                              AnimGraphNode_Root_5D9CB9324DD33738D995F28F54ABB101;      // 0x06B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2E39A91B4CF59557BC4CE4A09249FF38;// 0x06E0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F18417F84D2298323A4839B879241E4B;// 0x06F8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_994BD4C34E47F3F3F31748B9CC3549AE;// 0x0710(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_98B40B464DFA3AD8E653ABABBE6A9377;// 0x0728(0x0018)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_5A016735450FCD6A11B702BBDB2F34DB;// 0x0740(0x00F8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3CC36B8D4F633792E7505C8B9F2A9379;// 0x0838(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2D4D7C4B458D6AAFDF283DB780552291;// 0x0860(0x0060)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_73D39D164B28B1680C4B8191C90BCE46;// 0x08C0(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EE790DC1439EB94B788FD78FE6F0F23C;// 0x09A0(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_3C8C93E642435C456374D785FFB0109E;// 0x09C8(0x00F8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4F2B8FD240B07805C06692853A929BB8;// 0x0AC0(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AFD02C7E43BEA843184B9D8B832CE992;// 0x0AE8(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CE61615A4D2A70003864B68AE31C1E0B;// 0x0BC8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C779A7F9468399238B422E9D4E18F7B0;// 0x0C28(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A6BFE96D40B50C2CE608C49BF98FF4FC;// 0x0C50(0x0028)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3FA4FDEB4D4541C0C673168AB5637BBC;// 0x0C78(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8BA2721B4F29F387C2C082A1271AC2FA;// 0x0CA0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1437C1914C76F3A0BCA2D88D5757DE54;// 0x0D00(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7B60914946AEA71125173E8D29ECCD45;      // 0x0D30(0x0038)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_F460389F415AC128A5C7B682AE0EFD5F;// 0x0D68(0x00F8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_09BCCD044BF1AA1A31007C9396204030;// 0x0E60(0x0040)
	struct FRotator                                    RootRotationOffset;                                       // 0x0EA0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x0EAC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x0EB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x0EBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKStrength;                                               // 0x0EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKStrengthTarget;                                         // 0x0EC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrabAttacking;                                            // 0x0EC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrabAttackRightArm;                                       // 0x0EC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0ECA(0x0002) MISSED OFFSET
	float                                              GrabAttackBlendSpaceUpDown;                               // 0x0ECC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrabAttackBlendSpaceLeftRight;                            // 0x0ED0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrabAttackBlendSpaceTime;                                 // 0x0ED4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrabAttackRateScale;                                      // 0x0ED8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrabAttackVinesRetracted;                                 // 0x0EDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0EDD(0x0003) MISSED OFFSET
	float                                              ProtectingAlpha;                                          // 0x0EE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ProtectingIdle;                                           // 0x0EE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0EE5(0x0003) MISSED OFFSET
	int                                                FrameCount;                                               // 0x0EE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrabAttackShakeIdleOffsetTimeSeconds;                     // 0x0EEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0EF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0EF1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0EF2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x0EF3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0EF4(0x0004) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x0EF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AForestKaiju_Character_BP_C*                 K2Node_DynamicCast_AsForestKaiju_Character_BP_C;          // 0x0F00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0F08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0F09(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue2;                    // 0x0F10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AForestKaiju_Character_BP_C*                 K2Node_DynamicCast_AsForestKaiju_Character_BP_C2;         // 0x0F18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0F20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0F21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0F22(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0F23(0x0001) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0F24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue3;                    // 0x0F28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AForestKaiju_Character_BP_C*                 K2Node_DynamicCast_AsForestKaiju_Character_BP_C3;         // 0x0F30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0F38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0F39(0x0003) MISSED OFFSET
	float                                              CallFunc_Montage_Play_ReturnValue;                        // 0x0F3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0F40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x0F44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x0F48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x0F4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x0F50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x0F51(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x0F52(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0F53(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x0F54(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0F55(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x0F58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x0F5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0F60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue3;               // 0x0F64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsets_RootRotOffset;                     // 0x0F68(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsets_TheRootYawSpeed;                   // 0x0F74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsets_RootLocOffset;                     // 0x0F78(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsets_ReturnValue;                       // 0x0F84(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x0F90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x0F94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x0F98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x0F9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x0FA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x0FA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x0FA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x0FAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x0FB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x0FB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x0FB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ForestKaiju_AnimBlueprint.ForestKaiju_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ForestKaiju_AnimBlueprint_AnimGraphNode_ModifyBone_743();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ForestKaiju_AnimBlueprint_AnimGraphNode_ModifyBone_742();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ForestKaiju_AnimBlueprint_AnimGraphNode_MultiFabrik_Dinos_150();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ForestKaiju_AnimBlueprint_AnimGraphNode_ModifyBone_744();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ForestKaiju_AnimBlueprint_AnimGraphNode_TransitionResult_1662();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ForestKaiju_AnimBlueprint_AnimGraphNode_TransitionResult_1661();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ForestKaiju_AnimBlueprint_AnimGraphNode_TransitionResult_1660();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ForestKaiju_AnimBlueprint_AnimGraphNode_TransitionResult_1659();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ForestKaiju_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_246();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ForestKaiju_AnimBlueprint_AnimGraphNode_BlendListByBool_3882();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ForestKaiju_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_186();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ForestKaiju_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_245();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ForestKaiju_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_185();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ForestKaiju_AnimBlueprint_AnimGraphNode_BlendListByBool_3881();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ForestKaiju_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_244();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ForestKaiju_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
