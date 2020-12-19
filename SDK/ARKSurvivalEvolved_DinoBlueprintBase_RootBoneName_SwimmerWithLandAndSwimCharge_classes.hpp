#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C
// 0x16E0 (0x1A20 - 0x0340)
class UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_1F0753274BC3CFC2182838830EC68AE5;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B5CFE5D14A00EBEC7E5E17B70A8F6249;// 0x0368(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1473B57C4A91B1C297607D8D6D75FB8F;// 0x0398(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5689DDD44942679A3124339F6625450E;// 0x03F8(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BA7F5D064898EF8C8935669A0BC73F38;// 0x0428(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3795BC2F491D0683D7A406AC550C41DA;// 0x0450(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_40B347F24E6A34DFA4F53B994316F458;// 0x0500(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_70A8A1FF40E4373D15678BB6B0E0497A;      // 0x0528(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_08123667452FFBC6A27284B699F8D5A6;      // 0x0560(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FF7A449F42BBEEBF9E549C9EC162AE53;      // 0x0598(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D0E287A5467A73C7CC704BBE81FC7BCE;// 0x05D0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_AFD731C342AEB8972F9E9B886E7F340E;// 0x0630(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C5D696D343A34145DA14CE9708B4FA2E;// 0x0670(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_39B8297941C6D9EBDE2ED8850243BAE7;// 0x0698(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DB3F0AD140A76F86A0D6B48FB0A1AA81;// 0x06C0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_63C1F7114A0660F88C5BE3B959317AA7;// 0x0720(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A690444741EFBD6E8745B3ADEADF977C;// 0x0780(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_75A481294EA0C9028F726AA7EE290EEC;// 0x07E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AF6059E74F9BD415055F9985BAE97015;// 0x0810(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_29A5B7FD4079DEE51CC43FA7C9B88762;// 0x0840(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_56EF319743989C518B1D2E91F8CA41F5;// 0x08A0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7EF9453144818E7CF55E279D7D98D897;// 0x0900(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DEC545D3442E063FCA7E3392600385A3;// 0x0930(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0EE140EA4332FC8A930148B03148A8DB;// 0x0960(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_39175EB840B6380905CE10A83481FA9F;// 0x0990(0x00F8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4E1AD4B542ED8E2C0DAFCE9FFFECBA39;// 0x0A88(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_48700D494A05CAE4EEA4ACA7F568538C;// 0x0AB8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_76784DBA46880A2721982496ED4B2B8F;// 0x0B18(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B7A9140948027DAC7C8DF5AABBAD1AE8;// 0x0B78(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B62E059A4626ADE7305E94B8845134D6;// 0x0BA8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CD115A6D4A2C73B6EBC1589DFE3CDCF8;// 0x0BD8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7D0D6212427DDCEA7EA09BAD1E4F4D8F;// 0x0C38(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A7F16D8A4606EE67C9DCB0A41ED7BC60;// 0x0C98(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3B047777419B58D7128BE598BF6EAF9A;// 0x0CC8(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_93F6AD644B75204EDAF47C8DA577C33D;// 0x0D28(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7DD150C64C7FBD7DDDD680886D2DB6B2;// 0x0D50(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0D78(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_027B348F46DB3F6FBCBB879D1A5184EE;// 0x0D80(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_423E644343462E174F56428A06301B2B;// 0x0E30(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_85DCB1994E4781BCC9D9668373AA8F20;// 0x0E90(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A700BF3A43D80DE4ED1541988093BF8D;// 0x0EF0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0792EC054274245B06D16E8936F8FB3D;// 0x0F20(0x0030)
	struct FAnimNode_MultiFabrik_Dinos                 AnimGraphNode_MultiFabrik_Dinos_05F3D2D14CBDF714EFD529AFE6633BD8;// 0x0F50(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_17C9D559427DD850F0CBDD9469AA9AA7;// 0x0FA8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_58AD230C4D17E1C0F91DDBA9776FA9EA;      // 0x1008(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DAA4180348361528204182B74BF8BC5D;      // 0x1040(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_61FF370B4FBA7ECEBC593799238BF170;      // 0x1078(0x0038)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_BB9B77E34652CB0DEDA87B93BC536659;// 0x10B0(0x00B8)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_B50F892441D02157A4232D911A47DCE4;// 0x1168(0x00B8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_7BFE37F84560EBF1DB24FCB20340B2E2;// 0x1220(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C53D383B454144D9E77629BC25B74134;// 0x1270(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A5D80B174F0BF5A8BDC8CDA5BC3FEB72;// 0x12A0(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_65FE8D4E42CDCAE28CB447BCD6031C4B;// 0x1300(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A20B656F4C5A8B2AAB59318F2CEEB233;// 0x1328(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B91FA35A4C483B277F03A590FEE88A41;// 0x1368(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10FAC61942D6B72C8367DE9F5DEC7711;// 0x1390(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_ED2C74F741E61E0B436B0ABB2A04D6E3;// 0x13B8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_64803C7E47C6609291BAFB806D55D985;// 0x13E0(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_61AB89DC441769E5FD38868A46A8C685;// 0x1420(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E156E31946052A05B3F296BA84886389;// 0x1448(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5764321146FD37003C8A9A8B743D3075;// 0x1470(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F317C0964AE2365650A84D8F65576099;// 0x14D0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CD555ACC4A9E3B177CC1B3B25AC30BDC;// 0x1530(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9EEFB4EC454AE5BB03BBFF9D6869A041;// 0x1590(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_99780210435C16B7850B808A2A5A689A;// 0x15C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E670C65C408F173662419AB7DBCC22B2;// 0x15F0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1C1EC442407F28EF50D18CABDE2B98D3;// 0x1620(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4FCC0C194B7A0A9CB29D0FB2EDB5501A;// 0x1680(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_612FDF104899118E0189EFA7EC56025B;// 0x16E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8C9B450E46A94062B1332AA231E31EC4;// 0x1710(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E5041A4C43536435611971B0148EC8F8;// 0x1740(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DE49D7F84BF8A8C55CCDA1812B85E27F;// 0x17A0(0x0030)
	bool                                               bIsMoving;                                                // 0x17D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x17D1(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x17D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x17E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x17E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x17E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x17F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x17F5(0x0003) MISSED OFFSET
	float                                              MovementAnimRate;                                         // 0x17F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x17FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x17FD(0x0003) MISSED OFFSET
	float                                              MaxMovementAnimRate;                                      // 0x1800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x1804(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x1805(0x0003) MISSED OFFSET
	float                                              MovingAnimSpeedTreshold;                                  // 0x1808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinMovementAnimRate;                                      // 0x180C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x1810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x1811(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x1812(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x1813(0x0001) MISSED OFFSET
	float                                              TurningEnabledBlendTime;                                  // 0x1814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x1818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDirectionBlendTime;                                // 0x181C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTurnRateForTurnAnimation;                              // 0x1820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSwimming;                                             // 0x1824(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwimming;                                              // 0x1825(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x1826(0x0002) MISSED OFFSET
	float                                              SwimmingMovingAnimSpeedThreshold;                         // 0x1828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimPlayRate;                                      // 0x182C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendInTime;                                       // 0x1830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x1834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendInTime;                                        // 0x1838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x183C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x1840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunning;                                              // 0x1841(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x1842(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x1843(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SleepingAnimTranslationOffset;                            // 0x1844(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRatePower;                                    // 0x1850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurnInPlaceAnimation;                                 // 0x1854(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x1855(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x1856(0x0002) MISSED OFFSET
	float                                              AlignGroundAlpha;                                         // 0x1858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAlignGround;                                          // 0x185C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x185D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x185E(0x0002) MISSED OFFSET
	float                                              BlinkBlend;                                               // 0x1860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKAlpha;                                                  // 0x1864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendInTime;                                       // 0x1868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendOutTime;                                      // 0x186C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningMovementAnimRate;                                  // 0x1870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunningMovementAnimRate;                              // 0x1874(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIKWhenFalling;                                    // 0x1875(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIK;                                               // 0x1876(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x1877(0x0001) MISSED OFFSET
	float                                              AimOffsetPitchScale;                                      // 0x1878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetYawScale;                                        // 0x187C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSleepingEnableIK;                                        // 0x1880(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1881(0x0003) MISSED OFFSET
	float                                              MovementAnimRatePowerSwimming;                            // 0x1884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimmingRunAnimRateMultiplier;                            // 0x1888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMounted;                                               // 0x188C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x188D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x1890(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x189C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x189D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x189E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x189F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_ReturnValue;                                // 0x18A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x18A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x18A5(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x18A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x18AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x18AD(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x18B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x18B4(0x0004) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x18B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x18C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x18C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x18C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x18CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x18CB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetDinoVelocity_ReturnValue;                     // 0x18CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x18D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x18DC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x18E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x18E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x18EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x18F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x1904(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x1908(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x1909(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x190A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x190B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x190C(0x0004) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x1910(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x1918(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x191C(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x1920(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1928(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x1929(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x192C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x1930(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x1931(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x1932(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x1933(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x1934(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x1935(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x1936(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0x1937(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue5;                // 0x1938(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x1939(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_GetAimOffsets_RootRotOffset;                     // 0x193C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsets_TheRootYawSpeed;                   // 0x1948(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsets_RootLocOffset;                     // 0x194C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsets_ReturnValue;                       // 0x1958(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x1964(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x1968(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x196C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x1970(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x1974(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x1978(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x1979(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x197C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x1980(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x1984(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x1985(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x1986(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x1988(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x198C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x198D(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x1990(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x1994(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue7;                 // 0x1995(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x1996(0x0002) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x1998(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x19A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x19A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x19AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x19AD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x19AE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x19AF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x19B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x19B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x19B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMin_ReturnValue;                                // 0x19BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x19C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x19C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x19C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x19C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x19CA(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x19CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x19D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x19D1(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue3;               // 0x19D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x19D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x19DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x19E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x19E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x19E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x19E9(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x19EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x19F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x19F1(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x19F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0x19F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x19F9(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x19FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x1A00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue7;                // 0x1A04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x1A08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue5;                             // 0x1A0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_ReturnValue2;                               // 0x1A10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x1A14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x1A15(0x0003) MISSED OFFSET
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x1A18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue6;                             // 0x1A1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C");
		return ptr;
	}


	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1980();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_2627();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_ModifyBone_434();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1979();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1978();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1977();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1976();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_2626();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_2625();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1975();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1974();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_2623();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_2622();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_RotationOffsetBlendSpace_116();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_2621();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1973();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1972();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_2620();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_2619();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1971();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1970();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1969();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_ModifyBone_433();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1968();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1967();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1966();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_GroundBones_100();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_GroundBones_99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_ApplyAdditive_142();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1965();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1964();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1963();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1962();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_2614();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_2613();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1961();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1960();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_2611();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_2610();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_1959();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_2609();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
