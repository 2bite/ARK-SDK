#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_gliderPack_wings_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SK_gliderPack_wings_AnimBlueprint.SK_gliderPack_wings_AnimBlueprint_C
// 0x05E6 (0x0926 - 0x0340)
class USK_gliderPack_wings_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_4E075C5F40C8FCBFD553CB8124DC0452;      // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_39F5091F4B1ACC2793D1439328F94B59;// 0x0368(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30D1A4954621213CF693E1A3C2C1747D;// 0x0380(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_45BCAA304FAFD876B51609B0919C39DA;// 0x0398(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2B9C573643CE41B7B0FC749BB7CF7C4E;// 0x03B0(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A3AB732F49A3BA2F8430A595682A696D;// 0x03C8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BD9BBA7348FAFE88C763CD84F424EB48;// 0x03F8(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3A72434644C35A6F27D88C88CE8306E5;// 0x0420(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4C5CFA91477028AE7061B3A3B808F177;// 0x0500(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EA9DD78945C14AFD4541B9BF3C535547;// 0x05B0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FD0446D5440D4D2E210383ABA6D35519;// 0x0660(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_34E7F56545F37630418A4AACE97C2EFA;// 0x0688(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8B3D7792445A2164B785E8A212499C11;// 0x06B0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D6799EE845D5B2ACF01C31BB969888DF;// 0x0760(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8CCEBF6B45A69A1996294FAB6C497717;// 0x0788(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_13B6F64848B21B10A7A0B38DA1CD0D86;// 0x07B8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A5F3B0814D06FA6EA58E95BDBA4A66EC;// 0x07E0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_445548A94787B6CF2ADD5E837BD79401;// 0x0810(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D5736E7C45235729B4E3D9A560EF9A70;// 0x0838(0x0060)
	bool                                               bIsClosing;                                               // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsOpen;                                                  // 0x0899(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x089A(0x0002) MISSED OFFSET
	float                                              WingExtension;                                            // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    WingAimOffsetAdjustment;                                  // 0x08A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WingsOffset_Location;                                     // 0x08AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShooterCharacter*                           GlidingCharacter;                                         // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FirstPersonWingOffset;                                    // 0x08C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    WingsOffset_Rotation;                                     // 0x08CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WingCloseAnim_Duration;                                   // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponEquippedPitchAdjustment;                            // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue;// 0x08E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x08E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x08E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x08E6(0x0002) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue2;// 0x08E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x08EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08ED(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x08F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x08F4(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x08F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0900(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0908(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0909(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x0910(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_Glider_C*                              K2Node_DynamicCast_AsBuff_Glider_C;                       // 0x0918(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0920(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_ByteByte_ReturnValue;                    // 0x0921(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0922(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0923(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0924(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0925(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_gliderPack_wings_AnimBlueprint.SK_gliderPack_wings_AnimBlueprint_C");
		return ptr;
	}


	void UpdateWingOffsets(class AShooterCharacter* ShooterCharacter);
	void UpdateVelocity(class AShooterCharacter* ShooterCharacter, float DeltaTime);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_TransitionResult_1516();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_TransitionResult_1515();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_TransitionResult_1514();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_TransitionResult_1513();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_134();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_ModifyBone_520();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_ModifyBone_521();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_ModifyBone_522();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
