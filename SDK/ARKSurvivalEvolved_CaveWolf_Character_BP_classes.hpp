#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CaveWolf_Character_BP.CaveWolf_Character_BP_C
// 0x060C (0x2928 - 0x231C)
class ACaveWolf_Character_BP_C : public ADino_Character_BP_Pack_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x231C(0x0004) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_CaveWolf_C* DinoCharacterStatus_BP_CaveWolf_C1;                       // 0x2320(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ResourceTypeScales;                                       // 0x2328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ResourceTypesToScale;                                     // 0x2338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               UsingZipline;                                             // 0x2348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Hanging;                                                  // 0x2349(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               sliding;                                                  // 0x234A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x234B(0x0001) MISSED OFFSET
	float                                              ZiplineSearchRadius;                                      // 0x234C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineTurnInterpSpeed;                                   // 0x2350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineTurnCurrentValue;                                  // 0x2354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineTurnHangingInterpSpeed;                            // 0x2358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ZiplineJumpOffDirection;                                  // 0x235C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineResetMeshInterpSpeed;                              // 0x2368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ziplineMaxDistanceTargeted;                               // 0x236C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AZipline_Anchor_C*                           currentTargetedZipline;                                   // 0x2370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ZiplineNewTargetLocation;                                 // 0x2378(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentTargetedZiplineLocation;                           // 0x2384(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AZipline_Anchor_C*                           ziplineNewTargetAnchor;                                   // 0x2390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ziplineTargetLocationXOffset;                             // 0x2398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KeepHanging;                                              // 0x239C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasAttachedToZipline;                                     // 0x239D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x239E(0x0002) MISSED OFFSET
	float                                              ziplineTargetingDotProduct;                               // 0x23A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FindLocationDistance;                                     // 0x23A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FindLocationNumberOfSteps;                                // 0x23A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMeshInterpolating;                                     // 0x23AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x23AD(0x0003) MISSED OFFSET
	float                                              AttachedCharacterMeshInterpSpeed_Location;                // 0x23B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachedCharacterMeshInterpSpeed_Rotation;                // 0x23B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              meshOffsetHanging;                                        // 0x23B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              meshOffsetAbove;                                          // 0x23BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugCaveWolf;                                           // 0x23C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventMeshInterp;                                       // 0x23C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayAttachAnim;                                          // 0x23C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseConstantInterp;                                       // 0x23C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsZiplineJumping;                                        // 0x23C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x23C5(0x0003) MISSED OFFSET
	float                                              ZiplineTargetingMaxDotProduct;                            // 0x23C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionalZiplineStartEndOffset;                          // 0x23CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              dropFromBelowInterpSpeed;                                 // 0x23D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachedCharacterMeshInterpRotationResetTolerance;        // 0x23D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ZiplineJumpOffImpulseAI;                                  // 0x23D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableWildAIClawAttackDropFromZipline;                    // 0x23E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x23E5(0x0003) MISSED OFFSET
	float                                              AIJumpAttackMinZDelta;                                    // 0x23E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AIJumpAttackMaxZDelta;                                    // 0x23EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AIJumpAttackForwardVelocity;                              // 0x23F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentOrderedMoveToLoc;                                  // 0x23F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bProcessMoveToOrder;                                      // 0x2400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2401(0x0003) MISSED OFFSET
	struct FVector                                     ZiplineJumpOffDirectionAI;                                // 0x2404(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ZiplineJumpUseTeleport;                                   // 0x2410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x2411(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x2412(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue2;                       // 0x2413(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue3;                       // 0x2414(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryAttachingToZipline_success;                   // 0x2415(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x2416(0x0002) MISSED OFFSET
	struct FName                                       K2Node_Event_CustomEventName;                             // 0x2418(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USkeletalMeshComponent*                      K2Node_Event_MeshComp;                                    // 0x2420(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequenceBase*                           K2Node_Event_Animation;                                   // 0x2428(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimNotify*                                 K2Node_Event_AnimNotifyObject;                            // 0x2430(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x2438(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue2;                // 0x2439(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue3;                // 0x243A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue4;                // 0x243B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue5;                // 0x243C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x243D(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x2440(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetRightVector_ReturnValue;                      // 0x2444(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x2450(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x245C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x245D(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x2460(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x2464(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x2465(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x2466(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x2468(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue4;                       // 0x246C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x246D(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x2470(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x2474(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x2478(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x2484(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x2488(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x248C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue2;            // 0x2490(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x2491(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x2498(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetRightVector_ReturnValue2;                     // 0x24A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x24AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x24AD(0x0003) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x24B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue2;                            // 0x24B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue5;                       // 0x24C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x24C1(0x0007) MISSED OFFSET
	class AZipline_Anchor_C*                           CallFunc_GetTargetedZipline_targetedZipline;              // 0x24C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetTargetedZipline_Location;                     // 0x24D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x24DC(0x0004) MISSED OFFSET
	class AZipline_Anchor_C*                           K2Node_CustomEvent_ZiplineAnchor2;                        // 0x24E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location2;                             // 0x24E8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x24F4(0x0004) MISSED OFFSET
	class ABuff_Zipline_CaveWolf_C*                    CallFunc_GetZiplineBuff_ZiplineBuff;                      // 0x24F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue;                        // 0x2500(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AZipline_Anchor_C*                           K2Node_CustomEvent_ZiplineAnchor;                         // 0x2530(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x2538(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_InverseTransformLocation_ReturnValue;            // 0x2544(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x2550(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x2554(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x2558(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x255C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x255D(0x0003) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue;                                // 0x2560(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x2568(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2569(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x6];                                       // 0x256A(0x0006) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue2;                               // 0x2570(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x2578(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x2579(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue3;                               // 0x2580(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select3_CmpSuccess;                                // 0x2588(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue6;                       // 0x2589(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x6];                                       // 0x258A(0x0006) MISSED OFFSET
	class AZipline_Anchor_C*                           K2Node_CustomEvent_Anchor;                                // 0x2590(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x8];                                       // 0x2598(0x0008) MISSED OFFSET
	struct UObject_FTransform                          K2Node_CustomEvent_newTransform;                          // 0x25A0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x25D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x25D1(0x0003) MISSED OFFSET
	float                                              CallFunc_GetLifeSpan_ReturnValue;                         // 0x25D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Get_Zipline_Info_NonPure_DownDirection;          // 0x25D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x25E4(0x0004) MISSED OFFSET
	class AZipline_Anchor_C*                           CallFunc_Get_Zipline_Info_NonPure_UpperAnchor;            // 0x25E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AZipline_Anchor_C*                           CallFunc_Get_Zipline_Info_NonPure_LowerAnchor;            // 0x25F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Get_Zipline_Info_NonPure_UpperCableAttachLoc;    // 0x25F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Get_Zipline_Info_NonPure_LowerCableAttachLoc;    // 0x2604(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x2610(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x2611(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_velocity;                              // 0x2614(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x2620(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x2621(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue4;                               // 0x2628(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select4_CmpSuccess;                                // 0x2630(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x2631(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue5;                               // 0x2638(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select5_CmpSuccess;                                // 0x2640(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue7;                       // 0x2641(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x2642(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2644(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2648(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x2649(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x2650(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      CallFunc_Get_Zipline_Buff_Buff;                           // 0x2658(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x2660(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_Zipline_Base_C*                        K2Node_DynamicCast_AsBuff_Zipline_Base_C;                 // 0x2668(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2670(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x7];                                       // 0x2671(0x0007) MISSED OFFSET
	struct FHitResult                                  CallFunc_IsTargetZiplineBlocked_HitResult;                // 0x2678(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsTargetZiplineBlocked_HitReturn;                // 0x2700(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x2701(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_IsTargetZiplineBlocked_StartLocation;            // 0x2704(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  CallFunc_IsTargetZiplineBlocked_HitResult2;               // 0x2710(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsTargetZiplineBlocked_HitReturn2;               // 0x2798(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x2799(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_IsTargetZiplineBlocked_StartLocation2;           // 0x279C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_Zipline_CaveWolf_C*                    CallFunc_GetZiplineBuff_ZiplineBuff2;                     // 0x27A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  CallFunc_IsTargetZiplineBlocked_HitResult3;               // 0x27B0(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsTargetZiplineBlocked_HitReturn3;               // 0x2838(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x2839(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_IsTargetZiplineBlocked_StartLocation3;           // 0x283C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_Zipline_CaveWolf_C*                    CallFunc_GetZiplineBuff_ZiplineBuff3;                     // 0x2848(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_Zipline_CaveWolf_C*                    CallFunc_GetZiplineBuff_ZiplineBuff4;                     // 0x2850(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x2858(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x2859(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x6];                                       // 0x285A(0x0006) MISSED OFFSET
	class ABuff_Zipline_CaveWolf_C*                    CallFunc_GetZiplineBuff_ZiplineBuff5;                     // 0x2860(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue3;                      // 0x2868(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x2870(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x7];                                       // 0x2871(0x0007) MISSED OFFSET
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x2878(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2880(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2881(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_VectorVector_ReturnValue;               // 0x2882(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x2883(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2884(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x2885(0x0003) MISSED OFFSET
	class ABuff_Zipline_CaveWolf_C*                    CallFunc_GetZiplineBuff_ZiplineBuff6;                     // 0x2888(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  CallFunc_IsTargetZiplineBlocked_HitResult4;               // 0x2890(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsTargetZiplineBlocked_HitReturn4;               // 0x2918(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x2919(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_IsTargetZiplineBlocked_StartLocation4;           // 0x291C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CaveWolf_Character_BP.CaveWolf_Character_BP_C");
		return ptr;
	}


	bool ValidateZipLineTransform(struct UObject_FTransform* InTransform, struct FVector* Location, struct FRotator* Rotation);
	void BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted);
	bool BlueprintOverrideWantsToRun(bool* bInputWantsToRun);
	bool BPOverrideMoveToOrder(struct FVector* MoveToLocation, class AShooterCharacter** OrderingPlayer);
	float BPGetAddForwardVelocityOnJump();
	void STATIC_IsTargetZiplineBlocked(const struct FVector& Location, class AZipline_Anchor_C* Anchor, struct FHitResult* HitResult, bool* HitReturn, struct FVector* StartLocation);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void GetClosestLocationToPointFromArray(const struct FVector& Point, TArray<struct FVector>* LocationsToTest, struct FVector* ClosestLocation, int* ArrayIndex);
	void UpdateTPVViewOffset();
	void Set_Server_Timer_Tick_Every_Frame(bool TickEveryFrame);
	void BPTimerServer();
	void GetTargetMeshRelativeTransform_Pure(struct UObject_FTransform* Result);
	void SetNonDediTimer_TickEveryFrame(bool TickEveryFrame);
	void GetTargetMeshRelativeTransform(struct UObject_FTransform* Result);
	void DebugDrawRotationAxes(const struct FVector& Origin, const struct FRotator& Rotation, float lineLength, float lineDuration, float LineThickness);
	void STATIC_SoftSetCaveWolfTransform(const struct UObject_FTransform& NewTransform);
	void STATIC_InterpCaveWolfMeshRelativeTransform(float DeltaTime);
	float BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	bool BPOnStartJump();
	void BPTimerNonDedicated();
	void GetZiplineDirectionFromAnchor(class AZipline_Anchor_C* Anchor, struct FVector* DownDirection);
	void GetClosestPointOnLine(const struct FVector& A, const struct FVector& B, const struct FVector& Point, struct FVector* closestPoint);
	void GetZiplineBuff(class ABuff_Zipline_CaveWolf_C** ZiplineBuff);
	void STATIC_GetTargetedZipline(class AZipline_Anchor_C** TargetedZipline, struct FVector* Location);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void IsRotation_Nearly_Equal(const struct FRotator& A, const struct FRotator& B, float Tolerance, bool* Return);
	bool IsVectorNearlyEqual(const struct FVector& inVec, const struct FVector& InVec2, float Tolerance);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void STATIC_TryAttachingToZipline(class AZipline_Anchor_C* overrideAnchor, const struct FVector& OverrideStartLocation, float OverrideFindLocationDistance, const struct FVector& overrideFindLocationDirection, bool DontUseLineOfSightCheck, bool* Success);
	float BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected);
	void UserConstructionScript();
	void TryAttachToZipline_RunOnServer();
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void DoZiplineTurn();
	void PreZiplineTurn_Multicast();
	void ZiplineTargetingTimer();
	void AttachToZipline_RunOnServer(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location);
	void AttachToZipline_Multicast(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location);
	void StartZiplineJumping();
	void CreateZiplineBuffAndStartRiding(class AZipline_Anchor_C* Anchor);
	void Multi_SoftSetCaveWolfTransform(const struct UObject_FTransform& NewTransform);
	void SetInitialVelocity_Multicast(const struct FVector& Velocity);
	void ResetZiplineJumping_RunOnServer();
	void ResetZiplineJumping_Multicast();
	void ResetForcePerFrameTicking();
	void ExecuteUbergraph_CaveWolf_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
