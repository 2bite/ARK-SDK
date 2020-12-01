#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoBlueprintBase_RootTransformIK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransformIK.DinoBlueprintBase_RootTransformIK_C
// 0x1230 (0x1570 - 0x0340)
class UDinoBlueprintBase_RootTransformIK_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_6EB5EBE1489CA419DC8DBA88ACFC2530;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E0B4396440CD265FC83F77AE3CAEDB29;// 0x0368(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B48FBFF647F72A866163E9AAA171656E;// 0x0398(0x0060)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0137E0E048694FA33A48BFB9A61CCA9F;// 0x03F8(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_70464EE54CAE530ACF8FFE8382C72EBF;// 0x0420(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D1E7A18A476F22E4435916B52E2C9757;// 0x04D0(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_187AF2584BD11D3B27536084B1C511A9;      // 0x04F8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D5F3326C4745376E04296283B1E0EE32;      // 0x0530(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4DD3E38648A72D3F3811FCA055488F79;      // 0x0568(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3EE9F522407B9EE9502CE9AD413DE5C6;// 0x05A0(0x0060)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_D41E40344CD808B6E045359B1A60F083;// 0x0600(0x00F8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EFE1D4BB470EC768DA9091B3780325C8;// 0x06F8(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7B2ACAC846534FA6A901E0BEC3F72BF0;// 0x0738(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E3DACB0B4E519F455BDF7997DDA0BD1C;// 0x0760(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_213D23A64657EF8395747D91FC94B297;// 0x0788(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4F7D0403454BA7766E1FB688D154D75B;// 0x07E8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0851607140941038D7AEC486F7F3D447;// 0x0818(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AC10B4B24C4379769FBE3BB26A814639;// 0x0878(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DF4DC2F94826E886F552B39D0557EA46;// 0x08A8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_86931243418129FCF8463FB21EB7C0E3;// 0x0908(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_78261CF949021A59D965C9B7194E7B36;// 0x0968(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_966AAA9D48EC3DCA423A199B99AFD04B;// 0x0998(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_04BCB4094AB77E5ECF7ABAA144D5F61B;// 0x09C8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B89F72D6474D67D31A6C2F932CCA881F;// 0x0A28(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B5739DCD47CA5E22602991BB289B9747;// 0x0A58(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BE7369BC416A1AE5E9A5A6B020B9C534;// 0x0AB8(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9659E86F4899FD4463ACB4BC611FB00F;// 0x0AE8(0x0040)
	struct FAnimNode_MultiFabrik_Dinos                 AnimGraphNode_MultiFabrik_Dinos_773F33574A41D4794CB6A1993065BC2C;// 0x0B28(0x0058)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_264031354255AF95F8E9DC988DA68D13;// 0x0B80(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_ED5513904A40493DEEE78FB2F4C153B8;// 0x0BA8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0666FC874CCD77E4E0E625973BBDAA8E;// 0x0BD0(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8EB8132A45E3B011BFFDF9982A9A6556;// 0x0C30(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6A89F0C84D201C94D0BBD4A47CF2B963;// 0x0C58(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0A1541CB48AF2ED42898C490BA995791;// 0x0C80(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1FA3C29B4A58D7B60519C28305894F94;// 0x0CB0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AF4D11A448B098F977D96D878CC43F05;// 0x0D10(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_257080A341CCECFEBA0616ABE3C894F3;// 0x0D70(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D9B4878F4B6B2D1A44C97FB591C72739;// 0x0DA0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CCE8945B4167B12A1D335FAD2332CF63;// 0x0DD0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6B957CDD4C9AF7397D00728E80233EA7;// 0x0E30(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D125C46249A4282505704EB573FA05DE;// 0x0E90(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5FED26044FD2B2184E2443A8BB44EE8A;// 0x0EF0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19B3635B489875149B99B1B561B599FE;// 0x0F20(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5ED0CF104326CB58D358CB8706E20CA9;// 0x0F50(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D60D36B04CA92198565B158CE63C4209;// 0x0F80(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D5D527BD45DE8585A98B2EBA1ECEDB72;// 0x1060(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_15A7D9304D8EC690FC138B8BB6092892;// 0x10C0(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AE05A4834FA8DEFFC512749DBAD6900F;      // 0x1120(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_ED05AF9048B0692B02AE96A29CE19277;      // 0x1158(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_790FB460410B96CD62146687373301A5;      // 0x1190(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_830CB5CA4A42633961FAE1A6224E062E;// 0x11C8(0x0030)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_FC850E8F41FC6BEF00ADAF902AF490A3;// 0x11F8(0x0050)
	bool                                               bIsMoving;                                                // 0x1248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1249(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x124C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x1258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x125C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x1260(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x126C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x126D(0x0003) MISSED OFFSET
	float                                              MovementAnimRate;                                         // 0x1270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x1274(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x1275(0x000B) MISSED OFFSET
	struct FTransform                                  RootOffsetTransform;                                      // 0x1280(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumMovementSpeed;                                     // 0x12B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimPlayRate;                                      // 0x12B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendInTime;                                       // 0x12B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x12BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendInTime;                                        // 0x12C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x12C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x12C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x12C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x12CA(0x0002) MISSED OFFSET
	float                                              MinimumMovementSpeedFlying;                               // 0x12CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x12D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x12D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x12D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x12D3(0x0001) MISSED OFFSET
	float                                              MinTurnRateForTurnAnimation;                              // 0x12D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningEnabledBlendTime;                                  // 0x12D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x12DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDirectionBlendTime;                                // 0x12E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMoveBlendIn;                                        // 0x12E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMoveBlendOut;                                       // 0x12E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRatePower;                                    // 0x12EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x12F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x12F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x12F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFlyingOffset;                                         // 0x12F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FlyingOffset;                                             // 0x12F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentFlyingOffset;                                      // 0x1300(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LandedOffset;                                             // 0x130C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkBlend;                                               // 0x1318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x131C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIKWhenFalling;                                    // 0x131D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIK;                                               // 0x131E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x131F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningMovementAnimRate;                                  // 0x1320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Velocity2D;                                               // 0x1324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetYawScale;                                        // 0x1328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetPitchScale;                                      // 0x132C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForwardBack;                                              // 0x1330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightLeft;                                                // 0x1334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 FlyBlendSpace;                                            // 0x1338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsesFlyingMovementBlend;                                 // 0x1340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1341(0x0003) MISSED OFFSET
	float                                              FlyingMovementBlendBackwardsMultiplier;                   // 0x1344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunAnimRateScale;                                         // 0x1348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRateClampMin;                                 // 0x134C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRateClampMax;                                 // 0x1350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimulatedFlyingAnimRateSpeedMultiplier;                   // 0x1354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1358(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x135C(0x0004) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x1360(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x1368(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1370(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1371(0x0003) MISSED OFFSET
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x1374(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x1378(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_NegateRotator_ReturnValue;                       // 0x1384(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0x1390(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x139C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x13A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x13AC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x13B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_ComposeRotators_ReturnValue;                     // 0x13C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x13D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue2;                   // 0x13D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x13E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x13E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x13E6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x13E7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x13E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x13E9(0x0007) MISSED OFFSET
	struct FTransform                                  CallFunc_GetAimOffsetsTransform_RootRotOffsetTransform;   // 0x13F0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsetsTransform_TheRootYawSpeed;          // 0x1420(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsetsTransform_RootLocOffset;            // 0x1424(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsetsTransform_ReturnValue;              // 0x1430(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x143C(0x0004) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x1440(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x1448(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x144C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x1450(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x1454(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x1458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1460(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1461(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x1464(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x1468(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x1469(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x146A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x146B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x146C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x1470(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x1474(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x1475(0x0003) MISSED OFFSET
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x1478(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x147C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x1480(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue2;                              // 0x148C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x1490(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x1494(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x1498(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x149C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x14A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x14A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x14A5(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x14A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x14AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x14AD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x14AE(0x0002) MISSED OFFSET
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x14B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x14B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_ReturnValue;                                // 0x14BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x14C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x14C1(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x14C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_ReturnValue2;                               // 0x14C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x14CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x14CD(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x14D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x14D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x14D5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x14D6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x14D7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x14D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x14E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x14F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue;                           // 0x14F4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue2;                          // 0x1500(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x150C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x150D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x150E(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x1510(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x1514(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x1515(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x1518(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x151C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x1520(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x1524(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x1528(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x1529(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x152A(0x0002) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue4;                  // 0x152C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x1530(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x1531(0x0003) MISSED OFFSET
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x1534(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x1538(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x1539(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x153A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x153B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x153C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x1540(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x1544(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue7;                // 0x1548(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x154C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue8;                // 0x1550(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue9;                // 0x1554(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x1558(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x155C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue10;               // 0x1560(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue5;                     // 0x1564(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x1568(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x156C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransformIK.DinoBlueprintBase_RootTransformIK_C");
		return ptr;
	}


	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_2900();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_ModifyBone_570();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_2899();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_RotationOffsetBlendSpace_170();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_2898();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_2897();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_3606();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_2896();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_2895();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_3605();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_3604();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_2894();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_3603();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_2893();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_2892();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_3601();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_2891();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_2890();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_3600();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_3599();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_2889();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_2888();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_3598();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_3597();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_3596();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendSpacePlayer_154();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_2886();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_2885();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_ApplyAdditive_206();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_DinoBlueprintBase_RootTransformIK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
