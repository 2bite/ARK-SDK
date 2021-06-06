#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MilkGlider_AnimBlueprintBS_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass MilkGlider_AnimBlueprintBS.MilkGlider_AnimBlueprintBS_C
// 0x1C5E (0x1F9E - 0x0340)
class UMilkGlider_AnimBlueprintBS_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_5C7C83E14E56BD73CE3871BE70BA105B;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DA0DCA5B4ABAA52B8E6998AFD9C72C93;// 0x0368(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E50DE5E74E426C0949EE939700B772E5;// 0x0398(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B7D75E7D4A6E6053036EA5BD0BAD2C5A;// 0x03F8(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_885D412F4915C5E2F2B7C2858BFEECBC;// 0x0428(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_854A8208441925A4256A3AA2ED838299;// 0x0450(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_138414FF4F189E3677AC0FA98221B0DE;// 0x0500(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8D4D25664546B0370D8FADB91E391995;      // 0x0528(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CA4FD947472B5DAA53C58AB059DA8AC1;      // 0x0560(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_40668BDD44736AA9980F5383D6498D9E;      // 0x0598(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4866F4934949C95D7AC3F481E21F2EA0;// 0x05D0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_123BA3504DBC1C2AB6B74A95D2268150;// 0x0630(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2A0517B3426FE6C61AD3E48F42C0C004;// 0x0670(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_781889804B1C977F4280849D54E46EF5;// 0x0698(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C501BFC64BD94D644FCD55A8B6456F37;// 0x06C0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5977C45F4235B5E0844856B00F4008D6;// 0x0720(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_15562D544CF1DA8DF56C47AB47C7AB01;// 0x0780(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4ED3C5F840B917414EDE4193ABD1CE42;// 0x07E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0B7B97C74A52F2B5426B3D9B95805C80;// 0x0810(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5AF5823142D05A0D7E5458829934C705;// 0x0840(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DF1B8BBD45F2E449193BD592116A5BA2;// 0x08A0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3952B5D2495FB9C28938F5961CC97F27;// 0x0900(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B0DAEECA425A938C3D7785988E14FBD7;// 0x0930(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1648B6B2475070F858835DA28AC2AF1B;// 0x0960(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_8A07A613405C376AA9CACB84AABD7D63;// 0x0990(0x00F8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41F2B28244F364358303BE8574701C1D;// 0x0A88(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F4CF63FF4D14A4E491B4598DAE2D512E;// 0x0AB8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_840830EA40D9AF335B61A2B866B996A0;// 0x0B18(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_420E4221442B8D8111F0EF9D9F549533;// 0x0B78(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3D76ADDF4FFC363FBD104F82B661AD90;// 0x0BA8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8BBF48E249E595791F2089899D553EFF;// 0x0BD8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C89DD59B43FADF7D99F6DB9A71F646C1;// 0x0C38(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5A252DCF4B3991248081EEBBA98D0B2C;// 0x0C98(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B2F6535A4BFB5CCF981DFA80946D491D;// 0x0CC8(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A0B5234B48A07030949DBEB51B17C3FF;// 0x0D28(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1940AB5247991EF034ED9BA2609AB955;// 0x0D50(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6CBF5F20473E9AC328C82F849D730D18;// 0x0D78(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_99FA543147179DAFBBF4AAB664F330C9;// 0x0DA0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2A9B554146C21075E384AF84B9D4A949;// 0x0E50(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FCB3E7FB42618E70A6A943890B917EC9;// 0x0EB0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_80F7C8284C3E9D97894A049C284AF985;// 0x0F10(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A32618904F5A31DB6B364FBCBE341146;// 0x0F40(0x0030)
	struct FAnimNode_MultiFabrik_Dinos                 AnimGraphNode_MultiFabrik_Dinos_9C433D28498CB11DBBF2F4B2B91774FC;// 0x0F70(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0B0FEF4B45DB4599836D94A01EEDF18E;// 0x0FC8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2F1217254A863D82A42C2F87CB5F137C;      // 0x1028(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_84EFF9F648A2E0D8D25595AD7C71CDFB;      // 0x1060(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D48829C64081CE704647DE97D62F5583;      // 0x1098(0x0038)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_F8FF254A47DDAD705FEBA69AF272EEC6;// 0x10D0(0x00B8)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_3E58E80B419DB62A1CC5AD8027FE51DB;// 0x1188(0x00B8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_839E95C2442DC2C7A31CCD800F3801ED;// 0x1240(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8951FD814C70E3F2EBBF8F9756E31A67;// 0x1290(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2DE6838945C39ECC3EDD6997642CBF54;// 0x12C0(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8CE316364A99E9F716825786AB0FE395;// 0x1320(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_263686334F77B63A09F1029064B043BD;// 0x1348(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5ECC1F5042B9D35D418EDD9C1A113852;// 0x1388(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4004A5F8420F3516DB9C1583D6B16234;// 0x13B0(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A4DF3E744591C1A989F12FA06B413213;// 0x13D8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B0CF9B464E837FA1EB890E82B86CC99D;// 0x1400(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8EAEB374462C2C5599F37E9BA611187D;// 0x1430(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_114B72CB46002DC05367BE90FF03AEED;// 0x1490(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F9B92B7B4A3AE0A4C020A78675BA293F;// 0x14C0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FC906F1B4A086643D847FB9AF8BE1D43;// 0x1520(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A670C54C484BCF028CA1BBA6C8CE883B;// 0x1580(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A6A43F2343E19D465EF605A7D7CF176B;// 0x15B0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C3B681E64D8A092C92E750BA62D67FA9;// 0x15E0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C1893C7743DAF68411C153AD2E1D4E07;// 0x1640(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E7EEF6BB4B331BFAEC597A8D8CCB3AAE;// 0x1670(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39E71AB6467E04FC22E189B0BDD67EC1;// 0x16D0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B4B01E4C4EF9D3FCC00263ABF488191C;// 0x1700(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_84C5680544DB86CD14CB60939998EE81;// 0x1760(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_755B57F74A88A6E287278B9623A2F3D0;// 0x17C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3EC80389402FAB93E8F924BFABD8D0A5;// 0x17F0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_510E43CA44EB60D5C0F7769CCC5DA33A;// 0x1820(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E1A269A844423E8DCB06D6992CA67457;// 0x1880(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1A9DA419404181F5785818B093D7750D;// 0x18B0(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_928B4F674CD3A81D634ED48862D36CA4;// 0x18D8(0x00F8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_84332C31451BF50C8573B9ADC5603438;// 0x19D0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_669AFFFC4E9F23137D129D89E83BAFFF;// 0x1A30(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D8B7742A474F7C3E5AA83282ED647C5D;// 0x1A90(0x0060)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_585DACD0449214C20F22548B1C4AC268;// 0x1AF0(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BFE6913A4FEA7B555F83D2B635C0D607;// 0x1BD0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6738E6374B4E1F03BE5C758C30F75C53;// 0x1C30(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4A16023148FF014A47E889A4A08D11D1;// 0x1C60(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_189669F74194727760AE7C91C7171A07;// 0x1CC0(0x0030)
	bool                                               bSkipAnimGraph;                                           // 0x1CF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1CF1(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x1CF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x1D00(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRate;                                         // 0x1D0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMounted;                                               // 0x1D10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMoving;                                                // 0x1D11(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x1D12(0x0002) MISSED OFFSET
	float                                              MovementAnimRatePower;                                    // 0x1D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinMovementAnimRate;                                      // 0x1D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxMovementAnimRate;                                      // 0x1D1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwimming;                                              // 0x1D20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1D21(0x0003) MISSED OFFSET
	float                                              SwimmingMovingAnimSpeedThreshold;                         // 0x1D24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSwimming;                                             // 0x1D28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1D29(0x0003) MISSED OFFSET
	float                                              MinTurnRateForTurnAnimation;                              // 0x1D2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x1D30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x1D31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x1D32(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x1D33(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x1D34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x1D38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetYawScale;                                        // 0x1D3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetPitchScale;                                      // 0x1D40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x1D44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x1D45(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x1D46(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x1D47(0x0001) MISSED OFFSET
	float                                              MovingAnimSpeedTreshold;                                  // 0x1D48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunning;                                              // 0x1D4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x1D4D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x1D4E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x1D4F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunningMovementAnimRate;                              // 0x1D50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1D51(0x0003) MISSED OFFSET
	float                                              RunningMovementAnimRate;                                  // 0x1D54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIKWhenFalling;                                    // 0x1D58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIK;                                               // 0x1D59(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x1D5A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x1D5B(0x0001) MISSED OFFSET
	float                                              BlinkBlend;                                               // 0x1D5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlignGroundAlpha;                                         // 0x1D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAlignGround;                                          // 0x1D64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1D65(0x0003) MISSED OFFSET
	float                                              TurningDirectionBlendTime;                                // 0x1D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningEnabledBlendTime;                                  // 0x1D6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x1D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendInTime;                                       // 0x1D74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendOutTime;                                      // 0x1D78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurnInPlaceAnimation;                                 // 0x1D7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1D7D(0x0003) MISSED OFFSET
	float                                              MovingBlendInTime;                                        // 0x1D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x1D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSleepingEnableIK;                                        // 0x1D88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x1D89(0x0003) MISSED OFFSET
	float                                              FallingAnimPlayRate;                                      // 0x1D8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendInTime;                                       // 0x1D90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x1D94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMoveBlendIn;                                        // 0x1D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMoveBlendOut;                                       // 0x1D9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SleepingAnimTranslationOffset;                            // 0x1DA0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunFlyBS;                                             // 0x1DAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1DAD(0x0003) MISSED OFFSET
	float                                              FlyingBSTurn;                                             // 0x1DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingBSPitch;                                            // 0x1DB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMinTurn;                                            // 0x1DB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastFlyingTurn;                                           // 0x1DBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseIdleAsCarried;                                        // 0x1DC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1DC1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x1DC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1DD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1DD1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1DD2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x1DD3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x1DD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x1DD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1DDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x1DE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x1DE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1DF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x1DF1(0x0003) MISSED OFFSET
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x1DF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x1DF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x1DFC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x1E08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x1E14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1E15(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x1E16(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x1E17(0x0001) MISSED OFFSET
	class AMilkGlider_Character_BP_C*                  K2Node_DynamicCast_AsMilkGlider_Character_BP_C;           // 0x1E18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1E20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x1E21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x1E22(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetDinoVelocity_ReturnValue;                     // 0x1E24(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x1E30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x1E31(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize_ReturnValue;                               // 0x1E34(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x1E38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x1E39(0x0003) MISSED OFFSET
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x1E3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x1E40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x1E48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x1E49(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x1E4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x1E50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x1E54(0x0004) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x1E58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x1E60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x1E61(0x0007) MISSED OFFSET
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x1E68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x1E70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x1E71(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x1E72(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x1E73(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x1E74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x1E75(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0x1E76(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue5;                // 0x1E77(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x1E78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x1E79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue6;                // 0x1E7A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x1E7B(0x0001) MISSED OFFSET
	struct FRotator                                    CallFunc_GetAimOffsets_RootRotOffset;                     // 0x1E7C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsets_TheRootYawSpeed;                   // 0x1E88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsets_RootLocOffset;                     // 0x1E8C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsets_ReturnValue;                       // 0x1E98(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x1EA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x1EA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x1EAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x1EB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x1EB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x1EB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x1EB9(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x1EBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetUsableFlyingTurn_FinalTurn;                   // 0x1EC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x1EC4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x1EC5(0x0003) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x1EC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x1ECC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x1ECD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x1ECE(0x0002) MISSED OFFSET
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x1ED0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x1ED4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x1ED8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x1EE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x1EE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x1EEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x1EED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x1EEE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1EEF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x1EF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x1EF1(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x1EF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x1EF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x1EFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMin_ReturnValue;                                // 0x1F00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x1F04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x1F08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x1F0C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x1F0D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x2];                                       // 0x1F0E(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x1F10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x1F14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x1F15(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue3;               // 0x1F18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x1F1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x1F20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x1F24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x1F28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x1F2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x1F30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x1F31(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x1F34(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0x1F38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x1F39(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x1F3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue5;                             // 0x1F40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x1F44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x1F48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue6;                             // 0x1F4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x1F50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x1F51(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue7;                // 0x1F54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x1F58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x1F59(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue8;                // 0x1F5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue7;                 // 0x1F60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x1F61(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue2;                    // 0x1F68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AMilkGlider_Character_BP_C*                  K2Node_DynamicCast_AsMilkGlider_Character_BP_C2;          // 0x1F70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x1F78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x1F79(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x1F7C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch2;                                 // 0x1F88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw2;                                   // 0x1F8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll2;                                  // 0x1F90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue;                            // 0x1F94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue2;                           // 0x1F98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x1F9C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x1F9D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MilkGlider_AnimBlueprintBS.MilkGlider_AnimBlueprintBS_C");
		return ptr;
	}


	void GetUsableFlyingTurn(float OriginalTurn, float Delta, float* FinalTurn);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4656();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_SequencePlayer_6329();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_ModifyBone_978();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4655();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4654();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4653();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4652();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_SequencePlayer_6328();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_SequencePlayer_6327();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4651();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4650();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_SequencePlayer_6324();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_RotationOffsetBlendSpace_312();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_SequencePlayer_6323();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4649();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4648();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_SequencePlayer_6322();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_SequencePlayer_6321();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4647();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4646();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4645();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_ModifyBone_977();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4644();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4643();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4642();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_GroundBones_282();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_GroundBones_281();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_ApplyAdditive_486();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4641();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4640();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_SequencePlayer_6315();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4639();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4638();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_SequencePlayer_6314();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_SequencePlayer_6313();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4637();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4636();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_SequencePlayer_6311();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4635();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4634();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_SequencePlayer_6310();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_SequencePlayer_6309();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4633();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_SequencePlayer_6308();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_RotationOffsetBlendSpace_311();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4632();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4631();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4630();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendSpacePlayer_300();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4629();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MilkGlider_AnimBlueprintBS_AnimGraphNode_BlendListByBool_4628();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_MilkGlider_AnimBlueprintBS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
