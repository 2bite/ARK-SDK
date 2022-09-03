#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TEKHoverSkiff_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C
// 0x1634 (0x1974 - 0x0340)
class UTEKHoverSkiff_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_5C4D299C4B1E2E146CC4DFA3602E0F0C;      // 0x0340(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3CED0A3C4314FFA3A57B4FB587C36EEF;// 0x0368(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9AC875B7457E8C461021FF84075F3A27;// 0x0390(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2D2664F4472357AF3CA16BB6293B0002;// 0x0440(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_71C3D9DD4E000BF9F5094286633B92E0;      // 0x0468(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_08573CFD42D5D301F8E62286F75CCC9A;      // 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2335764645B464CFD490678E4AA02E78;      // 0x04D8(0x0038)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_278310D2448009D080A00285DE181319;// 0x0510(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FD2B23774A34BBB06E13F1923343FF99;// 0x0550(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0044EFBD4A666167504C4EBE9B454BC8;      // 0x05B0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E7B577294419EC0D96DAA7B797A93DC0;      // 0x05E8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C361C036494490F57FEDEB877E03C3ED;      // 0x0620(0x0038)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5A5B346A42B9C37E136E1A887EE3F7A2;// 0x0658(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C7AAB688486D713BF106C0A65C6BABD6;// 0x0738(0x00E0)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_29EF98224847144B98A738832E22BB01;// 0x0818(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A213B0D74B3EE00486D491846162A1E2;// 0x0868(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_802943BB4890010AB0CC6BAB1F25DF54;// 0x08A8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D62848FE4061EAEB9B85499C4940FD5F;// 0x08D0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1964772047C59128DFC84980DA5767A7;// 0x0930(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BE18A0DD4C126A834CF73F8D800BD85B;// 0x0990(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FA5E5B5744B5FB9BA61640997A9DF27A;// 0x09F0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D17E7FA24FD11EE98F4FF5B5D0289EF4;// 0x0A20(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4114F5E743C18E291681F4A4D82A7FF5;// 0x0A50(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4E9273C547D2F9519F1043A0C832BF40;// 0x0AB0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8B30BAD4432B0B0D5480B28795D26CD3;// 0x0B10(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AD5F45A84B5E520B7F9276AD0389C94A;// 0x0B40(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82B1373C41738CDA477BBC98B34C67D5;// 0x0B70(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0F23076043A6CA40BE198AB2008804F0;// 0x0BA0(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4B96FCB641A281E31A3DB99624333200;// 0x0BD0(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A161C19B435B1F39BE5F24ADABE498CD;// 0x0C10(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A9391A1F45EA1F0CD20AEE908B5ACF3E;// 0x0C38(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5BD9C7CF435CA9F129772397F45991FC;// 0x0C78(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_06015792436BE4C374E00F975D438E43;// 0x0CA0(0x0060)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_58CA531C4D5466F1B76CA6A5814842AF;// 0x0D00(0x00E0)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_AF4D9D414E1EA563045EC5BF7A019473;// 0x0DE0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5D3E3F7245EBAC63AA5BE2BEC220AD88;// 0x0E30(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E4BF25674B4606B9852573AC7E67EE21;// 0x0E90(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CC9573D74BF92A111E6C0EBCADCEC76F;// 0x0EF0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AD439CC8498F13BD2A90C495234D7BEA;// 0x0F50(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6B599485487628FEE78228ACFB8F24F8;// 0x0FB0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_85DB72CF452C198849B0548820C7F78B;// 0x0FE0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6C7D92D74E97F1B869EEF485C54BF03A;// 0x1010(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BFD2F32A43AC782048A7DFA9EC0D53D9;// 0x1040(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3C85E7D5495165DAF6077CA600288B43;// 0x1070(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0D0FAA554F6AFF03C62065B9109A5671;// 0x10D0(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B9CAF02E4789F2DF4084EBB94E85E212;// 0x1100(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_115EF3824B3B550993EBB380E1FD1F4E;// 0x1128(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EDDC66CA4F5DBAD0E380F091F74D7572;// 0x1178(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_092804D7478BEC599A41C9A1EB589A2E;// 0x11D8(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_970A390B4E3165FB2359DFA4B224F77A;// 0x1208(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_43AC1C9F4E49B49FD8296BA97FAE5A09;// 0x1230(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_00EE36E349B32D27A77215BA3EEA8459;// 0x1290(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3941B7E14709CBCD3E429787735F85BC;// 0x12C0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_ED709F8D473A0D3589C060A2378E01A7;// 0x12F0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3D539FA84C0D039C0F9BC088759D8E27;// 0x1350(0x0030)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3F48CD164B9525DBF75E2F9ED7872501;// 0x1380(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2285CBD94D7AA0E39D7C48886DFBD985;// 0x13D0(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_190F60A44895994B030FD590832AE786;// 0x1410(0x0060)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_472E474047C30F9CF21D66AA4ED3700E;// 0x1470(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_906CD10A4D0B5F2CE4FEBC9052249F2E;// 0x1498(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BDC19E6345A76C38473BDB8D25646C53;// 0x14C0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7F5A8E3C48E9EB1ED8100C98D06BA7DD;// 0x14F0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6B02070B469D7DEEBA33AB93C8B54417;// 0x1550(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E37031B14CFA23E95ACFDFA0D30118A5;// 0x1580(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_BEF73F2C41BAF31321A97AB5598F3056;// 0x15E0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E7EABF324313A4DE3590A58F88391073;// 0x1630(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E04898604068A120A7808EB4897D3679;// 0x1658(0x0030)
	struct FRotator                                    RootRotationOffset;                                       // 0x1688(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x1694(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct UObject_FTransform                          RootOffsetTransform;                                      // 0x16A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRate;                                         // 0x16D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x16D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         CurrentMovementMode;                                      // 0x16D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x16D6(0x0002) MISSED OFFSET
	int                                                TurningDir;                                               // 0x16D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   TurningBlendTimes;                                        // 0x16DC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MovementAnimBlendAxes;                                    // 0x16E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningRatio;                                             // 0x16F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseTurningSpeed;                                         // 0x16F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToRun;                                              // 0x16F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x16F9(0x0003) MISSED OFFSET
	float                                              TurningRatioInterpSpeed_Up;                               // 0x16FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningRatioInterpSpeed_Down;                             // 0x1700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   RunningBlendTimes;                                        // 0x1704(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalAnimBlendInterpSpeed;                             // 0x170C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateMeshWithTurnsAboveTurnRatio;                        // 0x1710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshRotationTurnAngle_Base;                               // 0x1714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AimRotation;                                              // 0x1718(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnDeltaRatio;                                           // 0x1724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityDeltaPitchUp_MinRequiredMult;                     // 0x1728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityDeltaPitchUp_Base;                                // 0x172C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityDeltaPitchUp_MaxPitch;                            // 0x1730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccelerationRatio;                                        // 0x1734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MovingBlendTimes;                                         // 0x1738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingRequiredVelocity;                                   // 0x1740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityPitchUp_RequiredForwardDot;                       // 0x1744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCrashing;                                                // 0x1748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1749(0x0003) MISSED OFFSET
	float                                              CurrentBeamDinoWeightRatio;                               // 0x174C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffHoverState>                CurrentHoverState;                                        // 0x1750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkiffWantsToLand;                                        // 0x1751(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsActuallyRunning;                                       // 0x1752(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsActuallyMoving;                                        // 0x1753(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeFallPitchAngle;                                       // 0x1754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    MeshRotationOffsetLimits_Total;                           // 0x1758(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverIK_InterpSpeed_Rotation;                             // 0x1764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverIK_InterpSpeed_Rotation_Reset;                       // 0x1768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    MeshRotationOffsetLimits_IK;                              // 0x176C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasSaddleStructures;                                     // 0x1778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1779(0x0003) MISSED OFFSET
	float                                              VelocityDeltaPitchUp_MaxPitch_HasStructures;              // 0x177C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshRotationTurAngle_Base_HasStructures;                  // 0x1780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshRotationTurnAngle_Max;                                // 0x1784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshRotationTurnAngle_Max_HasStructures;                  // 0x1788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityDeltaPitchUp_RequiredAccelerationDifference;      // 0x178C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currTurningSpeed;                                         // 0x1790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HoverIK_BlendOutAboveHoverHeightRange;                    // 0x1794(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverIK_InterpSpeed_Rotation_Landed;                      // 0x179C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X;                                 // 0x17A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y;                                 // 0x17A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x17A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x17AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x17AD(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector2D_X2;                                // 0x17B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y2;                                // 0x17B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X3;                                // 0x17B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y3;                                // 0x17BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x17C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x17C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x17C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x17CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x17D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x17D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x17D5(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X2;                                  // 0x17D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x17DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x17E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X4;                                // 0x17E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y4;                                // 0x17E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x17EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue2;                                // 0x17F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x17F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x17F5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x17F6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x17F7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x17F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x17F9(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x17FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1800(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1801(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x1802(0x0006) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x1808(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ATekHoverSkiff_Character_BP_C*               K2Node_DynamicCast_AsTekHoverSkiff_Character_BP_C;        // 0x1810(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1818(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x1819(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_GetDinoPlatformCollisionIgnoreActors_ReturnValue;// 0x1820(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x1830(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x1834(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x1835(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMovingAllyWithBeam_bResult;                    // 0x1836(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_ByteByte_ReturnValue;                    // 0x1837(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X3;                                  // 0x1838(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y3;                                  // 0x183C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z3;                                  // 0x1840(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x1844(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetRole>                              CallFunc_GetRole_ReturnValue;                             // 0x1848(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0x1849(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x184A(0x0002) MISSED OFFSET
	float                                              CallFunc_GetMaxAcceleration_ReturnValue;                  // 0x184C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x1850(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_SelectVector_ReturnValue;                        // 0x1854(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x1860(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1861(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize_ReturnValue;                               // 0x1864(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorRightVector_ReturnValue;                 // 0x1868(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x1874(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x1880(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue2;                   // 0x1884(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x1888(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x188C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x1890(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x1894(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0x1898(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x18A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0xB];                                       // 0x18A5(0x000B) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetAimOffsetsTransform_RootRotOffsetTransform;   // 0x18B0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsetsTransform_TheRootYawSpeed;          // 0x18E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsetsTransform_RootLocOffset;            // 0x18E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsetsTransform_ReturnValue;              // 0x18F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x18FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x18FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x18FE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x18FF(0x0001) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue3;                                // 0x1900(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X4;                                  // 0x1904(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y4;                                  // 0x1908(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z4;                                  // 0x190C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue4;                  // 0x1910(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x1914(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x1918(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x191C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x1920(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue5;                  // 0x1924(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue5;                             // 0x1928(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x192C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue5;                // 0x1938(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x1939(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x193C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x1948(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x1949(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue3;                        // 0x194C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue2;                          // 0x1950(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x1954(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x1955(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLoadingSaveGame_ReturnValue;                   // 0x1956(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue6;                // 0x1957(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue7;                // 0x1958(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue8;                // 0x1959(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x195A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x195B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue6;                  // 0x195C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue4;                        // 0x1960(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue4;                                // 0x1964(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x1968(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x1969(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue5;                        // 0x196C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue3;                          // 0x1970(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C");
		return ptr;
	}


	void UpdateHoveringRootRotationOffset(float DeltaTime);
	void UpdateLandedRootRotationOffset(float DeltaTime, bool bForceTraces);
	void ProcessHoverIK(const struct FRotator& NewTargetOffset_Rotation, float DeltaTime, bool bReset);
	void STATIC_ComposeMeshTransformOffsets();
	void HoverIK(bool bOverrideStartTransform, const struct UObject_FTransform& NewStartTransform, bool* bResetting, struct FRotator* NewTargetRotOffset, struct FVector* NewTargetLocOffset, struct FVector* NewPlaneNormal);
	void UpdateCarriedDinoWeightRatio(float DeltaTime);
	void CalculateMeshRotationOffset(float DeltaTime);
	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ModifyBone_1020();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6954();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_502();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_501();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_132();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6953();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6952();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6951();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6950();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6949();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6948();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_500();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_131();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6947();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6946();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6945();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6944();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6943();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ApplyAdditive_646();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6942();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6941();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6940();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6939();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6938();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6937();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
