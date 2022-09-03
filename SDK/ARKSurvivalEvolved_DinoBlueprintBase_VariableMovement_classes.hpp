#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoBlueprintBase_VariableMovement_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C
// 0x1570 (0x18B0 - 0x0340)
class UDinoBlueprintBase_VariableMovement_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_EB008B7546869187F909978E5220C927;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5838DBDF4D8F6D1D01D8A390E7A7F89D;// 0x0368(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_76FC9D4A4EEA7D3FB18B41B173EA2219;// 0x0398(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5AEB6C6A4DA59A4F4D9A0C8D611CC1E3;// 0x03F8(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_95EBA1F644F45C7C9B1789BE27D5863D;// 0x0428(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1532A3E7484E12309F59BBBE06237D35;// 0x0450(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0059EB4243EF2DE08642A78154EB2E2E;// 0x0500(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B5A03E3A42A630688518EC90C6488FBD;      // 0x0528(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C372CB1645CDEAD6AB28E7B3E9ADB2FE;      // 0x0560(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_99EA34F14BADF8E988DCC39547E01343;      // 0x0598(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_978C5FA84F6DAE9AE0BEDDBAF6549C6E;// 0x05D0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EDE5A84A42D8A70C9254E4B7B0CC1E4A;// 0x0630(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C70BD8634BBF70EF37DD3BA31194E7D6;// 0x0670(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D7DE5DB14D72DEF93DD5DB8CBF166981;// 0x0698(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4184FC2A43DCC41D03AA29A115F0F126;// 0x06C0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B8431B504E7C4E6C0134FD95890809F8;// 0x0720(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_55128D974A3D59E08434D4ADC3156655;// 0x0780(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B582DDF244A7123670D59280E6143524;// 0x07E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F4B5E24D4603D8542C3FED94E858BC32;// 0x0810(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_45B353444D5E48AEB5497D9648BAD99C;// 0x0840(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0C138AB54E8E90E3CF2ED2B3DF9499CE;// 0x08A0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6B940B72418F2711F76E61A3E6A2B54E;// 0x0900(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CDC500D5434A081FC2CAC58640CE399E;// 0x0930(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CC2FF74141829FE963BA01898CAC5C1B;// 0x0960(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_FDF7D91B4D5EF93EBB9EB181C9ECA3F3;// 0x0990(0x00F8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_289C80334885CA687F4101852FD4025A;// 0x0A88(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0FF4B5744D8E998456D8E08D4FDAC1BA;// 0x0AB8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CB19FBA14135508572D7908041FE7ADD;// 0x0B18(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F020EC974A1E6BF17AD0A88BCCDC1E37;// 0x0B78(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_609F97CC45DC6E06CD7131A8EB30D782;// 0x0BA8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D816C36342DB391E0205969EE9E16965;// 0x0BD8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5138318743E88A2B3EC5318CB708D6EE;// 0x0C38(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3D238B7448C0F3E43F100D8E9B03B650;// 0x0C98(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7283B471481B308F64C2969A41CC2E55;// 0x0CC8(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_624CE0154FDAE7D729C0A88E45AD6430;// 0x0D28(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10C7C1A848F7495A1A2362B7870F7522;// 0x0D50(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3D9126B54709F2445610E891611E0EEC;// 0x0D78(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B5BC7FA942DBCFEA69AAA1B442D6E803;// 0x0DA0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AA3AE6F241063C800C12B1873E5E7236;// 0x0E50(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6022F072415910C55B7A49A1D0D735FE;// 0x0EB0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_892AF6744CE04F65FA7075A1D363D07A;// 0x0F10(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6166C8964F1A3CC07C5E1185FE1A596A;// 0x0F40(0x0030)
	struct FAnimNode_MultiFabrik_Dinos                 AnimGraphNode_MultiFabrik_Dinos_39374ADA453A8D880A9A87A26F0BEB10;// 0x0F70(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A6406A0040496EC4DB31F78ABAB6D546;// 0x0FC8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F9746ECE477CDE7E0A0DCE8B76F24CED;      // 0x1028(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BCFB51624ABC9FA1443049B6392C5FE6;      // 0x1060(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6C54F5DB43D212F7CC7CCC8AEA51E02D;      // 0x1098(0x0038)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_5AB5C5A347B0BECC510368A8AC93DF6B;// 0x10D0(0x00B8)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_F98A5CDA44488DC50683829E1597471F;// 0x1188(0x00B8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_181D912644048ED9CD274FA404C44C58;// 0x1240(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A095E3848C9644B77E7A79261DF19E9;// 0x1290(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B07BB90945BDA4584A3760B5C986EA90;// 0x12C0(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F6F793EB4491A6B38FAE11A29F9BE361;// 0x1320(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6F97741D43730DA73D2F9EA4068E61FE;// 0x1348(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AFB715C64C6E03AD7F5D79B23D95EF3B;// 0x1388(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EB27B7D84AA4140DD70D93B72408341C;// 0x13B0(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B5BC36754C6CE0E293BDACB87DFDDECB;// 0x13D8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_44F101564613A06E8987CBB53D3A21CF;// 0x1400(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_06B6026640E3E917DBC9308B70D4AC30;// 0x1428(0x00F8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_60D76A66495577B71F8A0AB7BF20E8CD;// 0x1520(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2D85E40948AB145FF11ACC8815E4C2C7;// 0x1580(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F2F0EC2046C219929D19A0906D7A2EEB;// 0x15D0(0x0030)
	bool                                               bIsMoving;                                                // 0x1600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1601(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x1604(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x1610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x1614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x1618(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x1624(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1625(0x0003) MISSED OFFSET
	float                                              MovementAnimRate;                                         // 0x1628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x162C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x162D(0x0003) MISSED OFFSET
	float                                              MaxMovementAnimRate;                                      // 0x1630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x1634(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1635(0x0003) MISSED OFFSET
	float                                              MovingAnimSpeedTreshold;                                  // 0x1638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinMovementAnimRate;                                      // 0x163C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x1640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x1641(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x1642(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x1643(0x0001) MISSED OFFSET
	float                                              TurningEnabledBlendTime;                                  // 0x1644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x1648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDirectionBlendTime;                                // 0x164C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTurnRateForTurnAnimation;                              // 0x1650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSwimming;                                             // 0x1654(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwimming;                                              // 0x1655(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x1656(0x0002) MISSED OFFSET
	float                                              SwimmingMovingAnimSpeedThreshold;                         // 0x1658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimPlayRate;                                      // 0x165C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendInTime;                                       // 0x1660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x1664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendInTime;                                        // 0x1668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x166C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x1670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunning;                                              // 0x1671(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x1672(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x1673(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SleepingAnimTranslationOffset;                            // 0x1674(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRatePower;                                    // 0x1680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurnInPlaceAnimation;                                 // 0x1684(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x1685(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x1686(0x0002) MISSED OFFSET
	float                                              AlignGroundAlpha;                                         // 0x1688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAlignGround;                                          // 0x168C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x168D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x168E(0x0002) MISSED OFFSET
	float                                              BlinkBlend;                                               // 0x1690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKAlpha;                                                  // 0x1694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendInTime;                                       // 0x1698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendOutTime;                                      // 0x169C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningMovementAnimRate;                                  // 0x16A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunningMovementAnimRate;                              // 0x16A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIKWhenFalling;                                    // 0x16A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIK;                                               // 0x16A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x16A7(0x0001) MISSED OFFSET
	float                                              AimOffsetPitchScale;                                      // 0x16A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetYawScale;                                        // 0x16AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SequenceChargeFwd;                                        // 0x16B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SequenceChargeLft;                                        // 0x16B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SequenceChargeRit;                                        // 0x16C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SequenceIdle;                                             // 0x16C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SequenceMoveFwd;                                          // 0x16D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SequenceMoveLft;                                          // 0x16D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SequenceMoveRit;                                          // 0x16E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowUnTamedDynamicAnimVars;                             // 0x16E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x16E9(0x0007) MISSED OFFSET
	class UAimOffsetBlendSpace*                        DynAimOffset;                                             // 0x16F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           SequenceExtraAdditive;                                    // 0x16F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraAdditiveBlend;                                       // 0x1700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseExtraAdditive;                                        // 0x1704(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowDynAnimsOnDedi;                                     // 0x1705(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x1706(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x1708(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1714(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1715(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1716(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x1717(0x0001) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1718(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x171C(0x0004) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x1720(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x1728(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1730(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x1731(0x0007) MISSED OFFSET
	class ADino_Character_BP_VariableAnim_C*           K2Node_DynamicCast_AsDino_Character_BP_VariableAnim_C;    // 0x1738(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1740(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue;                 // 0x1741(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x1742(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetDinoVelocity_ReturnValue;                     // 0x1744(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x1750(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x1754(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x175C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x1760(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x1764(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x1770(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x177C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x1780(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x1781(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1782(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x1783(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x1784(0x0004) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x1788(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x1790(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x1794(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x1798(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x17A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x17A1(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x17A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x17A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x17A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x17AA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x17AB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x17AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x17AD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x17AE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0x17AF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsets_RootRotOffset;                     // 0x17B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsets_TheRootYawSpeed;                   // 0x17BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsets_RootLocOffset;                     // 0x17C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsets_ReturnValue;                       // 0x17CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x17D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x17DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x17E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x17E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x17E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x17EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x17ED(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x17F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x17F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x17F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x17F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x17FA(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x17FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x1800(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x1801(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x1804(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x1808(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue7;                 // 0x1809(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x6];                                       // 0x180A(0x0006) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x1810(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x1818(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x181C(0x0004) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x1820(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x1828(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x182C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x1830(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x1831(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1832(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x1833(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x1834(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x1838(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x183C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMin_ReturnValue;                                // 0x1840(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x1844(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x1848(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x184C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x184D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x184E(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x1850(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x1854(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x1855(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue3;               // 0x1858(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x185C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x1860(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x1864(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x1868(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x186C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x1870(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x1871(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x1874(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x1878(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x1879(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x187C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue5;                             // 0x1880(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x1884(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x1888(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x188C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x188D(0x0003) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue6;                             // 0x1890(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x1894(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x1895(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue4;               // 0x1898(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x189C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue7;                // 0x18A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x18A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x18A5(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue5;                     // 0x18A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue7;                             // 0x18AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C");
		return ptr;
	}


	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_SequencePlayer_5052();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3918();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_SequencePlayer_5051();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_ModifyBone_780();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3917();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3916();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3915();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3914();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_SequencePlayer_5050();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_SequencePlayer_5049();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3913();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3912();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_SequencePlayer_5046();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_RotationOffsetBlendSpace_252();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_SequencePlayer_5045();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3911();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3910();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_SequencePlayer_5044();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_SequencePlayer_5043();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3909();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3908();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3907();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_ModifyBone_779();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3906();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3905();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3904();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_GroundBones_240();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_GroundBones_239();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_ApplyAdditive_432();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3903();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_RotationOffsetBlendSpace_251();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_3902();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_ApplyAdditive_431();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_SequencePlayer_5038();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_DinoBlueprintBase_VariableMovement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
