#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoBlueprintBase_RootTransform_Glider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C
// 0x1909 (0x1C49 - 0x0340)
class UDinoBlueprintBase_RootTransform_Glider_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_56AAD8864874747725DDB9BDB1A26DAB;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_442815A64C8E4FADD5DC9C84D19AD7A1;// 0x0368(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CFCA3AE0417E9CB94AF1309B579DE854;// 0x0398(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B2F662F5479430795F4258A993E43CB0;// 0x03F8(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2CDA1A6E4EB7B980A6BAC4BE43DC807C;// 0x0428(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B36DA4B040ACE8BC568BA2BB3EEFCCAE;// 0x0450(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E6DB14174369E8308A37529957D254CD;// 0x0500(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8C7482F24BB7DB3DBC7ED19CCFBC23A0;      // 0x0528(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_59D581F24B6653F99E3A4782A61DB915;      // 0x0560(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0F88E5924A4F74C3A4FCFF9CE36E056A;      // 0x0598(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9850F2D6419A22E8F8C18299D93808A0;// 0x05D0(0x0060)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_3E0059D9432CBADF88D4D797B7A28C77;// 0x0630(0x00F8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9545A5E04578C9E62AF3E9A71500F7A3;// 0x0728(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11225E1E4755A5E82E284D8D3F7D6E14;// 0x0768(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FFB6D81246EDDCE654DFAEAE54CADA8D;// 0x0790(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3C75AD4F450C94C1965972A2B589EC05;// 0x07B8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C6F8E15A4B76AEAE5DBEF68D597AEB2B;// 0x0818(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3B3DEEB94A50533996FEC4A9C2CAE4F5;// 0x0848(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F27C098148081029CC55C0A0EE23D351;// 0x08A8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1737AF7240F80FDEDA29E8A529768436;// 0x08D8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FA17878C4E108222B76D9EBA37DD10F7;// 0x0938(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ABE5A5EB4E1C8D31B3AD08AB17D78EA8;// 0x0998(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2466A6224A8FF71E7900F3BC1D0FB2D0;// 0x09C8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A443F3DF47AB71AADDF183A41C410362;// 0x09F8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_085C2AB84C36F46A44F151886BD357AC;// 0x0A58(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DDBC616446A0DBDCE7031EB6DD087927;// 0x0A88(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9C35180A4AC8278A82F37A88B7A298FB;// 0x0AE8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BF9D990C44DC77D90EEDAE9F684F3311;// 0x0B18(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CFEE2BC64C820540EA4FE2BF6FA1F6A5;      // 0x0B78(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_476188154CA7394F2CD5F7B2E03F5810;      // 0x0BB0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CECE622D497740D6E4A616AEF2EFDA8F;      // 0x0BE8(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D5FBF9414529B711C9925BABF2BA2390;// 0x0C20(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C6AC411247BB67EC011521B7195A5171;// 0x0C70(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_411EBEF84BF33DC5FAED8A997AE6A4C5;// 0x0CA0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8E25CA8C464F2C0A9E3AC2B6B567BDC8;// 0x0CD0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_75255A6D4FFA737CF11524915A6BC6AC;// 0x0D30(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F11EDEDB476D4F8BCB4B8485B0564F87;// 0x0D90(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F09A58064091B370E665E3B207B539A3;// 0x0DC0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A958367F45114D4118885986C2768359;// 0x0E20(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9C5494C84546EF850A3F61AC67D89545;// 0x0E50(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_040F7DAF4D7B8447CEFE9ABA5A3B0E55;// 0x0EB0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A41F5A7A4724DDCCF00067B43D0BA379;// 0x0F10(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_43210691453B4173AC6297BFFF5D509B;// 0x0F40(0x0030)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_DF4C9DE042E86AED8C81FBB970139367;// 0x0F70(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7ED06F1B42A9AE834F5F42859FA98265;// 0x0FC0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71D0749D4E266B1A49BE278290D74ED0;// 0x1020(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CF10CBE94CB5BF4BFE8AB689479B991B;// 0x1050(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FF5B472E43D14FF65C9CAAAE5E51B17D;// 0x1080(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C20A8BCC41556E677D467CA7E91DBCAE;// 0x10B0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2657192842A001295A9B65A5B832A275;// 0x10E0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_831FCB5E4B358CBB45F5DD858F6CFCA5;// 0x1140(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D87B460243C4788688904AA4AF47386D;// 0x11A0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4A7B7AE14980A7E43F98358D953A5DA0;// 0x1200(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_847BC49741161AFB8640949DDC2DF6BA;// 0x1260(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12988F0E4A34F7CDF339988CA8DA54C7;// 0x12C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D1F1D8E5424B082EEF6C5080F8F445D4;// 0x12F0(0x0030)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_10854E33411F9843682D9E8AB452DCAD;// 0x1320(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_182B81FA4612A2BABDA8A4829E0336B5;// 0x1380(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B9493AF348491660D0036B94044112B6;// 0x13B0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4C0B631147A3349F694457AB95061FBC;// 0x13E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8EB536DD449527E1A681CCB7AF1D15D0;// 0x1410(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A788F4234E64D136B05BD5AF154C8CF8;// 0x1440(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BEEC61564FF92BC41ECD45809CEB6EE7;// 0x14A0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D6C6473A45EDD4922766A8926F4E0A44;// 0x14D0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E3E7278F4A752BEF6F38C1BDD3B1A8BA;// 0x1530(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B13532E54E9ED696FC9C05B6A5ED4F4E;// 0x1590(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A1E58994C895E42BF095583CD940740;// 0x15C0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2A0372DB4219009BB3728AB23ED1189D;// 0x15F0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38B7E751427689E2F95E3CB4EC7D6DB9;// 0x1650(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E8C7DB0A4CAD93107AA390B7A5911871;// 0x1680(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DCDA274D4A19F7C02937499A853721FB;// 0x16E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B01E00D2497B96A233B90986252F7AEB;// 0x1710(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E850893E49A582CBCA67D6856E301AC0;// 0x1740(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_CCA41E58481E3D3D62C98D96354BA4AB;// 0x17A0(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_721416684220A1C348AEDFA05C704142;// 0x17C0(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BD619D3D43163AB6848C1FB58CA41B5F;// 0x17E0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4319FDBD48DDF3E4725661956B76502E;// 0x1840(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C08B66B4FACA5D5F1BB1FAA552C4893;// 0x18A0(0x0030)
	bool                                               bIsMoving;                                                // 0x18D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x18D1(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x18D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x18E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x18E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x18E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x18F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x18F5(0x0003) MISSED OFFSET
	float                                              MovementAnimRate;                                         // 0x18F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x18FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x18FD(0x0003) MISSED OFFSET
	struct UObject_FTransform                          RootOffsetTransform;                                      // 0x1900(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumMovementSpeed;                                     // 0x1930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimPlayRate;                                      // 0x1934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendInTime;                                       // 0x1938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x193C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendInTime;                                        // 0x1940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x1944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x1948(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x1949(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x194A(0x0002) MISSED OFFSET
	float                                              MinimumMovementSpeedFlying;                               // 0x194C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x1950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x1951(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x1952(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x1953(0x0001) MISSED OFFSET
	float                                              MinTurnRateForTurnAnimation;                              // 0x1954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningEnabledBlendTime;                                  // 0x1958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x195C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDirectionBlendTime;                                // 0x1960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMoveBlendIn;                                        // 0x1964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMoveBlendOut;                                       // 0x1968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRatePower;                                    // 0x196C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x1970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x1971(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x1972(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFlyingOffset;                                         // 0x1973(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FlyingOffset;                                             // 0x1974(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentFlyingOffset;                                      // 0x1980(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LandedOffset;                                             // 0x198C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkBlend;                                               // 0x1998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x199C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMounted;                                               // 0x199D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMounted;                                              // 0x199E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x199F(0x0001) MISSED OFFSET
	float                                              AimOffsetYawScale;                                        // 0x19A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetPitchScale;                                      // 0x19A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x19A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunning;                                              // 0x19A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_GliderStates>                        CurrGliderState;                                          // 0x19AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x19AB(0x0001) MISSED OFFSET
	float                                              GlideLeftRight;                                           // 0x19AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlideDown;                                                // 0x19B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchForFullGlideDown;                                    // 0x19B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlideAnimInterpSpeed;                                     // 0x19B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseExAnimsForNoneGliderState;                            // 0x19BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAltExAnimForNoneGliderState;                          // 0x19BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x19BE(0x0002) MISSED OFFSET
	float                                              GlideDownEnterDiveValue;                                  // 0x19C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftRightToDownScalar;                                    // 0x19C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExAnimIndex;                                              // 0x19C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExAnimBlendTime;                                          // 0x19CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GliderStateBlendTime;                                     // 0x19D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsePassengerUpdateAnim;                                  // 0x19D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAltIdle;                                              // 0x19D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUsingAltIdle;                                          // 0x19D6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x19D7(0x0001) MISSED OFFSET
	double                                             LastUsedAltIdleTime;                                      // 0x19D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AltIdleInterval;                                          // 0x19E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExMountedAnimsPlayRate;                                   // 0x19E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AltMountedIdleInterval;                                   // 0x19E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AltIdleBlendTime;                                         // 0x19EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AltIdleExplicitTime;                                      // 0x19F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x19F4(0x0004) MISSED OFFSET
	TArray<float>                                      GroundedAltIdleAnimLengths;                               // 0x19F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MountedAltIdleAnimLengths;                                // 0x1A08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrAltIdleAnimIndex;                                     // 0x1A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x1A1C(0x0004) MISSED OFFSET
	TArray<class UAnimSequenceBase*>                   AltIdleAnims;                                             // 0x1A20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimSequenceBase*>                   AltMountedIdleAnims;                                      // 0x1A30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUseRunFlyAnims;                                          // 0x1A40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseDeadBlink;                                            // 0x1A41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMountedFalling;                                        // 0x1A42(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x1A43(0x0001) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x1A44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x1A48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x1A4C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x1A4D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x1A4E(0x0002) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x1A50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x1A54(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x1A55(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x1A56(0x0002) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x1A58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x1A5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x1A60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1A64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x1A65(0x0003) MISSED OFFSET
	class UAnimSequenceBase*                           CallFunc_Array_Get_Item;                                  // 0x1A68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequenceBase*                           CallFunc_Array_Get_Item2;                                 // 0x1A70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1A78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x1A7C(0x0004) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x1A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x1A88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1A90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1A91(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x1A92(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x5];                                       // 0x1A93(0x0005) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x1A98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x1AA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x1AA1(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x1AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1AB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_UpdateAnimFromShooterChar_HasBuffFromPawnOwner;  // 0x1AB1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1AB2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x1];                                       // 0x1AB3(0x0001) MISSED OFFSET
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x1AB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x1AB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x1AB9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1ABA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x5];                                       // 0x1ABB(0x0005) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetAimOffsetsTransform_RootRotOffsetTransform;   // 0x1AC0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsetsTransform_TheRootYawSpeed;          // 0x1AF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsetsTransform_RootLocOffset;            // 0x1AF4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsetsTransform_ReturnValue;              // 0x1B00(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x1B0C(0x0004) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x1B10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x1B18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x1B1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x1B20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x1B24(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x1B28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x1B30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x1B31(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x1B34(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x1B38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0x1B39(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue5;                // 0x1B3A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x1B3B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x1B3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue2;                                // 0x1B40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x1B44(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x1B45(0x0003) MISSED OFFSET
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x1B48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x1B4C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x1B54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x1B58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x1B5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_ReturnValue;                                // 0x1B60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x1B64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x1B65(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x1B66(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x1];                                       // 0x1B67(0x0001) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x1B68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x1B6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x1B6D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x2];                                       // 0x1B6E(0x0002) MISSED OFFSET
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x1B70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1B74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x1B75(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x1B76(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x1];                                       // 0x1B77(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x1B78(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x1B84(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x1B90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue;                           // 0x1B94(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue2;                          // 0x1BA0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x1BAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x1BAD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x1BAE(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x1BB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x1BB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x1BB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x1BBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x1BC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue7;                // 0x1BC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x1BC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue8;                // 0x1BCC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x1BD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x1BD4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x1BD5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x1BD6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x1];                                       // 0x1BD7(0x0001) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x1BD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x4];                                       // 0x1BDC(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x1BE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue;             // 0x1BE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x7];                                       // 0x1BE9(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x1BF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_TimeSince_ReturnValue;                           // 0x1BF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x1BFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue9;                // 0x1C00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x1C04(0x0004) MISSED OFFSET
	double                                             CallFunc_Conv_FloatToDouble_ReturnValue;                  // 0x1C08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x1C10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x1C14(0x0004) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x1C18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue7;                 // 0x1C20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x1C21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x6];                                       // 0x1C22(0x0006) MISSED OFFSET
	TArray<float>                                      K2Node_Select_ReturnValue2;                               // 0x1C28(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x1C38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x1C39(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_LastIndex_ReturnValue;                     // 0x1C3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Array_Get_Item3;                                 // 0x1C40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_RandomIntegerInRange_ReturnValue;                // 0x1C44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue8;                 // 0x1C48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C");
		return ptr;
	}


	void PassengerUpdateAnim(class APrimalDinoCharacter* CarryingDino, float DeltaTime);
	void UpdateAnimFromShooterChar(class AShooterCharacter* ShooterChar, float DeltaTime, bool* HasBuffFromPawnOwner);
	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7434();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9107();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ModifyBone_1056();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7433();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_RotationOffsetBlendSpace_462();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7432();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7431();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9105();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7430();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7429();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9104();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9103();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7428();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9102();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7427();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7426();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ApplyAdditive_696();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7425();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7424();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7423();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9097();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7422();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7421();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9096();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9095();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ApplyAdditive_695();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7420();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7419();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7418();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7417();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7416();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7415();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByInt_48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9088();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9087();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9086();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9085();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7414();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9084();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7413();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7412();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9083();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9082();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7411();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9081();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7410();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9080();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9079();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7409();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequenceEvaluator_24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequenceEvaluator_23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7408();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7407();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
