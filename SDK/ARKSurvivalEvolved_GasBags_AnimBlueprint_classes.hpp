#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GasBags_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass GasBags_AnimBlueprint.GasBags_AnimBlueprint_C
// 0x17BD (0x1AFD - 0x0340)
class UGasBags_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_E0818221463B652954E172B8AAC60859;      // 0x0340(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D85B9A9248B5D566B03415BD5211DDCA;// 0x0368(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8D2E937B4F38F13D9B7FF58C289AFA8A;// 0x0390(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_76118A0F40C6C8538F91CF940CF3FE50;// 0x0440(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D135FB4D41EB191F43B2BA84124EE50D;// 0x0468(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A53D021346FA72CF3E7FE39C41F67F09;      // 0x04C8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5AE3C700425BFAFFEEBF8486E4558F09;      // 0x0500(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A089198040D9F4A14E0AA58398FBEB24;      // 0x0538(0x0038)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_51F144474AB385771C5235AFD994D71B;// 0x0570(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3BC0AE5B46F7B0EB1ADB379A3C641781;// 0x05B0(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7E0CB6DB4D6E9D45A4C573B44D95B1EA;// 0x05D8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E195A0CC41CA942009861A96D97F94CB;// 0x06B8(0x0030)
	unsigned char                                      UnknownData00[0x8];                                       // 0x06E8(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CF98B2594DC2D62B47CC59BEA8207137;// 0x06F0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EFFBBF5F4CCB9C8E3CA724A5B64D47C0;// 0x07A0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_855DF1EC4EB77F97676C74B4B975D706;// 0x0800(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34123E2249C477001784359945F0EAF1;// 0x0860(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A29E08114512D310197E87AAA9C4B996;// 0x0890(0x0030)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_83FA0996472004691DAEB7AA2D57A272;// 0x08C0(0x0050)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_53A52266443F06E0E212868622CBE95D;  // 0x0910(0x0058)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_B30F511E44A5959B27202F964C15FBFD;// 0x0968(0x00F8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_80C355BC43E718FE02067283E8447806;// 0x0A60(0x00F8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_78EDE1E149996AFEC3CA4CBD6F49C2E1;// 0x0B58(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1817CBCF400C103F8588BBB2022E4D22;// 0x0BB8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7431EA464352A06CB172008A408FACD8;// 0x0BE0(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8F4D306A41CA9227AFAB8FB6C1BE5BE8;// 0x0C20(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0A24D3FC4BE3828370FC0B935210425C;// 0x0C48(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9832D1F14AD8FD64F08A12942B2167D6;// 0x0C70(0x0028)
	struct FAnimNode_MultiFabrik_Dinos                 AnimGraphNode_MultiFabrik_Dinos_8EC26F3A41E0F16A74ECBE8A38C4F29D;// 0x0C98(0x0058)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_2875B2DC4A389B3BD3CE6A86420450BA;// 0x0CF0(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F41BA2704D2751ADD870E98B6AADF7C1;// 0x0DA8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4E06B7AE4BA21411AF2F5189731FB5A6;// 0x0E08(0x0030)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2FD359FC4D73695DDAC509B50A95E319;// 0x0E38(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CD0BF25748EBF35745352CB7B232B6BB;// 0x0E88(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_71A4A49B4174D686B29E29B7EEFD1EC5;// 0x0EB8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_335C5FEC4B4057150C7EEDBA6D75524A;// 0x0F18(0x0060)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0F78(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1B2F22064BAF3239A6DA1C938C33EEE0;// 0x0F80(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_320039FC4EE394D958ACF49DBB9D9D6D;// 0x1030(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B36FDF4242C927E953C4148877EAD55C;// 0x1080(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D73E21064CF63D175DE22CA3083F40F5;// 0x10B0(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D866CEBD45C2173AAEA4EBAC2E132718;// 0x10E0(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_E255BB6F4A1AF816EA0994BF417DB85B;// 0x1190(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AB973A21444CB31AA009098447EB35FF;// 0x11E0(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_013645F249FEC23EAE69F489B6161F94;// 0x1210(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DF4A81CD465200252C7EC587B10A50A2;// 0x1238(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D42987BD44F5CB12F876CEB2A9E7DE1E;// 0x1298(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EDB17BBF4D03224338FA05A39C0B1B71;// 0x12C8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_984F29A7432F1F5F925CB6BD3B2F0530;// 0x1328(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_110FA9B1425BF22630DE528967A1DD04;// 0x1358(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8A5DF92F462696D6B8FC168163C1BA85;// 0x13B8(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A76505744B3D2690573198947060A32D;// 0x13E8(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D6DAE4794C90C8C43306C9993AFA8936;// 0x1410(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_041ABBD04C3BD6C01F049ABB974F7129;// 0x1438(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0B0FCE39468C3BFE2E1B3F8F9416212B;// 0x1498(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D27458444689F9F63389D392D366547F;// 0x14C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EBB65A9B45AE7869ED5199BBE537DB5A;// 0x14F8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AF702B284909E5A07311C181ED9A20A4;// 0x1528(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BC06BF0540F608D9EBD4C49AE569529D;// 0x1588(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_53569E5942314AE08246D1847B618769;// 0x15C8(0x0060)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A3F56AEB41F2B8EC46E555B5640FB48A;// 0x1628(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_525E5C264D887D740098D19D243E1B32;// 0x1650(0x0028)
	unsigned char                                      UnknownData02[0x8];                                       // 0x1678(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0E4F6F7941274176BE6E5DA8004852A6;// 0x1680(0x00B0)
	struct FVector                                     InflationBoneScale;                                       // 0x1730(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InflationBoneTranslation;                                 // 0x173C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InflationPercent;                                         // 0x1748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseAdditiveInflate;                                       // 0x174C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x174D(0x0003) MISSED OFFSET
	struct UObject_FTransform                          RootOffsetTransform;                                      // 0x1750(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x1780(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DinoGroundSpeedPercent;                                   // 0x178C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsMovingBackwards;                                        // 0x1790(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsRunning;                                                // 0x1791(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFloatingMovement;                                       // 0x1792(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x1793(0x0001) MISSED OFFSET
	float                                              InflationPercentInterpSpeed;                              // 0x1794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FloatingDirection;                                        // 0x1798(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FloatingBlendspaceCoords;                                 // 0x17A4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatingDirectionInterpSpeed;                             // 0x17AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsTurning;                                                // 0x17B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsTurningRight;                                           // 0x17B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x17B2(0x0002) MISSED OFFSET
	float                                              MinTurnRateForAnimation;                                  // 0x17B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RiderSocketInflatedOffset;                                // 0x17B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RiderSocketNonInflatedOffset;                             // 0x17C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x17D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x17D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwimming;                                              // 0x17D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x17D9(0x0003) MISSED OFFSET
	float                                              AlignGroundAlpha;                                         // 0x17DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   GroundMoveAnimRateRange;                                  // 0x17E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlinkBlend;                                               // 0x17E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInflating;                                              // 0x17EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x17ED(0x0003) MISSED OFFSET
	float                                              InflatingAlpha;                                           // 0x17F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InflatingPoseInterpSpeed;                                 // 0x17F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSwimmingForward;                                        // 0x17F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x17F9(0x0003) MISSED OFFSET
	float                                              SwimSpeedPercent;                                         // 0x17FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x1800(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableIK;                                                 // 0x1801(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x1802(0x0002) MISSED OFFSET
	struct FVector                                     SleepingAnimTranslationOffset;                            // 0x1804(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFalling;                                                // 0x1810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1811(0x0003) MISSED OFFSET
	float                                              FloatingAnimPlayRate;                                     // 0x1814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatingAnimPlayRateFalling;                              // 0x1818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SaddleSocketFixedRotation;                                // 0x181C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InflateBoneG_InflatedScale;                               // 0x1828(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InflateBoneD_InflatedScale;                               // 0x1834(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1840(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x1841(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1842(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x1843(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x1844(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x1848(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x184C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X;                                 // 0x1850(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y;                                 // 0x1854(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x1858(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue3;                        // 0x185C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VLerp_ReturnValue;                               // 0x1860(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue4;                        // 0x186C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1870(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x1874(0x0004) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x1878(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AGasBags_Character_BP_C*                     K2Node_DynamicCast_AsGasBags_Character_BP_C;              // 0x1880(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1888(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x1889(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x188C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_LessLess_VectorRotator_ReturnValue;              // 0x1898(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x18A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x18B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_LessLess_VectorRotator_ReturnValue2;             // 0x18BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x18C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Get_Inflation_Value;                             // 0x18D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Get_Inflation_Percent;                           // 0x18D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlive_ReturnValue;                             // 0x18DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x18DD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x18DE(0x0002) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue2;                    // 0x18E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x18E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x18F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x18F1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x18F4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x1900(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue3;                             // 0x1904(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x1910(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x1914(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x1918(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x191C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x191D(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x1920(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x1924(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x1925(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Normal_ReturnValue4;                             // 0x1928(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue2;                              // 0x1934(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x1938(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0x1939(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x193A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue5;                // 0x193B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue2;              // 0x193C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue2;                   // 0x1948(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x194C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x1950(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x1951(0x0003) MISSED OFFSET
	float                                              CallFunc_FMax_ReturnValue2;                               // 0x1954(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x1958(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue5;                        // 0x195C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x1960(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x1961(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0xE];                                       // 0x1962(0x000E) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetAimOffsetsTransform_RootRotOffsetTransform;   // 0x1970(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsetsTransform_TheRootYawSpeed;          // 0x19A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsetsTransform_RootLocOffset;            // 0x19A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsetsTransform_ReturnValue;              // 0x19B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x19BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x19C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x19C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x19C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue4;                  // 0x19CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x19D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x19D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x19D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x19DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x19E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x19E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x19E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x19EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x19ED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x19EE(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x19F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_SelectVector_ReturnValue;                        // 0x19FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x1A08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_BoolBool_ReturnValue;                   // 0x1A14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x1A15(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BoundToCube_ReturnValue;                         // 0x1A18(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x1A24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x1A28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x1A2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_MakeVector2D_ReturnValue;                        // 0x1A30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue;                           // 0x1A38(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x1A44(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue2;                          // 0x1A50(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x1A5C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x1A68(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x1A74(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue;                            // 0x1A80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x1A84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x1A88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x1A8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x1A90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMin_ReturnValue;                                // 0x1A94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x1A98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue3;                               // 0x1A9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x1AA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x1AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x1AB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x1AB4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x1AB5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1AB6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x1];                                       // 0x1AB7(0x0001) MISSED OFFSET
	float                                              CallFunc_BreakVector2D_X2;                                // 0x1AB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y2;                                // 0x1ABC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue2;                           // 0x1AC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VLerp_ReturnValue2;                              // 0x1AC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1AD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x1AD1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x1AD2(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x1AD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x1AD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x1ADC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x1AE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue6;                        // 0x1AE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x1AE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x1AEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x1AF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x1AF1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x1AF2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x1AF3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue7;                        // 0x1AF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x1AF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x1AF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x1AFA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x1AFB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x1AFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass GasBags_AnimBlueprint.GasBags_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_ModifyBone_666();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_BlendListByBool_3318();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_162();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_SequencePlayer_4248();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_ModifyBone_665();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_BlendListByBool_3317();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_BlendListByBool_3316();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_SequencePlayer_4247();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_SequencePlayer_4246();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_198();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_197();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_BlendListByBool_3315();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_MultiFabrik_Dinos_114();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_GroundBones_192();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_BlendListByBool_3314();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_ApplyAdditive_281();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_BlendListByBool_3313();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_BlendListByBool_3312();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_ModifyBone_664();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_ApplyAdditive_280();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_ModifyBone_663();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_ApplyAdditive_279();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_BlendListByBool_3311();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_SequencePlayer_4240();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_BlendListByBool_3310();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_BlendListByBool_3309();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_BlendListByBool_3308();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_SequencePlayer_4236();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_BlendListByBool_3307();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_BlendListByBool_3306();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GasBags_AnimBlueprint_AnimGraphNode_ModifyBone_662();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_GasBags_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
