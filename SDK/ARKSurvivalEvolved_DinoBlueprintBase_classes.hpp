#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoBlueprintBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DinoBlueprintBase.DinoBlueprintBase_C
// 0x0FFE (0x133E - 0x0340)
class UDinoBlueprintBase_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_3AF0AAE04DA65EC943172BA0D4BF27FB;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_93887199413501FDD9FD66AEF9E9FF53;// 0x0368(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BCFA904944691A7E6F72388FA8768B90;// 0x0398(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47029DC54992340FBEB824AFF3BE0E00;// 0x03F8(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_88D34ED042F1083AA15727B771352A8A;// 0x0428(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5A7BB25749E9A8ABD726999A77B0403B;// 0x0450(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7D1EA28C4B3932315378A5942D70D742;// 0x0500(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_026003D44D615BCE400F5F8DB7C373F3;      // 0x0528(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_235EC0A64E84469861C95BA449604AE8;      // 0x0560(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_02FF2FF24BF751D8138D629216768C22;      // 0x0598(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1C7EC7154728B4D30A66D3831BDB4EB5;// 0x05D0(0x0060)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_DFCD34FF45E1507E491E2CBD7D604606;// 0x0630(0x00F8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5E0329F44CA3E59D84ED898175B8D070;// 0x0728(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9ADCA484465F3B7B77ABD9AEEFB1909A;// 0x0768(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FFED7F044B169BCCF5F773B8A73BCF19;// 0x0790(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DF9A81C746CA2BE52CBBB9A6AF3D4FAE;// 0x07B8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7709E52B46CC3051EFB72E8498CDA681;// 0x0818(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E7AFA655476651FF06E12DAE17C5E0BA;// 0x0878(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_73DE69454AE78060A022E29FA942E9E7;// 0x08D8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CD90244B407A466BED5DE8A519E376B4;// 0x0908(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B81D7A9940BC438CA58D5DBBFF90D063;// 0x0938(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_160E8ECE4ED6A8192B4F88BCDBBEF0FD;// 0x0998(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6991CA48473A45931F49BC916640C526;// 0x09F8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1F2EEED542C4B3552D87898B188FFB0C;// 0x0A28(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9E9A244E4C7CCFF83A82F7B2A01A117C;// 0x0A58(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C519DCA04B677712ABF6E7BABD8FB555;// 0x0A88(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4E131BA04E59F0613E4AF58C1D05C2F1;// 0x0AB8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_28CB055A426FB994F6BFFDB9C78A11D0;// 0x0B18(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DE4070904F4546C1047F7FA915F84E9A;// 0x0B78(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9F82FDD040680BFED983D8B2A0F3FE77;// 0x0BA8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8514DE5440290DD0189B3D8573722886;// 0x0BD8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_103D4C574C78E88147F6EE807CFD7859;// 0x0C38(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2FA5C14B420BCCC54E7FD4BF84F6154B;// 0x0C98(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B43CCEE04A3F6063B16ED2A65F5C039F;// 0x0CC8(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8B02FBF3465A1C65A27FE28B5272A873;// 0x0D28(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CB7425D24CAE43496BC703944887DAD4;// 0x0D50(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A3EEB62D4187D9A9DFEF98B5E930FD4D;// 0x0D78(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_59BE9153417E319B3843ABA8AF346B53;// 0x0DA0(0x00B0)
	struct FAnimNode_MultiFabrik_Dinos                 AnimGraphNode_MultiFabrik_Dinos_BFAD4B2C40865FF8B1F2FE8376E8C8BE;// 0x0E50(0x0058)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_CFD536DC4E473BE1E924BD9B15682FD3;// 0x0EA8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E2427E974D91AF67EBDE9F866E78CF1C;// 0x0EF8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2F4C939B4503C03CCDFF4591A73E6D3B;// 0x0F28(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_89DDE564441B606D58ACBF8988D8F8BB;      // 0x0F88(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9340D46F4B33F8CEB9F1D7A0409FE458;      // 0x0FC0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E1CA70FC432EF3ED4BA9F9A81ABE5B82;      // 0x0FF8(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2D59E06249C397186B63229CF7403370;// 0x1030(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9A31D3804AD834A404E9A693F58528F9;// 0x1090(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B2489BC64BC6A062851D4B875B3AB731;// 0x10D0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CB947C144904FEBB30AEA1AEA24DD89C;// 0x10F8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A74B92D84923FA07D421F09F05244720;// 0x1120(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A098B07D458A8878CA894987759D17C6;// 0x1148(0x0028)
	bool                                               bIsMoving;                                                // 0x1170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1171(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x1174(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x1180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x1184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x1188(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x1194(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1195(0x0003) MISSED OFFSET
	float                                              MovementAnimRate;                                         // 0x1198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x119C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x119D(0x0003) MISSED OFFSET
	float                                              MaxMovementAnimRate;                                      // 0x11A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x11A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x11A5(0x0003) MISSED OFFSET
	float                                              MovingAnimSpeedTreshold;                                  // 0x11A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinMovementAnimRate;                                      // 0x11AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x11B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x11B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x11B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x11B3(0x0001) MISSED OFFSET
	float                                              TurningEnabledBlendTime;                                  // 0x11B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x11B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDirectionBlendTime;                                // 0x11BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTurnRateForTurnAnimation;                              // 0x11C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSwimming;                                             // 0x11C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwimming;                                              // 0x11C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x11C6(0x0002) MISSED OFFSET
	float                                              SwimmingMovingAnimSpeedThreshold;                         // 0x11C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimPlayRate;                                      // 0x11CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendInTime;                                       // 0x11D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x11D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendInTime;                                        // 0x11D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x11DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x11E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunning;                                              // 0x11E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x11E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x11E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SleepingAnimTranslationOffset;                            // 0x11E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MovementAnimRatePower;                                    // 0x11F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkBlend;                                               // 0x11F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x11F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x11F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x11FA(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x11FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1208(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x120C(0x0004) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x1210(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x1218(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1220(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1221(0x0003) MISSED OFFSET
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x1224(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x1228(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x1234(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x1240(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1241(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x1242(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x5];                                       // 0x1243(0x0005) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x1248(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x1250(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x1254(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x1258(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1260(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1261(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_GetAimOffsets_RootRotOffset;                     // 0x1264(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsets_TheRootYawSpeed;                   // 0x1270(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsets_RootLocOffset;                     // 0x1274(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsets_ReturnValue;                       // 0x1280(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x128C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x1290(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x1294(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x1298(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x1299(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x129C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x12A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x12A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x12A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x12AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x12B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x12B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x12B5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x12B6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x12B7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0x12B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x12B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x12BA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x12BB(0x0001) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x12BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x12C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x12C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x12C5(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize_ReturnValue;                               // 0x12C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x12CC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x12D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x12D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x12DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x12E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x12E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x12E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x1];                                       // 0x12E3(0x0001) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x12E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x12E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x12E9(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x12EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x12F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue7;                 // 0x12F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x12F2(0x0002) MISSED OFFSET
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x12F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x12F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x1300(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x1304(0x0004) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x1308(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x1310(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x1314(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1315(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1316(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x1317(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x1318(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x131C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x131D(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x1320(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x1324(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x1328(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x1329(0x0003) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x132C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x1330(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x1331(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x1334(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x1338(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x133C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x133D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase.DinoBlueprintBase_C");
		return ptr;
	}


	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3834();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5147();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_786();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3833();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_RotationOffsetBlendSpace_246();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3832();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3831();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3830();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5146();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5145();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3829();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3828();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5142();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5141();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3827();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3826();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5140();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5139();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3825();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3824();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3823();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_785();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ApplyAdditive_414();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3822();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3821();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_DinoBlueprintBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
