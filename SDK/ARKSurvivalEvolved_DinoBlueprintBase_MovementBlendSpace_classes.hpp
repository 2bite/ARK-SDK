#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoBlueprintBase_MovementBlendSpace_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DinoBlueprintBase_MovementBlendSpace.DinoBlueprintBase_MovementBlendSpace_C
// 0x147C (0x17BC - 0x0340)
class UDinoBlueprintBase_MovementBlendSpace_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_C6BC40364E70EAC337A78F900EACBF4E;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8CB58DB84A456AEC3B364EAEB8FC2EC8;// 0x0368(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A6AB5D1240B75A6139CD9898F7D38352;// 0x0398(0x0060)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_ADD642BF47211921DC7A4CBE9112BFC9;// 0x03F8(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_105219CF4B85599E27A66B8DD4F9842A;// 0x0420(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EA4263674CE96C5D45CA3E9D60241F66;// 0x04D0(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0EF1276D45FD9A17B688C4A3E24DC7EA;      // 0x04F8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1E75B70A48AD3A994B113A9898341D9F;      // 0x0530(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_46BF67134BC33B4E8E0C52BA3050A5C6;      // 0x0568(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_68B754A74BA85642D7D89394A7073D8D;// 0x05A0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7CA10E614E109E3B7E475594502B995E;// 0x0600(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_955C2DA948E6DFAC6309989DFEBE736D;// 0x0640(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0E9665834242E73A2767E186EA611BA7;// 0x0668(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5A97583C40BC665A0C81B09160DD8BB5;// 0x0690(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_04DD50784DC3401CD9C6A4B7ED005606;// 0x06F0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DA2DCB1A4781DAD0E34445B993A70B6F;// 0x0750(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1E8DDBBF4A05B036ACD4E1A18C583743;// 0x07B0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EA7D9E7041118210106DF7B8DD1921E5;// 0x07E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D4D7140E492CF854ECA8C194C58BBDE5;// 0x0810(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_FCE6198044F0970D84C46ABEE490F388;// 0x0840(0x00F8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_996E82B94D108E65DF77AF9D3ABEC9E6;// 0x0938(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D5187D504D3B7E349A91B7A0A5E192E5;// 0x0968(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_39E5C29D41BF198982B25E81438A99B2;// 0x09C8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B0738B6D4A0A700342A93EB3BCD721FF;// 0x0A28(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4E122E564668D74F43FE6ABA112D1A40;// 0x0A58(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F66AB6E34AE38AB066B22F86D8B9A54B;// 0x0A88(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_72F765FF4F55479B629DF2B343A9B350;// 0x0AE8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6E43A0C9432C5945ED360A97052C73DD;// 0x0B48(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_02F5F22144246A4EA9297F80E338DD94;// 0x0B78(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E7ADC0E7429A2FA3B22F00AEB5114C23;// 0x0BD8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CE8031714D24B83E6A725C9FF53445EF;// 0x0C00(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5E9345C3473F6B1FCA6150B5B650D12C;// 0x0C28(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E3355DC14416AE4C93D1DCAA4CFA14C8;// 0x0C50(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7FB8531E413D1597F1A541B7A53E60B7;// 0x0D00(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FF69499145DA8EB975EA52A3D613A0F5;// 0x0D60(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8557413547E9A72B3A5F7A96F393144E;// 0x0DC0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BDC159E34F5118271A6244BE64D4E09A;// 0x0DF0(0x0030)
	struct FAnimNode_MultiFabrik_Dinos                 AnimGraphNode_MultiFabrik_Dinos_2DF2AC694878E54A883EFE8403350E8C;// 0x0E20(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6736A68840187335D4B54B835D0E0724;// 0x0E78(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_918457DD46327EF2DD8939B3C1507364;      // 0x0ED8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BE4D0DB04265BA6BB4A7C692EA7DEF0A;      // 0x0F10(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AD2467974485A21B0E0EEA9476141416;      // 0x0F48(0x0038)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_E6295E1741E9AE5EA56EF8A188008CEA;// 0x0F80(0x00B8)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_17D7B3CE41F16207E74E449D4BAAD1C1;// 0x1038(0x00B8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_FB454A2743F59FE56BF53FB0C6427870;// 0x10F0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BEC20E9441CD67E1F579BC8F4D6351DD;// 0x1140(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_80C10DFE4189E57FDB2604B3616DDA44;// 0x1170(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2C99510F424528DEAA7846BE3C14F7CF;// 0x11D0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7EBB6B5146F445D08D1FCE9C7E7599FF;// 0x11F8(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_99B3760343CDC65FE94CC38ABEB0F714;// 0x1238(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D1078CAF489DEF0491116D9223413416;// 0x1260(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6CAC3AC54C93F9DD2EA4439FE80B4262;// 0x1288(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F232F5F540ED62185BBAFCB2B6DFFAA6;// 0x12B0(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E797BF744CEF6E96ECFC279CFE474DAD;// 0x1390(0x0080)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E03B7B644FF757D2227870B2E9888B04;// 0x1410(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9047DCCF438EF11F4A4E1987BD68EDF4;      // 0x1438(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_436455124BB22C0EFE512FA6AE715962;// 0x1470(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_25B40DBC402053180D552A9337D00716;// 0x14A0(0x0060)
	bool                                               bIsMoving;                                                // 0x1500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1501(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x1504(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x1510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x1514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x1518(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x1524(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1525(0x0003) MISSED OFFSET
	float                                              MovementAnimRate;                                         // 0x1528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x152C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x152D(0x0003) MISSED OFFSET
	float                                              MaxMovementAnimRate;                                      // 0x1530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x1534(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1535(0x0003) MISSED OFFSET
	float                                              MovingAnimSpeedTreshold;                                  // 0x1538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinMovementAnimRate;                                      // 0x153C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x1540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x1541(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x1542(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x1543(0x0001) MISSED OFFSET
	float                                              TurningEnabledBlendTime;                                  // 0x1544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x1548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDirectionBlendTime;                                // 0x154C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTurnRateForTurnAnimation;                              // 0x1550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSwimming;                                             // 0x1554(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwimming;                                              // 0x1555(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x1556(0x0002) MISSED OFFSET
	float                                              SwimmingMovingAnimSpeedThreshold;                         // 0x1558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimPlayRate;                                      // 0x155C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendInTime;                                       // 0x1560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x1564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendInTime;                                        // 0x1568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x156C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x1570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunning;                                              // 0x1571(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x1572(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x1573(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SleepingAnimTranslationOffset;                            // 0x1574(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRatePower;                                    // 0x1580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurnInPlaceAnimation;                                 // 0x1584(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x1585(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x1586(0x0002) MISSED OFFSET
	float                                              AlignGroundAlpha;                                         // 0x1588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAlignGround;                                          // 0x158C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x158D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x158E(0x0002) MISSED OFFSET
	float                                              BlinkBlend;                                               // 0x1590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKAlpha;                                                  // 0x1594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendInTime;                                       // 0x1598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendOutTime;                                      // 0x159C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningMovementAnimRate;                                  // 0x15A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunningMovementAnimRate;                              // 0x15A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIKWhenFalling;                                    // 0x15A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIK;                                               // 0x15A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x15A7(0x0001) MISSED OFFSET
	float                                              AimOffsetPitchScale;                                      // 0x15A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetYawScale;                                        // 0x15AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendSpaceMovementAngle;                                  // 0x15B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UseMovementAnimRate;                                      // 0x15B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UseRunningMovementAnimRate;                               // 0x15B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimRateInterpSpeed;                                      // 0x15BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnInPlaceAnimSpeed;                                     // 0x15C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMounted;                                               // 0x15C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMounted;                                              // 0x15C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x15C6(0x0002) MISSED OFFSET
	float                                              MovementAngleInterpSpeed;                                 // 0x15C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x15CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x15D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;// 0x15D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x15DA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x15DB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x15DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x15DD(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x15E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x15E4(0x0004) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x15E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x15F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x15F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x15F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x15FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x15FB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x15FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x15FD(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x1600(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_NegateRotator_ReturnValue;                       // 0x160C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0x1618(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x1624(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x1630(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_ComposeRotators_ReturnValue;                     // 0x163C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x1648(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x1654(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x1658(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x165C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x1660(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x1664(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x1668(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x166C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x1670(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x1674(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x1675(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x1678(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x167C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x167D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x167E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x167F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x1680(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x1688(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x168C(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x1690(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1698(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x1699(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_GetAimOffsets_RootRotOffset;                     // 0x169C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsets_TheRootYawSpeed;                   // 0x16A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsets_RootLocOffset;                     // 0x16AC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsets_ReturnValue;                       // 0x16B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch2;                                 // 0x16C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw2;                                   // 0x16C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll2;                                  // 0x16CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x16D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x16D1(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x16D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x16D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x16DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x16DD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x16DE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x16DF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x16E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0x16E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x16E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x1];                                       // 0x16E3(0x0001) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue2;                                // 0x16E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x16E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x16EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x16F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x16F1(0x0003) MISSED OFFSET
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x16F4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x16FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x1700(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x1704(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x1705(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x1706(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x1708(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x170C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x170D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x170E(0x0002) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x1710(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x1718(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x171C(0x0004) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x1720(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue5;                             // 0x1728(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x172C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x1730(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x1731(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1732(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x1733(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x1734(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x1738(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x173C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMin_ReturnValue;                                // 0x1740(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x1744(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x1748(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x174C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x174D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x174E(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue6;                             // 0x1750(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x1754(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x1755(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue3;               // 0x1758(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x175C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x1760(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x1764(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue7;                             // 0x1768(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x176C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x1770(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x1771(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x1774(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x1778(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x1779(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue5;                     // 0x177C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue8;                             // 0x1780(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x1784(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue6;                     // 0x1788(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue9;                             // 0x178C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue4;               // 0x1790(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x1794(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue2;                          // 0x1798(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue5;               // 0x179C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue3;                          // 0x17A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue6;               // 0x17A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue4;                          // 0x17A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue7;               // 0x17AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue5;                          // 0x17B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue8;               // 0x17B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue6;                          // 0x17B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_MovementBlendSpace.DinoBlueprintBase_MovementBlendSpace_C");
		return ptr;
	}


	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_3816();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_ModifyBone_768();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_3815();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_3814();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_3813();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_3812();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_SequencePlayer_4959();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_RotationOffsetBlendSpace_240();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_SequencePlayer_4958();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_3811();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_3810();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_SequencePlayer_4957();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_SequencePlayer_4956();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_3809();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_3808();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_3807();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_ModifyBone_767();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_3806();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_3805();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_SequencePlayer_4954();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_SequencePlayer_4953();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_3804();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_GroundBones_228();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_GroundBones_227();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_ApplyAdditive_420();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_3803();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendSpacePlayer_240();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_SequencePlayer_4951();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_3802();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
