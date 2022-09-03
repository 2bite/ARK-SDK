#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesmodusAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DesmodusAnimBlueprint.DesmodusAnimBlueprint_C
// 0x1EBB (0x21FB - 0x0340)
class UDesmodusAnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_837AD51342103E93754C7698747B66B0;// 0x0340(0x0060)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_CAEA90D349AC38C9D014409AA013AE6C;// 0x03A0(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_363D4AE14CEE3227EA37B09B18282B69;// 0x03D0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4955D91F48F553AC38BC42A17A2BDD65;// 0x0480(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4FBCD4424CD20FC069C17D92F56F0ED2;      // 0x04A8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_87B5BB7B4AB39BA3E307C2981DF6AD23;      // 0x04E0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B7B043F440AC4B1897F5F6ADCEFACA87;      // 0x0518(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_52F505D3415CD2671F9294927939293E;// 0x0550(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BFE2E0FE4FD8D9349C27D4AD3660069A;// 0x05B0(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8A3EB5E5488F0EBCEB1631AE75A2B58C;// 0x05F0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8AB519764062C6EC797459BDA5E94AFD;// 0x0618(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8FC786CF48BB893C67664EA78B092059;// 0x0640(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_177D520B41E6E3B741727F9D401F551F;// 0x06A0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9361FACA4A67CBB784932589A0A3128A;// 0x0700(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_68D234FD490AF6A8EF566CA55695F981;// 0x0730(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A5514A114E14BA979CB5A5BC2273A5ED;// 0x0790(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DA03447F497153DB05BFA7A0D41920E8;// 0x07C0(0x0040)
	struct FAnimNode_MultiFabrik_Dinos                 AnimGraphNode_MultiFabrik_Dinos_537657754378615D390C78A1610ACE02;// 0x0800(0x0058)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_653377C247825308FF477C8B04582363;// 0x0858(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1BA31E914A0858F9FB43EFB2780B1853;// 0x0880(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2B8E591B44B40B7F593AC5A455B6E87D;// 0x08A8(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9AC93A624DE229514DB8B881556EEB99;// 0x0908(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7FFA5FDD415B93BAD1EBA9AE56EC2AD3;// 0x0930(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E69147214AF315AE832F7588B93E3721;// 0x0958(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_99A38368476DE0D88FC016936B5BD285;// 0x0988(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7649EE3749362DEFBF8F1DA52F754C16;// 0x09E8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_625F5D02456550CD42A293AD29C17780;// 0x0A48(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6E6B042643A848D859E16D9ACC31DB8A;// 0x0A78(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CCBA369C45EEEF5A7ACA2E8170A87F38;// 0x0AA8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1F78697D47A1440B7173D28012DA67BC;// 0x0B08(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2573533C449A8FC1854D538D072E2D87;// 0x0B68(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A24DD861425F2157B0EB7187D9C610C5;// 0x0BC8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_79D8FD8D4D04F22FB3DF40B0EAE7F523;// 0x0BF8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_616661404722BBBC08F4B7A41E99271B;// 0x0C28(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_541117BA4360C2495C393B9768A510A9;// 0x0C58(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E7DCEDAB425BD3204E45A89E6C4E6764;      // 0x0CB8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_21BD570A40CEF2C1920089A80D34F59C;      // 0x0CF0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_812DE94649DBD81FA3E036AFAD2ABF24;      // 0x0D28(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A9E95B7A4E08B43C828B3B8E974F3759;// 0x0D60(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F88ADE3F47782691AFB4B68D4A294152;// 0x0DC0(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BB0612184AC06597A04819B287473920;// 0x0DF0(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_01735442465ECCDD78C8F7940E26B2B8;// 0x0E30(0x0060)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A528840847C2BA268451CAB286140A3E;// 0x0E90(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_703AFC57475C06D14F016594CDE9B367;// 0x0EB8(0x0028)
	struct FAnimNode_Root                              AnimGraphNode_Root_97DDE3DF41AD181CEF4EB39F09637756;      // 0x0EE0(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_177C0E4C4A299697A8767992F4FAE9F9;// 0x0F08(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AE55E2EE4A18BE63ECDDB9B3E74EE61D;// 0x0F58(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1B7D1BC348943BAD94D8D88059B91744;// 0x0F88(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_892B5640404716C3B5A410901FA20A3F;// 0x0FE8(0x0060)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3B57D41C4912A49D0DA476BF46E7AC55;// 0x1048(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3E4159D245EAB50A923242996E007AFD;// 0x1070(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_9B8E50314E2336ABE9F84EA6C37F6E6B;// 0x1098(0x00F8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0ED6FF054A42D24BC60E79909493B812;// 0x1190(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_49FCF38A423E079981083786D3DFE68E;// 0x1270(0x00E0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_7638270044A98A35F0A05E9159B231D8;// 0x1350(0x00F8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_21C7B1944C4535A180991EA1E3D67728;// 0x1448(0x00F8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_74316A824C75146F80208DB6B2FDEFDA;// 0x1540(0x0060)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D8C056B44B455A895076DDA682AB6332;// 0x15A0(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9F6199C74B5EC18AB8A2ABAF6C09E527;// 0x1680(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_56BDEB1D407C3ACAA4B676980AFEBC55;// 0x16E0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7A18414040E1F60C6B9F948F531F4FC1;// 0x1740(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0A6BB9A7401A5B28FC40FBB53B0F3A45;// 0x1770(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_341576A74F97A1851DE774B05ED86500;// 0x17A0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BB84CB284215B9082D302B9C97477E3A;// 0x1800(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AE959ED945D6D8495333F7AAAA30AF90;// 0x1830(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_98584CCC41C57121E04BCA92F363D260;// 0x1890(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7F296539410EB057AE4D60AED13736F5;// 0x18C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9CB89DCA486D7A99C405009B8F0930DD;// 0x1920(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FE1D66A14B6A10AB4A02A6B2B902A31A;// 0x1950(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_41CB5FD844BBD72656209C9EF3CAE445;// 0x1A30(0x0060)
	bool                                               bIsMoving;                                                // 0x1A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1A91(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x1A94(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x1AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x1AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x1AA8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x1AB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseFlyingAimOfffset;                                      // 0x1AB5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x1AB6(0x0002) MISSED OFFSET
	float                                              MovementAnimRate;                                         // 0x1AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x1ABC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1ABD(0x0003) MISSED OFFSET
	struct UObject_FTransform                          RootOffsetTransform;                                      // 0x1AC0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumMovementSpeed;                                     // 0x1AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimPlayRate;                                      // 0x1AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendInTime;                                       // 0x1AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x1AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendInTime;                                        // 0x1B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x1B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x1B08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x1B09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x1B0A(0x0002) MISSED OFFSET
	float                                              MinimumMovementSpeedFlying;                               // 0x1B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x1B10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x1B11(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x1B12(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x1B13(0x0001) MISSED OFFSET
	float                                              MinTurnRateForTurnAnimation;                              // 0x1B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningEnabledBlendTime;                                  // 0x1B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x1B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDirectionBlendTime;                                // 0x1B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMoveBlendIn;                                        // 0x1B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMoveBlendOut;                                       // 0x1B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRatePower;                                    // 0x1B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x1B30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x1B31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x1B32(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFlyingOffset;                                         // 0x1B33(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FlyingOffset;                                             // 0x1B34(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentFlyingOffset;                                      // 0x1B40(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LandedOffset;                                             // 0x1B4C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkBlend;                                               // 0x1B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x1B5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIKWhenFalling;                                    // 0x1B5D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIK;                                               // 0x1B5E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x1B5F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningMovementAnimRate;                                  // 0x1B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Velocity2D;                                               // 0x1B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetYawScale;                                        // 0x1B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetPitchScale;                                      // 0x1B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForwardBack;                                              // 0x1B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftRight;                                                // 0x1B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsesFlyingMovementBlend;                                 // 0x1B78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1B79(0x0003) MISSED OFFSET
	float                                              FlyingMovementBlendBackwardsMultiplier;                   // 0x1B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunAnimRateScale;                                         // 0x1B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRateClampMin;                                 // 0x1B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRateClampMax;                                 // 0x1B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimulatedFlyingAnimRateSpeedMultiplier;                   // 0x1B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDiving;                                                // 0x1B90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1B91(0x0003) MISSED OFFSET
	struct FRotator                                    PreviousRotation;                                         // 0x1B94(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationDelta;                                            // 0x1BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DivingForwardBack;                                        // 0x1BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DivingLeftRight;                                          // 0x1BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDivingBraking;                                         // 0x1BAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1BAD(0x0003) MISSED OFFSET
	float                                              RunningBlendInTime;                                       // 0x1BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendOutTime;                                      // 0x1BB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentDivingMoveSpeedMult;                               // 0x1BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x1BBC(0x0004) MISSED OFFSET
	class UAnimSequence*                               Flying_IsCarrying_Additive;                               // 0x1BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsCarryingCharacter;                                     // 0x1BC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x1BC9(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           BlinkAnim;                                                // 0x1BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SleepingAnim;                                             // 0x1BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMovementAnimRateClampMin;                           // 0x1BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMovementAnimRateClampMax;                           // 0x1BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftRightBlendspaceMultiplier;                            // 0x1BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForwardBackBlendspaceMultiplier;                          // 0x1BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseExtraLeftRightBlendspaceMultiplier;                    // 0x1BF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1BF1(0x0003) MISSED OFFSET
	float                                              ExtraLeftRightBlendspaceMultiplier;                       // 0x1BF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForwardBackInterpSpeed;                                   // 0x1BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeftRightInterpSpeed;                                     // 0x1BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAtMAXSpeed;                                              // 0x1C00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x1C01(0x0003) MISSED OFFSET
	float                                              CurrentFlapMagnitude;                                     // 0x1C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetFlapMagnitude;                                      // 0x1C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxGlideDuration;                                         // 0x1C0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastGlideCheckTime;                                       // 0x1C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseElevation;                                            // 0x1C18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDelevating;                                              // 0x1C19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bElevating;                                               // 0x1C1A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ElevationDontRequireMoving;                               // 0x1C1B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElevationBlendInTime;                                     // 0x1C1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElevationBlendOutTime;                                    // 0x1C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMovingBackwards;                                       // 0x1C24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLatchedDownward;                                        // 0x1C25(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLatched;                                                // 0x1C26(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBackwardsAnim;                                        // 0x1C27(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseAccelerationForDirectionalAnims;                       // 0x1C28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseStrafing;                                             // 0x1C29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x1C2A(0x0002) MISSED OFFSET
	float                                              StrafingMagnitude;                                        // 0x1C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastVelocity;                                             // 0x1C30(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Acceleration;                                             // 0x1C3C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccelerationInterpSpeed;                                  // 0x1C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x1C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsStrafingRight;                                         // 0x1C50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastStrafeWasRight;                                       // 0x1C51(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnlyStrafeIfNotTurning;                                   // 0x1C52(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x1];                                       // 0x1C53(0x0001) MISSED OFFSET
	float                                              Diving_AllowBelowFlyingPitch_Enter;                       // 0x1C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_AllowBelowFlyingPitch_Exit;                        // 0x1C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_Ratio_Current;                                     // 0x1C5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTakeoffTime;                                          // 0x1C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         LastMovementMode;                                         // 0x1C68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x1C69(0x0007) MISSED OFFSET
	double                                             LastTimeStartAtMaxSpeed;                                  // 0x1C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseIdleFly;                                              // 0x1C78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x1C79(0x0007) MISSED OFFSET
	double                                             LastTimeStoppedDiving;                                    // 0x1C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceIdleFly;                                            // 0x1C88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x1C89(0x0007) MISSED OFFSET
	double                                             LastTimeStartedDiving;                                    // 0x1C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTakingOff;                                             // 0x1C98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsLanding;                                               // 0x1C99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x1C9A(0x0002) MISSED OFFSET
	float                                              CallFunc_MakeLiteralFloat_ReturnValue;                    // 0x1C9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x1CA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x1CA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1CA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x1CA9(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x1CAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x1CB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue;                            // 0x1CB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x1CB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x1CBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue2;                           // 0x1CC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x1CC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x1CC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue3;                        // 0x1CCC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1CD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1CD1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x1CD2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x1CD3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x1CD4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x1CD5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x1CD6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x1CD7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x1CD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x1CD9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x1CDA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x1CDB(0x0001) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue4;                        // 0x1CDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x1CE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_GetCurrentTime_MontageTimeRemaining;     // 0x1CE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_GetCurrentTime_TotalMontageDuration;     // 0x1CE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Montage_GetCurrentTime_ReturnValue;              // 0x1CEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x1CED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x1CEE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x1CEF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x1CF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x1CF1(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue5;                        // 0x1CF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x1CF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x1CF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x1CFA(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue6;                        // 0x1CFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x1D00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0x1D01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x1D02(0x0002) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1D04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x1D08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x1D09(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x1D0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue10;                        // 0x1D10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x1D11(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x1D18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x1D20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1D28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x1D29(0x0007) MISSED OFFSET
	class ADesmodus_Character_BP_C*                    K2Node_DynamicCast_AsDesmodus_Character_BP_C;             // 0x1D30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1D38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x1D39(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetDinoVelocity_ReturnValue;                     // 0x1D3C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSizeSquared_ReturnValue;                        // 0x1D48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x1D4C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue11;                        // 0x1D4D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1D4E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x1D4F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x1D50(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_NegateRotator_ReturnValue;                       // 0x1D5C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0x1D68(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x1D74(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x1D80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x1D84(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x1D90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue2;                        // 0x1D9C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_ComposeRotators_ReturnValue;                     // 0x1DA8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x1DB4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x1DC0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x1DCC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x1DD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x1DD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x1DD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x1DDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x1DE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x1DE1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x2];                                       // 0x1DE2(0x0002) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue2;                                // 0x1DE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue;                 // 0x1DE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x1DF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x7];                                       // 0x1DF1(0x0007) MISSED OFFSET
	class USceneComponent*                             CallFunc_GetAttachParent_ReturnValue;                     // 0x1DF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UHierarchicalInstancedStaticMeshComponent*   K2Node_DynamicCast_AsHierarchicalInstancedStaticMeshComponent;// 0x1E00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x1E08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x1E09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x1E0A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x1];                                       // 0x1E0B(0x0001) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x1E0C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x1E18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x1E20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x1E24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x1E28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x1E2C(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x1E30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x1E38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x1E39(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue;                  // 0x1E40(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x1E50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue2;              // 0x1E58(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue3;                        // 0x1E64(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue3;                             // 0x1E70(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue3;                // 0x1E7C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_ComposeRotators_ReturnValue2;                    // 0x1E88(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetMaxSpeed_ReturnValue;                         // 0x1E94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetMaxAcceleration_ReturnValue;                  // 0x1E98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetRunningSpeedModifier_ReturnValue;             // 0x1E9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue4;                        // 0x1EA0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x1EAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x1EB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue4;                             // 0x1EB4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x1EC0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x1ECC(0x0004) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue;                   // 0x1ED0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x1ED8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue2;            // 0x1ED9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x2];                                       // 0x1EDA(0x0002) MISSED OFFSET
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x1EDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue4;                // 0x1EE0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue2;                   // 0x1EEC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x1EF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x1F00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue3;            // 0x1F01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue12;                        // 0x1F02(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x1F03(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x1F04(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0xB];                                       // 0x1F05(0x000B) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetAimOffsetsTransform_RootRotOffsetTransform;   // 0x1F10(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsetsTransform_TheRootYawSpeed;          // 0x1F40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsetsTransform_RootLocOffset;            // 0x1F44(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsetsTransform_ReturnValue;              // 0x1F50(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch2;                                 // 0x1F5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw2;                                   // 0x1F60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll2;                                  // 0x1F64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x1F68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x1F6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue3;                                // 0x1F70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x1F74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x1F75(0x0003) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x1F78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x1F80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x4];                                       // 0x1F84(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x1F88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x1F90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x1F91(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue4;                  // 0x1F94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x1F98(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x1FA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x1FA5(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X2;                                  // 0x1FA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x1FAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x1FB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x1FB4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue3;                    // 0x1FB5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x1FB6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue13;                        // 0x1FB7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x1FB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x1FB9(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize_ReturnValue2;                              // 0x1FBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue2;                   // 0x1FC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x1FC4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue4;                    // 0x1FCC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x1FCD(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x1FD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_ReturnValue;                                // 0x1FD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x1FD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x1FD9(0x0003) MISSED OFFSET
	float                                              K2Node_Select_ReturnValue2;                               // 0x1FDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x1FE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x3];                                       // 0x1FE1(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue7;                // 0x1FE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x1FE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1FE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue14;                        // 0x1FEA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x1FEB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x1FEC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x1FF8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x2004(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue;                           // 0x2008(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue2;                          // 0x2014(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x2020(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue10;                       // 0x2021(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue15;                        // 0x2022(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x1];                                       // 0x2023(0x0001) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x2024(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x2028(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue8;                // 0x202C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x2030(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x2034(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue5;                          // 0x2038(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue11;                       // 0x2039(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x2];                                       // 0x203A(0x0002) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue5;                  // 0x203C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x2040(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x3];                                       // 0x2041(0x0003) MISSED OFFSET
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x2044(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue7;                 // 0x2048(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue12;                       // 0x2049(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue16;                        // 0x204A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue8;                 // 0x204B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue9;                // 0x204C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue10;               // 0x2050(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x2054(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue11;               // 0x2058(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x205C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue12;               // 0x2060(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue13;               // 0x2064(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x2068(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue7;                        // 0x206C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue5;                             // 0x2070(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue14;               // 0x2074(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue15;               // 0x2078(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x207C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x2080(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue17;                        // 0x2081(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x2];                                       // 0x2082(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue6;                             // 0x2084(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue16;               // 0x2088(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue17;               // 0x208C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue5;                     // 0x2090(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue18;               // 0x2094(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue19;               // 0x2098(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x209C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue6;                     // 0x20A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue2;                          // 0x20A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue2;            // 0x20A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x3];                                       // 0x20A9(0x0003) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x20AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x20B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue18;                        // 0x20B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x2];                                       // 0x20B2(0x0002) MISSED OFFSET
	float                                              CallFunc_FInterpTo_Constant_ReturnValue;                  // 0x20B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue19;                        // 0x20B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue13;                       // 0x20B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue20;                        // 0x20BA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x1];                                       // 0x20BB(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_SelectVector_ReturnValue;                        // 0x20BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue3;                              // 0x20C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue9;                 // 0x20CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x3];                                       // 0x20CD(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Normal_ReturnValue5;                             // 0x20D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue3;                   // 0x20DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue5;                    // 0x20E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x3];                                       // 0x20E1(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_SelectRotator_ReturnValue;                       // 0x20E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue21;                        // 0x20F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x3];                                       // 0x20F1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetRightVector_ReturnValue;                      // 0x20F4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue6;                             // 0x2100(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue8;                        // 0x210C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_SelectVector_ReturnValue2;                       // 0x2110(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x211C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue4;                              // 0x2120(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue7;                             // 0x2124(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue10;                // 0x2130(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x3];                                       // 0x2131(0x0003) MISSED OFFSET
	float                                              CallFunc_Dot_VectorVector_ReturnValue4;                   // 0x2134(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue3;                // 0x2138(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x213C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x3];                                       // 0x213D(0x0003) MISSED OFFSET
	float                                              CallFunc_FMax_ReturnValue2;                               // 0x2140(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue11;                // 0x2144(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x3];                                       // 0x2145(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue6;                  // 0x2148(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue4;                                // 0x214C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue3;               // 0x2150(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue20;               // 0x2154(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue3;                          // 0x2158(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue7;                             // 0x215C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue22;                        // 0x2160(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue23;                        // 0x2161(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_VectorVector_ReturnValue;            // 0x2162(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue6;                          // 0x2163(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue24;                        // 0x2164(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x3];                                       // 0x2165(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x2168(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue3;               // 0x2174(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue3;                          // 0x2180(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue4;               // 0x218C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue4;                          // 0x2190(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0x2194(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue14;                       // 0x2195(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue25;                        // 0x2196(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x1];                                       // 0x2197(0x0001) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2198(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue2;                        // 0x21A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue3;                        // 0x21A1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue26;                        // 0x21A2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x1];                                       // 0x21A3(0x0001) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue9;                        // 0x21A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue15;                       // 0x21A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x7];                                       // 0x21A9(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x21B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue27;                        // 0x21B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue4;                        // 0x21B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue28;                        // 0x21BA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x1];                                       // 0x21BB(0x0001) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue10;                       // 0x21BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue5;                        // 0x21C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue29;                        // 0x21C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x6];                                       // 0x21C2(0x0006) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue3;               // 0x21C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue2;                 // 0x21D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x4];                                       // 0x21D4(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue4;               // 0x21D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue30;                        // 0x21E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue16;                       // 0x21E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue6;                        // 0x21E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue7;                          // 0x21E3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue17;                       // 0x21E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue18;                       // 0x21E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue7;                        // 0x21E6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue31;                        // 0x21E7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue32;                        // 0x21E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x7];                                       // 0x21E9(0x0007) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentActiveMontage_ReturnValue;             // 0x21F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue4;            // 0x21F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue5;            // 0x21F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue8;                          // 0x21FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DesmodusAnimBlueprint.DesmodusAnimBlueprint_C");
		return ptr;
	}


	void IsDiving(class APrimalDinoCharacter* Dino, bool* NewParam);
	void UpdateDivingLeftRight(float DeltaTime, class APrimalDinoCharacter* Target, bool bIsDiving);
	void UpdateDivingForwardBack(class APrimalDinoCharacter* Target);
	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6654();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_ModifyBone_1002();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6653();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6652();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6651();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8279();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6650();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6649();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8277();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6648();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6647();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8276();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8275();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6646();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6645();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6644();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8274();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8273();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8272();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6643();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6642();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6641();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_ApplyAdditive_617();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6640();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6639();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_426();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendSpacePlayer_474();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendSpacePlayer_473();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_425();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_424();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6638();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendSpacePlayer_472();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6637();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6636();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6635();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6634();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6633();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6632();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_DesmodusAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
