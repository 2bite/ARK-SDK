#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Summoner_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Summoner_AnimBlueprint.Summoner_AnimBlueprint_C
// 0x1B18 (0x1E58 - 0x0340)
class USummoner_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_CC4293734B7E9277A5794C9638BF751A;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EB5C027844EC337CC551B7998547DD97;// 0x0368(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9A2701F94FAB280D72C94B85CDA5D4AA;// 0x0398(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45A2682247B30C991BC279B7CCC47892;// 0x03F8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_386EBD2547BFA0A022A32781778749A7;      // 0x0428(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6C2551B449DF4E1324D62EB93BE503D6;      // 0x0460(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8AB4F096497B314D590F53B5207BD0E7;      // 0x0498(0x0038)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8A3C6DBC4DDF2A7F51A013B1A18F63A0;// 0x04D0(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_660BDB0A42DA7A0D1F03D99E35A418FE;// 0x0510(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_544CDD5E48B5BA7D8676FD8ED9D00674;// 0x0538(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8BC2EEEE4ECAAC0FE74847BEE479D5EB;// 0x0598(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B38C8F354C6565AA97671CA6DFCC759C;// 0x05F8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BE21089E41F702181CEEE2B078F87619;// 0x0658(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_65BDC8E34671F07A4E21678B8107663A;// 0x0688(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FF84BCF74CCCDFEEE9A3D7ACDFF3F265;// 0x06B8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E3373D5D424F92F36EB93F98C31167AC;// 0x0718(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9387C5254582E44DBF0201BC7DBDAF7C;// 0x0748(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C58244EA42B37A261FB041B93C68F318;// 0x07A8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E033307B4354CAAB9B4911B1D76F6692;      // 0x0808(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_16FD25F248719ADFE1DDAD9DA376BB53;      // 0x0840(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1723107040ABE04D793087A4BF68D0F1;      // 0x0878(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2A5A1F2E455709790960199F475B0076;// 0x08B0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_728C523E4D8AA9FC17A83B8618F22899;// 0x08E0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_67DE1C394E928F29B3D89DAED4090143;// 0x0940(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C865644644315C7D902C57AAC0234209;// 0x09A0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3309621A4D954A22D39E56BBE1B4D7C9;// 0x09D0(0x0030)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_FE11BB7B402767023D2728B169D66218;// 0x0A00(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F1C3E091433A6D3D8A32D385E92B2ECE;// 0x0A50(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BA2C38D543C0CFB1DCFD08ABA3714FA7;// 0x0A80(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E0E79E3F4B7D129712FCFEA82D5B810F;// 0x0AE0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0A79830B4BD5E87DC3DA97B833A30BCB;// 0x0B10(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_270DE5BA4BBBC2E6E4B2489D1612CF6E;// 0x0B70(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5E53FF5E46035806CC86CDA3079D3D22;// 0x0BD0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F14A4B0146B55AC7EF4A95B3B1C29346;// 0x0C00(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_860AA99C4017AA2AD7658FA105CA51EA;// 0x0C30(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_89E46FAB49C1658E3F8E94966D48AE10;// 0x0C60(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_738614CE4376D841C35E71835BFBC712;// 0x0CC0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C90B35814ED009D8901F18A7E38B94E9;// 0x0CF0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_96DDDCE8454C78D6D7E99F9BBFF18CD3;// 0x0D50(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7C1CC66D47A6320EC16DDBBFBBB5C8BA;// 0x0DB0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BCD8C73746905977CF6735B5B602A2B4;// 0x0E10(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2B08F8F643CE8D3CF8D6FB9F7F6E6E5B;// 0x0E40(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B23E8D8E4158A54320593598D88AA2DD;// 0x0E70(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E9ABCEB64752A2FA5FC713BC939FBB65;// 0x0ED0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BDB3BDDE4DBCD5C8DB4EB2BB92CC52B4;// 0x0F00(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3406A46246D7297DB19CE184D0ED0EE2;// 0x0F60(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C45A3B544FCC5FE4CC4475BDE4820F0F;// 0x0F90(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EDACD4EB411C4C1CF21BCD809DFAF0E3;// 0x0FF0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ABC4120E4FB3FF14FA8828B73963816C;// 0x1050(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7EB78FFD414EEE05D4BB85AD5D809CAC;// 0x1080(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AA5D24B9448DB4DF5272C1B230F72629;// 0x10B0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ABEA64524D3A488B591588AC2D882B98;// 0x1110(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D03F169346E1738817B68AB6C1C830A7;// 0x1140(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B2619FBA4B43CCD6783905946204F021;// 0x11A0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0ED474C848D6F9187721139FF32B3A3E;// 0x11D0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_526F60F74C48281741AB748CE23F2B93;// 0x1230(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_910A1E6348CD884AA93FAFB55C085D37;// 0x1260(0x0060)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0AE4AB3946FC793BE2D2B7AB2332C629;// 0x12C0(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C478F6D34ADF8C4B71F13CB29791F3C3;// 0x13A0(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x13C8(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7A833F804FCFB19114440C8AAEDF90E4;// 0x13D0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B7152ECD4A546B081AFE90ACA9F19BD2;// 0x1480(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8FF700F844CB552AB3DA47853DF0A180;// 0x14A8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C92317AD4053951B22A522B9BD74A902;// 0x14D8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_98BA9B694599C31959D441A64D4906A6;// 0x1538(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FE41EC664659799EA44AEF9E4137DFA7;// 0x1568(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_7FFBFCA449224F5471FE8FA33D58583B;// 0x15C8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D69C84EC4D2A4E591B379E91F4331BE5;// 0x1618(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D0FCC4094D94EB13B5BD9081D5BE21F9;// 0x1648(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1A42921147618DDF0AF61ABDC96BAD5F;// 0x1678(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1B043C404A9D940B0FF86CB82EA71108;// 0x16D8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_32D00CF540639D936EA352BCE1022EAB;// 0x1708(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8E35CA8C4E9DAC957E32CC83508C0B71;// 0x1768(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A811E7BC43D1FD5AD7A622882E3B5AC4;// 0x17B8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B186F85D4E745CC4DBF9CF833F4BD20D;// 0x17E0(0x0030)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D61D349B46932BCA76A8FAB54FCB1596;// 0x1810(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_295FC1B74B38E69EB45569A4E840C334;// 0x1860(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0BFF95B141ED038C85A7A7909E060653;// 0x1890(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0543587C489BED171C3B1E95BD70A343;// 0x18B8(0x0060)
	bool                                               bIsMoving;                                                // 0x1918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1919(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x191C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x1928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x192C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x1930(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x193C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x193D(0x0003) MISSED OFFSET
	float                                              MovementAnimRate;                                         // 0x1940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x1944(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0xB];                                       // 0x1945(0x000B) MISSED OFFSET
	struct UObject_FTransform                          RootOffsetTransform;                                      // 0x1950(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumMovementSpeed;                                     // 0x1980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimPlayRate;                                      // 0x1984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendInTime;                                       // 0x1988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x198C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendInTime;                                        // 0x1990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x1994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x1998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x1999(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x199A(0x0002) MISSED OFFSET
	float                                              MinimumMovementSpeedFlying;                               // 0x199C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x19A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x19A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x19A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x19A3(0x0001) MISSED OFFSET
	float                                              MinTurnRateForTurnAnimation;                              // 0x19A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningEnabledBlendTime;                                  // 0x19A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x19AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDirectionBlendTime;                                // 0x19B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMoveBlendIn;                                        // 0x19B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMoveBlendOut;                                       // 0x19B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRatePower;                                    // 0x19BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x19C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x19C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x19C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFlyingOffset;                                         // 0x19C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FlyingOffset;                                             // 0x19C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentFlyingOffset;                                      // 0x19D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LandedOffset;                                             // 0x19DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkBlend;                                               // 0x19E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x19EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMounted;                                               // 0x19ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMounted;                                              // 0x19EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x19EF(0x0001) MISSED OFFSET
	float                                              AimOffsetYawScale;                                        // 0x19F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetPitchScale;                                      // 0x19F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x19F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunning;                                              // 0x19F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsStrafingRight;                                         // 0x19FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x19FB(0x0001) MISSED OFFSET
	float                                              StrafingMagnitude;                                        // 0x19FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseStrafing;                                             // 0x1A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1A01(0x0003) MISSED OFFSET
	float                                              StrafingEnabledBlendTime;                                 // 0x1A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrafingDisabledBlendTime;                                // 0x1A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x1A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLatched;                                                // 0x1A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseGlidingAnim;                                          // 0x1A11(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLatchedDownward;                                        // 0x1A12(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bElevating;                                               // 0x1A13(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDelevating;                                              // 0x1A14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseElevation;                                            // 0x1A15(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBackwardsAnim;                                        // 0x1A16(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMovingBackwards;                                       // 0x1A17(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsGliding;                                               // 0x1A18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseTurningOnlyWhenMoving;                                 // 0x1A19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseFlyingMovementBlendspace;                              // 0x1A1A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x5];                                       // 0x1A1B(0x0005) MISSED OFFSET
	class UBlendSpace*                                 FlyingMovementBlendspace;                                 // 0x1A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   FlyingMovementBlendspaceYawRange;                         // 0x1A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   FlyingMovementBlendspacePitchRange;                       // 0x1A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMovementBlendspaceX;                                // 0x1A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMovementBlendspaceY;                                // 0x1A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlyingOnlyUseHorizontalVelocity;                          // 0x1A40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ElevationDontRequireMoving;                               // 0x1A41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x1A42(0x0002) MISSED OFFSET
	float                                              FlyingBlendInTime;                                        // 0x1A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingBlendOutTime;                                       // 0x1A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundIdleBlendOutTime;                                   // 0x1A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundIdleBlendInTime;                                    // 0x1A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElevationBlendInTime;                                     // 0x1A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElevationBlendOutTime;                                    // 0x1A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnlyStrafeIfNotTurning;                                   // 0x1A5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseAccelerationForDirectionalAnims;                       // 0x1A5D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastStrafeWasRight;                                       // 0x1A5E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x1A5F(0x0001) MISSED OFFSET
	struct FVector                                     LastVelocity;                                             // 0x1A60(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Acceleration;                                             // 0x1A6C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccelerationInterpSpeed;                                  // 0x1A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsStunned;                                               // 0x1A7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDodging;                                               // 0x1A7D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSearchLightActive;                                       // 0x1A7E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasTarget;                                               // 0x1A7F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPetalAlert;                                              // 0x1A80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x1A81(0x0003) MISSED OFFSET
	float                                              PetalAdditiveAlpha;                                       // 0x1A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              K2Node_Select_ReturnValue;                                // 0x1A88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x1A8C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x1A8D(0x0003) MISSED OFFSET
	float                                              K2Node_Select_ReturnValue2;                               // 0x1A90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x1A94(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x1A95(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x1A98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x1A9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x1AA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x1AA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_ReturnValue3;                               // 0x1AA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select3_CmpSuccess;                                // 0x1AAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x1AAD(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x1AB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x1AB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_ReturnValue4;                               // 0x1AB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select4_CmpSuccess;                                // 0x1ABC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x1ABD(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue7;                // 0x1AC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue8;                // 0x1AC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1AC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x1AC9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1ACA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x1ACB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x1ACC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x1ACD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1ACE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x1ACF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x1AD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x1AD1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x1AD2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x1AD3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x1AD4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x1AD5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0x1AD6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x1AD7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x1AD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue10;                        // 0x1AD9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x1ADA(0x0002) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1ADC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x1AE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x1AE4(0x0004) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x1AE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x1AF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1AF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x1AF9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x1AFC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0x1B08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x1B14(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x1B20(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x1B2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x1B30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x1B34(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x1B38(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x1B3C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x1B3D(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x1B40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x1B44(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x1B45(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue2;                                // 0x1B48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x1B4C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x1B4D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue2;              // 0x1B50(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue3;                             // 0x1B5C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue2;                        // 0x1B68(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x1B74(0x0004) MISSED OFFSET
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue;                 // 0x1B78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_GetFlyingBlendspaceCoords_BlendspaceCoords;      // 0x1B80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USceneComponent*                             CallFunc_GetAttachParent_ReturnValue;                     // 0x1B88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X;                                 // 0x1B90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y;                                 // 0x1B94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UHierarchicalInstancedStaticMeshComponent*   K2Node_DynamicCast_AsHierarchicalInstancedStaticMeshComponent;// 0x1B98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1BA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1BA1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x1BA2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x5];                                       // 0x1BA3(0x0005) MISSED OFFSET
	class ASummoner_Character_BP_C*                    K2Node_DynamicCast_AsSummoner_Character_BP_C;             // 0x1BA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x1BB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x1BB1(0x0003) MISSED OFFSET
	float                                              CallFunc_GetMaxAcceleration_ReturnValue;                  // 0x1BB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue3;                        // 0x1BB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue9;                // 0x1BC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x1BC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x1BCC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x1BCD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x1BCE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue11;                        // 0x1BCF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x1BD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x1BD1(0x0007) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x1BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x1BE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x1BE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x1BE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x1BEA(0x0002) MISSED OFFSET
	float                                              CallFunc_GetRunningSpeedModifier_ReturnValue;             // 0x1BEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x1BF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x1BF1(0x0003) MISSED OFFSET
	float                                              CallFunc_GetMaxSpeed_ReturnValue;                         // 0x1BF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue;                  // 0x1BF8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue10;               // 0x1C08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x1C0C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x1C18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue4;                        // 0x1C1C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue4;                             // 0x1C28(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x1C34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x1C40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x1C41(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x1C42(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0xD];                                       // 0x1C43(0x000D) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetAimOffsetsTransform_RootRotOffsetTransform;   // 0x1C50(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsetsTransform_TheRootYawSpeed;          // 0x1C80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsetsTransform_RootLocOffset;            // 0x1C84(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsetsTransform_ReturnValue;              // 0x1C90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x1C9C(0x0004) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue2;               // 0x1CA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_ComposeRotators_ReturnValue;                     // 0x1CA8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x1CB4(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent2;         // 0x1CB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x1CC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x1CC1(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x1CC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x1CC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x1CCC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x1CD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x1CD4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x1CD5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x2];                                       // 0x1CD6(0x0002) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x1CD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x1CDC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0x1CDD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x2];                                       // 0x1CDE(0x0002) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue3;                                // 0x1CE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x1CE4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x1CE5(0x0003) MISSED OFFSET
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x1CE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue2;                              // 0x1CEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x1CF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x1CF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x1CFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1CFD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue12;                        // 0x1CFE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x1CFF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x1D00(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x1D0C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x1D18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue;                           // 0x1D1C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue2;                          // 0x1D28(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x1D34(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue10;                       // 0x1D35(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x2];                                       // 0x1D36(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x1D38(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue13;                        // 0x1D3C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x1D3D(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x1D40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue11;               // 0x1D44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x1D48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x1D4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue12;               // 0x1D50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x1D54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue13;               // 0x1D58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x1D5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue3;               // 0x1D60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue11;                       // 0x1D64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue14;                        // 0x1D65(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue15;                        // 0x1D66(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue12;                       // 0x1D67(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue16;                        // 0x1D68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue17;                        // 0x1D69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x1D6A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue13;                       // 0x1D6B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue18;                        // 0x1D6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x1D6D(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue4;               // 0x1D70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_ReturnValue5;                               // 0x1D74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select5_CmpSuccess;                                // 0x1D78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x1D79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x2];                                       // 0x1D7A(0x0002) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x1D7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x1D80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x1D81(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue4;                  // 0x1D84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x1D88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_SelectRotator_ReturnValue;                       // 0x1D8C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetRightVector_ReturnValue;                      // 0x1D98(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue5;                             // 0x1DA4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x1DB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x1DB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue19;                        // 0x1DB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x1DB9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_SelectVector_ReturnValue;                        // 0x1DBC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_SelectVector_ReturnValue2;                       // 0x1DC8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue3;                              // 0x1DD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue4;                              // 0x1DD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue7;                 // 0x1DDC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue8;                 // 0x1DDD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x2];                                       // 0x1DDE(0x0002) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue3;                // 0x1DE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue6;                             // 0x1DE4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x1DF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue2;                   // 0x1DF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue5;                  // 0x1DF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x1DFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue9;                 // 0x1DFD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue20;                        // 0x1DFE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x1];                                       // 0x1DFF(0x0001) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue4;                                // 0x1E00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue5;                          // 0x1E04(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x1E05(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue14;               // 0x1E08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue2;                          // 0x1E0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue7;                             // 0x1E10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x1E1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue3;                   // 0x1E20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x1E24(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue21;                        // 0x1E25(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_VectorVector_ReturnValue;            // 0x1E26(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue22;                        // 0x1E27(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x1E28(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x1E34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue3;                          // 0x1E40(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue4;                          // 0x1E4C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Summoner_AnimBlueprint.Summoner_AnimBlueprint_C");
		return ptr;
	}


	void STATIC_GetFlyingBlendspaceCoords(class APrimalDinoCharacter* ForDino, struct FVector2D* BlendspaceCoords);
	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5694();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_SequencePlayer_7257();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5693();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5692();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5691();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_SequencePlayer_7256();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_SequencePlayer_7255();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5690();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_SequencePlayer_7254();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5689();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5688();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5687();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5686();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_SequencePlayer_7252();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_SequencePlayer_7251();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_TwoWayBlend_98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5685();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_SequencePlayer_7249();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5684();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5683();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_SequencePlayer_7248();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_SequencePlayer_7247();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5682();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_SequencePlayer_7245();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5681();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5680();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5679();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_SequencePlayer_7244();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_SequencePlayer_7243();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5678();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5677();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5676();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5675();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5674();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5673();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5672();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5671();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_432();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_ModifyBone_1036();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5670();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5669();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5668();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5667();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_ApplyAdditive_561();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_ApplyAdditive_560();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Summoner_AnimBlueprint_AnimGraphNode_BlendListByBool_5666();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Summoner_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
