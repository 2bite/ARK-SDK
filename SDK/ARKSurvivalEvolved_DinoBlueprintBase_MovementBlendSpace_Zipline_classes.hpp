#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoBlueprintBase_MovementBlendSpace_Zipline_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DinoBlueprintBase_MovementBlendSpace_Zipline.DinoBlueprintBase_MovementBlendSpace_Zipline_C
// 0x1AB4 (0x1DF4 - 0x0340)
class UDinoBlueprintBase_MovementBlendSpace_Zipline_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_E3DF6C744307AD47298E07802873746A;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12D63D7348B2018BFEF1A6B9C42A211A;// 0x0368(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D00EEC394AE323EC0995F2B3DB6FCC81;// 0x0398(0x0060)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_29B5C81C416DC0FC0D8AE4B7C818D154;// 0x03F8(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5B653ECA4C24DA4ADFF3968424708798;// 0x0420(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4D84A7EF4CBB2BF24EB881B7DC37F300;// 0x04D0(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_58BA359345CACF5186339AA9BD38E86D;      // 0x04F8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_28DE4ECC4692D4BCD19B3FA9F6FB1974;      // 0x0530(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F3CC8D4E42CCD0737D5B83AECD78AEB0;      // 0x0568(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_05C26BBD45A0F82C524E66B6EA6485F1;// 0x05A0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E3B26DC54887916062EC3DB198323C5F;// 0x0600(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D970CD99469B33A50ADF3DA403D93EEF;// 0x0640(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_53023906425197CAEFF7F4BA5F5C1F41;// 0x0668(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D99C63E740DCB867CE9892B43A072950;// 0x0690(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_71F0BEFD44AF1975FA8A2BB10D5D3D98;// 0x06F0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5B5C978C46EDD6722C0F5DA87B260F4B;// 0x0750(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_844661A6408F8375DB8AAD837378D17F;// 0x07B0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3F93A752476C5555AD3F449EA638A251;// 0x07E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F46B8C6D4459F57CF2A1D19E7010BEFF;// 0x0810(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_AA6AE4D44F61B122493C2B9C1CB29AB4;// 0x0840(0x00F8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7B936C3B43D319FA65598291E18453C0;// 0x0938(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_96F89E7847EDC59BD2DF5F8F9D6547A4;// 0x0968(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7301DAD54DCE8AFB73508ABAB7DABE04;// 0x09C8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D2A6645B49BD00777CD9EBA492A4232E;// 0x0A28(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7B5FC0304C40F90D6EB3909951C4FFB4;// 0x0A58(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CCB0DC0C4949CF4FD79BF38B670B13D7;// 0x0A88(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F0C536454444435C4B0B45BF9B85A597;// 0x0AE8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_307940FC4AC440134C3A5D821F92F198;// 0x0B48(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3F2044C147B301982B239F9542114C97;// 0x0B78(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_54252C50400286030145A88D5329B8FF;// 0x0BD8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C58384434314381623E405A7ADF48A3D;// 0x0C00(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C92BEF4F438EFF0C2900E2956E596D7B;// 0x0C28(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F2D3ACB3431B58836261D88158DA2F6C;// 0x0C50(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AB3B397E4D48BF2B557FD981F1CBAD39;// 0x0D00(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C64859E64352E7E8C8AE8EA90D5BF82D;// 0x0D60(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CD0EE2024D85A5A872A5B2BE9E02DAC3;// 0x0DC0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9C508FED4F11FC28BF358E8BE1BE9704;// 0x0DF0(0x0030)
	struct FAnimNode_MultiFabrik_Dinos                 AnimGraphNode_MultiFabrik_Dinos_48BBF6DC446724C4ECAF818436B57667;// 0x0E20(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_34B384404DCC34546FE8E6859478ACA2;// 0x0E78(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A011185243BE594D04DD8BB6FA8F16C6;      // 0x0ED8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3619479C437FFBAF7B3A1BB38B6F6425;      // 0x0F10(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7FA35E884ED9E79866E0D7A35B413A38;      // 0x0F48(0x0038)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_4EA7F6FD4B239EB75F01E7ADAFC38F5F;// 0x0F80(0x00B8)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_8C6163794FAB80AC6FB895BDFCFA227E;// 0x1038(0x00B8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_56FB2076462E179D09C00A83FF28B12E;// 0x10F0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_00A85B704CDD567CDCAEBFA5A066F4C3;// 0x1140(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B4E458FB439CECAAF8A4688B720D7D21;// 0x1170(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3AC7A27D41A26C48ACD7CEBC638F659B;// 0x11D0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FEBF8E7041422BAA2885F393172CF4E7;// 0x11F8(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9DB9A3934A2D4F2CA9AFE397C7D2D635;// 0x1238(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6A27047742E92E6D96CB45A8AC32EEE6;// 0x1260(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D808D86148C8269126EBC68B61DD1242;// 0x1288(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_548B5FA447C2278B011DFB8E6BE1BC34;// 0x12B0(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_47CA25F344E2D5A5870AA5AA6CC4AC5F;// 0x1390(0x0080)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_447C3D1B4C0464B0530BB398A96903F3;// 0x1410(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5D4C5E1148B3F675D65B63B6DA2E0DB3;      // 0x1438(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F38F27964BBD0FB2DF3CF9AF5E14BBDB;// 0x1470(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9FA1CD8145653C99477D93813075396C;// 0x14A0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BD298BBF44FE61B61D032BA348CE943B;// 0x1500(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1B3CE57B4E2E28C876FA9F83073E8451;// 0x1560(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B104A905472673845C0474BE9EA9C36F;// 0x15C0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8D4630234EA052FA8821B691DC82A6F5;// 0x15F0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4B93899E4A68E864AAE21FB1D90B51B6;// 0x1650(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5DA3C23C46E6AF5D734E6FAA68FF1934;// 0x16B0(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_AD56E2CB4545E427E149BBA7646CA26B;// 0x16E0(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_00136F80466230ABE6648BA8D0775411;// 0x1720(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22F7EEFF4C0B60672935AA90EB968D8E;// 0x1780(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A373B7EE4BE9378530880EAEEBCB27BC;// 0x17B0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D67A7F884B88D7A0F6B827A6BF785351;// 0x17E0(0x0060)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F24091264E3B753E67FA61932917AE14;// 0x1840(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B1500FAB44C95A3CBAA662B7919B6B14;// 0x1868(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4A1D310F4A5DE80CC4313EAF74EB4E87;// 0x18C8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D89B005B43EEC2819749E583C15CFF1E;// 0x18F8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6D956C614E23EAA0365DACB4A10FBA30;// 0x1958(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FE8BDD404F23B6B9A1DE6EA38CA395EE;// 0x1988(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A1F09C74A9102E501CEA79B39827C09;// 0x19B8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2BE6B6B1420C1ADA86B2068D2693C157;// 0x19E8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_91057A7C4A963C041893C8BD30C793A5;// 0x1A48(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_868E9CE9496A0E294B0D2E8E1A95233C;// 0x1A78(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D73C94C1468F8B476FE4ADBF9E86DBD0;// 0x1AD8(0x0030)
	bool                                               bIsMoving;                                                // 0x1B08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1B09(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x1B0C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x1B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x1B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x1B20(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x1B2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1B2D(0x0003) MISSED OFFSET
	float                                              MovementAnimRate;                                         // 0x1B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x1B34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1B35(0x0003) MISSED OFFSET
	float                                              MaxMovementAnimRate;                                      // 0x1B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x1B3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1B3D(0x0003) MISSED OFFSET
	float                                              MovingAnimSpeedTreshold;                                  // 0x1B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinMovementAnimRate;                                      // 0x1B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x1B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x1B49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x1B4A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x1B4B(0x0001) MISSED OFFSET
	float                                              TurningEnabledBlendTime;                                  // 0x1B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x1B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDirectionBlendTime;                                // 0x1B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTurnRateForTurnAnimation;                              // 0x1B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSwimming;                                             // 0x1B5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwimming;                                              // 0x1B5D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x1B5E(0x0002) MISSED OFFSET
	float                                              SwimmingMovingAnimSpeedThreshold;                         // 0x1B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimPlayRate;                                      // 0x1B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendInTime;                                       // 0x1B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x1B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendInTime;                                        // 0x1B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x1B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x1B78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunning;                                              // 0x1B79(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x1B7A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x1B7B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SleepingAnimTranslationOffset;                            // 0x1B7C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRatePower;                                    // 0x1B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurnInPlaceAnimation;                                 // 0x1B8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x1B8D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x1B8E(0x0002) MISSED OFFSET
	float                                              AlignGroundAlpha;                                         // 0x1B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAlignGround;                                          // 0x1B94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x1B95(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x1B96(0x0002) MISSED OFFSET
	float                                              BlinkBlend;                                               // 0x1B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKAlpha;                                                  // 0x1B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendInTime;                                       // 0x1BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendOutTime;                                      // 0x1BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningMovementAnimRate;                                  // 0x1BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunningMovementAnimRate;                              // 0x1BAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIKWhenFalling;                                    // 0x1BAD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIK;                                               // 0x1BAE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x1BAF(0x0001) MISSED OFFSET
	float                                              AimOffsetPitchScale;                                      // 0x1BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetYawScale;                                        // 0x1BB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendSpaceMovementAngle;                                  // 0x1BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UseMovementAnimRate;                                      // 0x1BBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UseRunningMovementAnimRate;                               // 0x1BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimRateInterpSpeed;                                      // 0x1BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnInPlaceAnimSpeed;                                     // 0x1BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMounted;                                               // 0x1BCC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMounted;                                              // 0x1BCD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x1BCE(0x0002) MISSED OFFSET
	float                                              MovementAngleInterpSpeed;                                 // 0x1BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsZiplineRunning;                                        // 0x1BD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSliding;                                               // 0x1BD5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BelowTargetAnchor;                                        // 0x1BD6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ZiplineJumping;                                           // 0x1BD7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHangingOnZipline;                                        // 0x1BD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUsingZipLine;                                          // 0x1BD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x1BDA(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x1BDC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1BE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;// 0x1BE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x1BEA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x1BEB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x1BEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1BED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x1BEE(0x0002) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1BF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x1BF4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x1BF5(0x0003) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x1BF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x1C00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1C08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x1C09(0x0007) MISSED OFFSET
	class ADinoCharacter_BP_Zipline_C*                 K2Node_DynamicCast_AsDinoCharacter_BP_Zipline_C;          // 0x1C10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1C18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x1C19(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x1C20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_Zipline_DinoBase_C*                    K2Node_DynamicCast_AsBuff_Zipline_DinoBase_C;             // 0x1C28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x1C30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x1C31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1C32(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x1C33(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x1C34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0x1C40(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_NegateRotator_ReturnValue;                       // 0x1C4C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x1C58(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_ComposeRotators_ReturnValue;                     // 0x1C64(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x1C70(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x1C7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x1C80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x1C84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x1C88(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x1C94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x1C98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x1C9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x1CA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x1CA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x1CA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x1CA9(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x1CAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x1CB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x1CB1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x1CB2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x1CB3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x1CB4(0x0004) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x1CB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x1CC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x1CC4(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x1CC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x1CD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x1CD1(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_GetAimOffsets_RootRotOffset;                     // 0x1CD4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsets_TheRootYawSpeed;                   // 0x1CE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsets_RootLocOffset;                     // 0x1CE4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsets_ReturnValue;                       // 0x1CF0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch2;                                 // 0x1CFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw2;                                   // 0x1D00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll2;                                  // 0x1D04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x1D08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x1D09(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x1D0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x1D10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x1D14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x1D15(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x1D16(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x1D17(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x1D18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0x1D19(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x1D1A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x1D1B(0x0001) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue2;                                // 0x1D1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x1D20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x1D24(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x1D25(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize_ReturnValue;                               // 0x1D28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x1D2C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x1D34(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x1D38(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x1D3C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x1D3D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x1D3E(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x1D40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x1D44(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x1D45(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x1D46(0x0002) MISSED OFFSET
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x1D48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x1D4C(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x1D50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue5;                             // 0x1D58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x1D5C(0x0004) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x1D60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x1D68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x1D6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x1D6D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1D6E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x1D6F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x1D70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x1D74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x1D78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMin_ReturnValue;                                // 0x1D7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x1D80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x1D84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x1D88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x1D89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x2];                                       // 0x1D8A(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue6;                             // 0x1D8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x1D90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x1D91(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue3;               // 0x1D94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x1D98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x1D9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x1DA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue7;                             // 0x1DA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x1DA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x1DAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x1DAD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x2];                                       // 0x1DAE(0x0002) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x1DB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue5;                     // 0x1DB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue8;                             // 0x1DB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x1DBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue6;                     // 0x1DC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue9;                             // 0x1DC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue4;               // 0x1DC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x1DCC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue2;                          // 0x1DD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue5;               // 0x1DD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue3;                          // 0x1DD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue6;               // 0x1DDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue4;                          // 0x1DE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue7;               // 0x1DE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue5;                          // 0x1DE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue8;               // 0x1DEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue6;                          // 0x1DF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_MovementBlendSpace_Zipline.DinoBlueprintBase_MovementBlendSpace_Zipline_C");
		return ptr;
	}


	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2454();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_ModifyBone_572();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2453();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2452();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2451();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2450();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_SequencePlayer_3591();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_RotationOffsetBlendSpace_156();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_SequencePlayer_3590();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2449();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2448();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_SequencePlayer_3589();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_SequencePlayer_3588();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2447();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2446();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2445();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_ModifyBone_571();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2444();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2443();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_SequencePlayer_3586();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_SequencePlayer_3585();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2442();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_GroundBones_130();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_GroundBones_129();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_ApplyAdditive_226();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2441();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendSpacePlayer_172();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_SequencePlayer_3583();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2440();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2439();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2438();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2437();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2436();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2435();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_SequencePlayer_3580();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_SequencePlayer_3579();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2434();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2433();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2432();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2431();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline_AnimGraphNode_BlendListByBool_2430();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_Zipline(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
