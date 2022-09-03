#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ZiplineComponent_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ZiplineComponent_Base.ZiplineComponent_Base_C
// 0x04E8 (0x05C0 - 0x00D8)
class UZiplineComponent_Base_C : public UActorComponent
{
public:
	class APrimalDinoCharacter*                        OwningDinoRef;                                            // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AZipline_Anchor_C*                           currentTargetedZipline;                                   // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentTargetedZiplineLocation;                           // 0x00E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               crosshairNeededForZipline;                                // 0x00F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMeshInterpolating;                                     // 0x00F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               requestedZiplineNonDedi;                                  // 0x00F6(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsingZipline;                                             // 0x00F7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventMeshInterp;                                       // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCancelInterpolation;                                     // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayAttachAnim;                                          // 0x00FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00FB(0x0001) MISSED OFFSET
	float                                              AttachedCharacterMeshInterpSpeed_Location;                // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachedCharacterMeshInterpRotationResetTolerance;        // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachedCharacterMeshInterpSpeed_Rotation;                // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseConstantInterp;                                       // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	float                                              requestedZiplineNonDediMinTime;                           // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              requestedZiplineNonDediMaxTime;                           // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowZiplineJumping;                                     // 0x0114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	class UClass*                                      ziplineBuffClass;                                         // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionalZiplineStartEndOffset;                          // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ziplineDetectionRotOffset;                                // 0x0124(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ziplineTargetLocationXOffset;                             // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ziplineDetectionLocOffset;                                // 0x0134(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineTargetingMaxDotProduct;                            // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ziplineTargetingDotProduct;                               // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ziplineMaxDistanceTargeted;                               // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineSearchRadius;                                      // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsZiplineJumping;                                        // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              zCameraOffsetHanging;                                     // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              zCameraOffset;                                            // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Hanging;                                                  // 0x015C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x015D(0x0003) MISSED OFFSET
	float                                              meshOffsetHanging;                                        // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentOrderedMoveToLoc;                                  // 0x0164(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bProcessMoveToOrder;                                      // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttachFromBelow;                                         // 0x0171(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0172(0x0002) MISSED OFFSET
	float                                              isZiplineBlockedExtraOffsetAbove;                         // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              isZiplineBlockedExtraOffsetBelow;                         // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KeepHanging;                                              // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x017D(0x0003) MISSED OFFSET
	struct FVector                                     ZiplineNewTargetLocation;                                 // 0x0180(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	class AZipline_Anchor_C*                           ziplineNewTargetAnchor;                                   // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZiplineAboveJumpRitAnim;                                  // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZiplineAboveJumpLftAnim;                                  // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZiplineBelowJumpLftAnim;                                  // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZiplineBelowJumpRitAnim;                                  // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ziplineJumpInAnim;                                        // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              dropFromBelowInterpSpeed;                                 // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ZiplineJumpOffDirection;                                  // 0x01C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ZiplineJumpOffImpulseAI;                                  // 0x01D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ZiplineJumpOffDirectionAI;                                // 0x01DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineTurnCurrentValue;                                  // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineTurnHangingInterpSpeed;                            // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineTurnInterpSpeed;                                   // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ZiplineJumpUseTeleport;                                   // 0x01F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               sliding;                                                  // 0x01F5(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowTargeting;                                          // 0x01F6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttachWhileJumping;                                      // 0x01F7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowAttachHint;                                          // 0x01F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x01F9(0x0003) MISSED OFFSET
	float                                              ClientInterpSpeedZiplineTurn;                             // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanAttachToZipline;                                      // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttachWhileRunning;                                      // 0x0201(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasFinishedAttaching;                                    // 0x0202(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bControllingBPTimerServer;                                // 0x0203(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0xC];                                       // 0x0204(0x000C) MISSED OFFSET
	struct UObject_FTransform                          K2Node_Event_NewTransform;                                // 0x0210(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_Event_Velocity;                                    // 0x0240(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bNewIsHanging;                               // 0x024C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bNewTickEveryFrame;                          // 0x024D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bNewSliding;                                 // 0x024E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x024F(0x0001) MISSED OFFSET
	struct FVector                                     K2Node_Event_NewZiplineJumpOffDirectionAI;                // 0x0250(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_Event_NewLocation2;                                // 0x025C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bNewKeepHanging;                             // 0x0268(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bUsingZipline;                               // 0x0269(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x6];                                       // 0x026A(0x0006) MISSED OFFSET
	class UObject*                                     CallFunc_GetDefaultObject_ReturnValue;                    // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0280(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_Event_NewZiplineJumpOffImpulseAI;                  // 0x0284(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bNewFinishedAttach;                          // 0x0290(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_NewValue;                                    // 0x0291(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x0292(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_Event_NewLocation;                                 // 0x0294(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AZipline_Anchor_C*                           CallFunc_GetTargetedZipline_targetedZipline;              // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetTargetedZipline_Location;                     // 0x02A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x02B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x02B5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x02B6(0x0002) MISSED OFFSET
	struct FHitResult                                  CallFunc_IsTargetZiplineBlocked_HitResult;                // 0x02B8(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsTargetZiplineBlocked_HitReturn;                // 0x0340(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_IsTargetZiplineBlocked_StartLocation;            // 0x0344(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0350(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0351(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x6];                                       // 0x0352(0x0006) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AZipline_Anchor_C*                           K2Node_CustomEvent_ZiplineAnchor2;                        // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location2;                             // 0x0368(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0380(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	class AZipline_Anchor_C*                           K2Node_CustomEvent_ZiplineAnchor;                         // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x0390(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x039C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x039D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x039E(0x0002) MISSED OFFSET
	struct FHitResult                                  CallFunc_IsTargetZiplineBlocked_HitResult2;               // 0x03A0(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsTargetZiplineBlocked_HitReturn2;               // 0x0428(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_IsTargetZiplineBlocked_StartLocation2;           // 0x042C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue;                        // 0x0440(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_InverseTransformLocation_ReturnValue;            // 0x0470(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x047C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x0480(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x0484(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0488(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x0489(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x048A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x5];                                       // 0x048B(0x0005) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue;                                // 0x0490(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x0498(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue2;                               // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x04A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue3;                               // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select3_CmpSuccess;                                // 0x04B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue4;                               // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select4_CmpSuccess;                                // 0x04C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue5;                               // 0x04D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select5_CmpSuccess;                                // 0x04D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET
	class ABuff_Zipline_DinoBase_C*                    CallFunc_GetZiplineBuff_ZiplineBuff;                      // 0x04E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x04E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryAttachingToZipline_bSuccess;                  // 0x04EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x04ED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x2];                                       // 0x04EE(0x0002) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x04F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x04F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x04F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x04FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x04FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x2];                                       // 0x04FE(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x0500(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0504(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x0508(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x050C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x0510(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x051C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue2;                            // 0x0520(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x052C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x0530(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue2;            // 0x0534(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x0535(0x0003) MISSED OFFSET
	class ABuff_Zipline_DinoBase_C*                    CallFunc_GetZiplineBuff_ZiplineBuff2;                     // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0540(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0541(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x6];                                       // 0x0542(0x0006) MISSED OFFSET
	class UObject*                                     CallFunc_GetDefaultObject_ReturnValue2;                   // 0x0548(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0550(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0558(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue2;                       // 0x0559(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x2];                                       // 0x055A(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetRightVector_ReturnValue;                      // 0x055C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x0568(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x0578(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_velocity;                              // 0x0580(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	struct UObject_FTransform                          K2Node_CustomEvent_newTransform;                          // 0x0590(0x0030) (Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ZiplineComponent_Base.ZiplineComponent_Base_C");
		return ptr;
	}


	void GetFinishedAttach_InterfaceCall(bool* bOutAttached);
	void GetActiveTargetedZipline(class APrimalStructure** Zipline);
	void Get_Process_Move_to_Order_InterfaceCall(bool* Return);
	void Get_Current_Move_to_Order_Location_InterfaceCall(struct FVector* OutLocation);
	void GetClosestLocationToPointFromArray_InterfaceCall(const struct FVector& InPoint, TArray<struct FVector>* InArray, struct FVector* OutClosestPoint, int* OutIndex);
	void Get_Zipline_Buff_Interface_Call(class APrimalBuff** Buff);
	void GetKeepHanging_InterfaceCall(bool* bKeepHanging);
	void Try_Attaching_to_Zipline_InterfaceCall(class APrimalStructure* overrideAnchor, const struct FVector& OverrideStartLocation, float OverrideFindLocationDistance, const struct FVector& overrideFindLocationDirection, bool bDontUseLineOfSightCheck, bool* bSuccess);
	void Get_Is_Hanging_InterfaceCall(bool* bIsHanging);
	void Get_Attach_from_Below_InterfaceCall(bool* bAttachFromBelow);
	void Get_Zipline_New_Target_Location_InterfaceCall(struct FVector* NewTargetLocation);
	void Get_Is_Zipline_Jumping_InterfaceCall(bool* bZiplineJumping);
	void Get_Sliding_InterfaceCall(bool* bSliding);
	void Get_Current_Targeted_Zipline_InterfaceCall(class APrimalStructure** Anchor);
	void Get_Using_Zipline_InterfaceCall(bool* bUsingZipline);
	void Get_Allow_Zipline_Jumping_InterfaceCall(bool* bAllowZiplineJumping);
	void FinishedAttaching();
	void STATIC_SoftSetTransform(const struct UObject_FTransform& NewTransform);
	void STATIC_AnimNotifyCustomEvent(const struct FName& EventName);
	void OverrideMoveToOrder(const struct FVector& Location, bool* bOverride);
	void STATIC_TryAttachingToZipline(class AZipline_Anchor_C* overrideAnchor, const struct FVector& OverrideStartLocation, float OverrideFindLocationDistance, const struct FVector& overrideFindLocationDirection, bool* bSuccess);
	void Create_Zipline_Buff_and_Start_Riding(class AZipline_Anchor_C* Anchor);
	void STATIC_IsTargetZiplineBlocked(const struct FVector& Location, class AZipline_Anchor_C* Anchor, float OverrideFindLocationDistance, struct FHitResult* HitResult, bool* HitReturn, struct FVector* StartLocation);
	void OnStartJump(bool* Return);
	void NotifyClearRider(class AShooterCharacter* RiderClearing);
	void NotifyRider(class AShooterCharacter* Rider);
	void SetServerTickEveryFrame(bool TickEveryFrame);
	void TimerServer();
	void TimerNonDedicated();
	void STATIC_Get_Target_Mesh_Relative_Transform_Pure(struct UObject_FTransform* Result);
	void Update_TPView_Offset();
	void Update_Non_Dedi_Active();
	void Get_Closest_Point_on_Line(const struct FVector& A, const struct FVector& B, const struct FVector& Point, struct FVector* closestPoint);
	void Update_Crosshair();
	void GetClosestLocationToPointFromArray(const struct FVector& Point, TArray<struct FVector>* LocationsToTest, struct FVector* ClosestLocation, int* ArrayIndex);
	void GetZiplineBuff(class ABuff_Zipline_DinoBase_C** ZiplineBuff);
	void STATIC_GetTargetedZipline(class AZipline_Anchor_C** TargetedZipline, struct FVector* Location);
	void UpdateNonDediLimits();
	void SetNonDediTimerTickEveryFrame(bool TickEveryFrame);
	void STATIC_InterpMeshRelativeTransform(float DeltaTime);
	void BPOnComponentCreated();
	void ZiplineNonDediLogic();
	void Multi_Soft_Set_Transform_InterfaceCall(const struct UObject_FTransform& NewTransform);
	void Set_Initial_Velocity_Multicast_InterfaceCall(const struct FVector& Velocity);
	void Set_Is_Hanging_InterfaceCall(bool bNewIsHanging);
	void Set_Non_Dedi_Tick_Every_Frame_InterfaceCall(bool bNewTickEveryFrame);
	void Set_Sliding_InterfaceCall(bool bNewSliding);
	void Set_Zipline_Jump_Off_Direction_AI_InterfaceCall(const struct FVector& NewZiplineJumpOffDirectionAI);
	void Set_Zipline_New_Target_Location_InterfaceCall(const struct FVector& NewLocation);
	void Start_Zipline_Jumping_InterfaceCall();
	void SetKeepHanging_InterfaceCall(bool bNewKeepHanging);
	void SetUsingZipline_InterfaceCall(bool bUsingZipline);
	void Set_Zipline_Jump_Off_Impulse_AI_InterfaceCall(const struct FVector& NewZiplineJumpOffImpulseAI);
	void Set_Finished_Attach_Interface_Call(bool bNewFinishedAttach);
	void SetProcessMoveToOrder_InterfaceCall(bool NewValue);
	void Set_Current_Move_To_Order_Location_Interface_Call(const struct FVector& NewLocation);
	void ZiplineTargetingTimer();
	void ResetZiplineJumping_RunOnServer();
	void ResetZiplineJumping_Multicast();
	void StartZiplineJumping();
	void AttachToZipline_RunOnServer(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location);
	void AttachToZipline_Multicast(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location);
	void TryAttachToZipline_RunOnServer();
	void DoZiplineTurn();
	void PreZiplineTurn_Multicast();
	void SetInitialVelocity_Multicast(const struct FVector& Velocity);
	void Multi_SoftSetTransform(const struct UObject_FTransform& NewTransform);
	void ExecuteUbergraph_ZiplineComponent_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
