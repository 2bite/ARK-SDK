#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Enforcer_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Enforcer_Character_BP.Enforcer_Character_BP_C
// 0x0BA0 (0x3B50 - 0x2FB0)
class AEnforcer_Character_BP_C : public ADino_Character_BP_Climber_C
{
public:
	class UParticleSystemComponent*                    WildAlertVFX;                                             // 0x2FB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             BlinkTargetSoundLoop;                                     // 0x2FB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CoreDropLocation;                                         // 0x2FC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BlastAttackParticles;                                     // 0x2FC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Teleport_SFX;                                             // 0x2FD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BlinkTargetParticles;                                     // 0x2FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Enforcer_C* DinoCharacterStatus_BP_Enforcer_C1;                       // 0x2FE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlinkArcForwardPower;                                     // 0x2FE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlinkTargetVertAngleOffset;                               // 0x2FEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BlinkDebugMode;                                           // 0x2FF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBlinkTargeting;                                         // 0x2FF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x2FF2(0x0002) MISSED OFFSET
	struct FVector                                     CurrentBlinkTargetLocation;                               // 0x2FF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurrentBlinkTargetRotation;                               // 0x3000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentBlinkTargetArcTime;                                // 0x300C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkCooldownInternal;                                    // 0x3010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkStaminaCost;                                         // 0x3014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastBlinkTimeServer;                                      // 0x3018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastBlinkTimeClient;                                      // 0x3020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlinkHasValidTarget;                                      // 0x3028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x3029(0x0003) MISSED OFFSET
	struct FVector                                     NextBlinkStartLoc;                                        // 0x302C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClientBlinkStarted;                                       // 0x3038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x3039(0x0003) MISSED OFFSET
	float                                              CurrentBlinkVertViewAngle;                                // 0x303C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FProjectileArc                              CurrentBlinkTargetArc;                                    // 0x3040(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     CurrentBlinkCameraStartLocation;                          // 0x3070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x307C(0x0004) MISSED OFFSET
	struct UObject_FTransform                          BlinkStartRelativeCameraTransform;                        // 0x3080(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CachedCameraPos;                                          // 0x30B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlinkUseArcCameraInterp;                                  // 0x30BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x30BD(0x0003) MISSED OFFSET
	struct FLinearColor                                BlinkTargetGroundColor;                                   // 0x30C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BlinkTargetWallColor;                                     // 0x30D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BlinkTargetErrorColor;                                    // 0x30E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BlinkTargetColorParamName;                                // 0x30F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlinkCameraTransitionTime;                                // 0x30F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurrentCameraLocation;                                    // 0x30FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BlinkStartActorLocation;                                  // 0x3108(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_EnforcerClimbingState>               EnforcerClimbStateOverride;                               // 0x3114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x3115(0x0003) MISSED OFFSET
	struct FHitResult                                  CurrentBlinkTargetHitResult;                              // 0x3118(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     DesiredMoveDirection;                                     // 0x31A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DesiredMoveDirection_Smoothed;                            // 0x31AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlinkAttackIsActive;                                      // 0x31B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x31B9(0x0007) MISSED OFFSET
	double                                             BlastAttackLastActivateTime;                              // 0x31C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LandingAnim;                                              // 0x31C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BlinkGroundTargetParticleTemplate;                        // 0x31D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BlinkClimbTargetParticleTemplate;                         // 0x31D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                BlinkAnim;                                                // 0x31E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlinkRampDelayTime;                                       // 0x31E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlinkRampTimer;                                           // 0x31EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkRampFOVMultiplier;                                   // 0x31F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x31F4(0x0004) MISSED OFFSET
	class APrimalBuff*                                 BlinkClientEffectBuff;                                    // 0x31F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BlinkClientEffectBuffClass;                               // 0x3200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             BlinkTargetingStartTime;                                  // 0x3208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkTargetingCameraVerticalOffset;                       // 0x3210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlinkTargetingCameraVerticalDelayTime;                    // 0x3214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlinkTargetingCameraMoveDuration;                         // 0x3218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimpleCurve>                          BlinkTargetingCameraMoveCurve;                            // 0x321C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x321D(0x0003) MISSED OFFSET
	float                                              BlinkToAirPowerMultiplier;                                // 0x3220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimpleCurve>                          BlinkToAirPowerCurve;                                     // 0x3224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x3225(0x0003) MISSED OFFSET
	float                                              BlinkCharacterHideAlpha;                                  // 0x3228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlinkCharacterShowAlpha;                                  // 0x322C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHUDElement                                 BlinkCooldownHUDElementTemplate;                          // 0x3230(0x0150) (Edit, BlueprintVisible)
	class UTexture2D*                                  BlinkCooldownHUDElementReadyToUseIcon;                    // 0x3380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      BlinkCooldowns;                                           // 0x3388(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<double>                                     BlinkCooldownNetworkStartTimes;                           // 0x3398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              BlinkMaxDistance;                                         // 0x33A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x33AC(0x0004) MISSED OFFSET
	double                                             FallStartTime;                                            // 0x33B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   CurrClimbingBlendspacesAxes_Front;                        // 0x33B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredNormalDotToClimb_AverageTrace;                    // 0x33C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDotProductForBlinkToClimb;                             // 0x33C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableBlinkCooldown;                                     // 0x33C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x33C9(0x0007) MISSED OFFSET
	class UAnimMontage*                                HardLandingAnim;                                          // 0x33D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpClimbDetatchImpulse;                                  // 0x33D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnInPlaceInterpSpeed;                                   // 0x33DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnInPlaceInterpSpeedFalling;                            // 0x33E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     BlinkTraceChannel;                                        // 0x33E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x33E5(0x0003) MISSED OFFSET
	struct FVector2D                                   UnassembledEnforcerQualityLevelRange;                     // 0x33E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UnassembledEnforcerQualityItemRange;                      // 0x33F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimpleCurve>                          UnassembledEnforcerQualityCurve;                          // 0x33F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x33F9(0x0003) MISSED OFFSET
	float                                              UnassembedEnforcerPercentChanceToBeWorse;                 // 0x33FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UnassembedEnforcerPercentChanceToBeBetter;                // 0x3400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UnassembledEnforcerMaxClonedStatChange;                   // 0x3404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   ClimbAttachSoundCue;                                      // 0x3408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ExtraBlinkCooldownAtLevels;                               // 0x3410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              BlinkCooldownTimePerSlot;                                 // 0x3420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DontHideRiderDuringBlink;                                 // 0x3424(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x3425(0x0003) MISSED OFFSET
	double                                             WildAlertLastDisableCheckTime;                            // 0x3428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WildAlertEnabled;                                         // 0x3430(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x3431(0x0007) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            EnforcerDynamicMaterials;                                 // 0x3438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               OverrideBlinkMaterialStatus;                              // 0x3448(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x3449(0x0003) MISSED OFFSET
	float                                              BlinkCapsuleSizeMult;                                     // 0x344C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkToPrimalCharacterFindValidLocationNextToTargetDistanceMargin;// 0x3450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimberTPVCameraOffset_Climbing_InvertedZ;                // 0x3454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnforcerJumpPressed;                                     // 0x3458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x3459(0x0003) MISSED OFFSET
	float                                              Time_after_jumping_from_a_non_climbing_state_for_a_mission_dino_to_prevent_sending_release_requests;// 0x345C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time_after_detaching_to_prevent_reattaching_for_mission_dino_low_fps;// 0x3460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_NotEqual_FloatFloat_ReturnValue;                 // 0x3464(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x3465(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x3466(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x3468(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorUpVector_ReturnValue;                    // 0x3474(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x3480(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x348C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x3498(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClimberClimbingSimple_Pure_result;             // 0x34A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x34A5(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x34A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x34B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MakeLiteralFloat_ReturnValue;                    // 0x34B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MakeLiteralFloat_ReturnValue2;                   // 0x34BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x34C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x34C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x34CC(0x0004) MISSED OFFSET
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x34D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x34D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x34D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x2];                                       // 0x34DA(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_BlinkStartLocation;                    // 0x34DC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_BlinkDirection;                        // 0x34E8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_RequestedDestination;                  // 0x34F4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_RequestedRotation;                     // 0x3500(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_ClientVerticalViewAngle;               // 0x350C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x3510(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x3511(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x3512(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x3513(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapAngleRangeToCurveClamped_ReturnValue;         // 0x3514(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapAngleRangeToCurveClamped_ReturnValue2;        // 0x3518(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x351C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x3520(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x352C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_OrigLocation;                          // 0x3530(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_OrigRotation;                          // 0x353C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_BlinkLocation;                         // 0x3548(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_BlinkRotation;                         // 0x3554(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_StartedClimbing;                       // 0x3560(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x3561(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue3;                        // 0x3564(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetClimbingSurfaceNormalFromRotation_surfaceNormal;// 0x3568(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_NegateVector_ReturnValue;                        // 0x3574(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x3580(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotFromX_ReturnValue;                        // 0x3588(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x3594(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x3598(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x35A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x35A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x35A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x35AC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x35B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x35C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x35C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDistanceLessThan_ReturnValue;                  // 0x35D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x35D5(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_SelectVector_ReturnValue;                        // 0x35D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FProjectileArc                              K2Node_MakeStruct_ProjectileArc;                          // 0x35E4(0x0030) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData25[0x4];                                       // 0x3614(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x3618(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Climber_Attaching_result;                     // 0x3620(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClimberClimbingSimple_Pure_result2;            // 0x3621(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x3622(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClimberSwimming_Pure_result;                   // 0x3623(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x3624(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x3625(0x0003) MISSED OFFSET
	TArray<bool>                                       K2Node_MakeArray_Array;                                   // 0x3628(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x3638(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x363C(0x0004) MISSED OFFSET
	TArray<int>                                        K2Node_MakeArray_Array2;                                  // 0x3640(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_Forward;                               // 0x3650(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Right;                                 // 0x3654(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x3658(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x365C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x365D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x2];                                       // 0x365E(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue4;                        // 0x3660(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x3664(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue5;                        // 0x3668(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x366C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x366D(0x0003) MISSED OFFSET
	int                                                CallFunc_FFloor_ReturnValue;                              // 0x3670(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue6;                        // 0x3674(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue;                     // 0x3678(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x367C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x367D(0x0003) MISSED OFFSET
	class AController*                                 CallFunc_GetCharacterController_ReturnValue;              // 0x3680(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue7;                        // 0x3688(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetInputAxisValue_ReturnValue;                   // 0x368C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_FFloor_ReturnValue2;                             // 0x3690(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetInputAxisValue_ReturnValue2;                  // 0x3694(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue2;                    // 0x3698(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Direction2;                            // 0x369C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_ArrowSize2;                            // 0x36A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_CustomEvent_Color2;                                // 0x36AC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Duration2;                             // 0x36BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Direction;                             // 0x36C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_ArrowSize;                             // 0x36CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_CustomEvent_color;                                 // 0x36D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_duration;                              // 0x36E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x36E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_NegateVector_ReturnValue2;                       // 0x36F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x36FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue3;               // 0x3708(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_NegateVector_ReturnValue3;                       // 0x3714(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x3720(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x3721(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorUpVector_ReturnValue2;                   // 0x3724(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue4;               // 0x3730(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x373C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x3740(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x374C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x374D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue3;                   // 0x3750(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue4;                   // 0x375C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_Array_Get_Item;                                  // 0x3768(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x3770(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x3774(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Get_Controller_Latency_Ping;                     // 0x3778(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x377C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x3780(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x3784(0x0004) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleFloat_ReturnValue;                // 0x3788(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x3790(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x3791(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x3794(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x3798(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x3799(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x379A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x1];                                       // 0x379B(0x0001) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x379C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch2;                                 // 0x37A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw2;                                   // 0x37AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll2;                                  // 0x37B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue2;                            // 0x37B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue;                    // 0x37C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsBlinkOnCooldown_OnCooldown;                    // 0x37C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x2];                                       // 0x37C2(0x0002) MISSED OFFSET
	int                                                CallFunc_IsBlinkOnCooldown_FirstAvailableCooldown;        // 0x37C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x37C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_UseBlinkCooldown_Success;                        // 0x37C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x37CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_Get_ClimberState_Index_index;                    // 0x37CB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Dir;                                   // 0x37CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_GetValidIndex_ReturnValue;                       // 0x37D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x37D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x37DA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x37DB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue8;                        // 0x37DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue9;                        // 0x37E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x37E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode2;               // 0x37F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x37F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x6];                                       // 0x37F2(0x0006) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue3;               // 0x37F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue;                      // 0x3800(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue2;                     // 0x3801(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue3;                     // 0x3802(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x3803(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue4;                     // 0x3804(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x3805(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x3806(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x1];                                       // 0x3807(0x0001) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue10;                       // 0x3808(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x4];                                       // 0x380C(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x3810(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CalcBlinkTarget_FoundValidTarget;                // 0x3818(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CalcBlinkTarget_IsAirTarget;                     // 0x3819(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CalcBlinkTarget_IsClimbTarget;                   // 0x381A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x1];                                       // 0x381B(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_CalcBlinkTarget_Location;                        // 0x381C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_CalcBlinkTarget_Rotation;                        // 0x3828(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_CalcBlinkTarget_TargetNormal;                    // 0x3834(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_CalcBlinkTarget_ArcTime;                         // 0x3840(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x4];                                       // 0x3844(0x0004) MISSED OFFSET
	struct FHitResult                                  CallFunc_CalcBlinkTarget_HitResult;                       // 0x3848(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsSurfaceNormalClimbable_ShouldClimb;            // 0x38D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDistanceLessThan_ReturnValue2;                 // 0x38D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x2];                                       // 0x38D2(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_SelectVector_ReturnValue2;                       // 0x38D4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SweepTestBlinkClimbPoint_IsValid;                // 0x38E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Do_Blink_Success;                                // 0x38E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x2];                                       // 0x38E2(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_Do_Blink_OrigLocation;                           // 0x38E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Do_Blink_OrigRotation;                           // 0x38F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x38FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x38FD(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x3900(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue5;                // 0x390C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorVector_ReturnValue;               // 0x3918(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorUpVector_ReturnValue3;                   // 0x3924(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x3930(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue5;               // 0x393C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotFromX_ReturnValue2;                       // 0x3948(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue5;                   // 0x3954(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Do_Blink_Success2;                               // 0x3960(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x3];                                       // 0x3961(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Do_Blink_OrigLocation2;                          // 0x3964(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Do_Blink_OrigRotation2;                          // 0x3970(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClimberClimbingSimple_Pure_result3;            // 0x397C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x3];                                       // 0x397D(0x0003) MISSED OFFSET
	struct FHitResult                                  CallFunc_VTraceSingleBP_OutHit;                           // 0x3980(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_VTraceSingleBP_ReturnValue;                      // 0x3A08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0x3A09(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x3A0C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x3A18(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x3A24(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x3A30(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x4];                                       // 0x3A3C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x3A40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x3A48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x3A50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x3A58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x3A60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x3A64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Forwards;                              // 0x3A65(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x2];                                       // 0x3A66(0x0002) MISSED OFFSET
	float                                              K2Node_CustomEvent_Alpha;                                 // 0x3A68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsCheatOverride;                       // 0x3A6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x3];                                       // 0x3A6D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue6;               // 0x3A70(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x3A7C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x3A7D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x2];                                       // 0x3A7E(0x0002) MISSED OFFSET
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue;                  // 0x3A80(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue2;            // 0x3A90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x7];                                       // 0x3A91(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x3A98(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_SelectFloat_ReturnValue11;                       // 0x3AA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x4];                                       // 0x3AAC(0x0004) MISSED OFFSET
	class FString                                      CallFunc_BuildString_Bool_ReturnValue;                    // 0x3AB0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x3AC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue12;                       // 0x3AC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRangeToCurveClamped_ReturnValue;              // 0x3AC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x3ACC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRangeToCurveClamped_ReturnValue2;             // 0x3AD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue13;                       // 0x3AD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode3;               // 0x3AD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x3AD9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x3ADA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x3ADB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x3ADC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum5_CmpSuccess;                            // 0x3ADD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x2];                                       // 0x3ADE(0x0002) MISSED OFFSET
	TArray<double>                                     K2Node_CustomEvent_CooldownTimes;                         // 0x3AE0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x3AF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x3AF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x3AFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x3B00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x3];                                       // 0x3B01(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x3B04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x3B08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue5;                     // 0x3B09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x3B0A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x5];                                       // 0x3B0B(0x0005) MISSED OFFSET
	class UAnimMontage*                                K2Node_Event_StartledAnimPlayed;                          // 0x3B10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bFromAIController;                           // 0x3B18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x3B19(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode4;               // 0x3B1A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x3B1B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum6_CmpSuccess;                            // 0x3B1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x3B1D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x3B1E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x1];                                       // 0x3B1F(0x0001) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue4;               // 0x3B20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue3;                            // 0x3B28(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFirstPerson_ReturnValue;                       // 0x3B34(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x3];                                       // 0x3B35(0x0003) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x3B38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFirstPerson_ReturnValue2;                      // 0x3B40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x3B41(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x3B42(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClimberClimbingSimple_Pure_result4;            // 0x3B43(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue;                    // 0x3B44(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x3];                                       // 0x3B45(0x0003) MISSED OFFSET
	double                                             CallFunc_Array_Set_Item_RefProperty;                      // 0x3B48(0x0008) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Enforcer_Character_BP.Enforcer_Character_BP_C");
		return ptr;
	}


	void Shortly_After_Detaching_Prevent_Reattach();
	void Shortly_After_Jumping_From_A_Non_Climbing_State();
	void Disable_Wall_Detach_Input_Shortly_After_Attach_Input();
	void CanEnforcerRunSeek(bool* bResult);
	void UpdateEnforcerSeeking(float DeltaTime);
	void Client_Tick_Update_Climber_TPV_Camera_Offset();
	void IsHostileTekShield(class AActor* Actor, bool* IsShield);
	bool STATIC_ProjectileArcSweep(const struct FProjectileArc& Arc, const struct FRotator& CapsuleRotation, float CapsuleRadius, float CapsuleHalfHeight, float MaxArcLength, TEnumAsByte<ECollisionChannel> CollisionChannel, bool bDrawDebug, float DebugDrawDuration, TArray<class AActor*>* ActorsToIgnore, struct FHitResult* HitResult, struct FVector* EndLocation, float* EndArcTime);
	void CanNonControlledClimberNotClimbingOverrideTransformInterpolation(bool* Result);
	void BPOnRefreshColorization(TArray<struct FLinearColor>* Colors);
	void BPOnLethalDamage(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, bool* bPreventDeath);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnRep_WildAlertEnabled();
	void GetRiderVisibility(class AShooterCharacter* Rider, bool* IsVisible);
	void SetRiderVisibility(class AShooterCharacter* Rider, bool Visible);
	void SetupBlinkCooldowns(int OverrideNumCooldowns);
	void BPNotifyLevelUp(int* ExtraCharacterLevel);
	void On_ClimberAttached();
	void BPUnstasis();
	void BlueprintPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void StopClimbing(bool* resetRestoreToSeeking, bool* skipDetach);
	struct FVector STATIC_BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter);
	bool BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	bool HasEnoughStaminaToBlink();
	void SweepTestBlinkClimbPoint(const struct FVector& Location, const struct FVector& Normal, const struct FRotator& TargetRot, float DebugDrawTime, bool* IsValid);
	void IsSurfaceNormalClimbable(const struct FVector& SurfaceNormal, bool* ShouldClimb);
	void GetCustomSurfaceTraceDistance(int* traceIndex, float* customDistance);
	void IsNormalClimbable(struct FVector* Normal, bool* isAverageNormal, bool* Result);
	void ClimbingIK_SetNewBlendspaceAxes();
	void GetClimbingIK_BlendspaceAxes_Front(struct FVector2D* axes);
	float BPGetHUDOverrideBuffProgressBarPercent();
	void GetDesiredMoveDirection(struct FVector* Direction);
	void STATIC_BlinkCooldownToString(double LastUsedTime, float Cooldown, const class FString& ReadyString, class FString* Return_Value);
	TArray<struct FBlueprintVisualLogEntry> BPGrabDebugSnapshot();
	void IsBlinkOnCooldownNonPure(bool* OnCooldown);
	void BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value);
	void Get_CurrentClimbingVelocityMax(float* Velocity);
	void UseBlinkCooldown(bool TestOnly, bool* Success);
	void IsBlinkOnCooldown(bool* OnCooldown, int* FirstAvailableCooldown);
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void Get_Blink_Ramp_Delay_Status(bool* InDelay, float* Time, float* Alpha);
	void Get_Controller_Latency(float* Ping);
	void ClientStartBlink();
	float BPModifyFOV(float* FOVIn);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void GetClimbingMoveDirFromRotation(struct FRotator* Rotation, struct FVector* moveDir);
	void STATIC_Can_Receive_Climbing_Input_Strafe(bool* Return_Value);
	void ReceiveBeginPlay();
	void IsBlinkInProgress(bool* InBlinkDelay, bool* IsBlinking);
	void Check_For_Prevent_Stop_Climbing(int* numValidHits, int* numTraces, TArray<bool>* traceHitsArray, bool* allowClimbing);
	void GetCurrentCameraLoc(struct FVector* Loc);
	void BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV);
	void ClientSetBlinkStatus(bool BlinkInProgress);
	void CalcBlinkTarget(const struct FProjectileArc& Arc, bool ForVFX, float DebugDrawDuration, bool* FoundValidTarget, bool* IsAirTarget, bool* IsClimbTarget, struct FVector* Location, struct FRotator* Rotation, struct FVector* TargetNormal, float* ArcTime, struct FHitResult* HitResult);
	void Update_Blink_Target_VFX_Location(bool IsVisible, bool IsInvalid, const struct FVector& WorldLocation, const struct FRotator& WorldRotation, const struct FHitResult& HitResult, const struct FVector& SurfaceNormal);
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	bool BPHandleOnStopTargeting();
	void Get_Vertical_View_Angle(float* Angle);
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void Do_Blink(const struct FVector& BlinkLocation, const struct FRotator& BlinkRotation, bool StartClimbing, bool* Success, struct FVector* OrigLocation, struct FRotator* OrigRotation);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void UserConstructionScript();
	void ServerRequestBlink(const struct FVector& BlinkStartLocation, const struct FVector& BlinkDirection, const struct FVector& RequestedDestination, const struct FRotator& RequestedRotation, float ClientVerticalViewAngle);
	void MulticastOnBlinkCompleted(const struct FVector& OrigLocation, const struct FRotator& OrigRotation, const struct FVector& BlinkLocation, const struct FRotator& BlinkRotation, bool startedClimbing);
	void MulticastBlinkAcknowledged();
	void BP_OnJumpPressed();
	void BP_OnJumpReleased();
	void ServerUpdateMoveDir(float Forward, float Right);
	void UpdateMoveDir();
	void DrawDebugDirection(const struct FVector& Direction, float ArrowSize, const struct FLinearColor& Color, float Duration);
	void ClientDrawDebugDirection(const struct FVector& Direction, float ArrowSize, const struct FLinearColor& Color, float Duration);
	void MultiBlinkFailed();
	void MultiOnClimbDetach();
	void MulticastUpdateDesiredMoveDirection(const struct FVector& Dir);
	void OnBlastAttack();
	void ClientOnBlastAttack();
	void ServerRequestClimbDetatchWithJump();
	void OnWalkableGroundFoundWhileClimbing();
	void FixBlinkMaterials();
	void MultiSetBlinkValue(bool Forwards, float Alpha, bool IsCheatOverride);
	void MultiOnClimberAttached();
	void ClientUpdateBlinkCooldownTimes(TArray<double>* CooldownTimes);
	void SetupBlinkCooldowns_Initial();
	void BPOnDinoStartled(class UAnimMontage** StartledAnimPlayed, bool* bFromAIController);
	void ExecuteUbergraph_Enforcer_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
