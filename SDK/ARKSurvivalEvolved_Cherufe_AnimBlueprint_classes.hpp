#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Cherufe_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Cherufe_AnimBlueprint.Cherufe_AnimBlueprint_C
// 0x18EC (0x1C2C - 0x0340)
class UCherufe_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_75489B4B445B8B957E6652B18EF949EE;// 0x0340(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_85B486914A863C2B555B74AAEA8045E4;// 0x03A0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AAB57BA44C4149E3A74F75B872EF09C7;// 0x0400(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BF7FB67F44C62448F1E962A38A39EF5A;// 0x0460(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_86345520448980AC02F74DA6C6A11EF3;// 0x0490(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_46FD6AF04F421C8EFA09D5A21A69A26E;// 0x04C0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4A0CE35844D0DB71745E4F9A4B23B113;// 0x0520(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF196BB340CA51F7B7FA3BA9EA9AADE0;// 0x0580(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_676A6C9A4FB10F9DB939869C87764BB3;// 0x05B0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BC0594924C302620345D81A3517EF16F;// 0x05E0(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_3A4ABF56406BB393CC29D98BA3895E6A;// 0x0610(0x00F8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F0F6D64F4C2DA7F0ECAD8F86CD5BEC71;// 0x0708(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_22946B7348C8E2B5812B19AE3EB4B1FA;// 0x0738(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A24D3CEC45EECFCCF3F7EE852A8E4A3B;// 0x0798(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_62C8CD7A42C61225C3091E8060B153FA;// 0x07F8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_717554BF4BFF9BDD8B43729F68E76311;// 0x0828(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7ECBEC6E45343A236B0C8AB3B087EE4C;// 0x0858(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_15E7D90848EAB9B418596BA6D40CE319;// 0x08B8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_65BBCF874C06B412F5349780E9699E9C;// 0x0918(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FDE872104073444ED640429469F24F1D;// 0x0978(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B4EF2DEB42850E47B14A9EBBFBC61CA5;// 0x09A0(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_481A28DA44A2F3E31C1514863A045587;// 0x09C8(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CD615BC64BC7ADAC5FB04B9A6A76E30E;// 0x09F0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5CF0E01644A3FD7CB7FB2A8661F908D0;// 0x0AA0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_53AEF83E474B7FD4E48E84A46DA16C84;// 0x0B00(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A3FD39CC4F6B8E2B381EA58BEE2681DA;// 0x0B60(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2D2CFF654700CF185F862EA1796913A9;// 0x0B90(0x0030)
	struct FAnimNode_MultiFabrik_Dinos                 AnimGraphNode_MultiFabrik_Dinos_DDEB46EB4BCA7931097D95948289A556;// 0x0BC0(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4A94FA25447DE9A819875280F944D168;// 0x0C18(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CBCC6E9A4608429B855CB8B78F6A5110;      // 0x0C78(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D122537A4C3998BF34CE829C8448DDD8;      // 0x0CB0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2B356BE44BC38063F46A5DBD8C9B0B50;      // 0x0CE8(0x0038)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_10C666F243BC37F274AC46897E903FCB;// 0x0D20(0x00B8)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_0A39A53644F1F3652653C3BB19B421B3;// 0x0DD8(0x00B8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2C64EEB44D65B2C9B555F585A7891EB1;// 0x0E90(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7DF7306945C61A4131869CBDDF71BBB9;// 0x0EE0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_91ED161E49D15941F44C4CB7F7464D22;// 0x0F10(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_779C3D0749888B4272BFAC9CC1F6A620;// 0x0F70(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D8EA2CFB4BBEA92C32DC2686F3AC985A;// 0x0F98(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_921A6ABF42B2875903B6E6BE6C219AB3;// 0x0FD8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2FBFFED644B774EF37A210810C1AC4A3;// 0x1000(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_09F9C785402FD3BF2416B0A87818B393;// 0x1028(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2C8A3670493F1B485AA4EF995C6B218D;// 0x1050(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3F739F174604AB17CE44E4B797604465;// 0x10B0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E4E6AC524DD740752D8C979EA1035672;// 0x10E0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7DB968264A25AEDEC7E18A86B91B553D;// 0x1110(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EE1052334BFC6A20EB08E9AC08B34D35;// 0x1170(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9FF0142E4BB9898A5251FE93DCC363AA;// 0x11D0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BBAEB3014642DEA83A43E19CB55E77E7;// 0x1230(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D16F8BDB47B0D5FFEA5257B4E6D2E9AD;// 0x1260(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CB30655E42634C879D21FD96A97DCF61;// 0x1290(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9A15385E4C9EC511A4EECB9306DCD5DC;// 0x12C0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_287C007F41A4740C82ECF4B0C507F70A;// 0x12E8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BC977CE3443F61859AEECEAEA10A403A;// 0x1310(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EC4761DC44AE95D8D369F1AC8CD95648;// 0x1350(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_009811814414B35C8CE0FA957A312241;      // 0x13B0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_44602CF746F6B7551CF1C7AFE8CF7BDD;      // 0x13E8(0x0038)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A3AC034344A694F7A073BA89B7F85FF0;// 0x1420(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DB1C79A14E3D3416092C44BD414E3A05;      // 0x1460(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7D19C41B4DE6BAAC99F0B79232532DE3;// 0x1498(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A3B6B1E949A68F1A18D259A024BE2ACA;// 0x14C0(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EF9C36B948A3A0897C9F61A4958483AF;// 0x1500(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_73E3D69F4CD4E0093759BAAC164D6B6A;// 0x1560(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6DE21EFE4293355A6BDF44950119DEE3;// 0x15B0(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9D65E6B74BD01F3D464D66AA4C01938A;// 0x15E0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_95804E36499A1A5A47E881B216FB61D8;// 0x1608(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3624D22F43CFCC2E33D4E8869FACBCC0;// 0x1630(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FBD283E54148CD70688746B2D895EDC4;// 0x16E0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_ABDF33E74E2927FC4FDEE8886102C9DE;// 0x1708(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F1988BB446657E9D8597D297235B8E56;// 0x1768(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D19EFDC941E542AA9F63F79EF39CE058;// 0x1798(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_047369F648B164A2EBA70DA090E4B12D;// 0x17F8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_A102BD504C882E25AB8C619C92C1EEDC;      // 0x1828(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A541194044100F524D710DBE673D13AC;// 0x1850(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F48805A74AA2BBA3FFD4DFB552D42CD5;// 0x18A0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_54A52D0748B869BABE694B928A6E97F4;// 0x18D0(0x0030)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_BBE62FFC469748E88D48DDA1C1D8795D;// 0x1900(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3AAC7FD04D32D01A8B089AB086E1EF72;// 0x1950(0x0030)
	float                                              MovementAnimRate;                                         // 0x1980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxMovementAnimRate;                                      // 0x1984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingAnimSpeedTreshold;                                  // 0x1988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinMovementAnimRate;                                      // 0x198C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTurnRateForTurnAnimation;                              // 0x1990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimmingMovingAnimSpeedThreshold;                         // 0x1994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimPlayRate;                                      // 0x1998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x199C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x199D(0x0003) MISSED OFFSET
	struct FVector                                     SleepingAnimTranslationOffset;                            // 0x19A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRatePower;                                    // 0x19AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurnInPlaceAnimation;                                 // 0x19B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x19B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x19B2(0x0002) MISSED OFFSET
	float                                              RunningMovementAnimRate;                                  // 0x19B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunningMovementAnimRate;                              // 0x19B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x19B9(0x0003) MISSED OFFSET
	float                                              RammingMovementAnimRate;                                  // 0x19BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMoving;                                                // 0x19C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x19C1(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x19C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x19D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x19D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x19D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x19E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x19E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x19E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x19E7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x19E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x19E9(0x0003) MISSED OFFSET
	float                                              TurningEnabledBlendTime;                                  // 0x19EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x19F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDirectionBlendTime;                                // 0x19F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSwimming;                                             // 0x19F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwimming;                                              // 0x19F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x19FA(0x0002) MISSED OFFSET
	float                                              FallingBlendInTime;                                       // 0x19FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x1A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendInTime;                                        // 0x1A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x1A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x1A0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunning;                                              // 0x1A0D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x1A0E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIKWhenFalling;                                    // 0x1A0F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlignGroundAlpha;                                         // 0x1A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKAlpha;                                                  // 0x1A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendInTime;                                       // 0x1A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendOutTime;                                      // 0x1A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetPitchScale;                                      // 0x1A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIK;                                               // 0x1A24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1A25(0x0003) MISSED OFFSET
	float                                              AimOffsetYawScale;                                        // 0x1A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSleepingEnableIK;                                        // 0x1A2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRamming;                                               // 0x1A2D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRamBuildup;                                            // 0x1A2E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x1A2F(0x0001) MISSED OFFSET
	float                                              BlinkBlend;                                               // 0x1A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x1A34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x1A35(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAlignGround;                                          // 0x1A36(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTargeting;                                             // 0x1A37(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSmelting;                                              // 0x1A38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1A39(0x0003) MISSED OFFSET
	float                                              BellowAlpha;                                              // 0x1A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             BellowStartTime;                                          // 0x1A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargePercentage;                                         // 0x1A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x1A4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SimpleCurveEval_ReturnValue;                     // 0x1A50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x1A54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1A58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1A59(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1A5A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x1A5B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x1A5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x1A5D(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1A60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x1A64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1A65(0x0003) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x1A68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x1A70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1A78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x1A79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x6];                                       // 0x1A7A(0x0006) MISSED OFFSET
	class ACherufe_Character_BP_C*                     K2Node_DynamicCast_AsCherufe_Character_BP_C;              // 0x1A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1A88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x1A89(0x0003) MISSED OFFSET
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x1A8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x1A90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x1A94(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x1AA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x1AA4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x1AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetDinoVelocity_ReturnValue;                     // 0x1AB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x1AC4(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x1AC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x1AD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x1AD1(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize_ReturnValue;                               // 0x1AD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x1AD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x1AD9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x1ADA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x1ADB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x1ADC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0x1AE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x1AE1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue5;                // 0x1AE2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x1AE3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x1AE4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x1AEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x1AF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x1AF1(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x1AF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x1AF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x1AFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Lerp_ReturnValue2;                               // 0x1B00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x1B04(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x1B05(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x1B06(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x1];                                       // 0x1B07(0x0001) MISSED OFFSET
	struct FRotator                                    CallFunc_GetAimOffsets_RootRotOffset;                     // 0x1B08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsets_TheRootYawSpeed;                   // 0x1B14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsets_RootLocOffset;                     // 0x1B18(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsets_ReturnValue;                       // 0x1B24(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x1B30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x1B34(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x1B38(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue4;                  // 0x1B3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue5;                  // 0x1B40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x1B44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x1B48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x1B49(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x1B4A(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x1B4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x1B50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x1B51(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x1B52(0x0002) MISSED OFFSET
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x1B54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x1B58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x1B60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x1B64(0x0004) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x1B68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x1B70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x1B74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x1B75(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1B76(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x1B77(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x1B78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x1B7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x1B80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMin_ReturnValue;                                // 0x1B84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x1B88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue2;                               // 0x1B8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue5;                          // 0x1B90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x1B91(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x1B92(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x1B93(0x0001) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x1B94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x1B98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x1B99(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue3;               // 0x1B9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x1BA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue3;                // 0x1BA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x1BA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue5;                             // 0x1BAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue6;                          // 0x1BB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x1BB1(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x1BB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x1BB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x1BB9(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x1BBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x1BC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x1BC1(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x1BC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue6;                             // 0x1BC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x1BCC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x1BD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x1BD4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue7;                             // 0x1BE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x1BE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x1BE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue7;                 // 0x1BEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue8;                 // 0x1BED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x2];                                       // 0x1BEE(0x0002) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x1BF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x1BF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x1BF9(0x0003) MISSED OFFSET
	float                                              CallFunc_FInterpTo_Constant_ReturnValue;                  // 0x1BFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x1C00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x1C01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x6];                                       // 0x1C02(0x0006) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue2;              // 0x1C08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue2;                 // 0x1C10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue3;                    // 0x1C14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x1C15(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue7;                // 0x1C18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_DegCos_ReturnValue;                              // 0x1C1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue8;                // 0x1C20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue5;                     // 0x1C24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue8;                             // 0x1C28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Cherufe_AnimBlueprint.Cherufe_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2950();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2949();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2948();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_SequencePlayer_3928();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_SequencePlayer_3927();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2947();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2946();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_SequencePlayer_3924();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_168();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_SequencePlayer_3923();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2945();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2944();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_SequencePlayer_3922();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_SequencePlayer_3921();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2943();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2942();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2941();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_ModifyBone_605();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2940();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2939();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2938();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_GroundBones_162();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_GroundBones_161();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_ApplyAdditive_228();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2937();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2936();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_SequencePlayer_3916();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2935();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2934();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2933();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_SequencePlayer_3915();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_SequencePlayer_3914();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2951();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2930();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_ModifyBone_606();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2928();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_SequencePlayer_3929();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_BlendListByBool_2952();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_ApplyAdditive_225();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cherufe_AnimBlueprint_AnimGraphNode_ApplyAdditive_224();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Cherufe_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
