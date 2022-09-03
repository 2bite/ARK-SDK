#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacter_BP_Zipline_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C
// 0x0636 (0x28BE - 0x2288)
class ADinoCharacter_BP_Zipline_C : public ADino_Character_BP_C
{
public:
	class AZipline_Anchor_C*                           currentTargetedZipline;                                   // 0x2288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionalZiplineStartEndOffset;                          // 0x2290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineSearchRadius;                                      // 0x2294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ZiplineNewTargetLocation;                                 // 0x2298(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentTargetedZiplineLocation;                           // 0x22A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsZiplineJumping;                                        // 0x22B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x22B1(0x0007) MISSED OFFSET
	class AZipline_Anchor_C*                           ziplineNewTargetAnchor;                                   // 0x22B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsingZipline;                                             // 0x22C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayAttachAnim;                                          // 0x22C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Hanging;                                                  // 0x22C2(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KeepHanging;                                              // 0x22C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMeshInterpolating;                                     // 0x22C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventMeshInterp;                                       // 0x22C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x22C6(0x0002) MISSED OFFSET
	float                                              AttachedCharacterMeshInterpSpeed_Location;                // 0x22C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachedCharacterMeshInterpSpeed_Rotation;                // 0x22CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseConstantInterp;                                       // 0x22D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x22D1(0x0003) MISSED OFFSET
	float                                              AttachedCharacterMeshInterpRotationResetTolerance;        // 0x22D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              meshOffsetHanging;                                        // 0x22D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              meshOffsetAbove;                                          // 0x22DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ziplineMaxDistanceTargeted;                               // 0x22E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ziplineTargetLocationXOffset;                             // 0x22E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ziplineTargetingDotProduct;                               // 0x22E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineTargetingMaxDotProduct;                            // 0x22EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               sliding;                                                  // 0x22F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ZiplineJumpUseTeleport;                                   // 0x22F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x22F2(0x0002) MISSED OFFSET
	float                                              ZiplineTurnCurrentValue;                                  // 0x22F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineTurnInterpSpeed;                                   // 0x22F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineTurnHangingInterpSpeed;                            // 0x22FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZiplineAboveJumpRitAnim;                                  // 0x2300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZiplineAboveJumpLftAnim;                                  // 0x2308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZiplineBelowJumpRitAnim;                                  // 0x2310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZiplineBelowJumpLftAnim;                                  // 0x2318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ziplineJumpInAnim;                                        // 0x2320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               crosshairNeededForZipline;                                // 0x2328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2329(0x0003) MISSED OFFSET
	float                                              requestedZiplineNonDediMinTime;                           // 0x232C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              requestedZiplineNonDediMaxTime;                           // 0x2330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               requestedZiplineNonDedi;                                  // 0x2334(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x2335(0x0003) MISSED OFFSET
	struct FVector                                     ZiplineJumpOffImpulseAI;                                  // 0x2338(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ZiplineJumpOffDirectionAI;                                // 0x2344(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ZiplineJumpOffDirection;                                  // 0x2350(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentOrderedMoveToLoc;                                  // 0x235C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bProcessMoveToOrder;                                      // 0x2368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x2369(0x0007) MISSED OFFSET
	class UClass*                                      ziplineBuffClass;                                         // 0x2370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttachFromBelow;                                         // 0x2378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowZiplineJumping;                                     // 0x2379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x237A(0x0002) MISSED OFFSET
	float                                              isZiplineBlockedExtraOffsetBelow;                         // 0x237C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              dropFromBelowInterpSpeed;                                 // 0x2380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              isZiplineBlockedExtraOffsetAbove;                         // 0x2384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              zCameraOffsetHanging;                                     // 0x2388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              zCameraOffset;                                            // 0x238C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ziplineDetectionLocOffset;                                // 0x2390(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ziplineDetectionRotOffset;                                // 0x239C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x23A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x23B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x23B1(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x23B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x23C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x23C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue2;                       // 0x23C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue3;                       // 0x23C3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_CustomEventName;                             // 0x23C4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x23CC(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      K2Node_Event_MeshComp;                                    // 0x23D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequenceBase*                           K2Node_Event_Animation;                                   // 0x23D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimNotify*                                 K2Node_Event_AnimNotifyObject;                            // 0x23E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x23E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue2;                // 0x23E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue3;                // 0x23EA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue4;                // 0x23EB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue5;                // 0x23EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryAttachingToZipline_success;                   // 0x23ED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x23EE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x23EF(0x0001) MISSED OFFSET
	class AZipline_Anchor_C*                           K2Node_CustomEvent_ZiplineAnchor2;                        // 0x23F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location2;                             // 0x23F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x2404(0x0004) MISSED OFFSET
	struct FHitResult                                  CallFunc_IsTargetZiplineBlocked_HitResult;                // 0x2408(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsTargetZiplineBlocked_HitReturn;                // 0x2490(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x2491(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_IsTargetZiplineBlocked_StartLocation;            // 0x2494(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue;                        // 0x24A0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AZipline_Anchor_C*                           K2Node_CustomEvent_ZiplineAnchor;                         // 0x24D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x24D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_InverseTransformLocation_ReturnValue;            // 0x24E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x24F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x24F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x24F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x24FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x24FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue4;                       // 0x24FE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x24FF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2500(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x2501(0x0007) MISSED OFFSET
	struct FHitResult                                  CallFunc_IsTargetZiplineBlocked_HitResult2;               // 0x2508(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsTargetZiplineBlocked_HitReturn2;               // 0x2590(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x2591(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_IsTargetZiplineBlocked_StartLocation2;           // 0x2594(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x25A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x25A1(0x0007) MISSED OFFSET
	class AZipline_Anchor_C*                           CallFunc_GetTargetedZipline_targetedZipline;              // 0x25A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetTargetedZipline_Location;                     // 0x25B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_velocity;                              // 0x25BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x8];                                       // 0x25C8(0x0008) MISSED OFFSET
	struct UObject_FTransform                          K2Node_CustomEvent_newTransform;                          // 0x25D0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue5;                       // 0x2600(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2601(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x6];                                       // 0x2602(0x0006) MISSED OFFSET
	struct FHitResult                                  CallFunc_IsTargetZiplineBlocked_HitResult3;               // 0x2608(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsTargetZiplineBlocked_HitReturn3;               // 0x2690(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x2691(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_IsTargetZiplineBlocked_StartLocation3;           // 0x2694(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  CallFunc_IsTargetZiplineBlocked_HitResult4;               // 0x26A0(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsTargetZiplineBlocked_HitReturn4;               // 0x2728(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x2729(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_IsTargetZiplineBlocked_StartLocation4;           // 0x272C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue6;                       // 0x2738(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue7;                       // 0x2739(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x273A(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetRightVector_ReturnValue;                      // 0x273C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x2748(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x2754(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x2758(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x2759(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x275C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x2760(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x2761(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x2762(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x2764(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x2768(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x2770(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x2774(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x2778(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x277C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x2780(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x2784(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue2;            // 0x2790(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x2791(0x0003) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x2794(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue2;                            // 0x2798(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x27A4(0x0004) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue;                                // 0x27A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x27B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x27B1(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue2;                               // 0x27B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x27C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x27C1(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue3;                               // 0x27C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select3_CmpSuccess;                                // 0x27D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x27D1(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue4;                               // 0x27D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select4_CmpSuccess;                                // 0x27E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x27E1(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue5;                               // 0x27E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select5_CmpSuccess;                                // 0x27F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x27F1(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x27F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetRightVector_ReturnValue2;                     // 0x27F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x2804(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x2808(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x2810(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2818(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x2819(0x0007) MISSED OFFSET
	class ABuff_Zipline_DinoBase_C*                    CallFunc_Get_Zipline_Buff_ZiplineBuff;                    // 0x2820(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_VectorVector_ReturnValue;               // 0x2828(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x2829(0x0007) MISSED OFFSET
	class ABuff_Zipline_DinoBase_C*                    CallFunc_Get_Zipline_Buff_ZiplineBuff2;                   // 0x2830(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_Zipline_DinoBase_C*                    CallFunc_Get_Zipline_Buff_ZiplineBuff3;                   // 0x2838(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_Zipline_DinoBase_C*                    CallFunc_Get_Zipline_Buff_ZiplineBuff4;                   // 0x2840(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_Zipline_DinoBase_C*                    CallFunc_Get_Zipline_Buff_ZiplineBuff5;                   // 0x2848(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x2850(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x2851(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x2852(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x5];                                       // 0x2853(0x0005) MISSED OFFSET
	class ABuff_Zipline_DinoBase_C*                    CallFunc_Get_Zipline_Buff_ZiplineBuff6;                   // 0x2858(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x2860(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x7];                                       // 0x2861(0x0007) MISSED OFFSET
	class UObject*                                     CallFunc_GetDefaultObject_ReturnValue;                    // 0x2868(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x2870(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x2878(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x2879(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_NewParam2;                             // 0x287C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_NewParam;                              // 0x2888(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_NewParam1;                             // 0x2894(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_NewParam3;                             // 0x28A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x28A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x28B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x28BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x28BD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C");
		return ptr;
	}


	void Get_Zipline_Buff(class ABuff_Zipline_DinoBase_C** ZiplineBuff);
	void OnOrderedMoveToOrFollow(bool moveTo);
	void BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted);
	bool BlueprintOverrideWantsToRun(bool* bInputWantsToRun);
	bool BPOverrideMoveToOrder(struct FVector* MoveToLocation, class AShooterCharacter** OrderingPlayer);
	void UpdateNonDediActive();
	void Update_Non_Dedi_Limits();
	void UpdateCrosshair();
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void BPTimerServer();
	void SoftSetTransform(const struct UObject_FTransform& NewTransform);
	void UpdateTPViewOffset();
	void GetTargetMeshRelativeTransformPure(struct UObject_FTransform* Result);
	void InterpMeshRelativeTransform(float DeltaTime);
	void STATIC_GetTargetedZipline(class AZipline_Anchor_C** TargetedZipline, struct FVector* Location);
	void ZiplineNonDediLogic();
	void SetNonDediTimerTickEveryFrame(bool TickEveryFrame);
	void GetClosestLocationToPointFromArray(const struct FVector& Point, TArray<struct FVector>* LocationsToTest, struct FVector* ClosestLocation, int* ArrayIndex);
	void SetServerTimerTickEveryFrame(bool TickEveryFrame);
	void CreateZiplineBuffAndStartRiding(class AZipline_Anchor_C* Anchor);
	void STATIC_IsTargetZiplineBlocked(const struct FVector& Location, class AZipline_Anchor_C* Anchor, struct FHitResult* HitResult, bool* HitReturn, struct FVector* StartLocation);
	void GetClosestPointOnLine(const struct FVector& A, const struct FVector& B, const struct FVector& Point, struct FVector* closestPoint);
	void STATIC_TryAttachingToZipline(class AZipline_Anchor_C* overrideAnchor, const struct FVector& OverrideStartLocation, float OverrideFindLocationDistance, const struct FVector& overrideFindLocationDirection, bool* Success);
	bool BPOnStartJump();
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPTimerNonDedicated();
	bool Is_Dino_Submerged();
	void UserConstructionScript();
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void TryAttachToZipline_RunOnServer();
	void StartZiplineJumping();
	void AttachToZipline_RunOnServer(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location);
	void AttachToZipline_Multicast(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location);
	void ResetZiplineJumping_RunOnServer();
	void ResetZiplineJumping_Multicast();
	void ZiplineTargetingTimer();
	void SetInitialVelocity_Multicast(const struct FVector& Velocity);
	void Multi_SoftSetTransform(const struct UObject_FTransform& NewTransform);
	void DoZiplineTurn();
	void PreZiplineTurn_Multicast();
	void DebugSphere_Multicast(const struct FVector& NewParam);
	void DebugArrow_Multicast(const struct FVector& NewParam, const struct FVector& NewParam1, float NewParam3);
	void ExecuteUbergraph_DinoCharacter_BP_Zipline(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
