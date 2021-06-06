#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceJumperAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass IceJumperAnimBlueprint.IceJumperAnimBlueprint_C
// 0x18B8 (0x1BF8 - 0x0340)
class UIceJumperAnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_B560FD51463E842A2C079AA3B913C10B;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F0FC2B454BAE9E0EC17B459C6E3AE3F3;// 0x0368(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AE1AABA5452250DF4A4E32BED5BC319C;// 0x0398(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7187B7F249788F5A3611F58033F0184D;// 0x03F8(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DAEFA4BB476E8A66652339B7EB0EEA11;// 0x0428(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B1AC9AAB403E8170DFB44E8EBB772E97;// 0x0450(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7D0716CD4C2B3E563D5DA3B3B6319A5D;// 0x0500(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E5CEE31B4755944E271D3C9BF7271638;      // 0x0528(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D4F196164ABF267CDEC29ABB7B4B2DFD;      // 0x0560(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DADAB1094E5D9C031364F680DC973332;      // 0x0598(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_033400D4449F81F21ABB7DAE8C8056BF;// 0x05D0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_02605FB04D7594291214EB858CEC4BFD;// 0x0630(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D7C52B2C4601FA8E0274DCA43282792C;// 0x0670(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4CF70B6646AB705CC492D18673D38AE2;// 0x0698(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BBA80FF74102F95EBD77EDAD8144F34F;// 0x06C0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3F9C57D84849259C85A24BA776FF489E;// 0x0720(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_44E7C4C740A0DE54B7029EBE231FD1C8;// 0x0780(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2FAC648847FE9B114C234789DDA7382A;// 0x07B0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0548C2D644AFEA8931312B9782DA54DD;// 0x07E0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_420E882C4EA35AA8ACD2808A942C07D1;// 0x0840(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FE60EAC64AB0231B75DD7B9D85142A67;// 0x08A0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C83D4CD45501816BA2B81A73411A79E;// 0x08D0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F8CF2494431E9BCA1617F28338BC8D20;// 0x0900(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C5119E5A40C5D3BD5E9EB5B69EEAB28C;// 0x0930(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C096ED0549F2DA28D0C5AEBB088DD422;// 0x0990(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CDB333FC4FEBDA6554ABDDA02FAD409D;// 0x09F0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_83631C2C4710BCA296BB29BB6403EC08;// 0x0A20(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B271E14B42E72855395F13B9E6A85B06;// 0x0A50(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5B8C970A4A3ABB801C16F8BBFD4BA444;// 0x0AB0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_53A725DA485D79747675D08B3E68BB94;// 0x0B10(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_53CF554146DD1F0FB9305FBC4F2768F7;// 0x0B70(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CF483DCA4770550BE7B15BA8683D4D81;// 0x0B98(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DE0B132347E1CC3F360B2781244474E1;// 0x0BC0(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0BE8(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6B724A2848D454DF1DC087ACA9B777ED;// 0x0BF0(0x00B0)
	struct FAnimNode_MultiFabrik_Dinos                 AnimGraphNode_MultiFabrik_Dinos_C4D1949F4596D1C31C0F4A95304A644F;// 0x0CA0(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F3A4408C49B6A91DB3973482BB117D96;// 0x0CF8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_01516C404CB881455EF775A175910B62;      // 0x0D58(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D51BA2104C970057AFDF16B93BAF01AE;      // 0x0D90(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B2358B7F4FF5C947093D85BA2B459961;      // 0x0DC8(0x0038)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_FDFFF8464CBDDC34841A9EAAF23A53BE;// 0x0E00(0x00B8)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_E54491D346C81D8C1FA0A89DD83CB8D5;// 0x0EB8(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_788F944149DD1011B5F44FAE1FC9FADD;// 0x0F70(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6A86F2B649B155216DD2AF927334F429;// 0x0FD0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_55CD6BC443400FDE67BD1386789337D3;// 0x0FF8(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_91174F1B463FDB2B79158894F3EE7F7C;// 0x1038(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1D9CBA6046764FBF765CE099F1FCA87B;// 0x1060(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_18B2A81040A815030AD1B8A66EDD7795;// 0x1088(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_F6B98AA24AAAE00CFED5A7886B54A9DE;// 0x10B0(0x00F8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E98B2B324F6FFB5127990EB91DE0309C;// 0x11A8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_537C944744CEE6C402FA35B3FF68D79C;// 0x11D8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_53F09EEC400D1157F43A10B4C95DE3BF;// 0x1238(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D1A1E38348B626D99EB87E85E9DFBAD5;// 0x1268(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60E8B6F4477423137B26D2AE39176E3D;// 0x12C8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_425C51AB4242A87BC12172B6185E8ADB;// 0x12F8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A818878A445C2CB921A4C3A45C446772;// 0x1358(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4F22D8964612FF41EA77F680EF0DD738;// 0x1388(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_ED7173F5432527775F0AB9A46E47DCFB;// 0x13B8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D082C2B241CE4CAFCA610FB8D5D23205;// 0x1418(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_260A45DC4F655AEA00752DBABBCB2578;// 0x1478(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E0A3CCA34A46C9AD6151AA811B2395C7;// 0x14D8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B963E1204FB3C927D425B2A730E1DBA2;// 0x1508(0x0030)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_BFDB6E21406DF57331BF4D9B6017EB60;// 0x1538(0x0050)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_AAA9AECF4188778B1322C2AC80660E6B;// 0x1588(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_833785CD42790378467E0AB20D1D7EEB;// 0x15D8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C61D5B664F3FB8C1B7EEF28A7D14F694;// 0x1608(0x0030)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_51A4C1CE4D31DFF553271C9F1FAB4FA3;// 0x1638(0x0050)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_2157FABB426E92A54F30E3A0CBD703E2;// 0x1688(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6E9B3F32488BBBAF0E9CBD890AD8E62A;// 0x16D8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AFF490BB400FB8D9353EECA20263379F;// 0x1708(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3EA2CBFC4E5E184309D8FC905874180C;// 0x1738(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6CD25E15403AAA8DB1460FA572F1D543;// 0x1798(0x0030)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_55E6DD4C4D401A32D5841A80A81DB749;// 0x17C8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_70179CE04BC7B7DE73EE57B4064A33FF;// 0x1818(0x0030)
	bool                                               bIsMoving;                                                // 0x1848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1849(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x184C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x1858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x185C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x1860(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x186C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x186D(0x0003) MISSED OFFSET
	float                                              MovementAnimRate;                                         // 0x1870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsHovering;                                              // 0x1874(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1875(0x0003) MISSED OFFSET
	float                                              MaxMovementAnimRate;                                      // 0x1878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x187C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x187D(0x0003) MISSED OFFSET
	float                                              MovingAnimSpeedTreshold;                                  // 0x1880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinMovementAnimRate;                                      // 0x1884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x1888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x1889(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x188A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x188B(0x0001) MISSED OFFSET
	float                                              TurningEnabledBlendTime;                                  // 0x188C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x1890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDirectionBlendTime;                                // 0x1894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTurnRateForTurnAnimation;                              // 0x1898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSwimming;                                             // 0x189C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwimming;                                              // 0x189D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x189E(0x0002) MISSED OFFSET
	float                                              SwimmingMovingAnimSpeedThreshold;                         // 0x18A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimPlayRate;                                      // 0x18A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendInTime;                                       // 0x18A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x18AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendInTime;                                        // 0x18B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x18B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x18B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunning;                                              // 0x18B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x18BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x18BB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SleepingAnimTranslationOffset;                            // 0x18BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRatePower;                                    // 0x18C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurnInPlaceAnimation;                                 // 0x18CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x18CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x18CE(0x0002) MISSED OFFSET
	float                                              AlignGroundAlpha;                                         // 0x18D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAlignGround;                                          // 0x18D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x18D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x18D6(0x0002) MISSED OFFSET
	float                                              BlinkBlend;                                               // 0x18D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKAlpha;                                                  // 0x18DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendInTime;                                       // 0x18E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendOutTime;                                      // 0x18E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningMovementAnimRate;                                  // 0x18E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunningMovementAnimRate;                              // 0x18EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIKWhenFalling;                                    // 0x18ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIK;                                               // 0x18EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x18EF(0x0001) MISSED OFFSET
	float                                              AimOffsetPitchScale;                                      // 0x18F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetYawScale;                                        // 0x18F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSleepingEnableIK;                                        // 0x18F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsStrafing;                                              // 0x18F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x18FA(0x0002) MISSED OFFSET
	float                                              StrafingMovementAnimRate;                                 // 0x18FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanStrafe;                                               // 0x1900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1901(0x0003) MISSED OFFSET
	struct FVector2D                                   StrafeMovementAxes;                                       // 0x1904(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x190C(0x0004) MISSED OFFSET
	class UBlendSpace*                                 StrafeBlendspace;                                         // 0x1910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrafeMovementAnimRateScalar;                             // 0x1918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAscending;                                             // 0x191C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDecendingRapidly;                                       // 0x191D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x191E(0x0002) MISSED OFFSET
	float                                              TurnAlpha;                                                // 0x1920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrevTurnAlpha;                                            // 0x1924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x1928(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1934(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1935(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1936(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x1937(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x1938(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x1939(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x193A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x193B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x193C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x193D(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x1940(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1944(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x1948(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x1950(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1958(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x1959(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x195A(0x0002) MISSED OFFSET
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x195C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetPendingInputVector_ReturnValue;               // 0x1960(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetDinoVelocity_ReturnValue;                     // 0x196C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x1978(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x1984(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_LessLess_VectorRotator_ReturnValue;              // 0x1990(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x199C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x19A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_LessLess_VectorRotator_ReturnValue2;             // 0x19B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x19C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x19C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x19C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x19CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_InRange_FloatFloat_ReturnValue;                  // 0x19D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x19D9(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X2;                                  // 0x19DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x19E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x19E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x19E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x19E9(0x0003) MISSED OFFSET
	struct FVector2D                                   CallFunc_MakeVector2D_ReturnValue;                        // 0x19EC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_InRange_FloatFloat_ReturnValue2;                 // 0x19F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x19F5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_InRange_FloatFloat_ReturnValue3;                 // 0x19F6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x19F7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x19F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_InRange_FloatFloat_ReturnValue4;                 // 0x19F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x19FA(0x0002) MISSED OFFSET
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x19FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x1A00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x1A01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x1A02(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x5];                                       // 0x1A03(0x0005) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x1A08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x1A10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1A18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x1A19(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x1A1A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x1A1B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0x1A1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue5;                // 0x1A1D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x1A1E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x1A1F(0x0001) MISSED OFFSET
	struct FText                                       CallFunc_Conv_BoolToText_ReturnValue;                     // 0x1A20(0x0028) (Transient, DuplicateTransient)
	struct FText                                       CallFunc_Conv_BoolToText_ReturnValue2;                    // 0x1A48(0x0028) (Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue6;                // 0x1A70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x1A71(0x0007) MISSED OFFSET
	class FString                                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;       // 0x1A78(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x1A88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue7;                // 0x1A89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x6];                                       // 0x1A8A(0x0006) MISSED OFFSET
	class AIceJumper_Character_BP_C*                   K2Node_DynamicCast_AsIceJumper_Character_BP_C;            // 0x1A90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x1A98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x1A99(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x1A9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_InAirStateIsResultOfJump_Result;                 // 0x1AA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue10;                       // 0x1AA1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_DecendingRapidly_Result;                      // 0x1AA2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x1AA3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x1AA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x1AA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x1AAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAscending_Result;                              // 0x1AB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x1AB1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue5;                          // 0x1AB2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x5];                                       // 0x1AB3(0x0005) MISSED OFFSET
	class AIceJumper_Character_BP_C*                   K2Node_DynamicCast_AsIceJumper_Character_BP_C2;           // 0x1AB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x1AC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x1AC1(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_GetAimOffsets_RootRotOffset;                     // 0x1AC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsets_TheRootYawSpeed;                   // 0x1AD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsets_RootLocOffset;                     // 0x1AD4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsets_ReturnValue;                       // 0x1AE0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch2;                                 // 0x1AEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw2;                                   // 0x1AF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll2;                                  // 0x1AF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x1AF8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x1B04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x1B08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x1B0C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x1B0D(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x1B10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x1B14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x1B18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x1B1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue8;                // 0x1B1D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue11;                       // 0x1B1E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x1];                                       // 0x1B1F(0x0001) MISSED OFFSET
	struct FRotator                                    CallFunc_SelectRotator_ReturnValue;                       // 0x1B20(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetDinoVelocity_ReturnValue2;                    // 0x1B2C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x1B38(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x1B3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x1B40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x1B48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x1B49(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x1B4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue4;                  // 0x1B50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x1B54(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x1B55(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x2];                                       // 0x1B56(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x1B58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x1B5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x1B5D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x2];                                       // 0x1B5E(0x0002) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x1B60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x1B68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x1B6C(0x0004) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x1B70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x1B78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x1B7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x1B80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x1B81(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1B82(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0x1B83(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x1B84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x1B88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x1B8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMin_ReturnValue;                                // 0x1B90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x1B94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x1B98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue6;                          // 0x1B9C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x1B9D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue12;                       // 0x1B9E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x1];                                       // 0x1B9F(0x0001) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x1BA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue10;                        // 0x1BA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x1BA5(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue3;               // 0x1BA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x1BAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x1BB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x1BB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue5;                             // 0x1BB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue7;                          // 0x1BBC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x1BBD(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x1BC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue13;                       // 0x1BC4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x1BC5(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x1BC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue11;                        // 0x1BCC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x1BCD(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x1BD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue6;                             // 0x1BD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x1BD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x1BDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue7;                             // 0x1BE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x1BE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x1BE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x1BEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue7;                 // 0x1BED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue12;                        // 0x1BEE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x1];                                       // 0x1BEF(0x0001) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue4;               // 0x1BF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x1BF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass IceJumperAnimBlueprint.IceJumperAnimBlueprint_C");
		return ptr;
	}


	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2190();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_SequencePlayer_3237();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_ModifyBone_510();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2189();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2188();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2187();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_SequencePlayer_3236();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_SequencePlayer_3235();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2186();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2185();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_SequencePlayer_3232();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2184();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2183();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_SequencePlayer_3231();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_SequencePlayer_3230();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2182();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2181();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2180();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_ModifyBone_509();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2179();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_GroundBones_112();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_GroundBones_111();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2178();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_138();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2177();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_SequencePlayer_3228();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2176();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_SequencePlayer_3227();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2175();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_SequencePlayer_3226();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_SequencePlayer_3225();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2174();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2173();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2172();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_SequencePlayer_3224();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_SequencePlayer_3223();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_TwoWayBlend_42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_TwoWayBlend_41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_SequencePlayer_3222();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_SequencePlayer_3221();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_TwoWayBlend_40();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_TwoWayBlend_39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_SequencePlayer_3220();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_SequencePlayer_3219();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_BlendListByBool_2171();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IceJumperAnimBlueprint_AnimGraphNode_ApplyAdditive_210();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_IceJumperAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
