#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoBlueprintBase_RootTransform_Archa_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransform_Archa.DinoBlueprintBase_RootTransform_Archa_C
// 0x1772 (0x1AB2 - 0x0340)
class UDinoBlueprintBase_RootTransform_Archa_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_F7C8672C4B2767A91A8089BF239526FD;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8225C22C4AB2A0BF0B962FBC678E7E2A;// 0x0368(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7609070D49D3630D094BFC907F28FF57;// 0x0398(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FEE35952402ABBFE9CE85A99A388F910;// 0x03F8(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E657770546B332F62D5C9DB600A9914B;// 0x0428(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B39B299B4EDFB2D9B0408FAECB206CE1;// 0x0450(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A33FA7EF4F83ABFB82F2EAB1196C5B3D;// 0x0500(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F49A8E724B47BF411849DABD2D12C5D5;      // 0x0528(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C6BE06354590AD93F720ABAE5D668E47;      // 0x0560(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B0FDE5FA4106756377E5A1A2DE97AAAC;      // 0x0598(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E4E657444A3581FF7A362F8AAF322BB6;// 0x05D0(0x0060)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_E879148B4E481983FFB7DAA2D87071D4;// 0x0630(0x00F8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_221E74374B05D30B90D4AE8D5DE23231;// 0x0728(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_61328AF241474752101277BCFB8F3B7F;// 0x0768(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B98E771248AA44F4AC889DA2A75B0933;// 0x0790(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6FBB1B724BD9344CF9357F8A0CC27EA5;// 0x07B8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_013D3D474B2EC5849DB8ED8C6CF19F7E;// 0x0818(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C34D7C054BFEA9EC8D3EAAA807F01249;// 0x0878(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_65F8A6B64B54CBBE6C5B15AA8AAFED89;// 0x08D8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C7D3B1D94CA9F2AEBF2FD3B56E593815;// 0x0908(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0DAED0994C190F4635146C8B9CFCFA93;// 0x0938(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9169343F4CA73A7D23A32591FA464321;// 0x0998(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_32F9469F40F315D0EDE47B8BE166CC85;// 0x09C8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_89A9B61E4E01B153C3A69EBD4841CB59;// 0x0A28(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7EB380AC4A9866EE819B49936874D010;// 0x0A58(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_39F9ECDA4002C8BBFF19C984B5BF0064;      // 0x0AB8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_067070A243BC6F9E114C7CBB1CCF8D08;      // 0x0AF0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_28E165664D04DE5E7A437DBC7CBD3D3E;      // 0x0B28(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A36CA6B6479CCC77403137AED63AA786;// 0x0B60(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_70757B7148763435145151BD994A4BF3;// 0x0BB0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6FF4CC79481A78E1446C6CB1FDCF7C6B;// 0x0BE0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1E94A8CB4BE1BDAC787E7283DEC8D38A;// 0x0C10(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_92DCEFCD4C48ECE21B6A33A891348003;// 0x0C70(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_59A46FA94AD0211D5643D5AFBC0D3896;// 0x0CD0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_62EFE3E3451C8B683007C8BC80D806DE;// 0x0D00(0x0030)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_E75849884CF06DF27DD1D3AB17B74E20;// 0x0D30(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C620825B460A5DE71CB4C889E8D7DBC4;// 0x0D80(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BE467D5B4387EBD076A8188DFBBBEAE4;// 0x0DB0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ECB3515148ADFE66D4F00CAF4899941E;// 0x0E10(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C9A2323A48EBDCEFF5FCEA838E027563;// 0x0E40(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C8DC8BE942CD1838D6620CB5DF2DF330;// 0x0EA0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0EE047D449D05D179458378910864F61;// 0x0F00(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11A98DA44EAA715E356ABF87C4399946;// 0x0F30(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B272C79D45F7124D00518CAC32E9BA29;// 0x0F60(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_02565E34430773052271AAB6AA9371A6;// 0x0F90(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A4A39DD6416095193D3E2E94C791C7AE;// 0x0FF0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_62B543D043E44318A0DA41A62B6A6A9E;// 0x1020(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_00737C7748FB54E15B8527A0FE701E4E;// 0x1080(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E810FDC54AEF97C895492B81FEB3F144;// 0x10E0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3A5F082141442C7023ACD89644A7B2BA;// 0x1140(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C22965F4416AC0F898752F8ED114DF41;// 0x1170(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5734BD904F7D2DEA2BF7FD9D7F3E11FC;// 0x11A0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A8DF193A4B7238D5E980249BD2CD8107;// 0x1200(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1C4FA4FD483FC51D55BA7CA879BBF9E7;// 0x1230(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF4AB1784D2D361DF511A9B53800A598;// 0x1290(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A3D32BFA4FC6416D1E0B5FA87393132A;// 0x12C0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1A5F8C8049ABC150F39136925945F1E7;// 0x1320(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B1B606C648D0F9C7D2BE638122858FBA;// 0x1380(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2D39706B446DEDFF690DB7A01ADBA606;// 0x13B0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B21D5E1349A2F013FD5C8083FDB5E0D5;// 0x13E0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FE5BD7C84CCD499EEEB50C8B132038E8;// 0x1440(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_823666A246393F338A995D941E75610C;// 0x1470(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1999E7CA4C663AB8F9EDEAB8A13DF887;// 0x14D0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_819D679F4D74DEDE433ACF851ECB633A;// 0x1500(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FBC7F4604019DCBCAB2F3E93ACB2C142;// 0x1560(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_32BBF0AF4DB5F3844807E190069A757A;// 0x1590(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_578EF37C4ABC386F1E08B88B6C978EC3;// 0x15F0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EE773F294B508E38CE31FBAEEEF5F727;// 0x1650(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49A6E3464576E4A4E6BA229EE2B63AD9;// 0x1680(0x0030)
	bool                                               bIsMoving;                                                // 0x16B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x16B1(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x16B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x16C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x16C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x16C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x16D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x16D5(0x0003) MISSED OFFSET
	float                                              MovementAnimRate;                                         // 0x16D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x16DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x16DD(0x0003) MISSED OFFSET
	struct FTransform                                  RootOffsetTransform;                                      // 0x16E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumMovementSpeed;                                     // 0x1710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimPlayRate;                                      // 0x1714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendInTime;                                       // 0x1718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x171C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendInTime;                                        // 0x1720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x1724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x1728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x1729(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x172A(0x0002) MISSED OFFSET
	float                                              MinimumMovementSpeedFlying;                               // 0x172C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x1730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x1731(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x1732(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x1733(0x0001) MISSED OFFSET
	float                                              MinTurnRateForTurnAnimation;                              // 0x1734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningEnabledBlendTime;                                  // 0x1738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x173C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDirectionBlendTime;                                // 0x1740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMoveBlendIn;                                        // 0x1744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMoveBlendOut;                                       // 0x1748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRatePower;                                    // 0x174C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x1750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x1751(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x1752(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFlyingOffset;                                         // 0x1753(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FlyingOffset;                                             // 0x1754(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentFlyingOffset;                                      // 0x1760(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LandedOffset;                                             // 0x176C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkBlend;                                               // 0x1778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x177C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMounted;                                               // 0x177D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMounted;                                              // 0x177E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x177F(0x0001) MISSED OFFSET
	float                                              AimOffsetYawScale;                                        // 0x1780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetPitchScale;                                      // 0x1784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x1788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunning;                                              // 0x1789(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsStrafingRight;                                         // 0x178A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x178B(0x0001) MISSED OFFSET
	float                                              StrafingMagnitude;                                        // 0x178C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseStrafing;                                             // 0x1790(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1791(0x0003) MISSED OFFSET
	float                                              StrafingEnabledBlendTime;                                 // 0x1794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrafingDisabledBlendTime;                                // 0x1798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x179C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLatched;                                                // 0x17A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseGlidingAnim;                                          // 0x17A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLatchedDownward;                                        // 0x17A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bElevating;                                               // 0x17A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDelevating;                                              // 0x17A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseElevation;                                            // 0x17A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBackwardsAnim;                                        // 0x17A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMovingBackwards;                                       // 0x17A7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsGliding;                                               // 0x17A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GroundRunning;                                            // 0x17A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwimming;                                              // 0x17AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x17AB(0x0001) MISSED OFFSET
	float                                              K2Node_Select_ReturnValue;                                // 0x17AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x17B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x17B1(0x0003) MISSED OFFSET
	float                                              K2Node_Select_ReturnValue2;                               // 0x17B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x17B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x17B9(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x17BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x17C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x17C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x17C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_ReturnValue3;                               // 0x17CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select3_CmpSuccess;                                // 0x17D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x17D1(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x17D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x17D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_ReturnValue4;                               // 0x17DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select4_CmpSuccess;                                // 0x17E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x17E1(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue7;                // 0x17E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue8;                // 0x17E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x17EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x17ED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x17EE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x17EF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x17F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x17F1(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x17F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x17F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x1800(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1808(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x1809(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x180C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0x1818(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x1824(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x1830(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x183C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x1840(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x1844(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x1848(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x184C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x184D(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x1850(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x1854(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x1855(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue2;                                // 0x1858(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x185C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x185D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue2;              // 0x1860(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue3;                             // 0x186C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue2;                        // 0x1878(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x1884(0x0004) MISSED OFFSET
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue;                 // 0x1888(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x1890(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x1894(0x0004) MISSED OFFSET
	class USceneComponent*                             CallFunc_GetAttachParent_ReturnValue;                     // 0x1898(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x18A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x18A1(0x0007) MISSED OFFSET
	class UHierarchicalInstancedStaticMeshComponent*   K2Node_DynamicCast_AsHierarchicalInstancedStaticMeshComponent;// 0x18A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x18B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x18B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x18B2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x1];                                       // 0x18B3(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_Normal_ReturnValue4;                             // 0x18B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AArcha_Character_BP_C*                       K2Node_DynamicCast_AsArcha_Character_BP_C;                // 0x18C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x18C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x18C9(0x0003) MISSED OFFSET
	float                                              CallFunc_Dot_VectorVector_ReturnValue2;                   // 0x18CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x18D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x18D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x18D2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x18D3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x18D4(0x0004) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x18D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x18E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x18E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x18E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x2];                                       // 0x18EA(0x0002) MISSED OFFSET
	float                                              CallFunc_GetRunningSpeedModifier_ReturnValue;             // 0x18EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x18F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x18F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x18F2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x1];                                       // 0x18F3(0x0001) MISSED OFFSET
	float                                              CallFunc_GetMaxSpeed_ReturnValue;                         // 0x18F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue9;                // 0x18F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x18FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue;                  // 0x1900(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x1910(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue3;                        // 0x191C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x1928(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x1929(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize_ReturnValue2;                              // 0x192C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x1930(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x1934(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue5;                             // 0x1938(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x1944(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x1945(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0xA];                                       // 0x1946(0x000A) MISSED OFFSET
	struct FTransform                                  CallFunc_GetAimOffsetsTransform_RootRotOffsetTransform;   // 0x1950(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsetsTransform_TheRootYawSpeed;          // 0x1980(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsetsTransform_RootLocOffset;            // 0x1984(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsetsTransform_ReturnValue;              // 0x1990(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_ComposeRotators_ReturnValue;                     // 0x199C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x19A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x19AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x19B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetRightVector_ReturnValue;                      // 0x19B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x19C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue6;                             // 0x19C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x19D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue3;                   // 0x19D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x19D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x19D9(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue3;                                // 0x19DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue4;                                // 0x19E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x19E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x19E5(0x0003) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue2;               // 0x19E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x19F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x19F4(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent2;         // 0x19F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x1A00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0x1A01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x2];                                       // 0x1A02(0x0002) MISSED OFFSET
	float                                              CallFunc_VSize_ReturnValue3;                              // 0x1A04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x1A08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue5;                // 0x1A10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x1A11(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x1A14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1A18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x1A19(0x0003) MISSED OFFSET
	float                                              K2Node_Select_ReturnValue5;                               // 0x1A1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select5_CmpSuccess;                                // 0x1A20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x1A21(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x1A24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue6;                // 0x1A28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue7;                // 0x1A29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x1A2A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue7;                 // 0x1A2B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue8;                 // 0x1A2C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x1A2D(0x0003) MISSED OFFSET
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x1A30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1A34(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x1A35(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x1A36(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x1];                                       // 0x1A37(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x1A38(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x1A44(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x1A50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue;                           // 0x1A54(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue2;                          // 0x1A60(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x1A6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x1A6D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x2];                                       // 0x1A6E(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x1A70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x1A74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x1A75(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x1A78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue10;               // 0x1A7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x1A80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x1A84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue11;               // 0x1A88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x1A8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue12;               // 0x1A90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x1A94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue3;               // 0x1A98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue4;                  // 0x1A9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue3;                // 0x1AA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue13;               // 0x1AA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x1AA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x1AAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x1AAD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0x1AAE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x1AAF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue10;                        // 0x1AB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue11;                        // 0x1AB1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransform_Archa.DinoBlueprintBase_RootTransform_Archa_C");
		return ptr;
	}


	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3954();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_SequencePlayer_4697();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_ModifyBone_744();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3953();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_RotationOffsetBlendSpace_252();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3952();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3951();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3950();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_SequencePlayer_4696();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_SequencePlayer_4695();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3949();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_SequencePlayer_4694();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3948();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3947();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_ApplyAdditive_300();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3946();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3945();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_SequencePlayer_4690();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_SequencePlayer_4689();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_TwoWayBlend_54();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3944();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_SequencePlayer_4687();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3943();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3942();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_SequencePlayer_4686();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_SequencePlayer_4685();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3941();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_SequencePlayer_4683();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3940();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3939();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3938();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_SequencePlayer_4682();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_SequencePlayer_4681();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3937();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3936();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3935();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3934();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3933();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3932();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3931();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3930();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa_AnimGraphNode_BlendListByBool_3929();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_DinoBlueprintBase_RootTransform_Archa(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
