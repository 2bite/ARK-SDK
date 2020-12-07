#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deinonychus_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Deinonychus_Character_BP.Deinonychus_Character_BP_C
// 0x0E9F (0x33E8 - 0x2549)
class ADeinonychus_Character_BP_C : public ARaptor_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2549(0x0007) MISSED OFFSET
	class UCapsuleComponent*                           UberpounceDamageComponent;                                // 0x2550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Deinonychus_C* DinoCharacterStatus_BP_Deinonychus_C1;                    // 0x2558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             PounceApexStart;                                          // 0x2560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalDinoCharacter*                        PouncedTargetRidingDino;                                  // 0x2568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceRange;                                          // 0x2570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2574(0x0004) MISSED OFFSET
	TArray<float>                                      UpberpounceTargetingLocationsTraceRadii;                  // 0x2578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      BaseUberpounceSocketName;                                 // 0x2588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      UberpounceTargetingTagActor;                              // 0x2598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      UberpounceTargetingTagActorClass;                         // 0x25A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseUberpounceAngle;                                      // 0x25A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBaseUberpounceAngleVertical;                           // 0x25AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxBaseUberpounceAngleVertical;                           // 0x25B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseUberounceAngleHoriz;                                  // 0x25B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceAimingDirVectorWeighMult;                       // 0x25B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x25BC(0x0004) MISSED OFFSET
	class APrimalCharacter*                            UberpounceTargetCharacter;                                // 0x25C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceInterpSpeedBase;                                // 0x25C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x25CC(0x0004) MISSED OFFSET
	double                                             StartUberpounceTime;                                      // 0x25D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceCapsuleSizeMult;                                // 0x25D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x25DC(0x0004) MISSED OFFSET
	struct FUberpounceData                             UberpounceQueuedData;                                     // 0x25E0(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FUberpounceData                             UberpounceCurrentData;                                    // 0x2610(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              UberpounceEndpounceSpeed;                                 // 0x2640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceTargetingImpactLocationDistanceThreshold;       // 0x2644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpouncePercentDistanceThresholdForRotationInterp;      // 0x2648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceInterpSpeedRotationRoll;                        // 0x264C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceCameraDistanceOpacityThreshold;                 // 0x2650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceOpacityFresnelExponent;                         // 0x2654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EUberpounceState>                      UberpounceState;                                          // 0x2658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceBufferedJumpInput;                              // 0x2659(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x265A(0x0002) MISSED OFFSET
	float                                              UberpounceDistancePercentToTargetThresholdForStateChange; // 0x265C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraOffsetWhenAttachedToLocation;                       // 0x2660(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceMinRange;                                       // 0x266C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousCameraLocationOffset;                             // 0x2670(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x267C(0x0004) MISSED OFFSET
	class FString                                      ServerDebugString;                                        // 0x2680(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	double                                             TimeLastUpdatedUberpounce;                                // 0x2690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GeoLineSuccess;                                           // 0x2698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x2699(0x0007) MISSED OFFSET
	TArray<class APrimalCharacter*>                    ActiveBleeds;                                             // 0x26A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector2D                                   HUDElementShakeOffsetBase;                                // 0x26B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   BleedHUDElementLocationBase;                              // 0x26B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   BleedHUDElementSize;                                      // 0x26C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAnchors                                    BleedHUDElementAnchor;                                    // 0x26C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BleedIndicatorEdgeMarginPercent;                          // 0x26D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BleedIndicatorSizeMult;                                   // 0x26DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    StartingUberpounceRotation;                               // 0x26E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingUberpounceDistanceToTarget;                       // 0x26EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpouncePercentDistanceThresholdForYawRotationInterp;   // 0x26F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpouncePercentDistanceThresholdForPitchRotationInterp; // 0x26F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpouncePercentDistanceThresholdForRollRotationInterp;  // 0x26F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenPercentMulti;                                       // 0x26FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenPercentAdd;                                         // 0x2700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceRotationYawAlpha;                               // 0x2704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceRotationYawInterpSpeed;                         // 0x2708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    UberpounceAttachToLocationStartTargetRotation;            // 0x270C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FUberpounceData                             PreviousUberpounceData;                                   // 0x2718(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              UberpounceStartTargetRotationInterpSpeed;                 // 0x2748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceOutOfRangeMax;                                  // 0x274C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceTargetingUIIconSize;                            // 0x2750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x2754(0x0004) MISSED OFFSET
	struct FUberpounceData                             BackwardUberpounceQueuedData;                             // 0x2758(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAnchors                                    BackwardsPounceUIIconAnchor;                              // 0x2788(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                                   BackwardsPounceUIIconLocation;                            // 0x2798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayedAttachAnim;                                         // 0x27A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x27A1(0x0003) MISSED OFFSET
	struct FVector                                     StartUberpounceLocation;                                  // 0x27A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceLocationInterpAlpha;                            // 0x27B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayedStateChangeEffects;                                 // 0x27B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x27B5(0x0003) MISSED OFFSET
	float                                              UberpounceMinDistanceForInterpSpeed;                      // 0x27B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceAttachLocationCapsuleOffsetMult;                // 0x27BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasQueuedUberpounce;                                      // 0x27C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x27C1(0x0003) MISSED OFFSET
	float                                              UberpounceEndpounceSpeedVertical;                         // 0x27C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrevCameraLocation;                                       // 0x27C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedBase;                                    // 0x27D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrevFOV;                                                  // 0x27D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FOVInterpSpeed;                                           // 0x27DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceDistanceToTarget;                               // 0x27E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x27E4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CameraInterpSpeedMultCurve;                               // 0x27E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PrevCameraRotation;                                       // 0x27F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceCameraOnLeft;                                   // 0x27FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDeinonychusCameraState>               CameraState;                                              // 0x27FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x27FE(0x0002) MISSED OFFSET
	struct FVector                                     UberpounceTPVOffsetLeft;                                  // 0x2800(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     UberpounceTPVOffsetRight;                                 // 0x280C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPVOffsetAttachedToCharacter;                             // 0x2818(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPVOffsetAttachedToCharacterRight;                        // 0x2824(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraRotationInterpSpeedAttachToCharacter;               // 0x2830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedLeftOrRightCameraState;                  // 0x2834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceBloodVFXScale;                                  // 0x2838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceInitialLatchDamageBase;                         // 0x283C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EUberpounceState>                      PreviousUberpounceState;                                  // 0x2840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugMode;                                                // 0x2841(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x2842(0x0002) MISSED OFFSET
	int                                                DebugUberpounceTraceCount;                                // 0x2844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DebugTraceCount;                                          // 0x2848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               QueuedBufferedUberpounce;                                 // 0x284C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x284D(0x0003) MISSED OFFSET
	float                                              UberpouncePercentDistanceThresholdForBufferedJump;        // 0x2850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x2854(0x0004) MISSED OFFSET
	double                                             TimeLastUberpounceAttached;                               // 0x2858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeUntilUberpounceSlidingBase;                           // 0x2860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           UberpounceSliddingStat;                                   // 0x2864(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceIsSliding;                                      // 0x2865(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x2866(0x0002) MISSED OFFSET
	float                                              UberpounceSlidingCapsuleSizeMult;                         // 0x2868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x286C(0x0004) MISSED OFFSET
	class UParticleSystem*                             UberpounceWallImpactEmitter;                              // 0x2870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             UberpounceDinoImpactEmitter;                              // 0x2878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      UberpounceFanAnglesAimedUp;                               // 0x2880(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              UberpounceDistancePercentToTargetThresholdForStateChangeTargetIsGround;// 0x2890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x2894(0x0004) MISSED OFFSET
	TArray<float>                                      UberpounceReflectionMult;                                 // 0x2898(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              UberounceIsGroundDotProductThreshold;                     // 0x28A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeShowFans;                                        // 0x28AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x28AD(0x0003) MISSED OFFSET
	TArray<float>                                      UberpounceFanAnglesAimedDown;                             // 0x28B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      UberpounceGroundTargetingForwardAngles;                   // 0x28C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ShowCursor;                                               // 0x28D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x28D1(0x0003) MISSED OFFSET
	float                                              UberpounceIsAttachableDotProductThreshold;                // 0x28D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationInterpSpeedAttachedToCharacter;                   // 0x28D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceMinCameraDistanceAttachedToCharacter;           // 0x28DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastJumpPressedTime;                                      // 0x28E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastFallingTime;                                          // 0x28E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsJumpButtonHeld;                                         // 0x28F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x28F1(0x0007) MISSED OFFSET
	double                                             LastUberpounceGrabStartTime;                              // 0x28F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceTraceSelectDinoDotProductThreshold;             // 0x2900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceOnSurvivorRange;                                    // 0x2904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceOnSurvivorTraceRadius;                              // 0x2908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceParabolicPositionZScaleBase;                    // 0x290C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           UberpunceLocationInterpFunction;                          // 0x2910(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x2911(0x0003) MISSED OFFSET
	float                                              UberpouncePrevZOffset;                                    // 0x2914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpouncePressAndHoldMinTime;                            // 0x2918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceMaxSuicideJumpStrength;                         // 0x291C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceLatchedJumpMaxSpeed;                            // 0x2920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceMaxVelocityZ;                                   // 0x2924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceSlideSpeedBase;                                 // 0x2928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x292C(0x0004) MISSED OFFSET
	double                                             UberpounceTimeStartedSliding;                             // 0x2930(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceMaxSlideSpeed;                                  // 0x2938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpouncePressAndHoldCameraShakeScale;                   // 0x293C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceGrabTraceRadiusMult;                            // 0x2940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceJumpSpeed;                                      // 0x2944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceJumpAngleFromLocation;                          // 0x2948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceDistancePercentToTargetThresholdForStateChangeTargetBuffered;// 0x294C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceRotationInterpSpeedPitch;                       // 0x2950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceJumpAngle;                                      // 0x2954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeHUDElements;                                     // 0x2958(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x2959(0x0003) MISSED OFFSET
	struct FVector2D                                   DebugStringHUDElementLoc;                                 // 0x295C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceAtTargetRotation;                               // 0x2964(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceIsGrab;                                         // 0x2965(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x2];                                       // 0x2966(0x0002) MISSED OFFSET
	float                                              UberpounceRotationInterpSpeedPitchGrab;                   // 0x2968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeNonAuthoritativeClient;                          // 0x296C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableSimulatedMovement;                                 // 0x296D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x296E(0x0002) MISSED OFFSET
	float                                              UberpoucneTargetIsGroundBufferedThreshold;                // 0x2970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowUberpounceHUD;                                        // 0x2974(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x2975(0x0003) MISSED OFFSET
	float                                              SuicideJumpSpeedOnFailedTargetIsGround;                   // 0x2978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x4];                                       // 0x297C(0x0004) MISSED OFFSET
	struct FUberpounceData                             AIBufferedUberpounce;                                     // 0x2980(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              AIUberpounceAttackInterval;                               // 0x29B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LatchedJumpVelocity;                                      // 0x29B4(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeLatching;                                        // 0x29C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x29C1(0x0003) MISSED OFFSET
	float                                              LatchedJumpVelcityInterpSpeed;                            // 0x29C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchedJumpSpeed;                                         // 0x29C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchedJumpWallHugSpeed;                                  // 0x29CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchedJumpTimeToAutoLatch;                               // 0x29D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchedJumpOffWallSpeed;                                  // 0x29D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeAutoLatchedJump;                                  // 0x29D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoLatchJumpCooldown;                                    // 0x29E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LatchedJumpRotation;                                      // 0x29E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CachedLatchJumpVelocity;                                  // 0x29F0(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchedAutoJumpSlowDownSpeed;                             // 0x29FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceTraceIsFacingThreshold;                         // 0x2A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeUberpounceCharacterTrace;                        // 0x2A04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceUseArcTargeting;                                // 0x2A05(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x2];                                       // 0x2A06(0x0002) MISSED OFFSET
	float                                              FallingLatchRange;                                        // 0x2A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingInterpFromVerticalSpeed;                           // 0x2A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDistanceForUberpounce;                                 // 0x2A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceStartedSpeedTowardsTarget;                          // 0x2A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceStartedUpwardsSpeed;                                // 0x2A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceInterpSpeedBaseAI;                              // 0x2A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceAttachedToCharacterStaminaCostPerSecond;        // 0x2A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceAttachedToLocationStaminaCostPerSecond;         // 0x2A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpStaminaCost;                                          // 0x2A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchJumpStaminaCost;                                     // 0x2A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceEndpounceSpeedOutOfStamina;                     // 0x2A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceFitsInSpaceSizeMult;                            // 0x2A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CachedHasLatchableSurfaceInFrontOfDeinonychusResult;      // 0x2A38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x2A39(0x0007) MISSED OFFSET
	struct FUberpounceData                             CachedHasLatchableSurfaceInFrontOfDeinonychusUberpounceData;// 0x2A40(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                LastFrameCheckedLatchableSurface;                         // 0x2A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceZOffsetScalar;                                  // 0x2A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceZOffsetInterpSpeed;                             // 0x2A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceInterpSpeed;                                    // 0x2A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceFromCharacterFaceCameraRotationThreshold;       // 0x2A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceAimPitchOffsetAttached;                         // 0x2A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeAimDirection;                                    // 0x2A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x2A89(0x0003) MISSED OFFSET
	struct FRotator                                    WallRotator;                                              // 0x2A8C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeLatchedJump;                                     // 0x2A98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeWallHugging;                                     // 0x2A99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x2];                                       // 0x2A9A(0x0002) MISSED OFFSET
	float                                              LatchedJumpLedgeTopSpeed;                                 // 0x2A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceSocketToSocketDotProductThreshold;              // 0x2AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     UberpounceDefaultTPVOffset;                               // 0x2AA4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceFoundLedge;                                     // 0x2AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x7];                                       // 0x2AB1(0x0007) MISSED OFFSET
	TArray<class UAnimMontage*>                        UninteruptableAnimMontages;                               // 0x2AB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastTimeJumpReleasedTookAction;                           // 0x2AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LatchedJumpRequested;                                     // 0x2AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpawnNestEgg;                                            // 0x2AD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x2];                                       // 0x2AD2(0x0002) MISSED OFFSET
	struct FName                                       NestPointListCustomTagName;                               // 0x2AD4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StructureSpawnPointMaxDistance;                           // 0x2ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StructureCheckRadius;                                     // 0x2AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x4];                                       // 0x2AE4(0x0004) MISSED OFFSET
	class UClass*                                      NestToSpawn;                                              // 0x2AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxStructuresInRadius;                                    // 0x2AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StructureTraceImpactOffset;                               // 0x2AF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StructureTraceSpawnOffset;                                // 0x2B00(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NestEggOffset;                                            // 0x2B0C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NotifyNeighborDeinonychusOfEggRange;                      // 0x2B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x4];                                       // 0x2B1C(0x0004) MISSED OFFSET
	double                                             LastEggSpawnTime;                                         // 0x2B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnstasisStructureCreateEggInterval;                       // 0x2B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x4];                                       // 0x2B2C(0x0004) MISSED OFFSET
	double                                             LastUnstasisStructureTime;                                // 0x2B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeUberpounceCollision;                             // 0x2B38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x2B39(0x0003) MISSED OFFSET
	float                                              UberpounceCollisionTraceDistance;                         // 0x2B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceCollisionRadiusMult;                            // 0x2B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     UberpounceLastKnownGoodLocation;                          // 0x2B44(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UberpounceNumFramesColliding;                             // 0x2B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UberpounceNumFramesCollidingToEndUberpounce;              // 0x2B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      UberpounceTargetingCharactersTraceRadii;                  // 0x2B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DebugModeSliding;                                         // 0x2B68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x2B69(0x0003) MISSED OFFSET
	struct FVector                                     UberpounceStartingTargetLocation;                         // 0x2B6C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnSlideEndUberpounceDotThreshold;                         // 0x2B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceNoSlideThreshold;                               // 0x2B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceRedwoodTreeSizeZThreshold;                      // 0x2B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceAttachedCooldown;                               // 0x2B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceTotalDisplacementTraveled;                      // 0x2B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxUberpounceDistanceGiveUpMult;                          // 0x2B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceBaseStaminaCost;                                // 0x2B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EUberpounceState>                      UberpounceServerState;                                    // 0x2B94(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x2B95(0x0003) MISSED OFFSET
	float                                              UberpounceDetectDesyncTimer;                              // 0x2B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AddedUberpouncePinnedBuff;                                // 0x2B9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x3];                                       // 0x2B9D(0x0003) MISSED OFFSET
	float                                              UberpounceErrorLocTolerance;                              // 0x2BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchedJumpErrorLocTolerance;                             // 0x2BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceEndSpeedOnJump;                                 // 0x2BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceMaxTimeToAttach;                                // 0x2BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    NewEventDispatcher;                                       // 0x2BB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              UberpounceDistanceThresholdForAttach;                     // 0x2BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceLoSRadius;                                      // 0x2BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LatchedJumpLastWallNormalVector;                          // 0x2BC8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData44[0x4];                                       // 0x2BD4(0x0004) MISSED OFFSET
	double                                             LatchedJumpTimeLastHadWall;                               // 0x2BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LatchJumpAppliedCliffImpulse;                             // 0x2BE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeLoS;                                             // 0x2BE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnablePinnedBuffOnDinos;                                  // 0x2BE2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RespectStaminaDuringUberpounce;                           // 0x2BE3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x4];                                       // 0x2BE4(0x0004) MISSED OFFSET
	class UObject*                                     LatchJumpRitAnim;                                         // 0x2BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     LatchJumpLftAnim;                                         // 0x2BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     LatchJumpAnim;                                            // 0x2BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LatchOutToFallAnim;                                       // 0x2C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PouncePinInAnim;                                          // 0x2C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     LatchAutoJumpAnim;                                        // 0x2C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     LatchHopRightAnim;                                        // 0x2C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     LatchHopLeftAnim;                                         // 0x2C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SupportNoHoldWallJumpOff;                                 // 0x2C28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x7];                                       // 0x2C29(0x0007) MISSED OFFSET
	double                                             LastTimeStartedLatchedJump;                               // 0x2C30(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeQueuedAutoJump;                                   // 0x2C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactVFXScale;                                           // 0x2C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpoiunceAttachedToLocationCameraShakeScale;            // 0x2C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpoiunceAttachedToLocationCameraShakeSpeed;            // 0x2C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewVar;                                                   // 0x2C4C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastEndUberpounceTime;                                    // 0x2C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastWalkingTime;                                          // 0x2C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableClientSimulation;                                   // 0x2C68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData47[0x7];                                       // 0x2C69(0x0007) MISSED OFFSET
	double                                             LastTickTime;                                             // 0x2C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeTimer;                                           // 0x2C78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData48[0x7];                                       // 0x2C79(0x0007) MISSED OFFSET
	class UCurveFloat*                                 HoldTimeToJumpSpeedMult;                                  // 0x2C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                UberpounceDetachMontage;                                  // 0x2C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CheckForFallingLatchDelayAfterJump;                       // 0x2C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData49[0x4];                                       // 0x2C94(0x0004) MISSED OFFSET
	struct FUberpounceData                             OutOfRangeUberpounceData;                                 // 0x2C98(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SupportPressAndHoldUberpounce;                            // 0x2CC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData50[0x7];                                       // 0x2CC9(0x0007) MISSED OFFSET
	TArray<struct FName>                               UberJumpFXAttachNames;                                    // 0x2CD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             UberJumpFXParticle;                                       // 0x2CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InstantJumpOffWall;                                       // 0x2CE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData51[0x3];                                       // 0x2CE9(0x0003) MISSED OFFSET
	struct FRotator                                    EndUberpounceTargetRotation;                              // 0x2CEC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InstantRotateOnUberpounce;                                // 0x2CF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData52[0x3];                                       // 0x2CF9(0x0003) MISSED OFFSET
	float                                              EndUberpounceTargetRotationInterpSpeed;                   // 0x2CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseLeapImpactFX;                                          // 0x2D00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData53[0x3];                                       // 0x2D01(0x0003) MISSED OFFSET
	float                                              SpawnLocalClinetSuperJumpFXDelay;                         // 0x2D04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LeapImpactFX;                                             // 0x2D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceTargetsCharacters;                              // 0x2D10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData54[0x3];                                       // 0x2D11(0x0003) MISSED OFFSET
	int                                                UberpounceTraceGroups;                                    // 0x2D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     UberpounceTraceChannel;                                   // 0x2D18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData55[0x3];                                       // 0x2D19(0x0003) MISSED OFFSET
	float                                              MeshDebugDrawDuration;                                    // 0x2D1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshProtectionLatchedDashScalar;                          // 0x2D20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeLatchMesh;                                       // 0x2D24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData56[0x3];                                       // 0x2D25(0x0003) MISSED OFFSET
	float                                              OffsetLatch;                                              // 0x2D28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AttachedCharacterLocation;                                // 0x2D2C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     UberpounceStartLocation;                                  // 0x2D38(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceHackDistCheck;                                  // 0x2D44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x2D48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x2D49(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x6];                                       // 0x2D4A(0x0006) MISSED OFFSET
	struct FUberpounceData                             K2Node_CustomEvent_QueuedUberpounceData;                  // 0x2D50(0x0030) (Transient, DuplicateTransient)
	bool                                               K2Node_CustomEvent_QuickUberpounce;                       // 0x2D80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x7];                                       // 0x2D81(0x0007) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetInitialAnimationForUberpounce_OutAnim;        // 0x2D88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_GetInitialAnimationForUberpounce_RetStartSectionName;// 0x2D90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                CallFunc_GetInitialAnimationForUberpounce_OutAnim2;       // 0x2D98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_GetInitialAnimationForUberpounce_RetStartSectionName2;// 0x2DA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2DA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x2DAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetUberpounceTransform_Location;                 // 0x2DB0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetUberpounceTransform_Rotation;                 // 0x2DBC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetUberpounceTransform_IsGroundSurface;          // 0x2DC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x2DC9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_VectorVector_ReturnValue;            // 0x2DCA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2DCB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x4];                                       // 0x2DCC(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_target;                                // 0x2DD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2DD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x2DD9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x2];                                       // 0x2DDA(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Velocity4;                             // 0x2DDC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Velocity3;                             // 0x2DE8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location3;                             // 0x2DF4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location2;                             // 0x2E00(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EUberpounceState>                      K2Node_CustomEvent_VerifiedState;                         // 0x2E0C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_SetActorLocation_ReturnValue;                 // 0x2E0D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x2];                                       // 0x2E0E(0x0002) MISSED OFFSET
	struct FUberpounceData                             K2Node_CustomEvent_Data2;                                 // 0x2E10(0x0030) (Transient, DuplicateTransient)
	struct FVector                                     CallFunc_GetUberpounceTransform_Location2;                // 0x2E40(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetUberpounceTransform_Rotation2;                // 0x2E4C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetUberpounceTransform_IsGroundSurface2;         // 0x2E58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x7];                                       // 0x2E59(0x0007) MISSED OFFSET
	struct FUberpounceData                             K2Node_CustomEvent_Data;                                  // 0x2E60(0x0030) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue;         // 0x2E90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x3];                                       // 0x2E91(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x2E94(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x2EA0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x2EAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue2;        // 0x2EB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x3];                                       // 0x2EB1(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Velocity2;                             // 0x2EB4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x2EC0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetModeBP>                            CallFunc_SwitchNetworkMode_OutNetworkMode;                // 0x2ECC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x2ECD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x2];                                       // 0x2ECE(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Velocity;                              // 0x2ED0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetModeBP>                            CallFunc_SwitchNetworkMode_OutNetworkMode2;               // 0x2EDC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x3];                                       // 0x2EDD(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x2EE0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x2EEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x3];                                       // 0x2EED(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Normal_ReturnValue3;                             // 0x2EF0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue2;                              // 0x2EFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x2F00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorRightVector_ReturnValue;                 // 0x2F04(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x2F10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x2F1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x2F20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x2F21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2F22(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x2F23(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Velocity6;                             // 0x2F24(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                K2Node_CustomEvent_MontageToPlayOnNonZeroVelocity2;       // 0x2F30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2F38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x3];                                       // 0x2F39(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x2F3C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x2F48(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue2;              // 0x2F54(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetUpVector_ReturnValue;                         // 0x2F60(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue4;                             // 0x2F6C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x2F78(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue3;               // 0x2F84(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x2F90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x2F9C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x2FA8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x2FB4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x2FB5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x2];                                       // 0x2FB6(0x0002) MISSED OFFSET
	struct FDinoAttackInfo                             CallFunc_Array_Get_Item;                                  // 0x2FB8(0x0130) (Transient, DuplicateTransient)
	bool                                               CallFunc_DeductStamina_SuccessfullyRemovedStamina;        // 0x30E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DeductStamina_SuccessfullyRemovedStamina2;       // 0x30E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DeductStamina_SuccessfullyRemovedStamina3;       // 0x30EA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DeductStamina_SuccessfullyRemovedStamina4;       // 0x30EB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DeductStamina_SuccessfullyRemovedStamina5;       // 0x30EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x3];                                       // 0x30ED(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorRightVector_ReturnValue2;                // 0x30F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue2;                   // 0x30FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x3100(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x3101(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x3102(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x3103(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorUpVector_ReturnValue;                    // 0x3104(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_NegateVector_ReturnValue;                        // 0x3110(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue4;               // 0x311C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x3128(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue3;                   // 0x3134(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetUpVector_ReturnValue2;                        // 0x3140(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetUpVector_ReturnValue3;                        // 0x314C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_newTargetLocation;                     // 0x3158(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_NewTargetRotation;                     // 0x3164(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_CustomEvent_OldTarget;                             // 0x3170(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue3;                   // 0x3178(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x317C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum5_CmpSuccess;                            // 0x317D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue2;            // 0x317E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum6_CmpSuccess;                            // 0x317F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x3180(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x3181(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x6];                                       // 0x3182(0x0006) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x3188(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue2;            // 0x3190(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue3;            // 0x3198(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x31A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x31A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x31AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x3];                                       // 0x31AD(0x0003) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue2;              // 0x31B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x31B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue2;                 // 0x31C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_SetActorLocation_ReturnValue2;                // 0x31C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x31C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DeductStamina_SuccessfullyRemovedStamina6;       // 0x31CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x1];                                       // 0x31CB(0x0001) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Loc;                                   // 0x31CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_SetActorLocation_ReturnValue3;                // 0x31D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum7_CmpSuccess;                            // 0x31D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0x6];                                       // 0x31DA(0x0006) MISSED OFFSET
	class UObject*                                     CallFunc_SelectObject_ReturnValue;                        // 0x31E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_SelectObject_ReturnValue2;                       // 0x31E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue3;                         // 0x31F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x4];                                       // 0x31F4(0x0004) MISSED OFFSET
	class UAnimMontage*                                K2Node_DynamicCast_AsAnimMontage;                         // 0x31F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x3200(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x3];                                       // 0x3201(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue4;                         // 0x3204(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue4;            // 0x3208(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_SelectObject_ReturnValue3;                       // 0x3210(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_SelectObject_ReturnValue4;                       // 0x3218(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue;             // 0x3220(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData77[0x7];                                       // 0x3221(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_DynamicCast_AsAnimMontage2;                        // 0x3228(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x3230(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData78[0x3];                                       // 0x3231(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue5;                         // 0x3234(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue5;            // 0x3238(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue6;            // 0x3240(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue2;            // 0x3248(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum8_CmpSuccess;                            // 0x3249(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_VectorVector_ReturnValue2;           // 0x324A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData79[0x1];                                       // 0x324B(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue5;                // 0x324C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue3;              // 0x3258(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x3264(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSizeSquared_ReturnValue;                        // 0x3268(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue3;                    // 0x326C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x3];                                       // 0x326D(0x0003) MISSED OFFSET
	class UParticleSystem*                             K2Node_CustomEvent_FX_to_Spawn2;                          // 0x3270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FName>                               K2Node_CustomEvent_Attach_Point_Names2;                   // 0x3278(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                             K2Node_CustomEvent_FX_to_Spawn;                           // 0x3288(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FName>                               K2Node_CustomEvent_Attach_Point_Names;                    // 0x3290(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x32A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData81[0x3];                                       // 0x32A1(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Velocity5;                             // 0x32A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                K2Node_CustomEvent_MontageToPlayOnNonZeroVelocity;        // 0x32B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue6;                // 0x32B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue4;              // 0x32C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue5;              // 0x32D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue3;                              // 0x32DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue4;                              // 0x32E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x32E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x32E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData82[0x3];                                       // 0x32E9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue7;                // 0x32EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x32F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData83[0x3];                                       // 0x32F9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue6;              // 0x32FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue5;                              // 0x3308(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData84[0x4];                                       // 0x330C(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x3310(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue4;                    // 0x3318(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData85[0x7];                                       // 0x3319(0x0007) MISSED OFFSET
	struct FHitResult                                  CallFunc_VTraceSingleBP_OutHit;                           // 0x3320(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_VTraceSingleBP_ReturnValue;                      // 0x33A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData86[0x3];                                       // 0x33A9(0x0003) MISSED OFFSET
	float                                              CallFunc_GetUberpounceMaxRange_REt;                       // 0x33AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue5;                    // 0x33B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_VectorVector_ReturnValue3;           // 0x33B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData87[0x2];                                       // 0x33B2(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue8;                // 0x33B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue7;              // 0x33C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue6;                              // 0x33CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue6;                    // 0x33D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x33D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData88[0x6];                                       // 0x33D2(0x0006) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x33D8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Deinonychus_Character_BP.Deinonychus_Character_BP_C");
		return ptr;
	}


	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void OnNonInstanceJumpOffWallInput(float HoldTime);
	void GetLatchJumpSpeedThresholdForRotate(float* Res);
	void SpawnUberJumpFX(class UParticleSystem* FX_to_Spawn, const struct FRotator& Rotation, TArray<struct FName>* Attach_Point_Names);
	void Is_Recently_Unlatched(float Threshold, bool* ret);
	void GetCameraInterpSpeed(float* InterpSpeed);
	void OnJumpFromGround(float HoldTime);
	void GetUberpounceInterpSpeed(float* Speed);
	void CalcCurrentJump_Hold_Time(float* Result);
	void STATIC_ClearOutOfRangeData();
	void GetUberpounceRangeBase(float* ret);
	void GetUberpounceMaxRange(float* ret);
	void STATIC_UpdateTickThrottles();
	void BPTimerNonDedicated();
	void STATIC_Throttled_TickFn();
	void BPTimerServer();
	void STATIC_On_Uberpounce_AttachedToLocation();
	void ScheduleChecking_Falling_Latch(float Delay);
	void TryAddPinnedBuff(class APrimalCharacter* Target);
	void ApplyJump(const struct FVector& Velocity, class UAnimMontage* Anim);
	void Get_Pounce_Latched_Anim(class UAnimMontage** Anim, struct FName* StartSectionName);
	void GetInitialAnimationForUberpounce(bool QuickUberpounce, class UAnimMontage** OutAnim, struct FName* RetStartSectionName);
	void Los(const struct FVector& Start, const struct FVector& End, float Radius, class APrimalCharacter* Target, bool* ret);
	void OnRep_UberpounceServerState();
	void UberpounceSurface_Normal_Allows_Sliding(bool* Allowed, struct FVector* Direction, bool* EndUberpounce);
	void BPDoAttack(int* AttackIndex);
	void IsGroundRotation(const struct FRotator& Rotation, bool* Result, bool* IsCeiling);
	void IsPounceTarget(class APrimalCharacter** Target, bool* Result);
	void UberpounceCollisionCheck(bool* RetHitSomething);
	void STATIC_SpawnNestEgg();
	void GetUberpounceLocationOffsetForSocket(const struct FRotator& Rotation, struct FVector* Offset);
	void TerrainCheck(const struct FVector& Start, const struct FVector& End, float Radius, bool* HitSomething);
	void IsAnotherDeinonychusAttachedToSocket(class APrimalCharacter* Target, const struct FName& Socket, bool* ret);
	bool AllowPlayMontage(class UAnimMontage** AnimMontage);
	void OnPounceTargetDodged(class APrimalCharacter** Target);
	struct FRotator BPModifyAimOffsetNoTarget(struct FRotator* Aim);
	void Get_Uberpounce_Position_Offset_Curves(class UCurveFloat** RetZOffset, class UCurveFloat** RetXYMult);
	void Has_Latchable_Surface_In_Front(bool* RetSucccess, struct FUberpounceData* RetResultUberpounceData);
	void GetInitialDamageOnUberpounceLatch(class APrimalCharacter* Target, float* Damage);
	void Get_Uberpounce_Stamina_Cost_Over_Time(float* StaminaCost);
	void DeductStamina(float amount, bool* SuccessfullyRemovedStamina);
	void OnPinnedBuffEnded(class APrimalCharacter** BuffTarget);
	void ComputeJumpVector(struct FVector* ret);
	void PushbackAfterPounceFn();
	void Latched_Jump_Launched();
	void LatchedJumpStart();
	void ResetMeshRelativeRotation();
	void JumpPressedAndHeldFn();
	void STATIC_CheckForFallingLatchFn(bool AutoJumpAfterLatch);
	void OnDeinonychusLatchedAttack();
	void AllowSurfaceNormalForUberpounce(const struct FVector& surfaceNormal, bool* ret);
	void STATIC_TryAIBufferedUberpounce();
	void SetQueuedUberpounceData(const struct FUberpounceData& Data);
	void Get_Uberpounce_Transform_Public(const struct FUberpounceData& UberpounceData, struct FVector* Location, struct FRotator* Rotation, bool* IsGroundSurface);
	void OnUberpounceStateChanged(TEnumAsByte<EUberpounceState> NewState, TEnumAsByte<EUberpounceState> PrevState);
	void SetUberpounceState(TEnumAsByte<EUberpounceState> NewState);
	void LatchedJump(float JumpStrength, bool IsLatchedAutoJump, const struct FVector& WallHugDirection);
	void IsNonAuthoritativeClient(bool* ret);
	void SendClientMovementAdjustments();
	void IsDebugModeNonAuthoritativeClient(bool* ret);
	void StartUberpounceFromFalling(const struct FUberpounceData& Data);
	void STATIC_ClearQueuedData();
	void STATIC_on_Jump_Input_Released(bool QueryOnly, bool PounceOnly, bool QueryOnlyOnGroundTarget, struct FUberpounceData* UberpounceData, bool* Result, class APrimalCharacter** RaptorPounceTarget);
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	void IsValidGeoTypeForUberpounce(class AActor* Actor, class UPrimitiveComponent* HitComponent, bool* Result);
	int BPAdjustAttackIndex(int* AttackIndex);
	void CanTryUberpounce(bool* Result);
	void STATIC_ResetMeshRelativeLocation();
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void BP_OnJumpPressed();
	void UberpounceFanTrace(const struct FVector& Direction, const struct FVector& Start, const struct FRotator& Rotation, TArray<float>* FanAngles, struct FUberpounceData* ResultData);
	void STATIC_OnError(const class FString& Msg);
	void ComputeBufferedUberpounce(const struct FUberpounceData& CurrentUberpounceData, const struct FVector& PreviousUberpounceStartLocation, struct FUberpounceData* ResultData, bool* IsValid);
	void STATIC_BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value);
	void IsUberpounceDataNearlyEqual(const struct FUberpounceData& L, const struct FUberpounceData& R, float FloatErrorTolerance, bool* Result);
	void STATIC_RidingTick(float* DeltaSeconds);
	int BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
	bool CanJumpInternal();
	void BP_OnJumpReleased();
	void OnLanded(struct FHitResult* Hit);
	void STATIC__Uberpounce_Trace(const struct FVector& Start, const struct FVector& End, float InClosestTargetDistance, bool TraceForLocations, const struct FVector& DeinonychusLocation, const struct FRotator& DeinonychusRotation, bool DebugMode, bool CheckDinoDotProduct, const struct FVector& DotProductCompareVector, float DotProductThreshold, const struct FVector& DotProductLocation, bool TraceForCharacters, TArray<float>* TraceRadii, struct FUberpounceData* Result, bool* RetFoundTarget, bool* RetTargetOutOfRange, float* RetClosestTargetDistance, int* RetFoundIndex);
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void GetCurrentSocketLevel(class APrimalCharacter* forCharacter, int* OutLevel);
	void Get_Socket_Level(const class FString& SocketName, int* OutLevel);
	bool EnableTurnToFaceRotation();
	void STATIC_FindScreenEdgeLocation(const struct FVector& WorldLocation, float EdgeMarginPct, struct FVector2D* ScreenPosition);
	void STATIC_GetBleed_HUDData_for_Character(class APrimalCharacter* Character, int index, struct FVector2D* WorldLocToScreenLoc, struct FVector2D* ScreenLoc, float* ProgressBar, class FString* RetBuffCountString, class FString* DinoName, float* Scale, struct FLinearColor* TextColor, bool* Result);
	void BPDrawToRiderHUD(class AShooterHUD** HUD);
	void RemoveBleed(class APrimalCharacter* Instigator);
	void AddBleed(class APrimalCharacter* Instigator);
	void STATIC_GetDebugString(class FString* Output);
	void Get_RotationAndLocation_for_UberpounceOnSurface(const struct FVector& Location, const struct FVector& surfaceNormal, class UPrimitiveComponent* HitComponent, const struct FVector& DeinonychusLocation, struct FRotator* RetRotation, struct FVector* retLocation, bool* Success);
	void IsValidGeoLocationForUberpounce(const struct FVector& Location, const struct FVector& surfaceNormal, class AActor* Actor, const struct FVector& DeinonychusLocation, const struct FRotator& DeinonychusRotation, class UPrimitiveComponent* HitComponent, bool* Result, bool* IsGround);
	bool BP_InterceptTurnInput(float* AxisValue);
	void IsUberpounceActive(bool* Active);
	void BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV);
	void GetUberpounceTransform(const struct FUberpounceData& UberpounceData, struct FVector* Location, struct FRotator* Rotation, bool* IsGroundSurface);
	void UpdateAttachedUberpounceFn();
	void SetUberpounceCollision(bool UberpounceActive);
	void DebugDrawRotator(const struct FRotator& Rotator, float DrawScale, const struct FVector& Location_, float Duration, float Thinkness);
	void GetUberpounceRotationFromSocket(class APrimalCharacter* Target, const struct FName& Socket, struct FRotator* Rotation);
	void StopUberpounceTargeting();
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void EndUberpounce(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity);
	bool BP_InterceptMoveForward(float* AxisValue);
	bool BP_InterceptMoveRight(float* AxisValue);
	void UpdateUberpounceFn();
	void STATIC_StartUberPounce(const struct FUberpounceData& Data);
	void STATIC_Find_BestUberpounce_Socket_on_Character(class APrimalCharacter* Character, const struct FVector& StartTrace, const struct FVector& EndTrace, float CurrentClosestSocketDistance, const struct FVector& ImpactLocation, float* NewClosestSocketDistance, struct FName* RetTargetSocket, class UMeshComponent** RetTargetMesh, bool* RetFoundSocket, struct FRotator* RetTargetRotation);
	void STATIC_UpdateUberPounceTargetingFn();
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void TryStartUberPounceTargeting();
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void UserConstructionScript();
	void InpActEvt_Crouch_K2Node_InputActionEvent_182();
	void InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_181();
	void UpdateUberPounceTargeting();
	void UpdateUberpounce();
	void ServerEndUberpounce(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity);
	void UpdateAttachedUberpounce();
	void ServerRequestUberpounce(const struct FUberpounceData& QueuedUberpounceData, bool QuickUberpounce);
	void MultiEndUberpounce(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity);
	void JumpPressedAndHeld();
	void ServerRequestPounce(class APrimalCharacter* Target);
	void ClearPounceEvent();
	void ServerRequestJump(const struct FVector& Velocity);
	void MultiRequestJump(const struct FVector& Velocity);
	void MultiSetLocation(const struct FVector& Location);
	void MultiUpdateCurrentDataLocation(const struct FVector& Location, TEnumAsByte<EUberpounceState> VerifiedState);
	void ServerStartUberpounceFromFalling(const struct FUberpounceData& Data);
	void MultiStartUberpounceFromFalling(const struct FUberpounceData& Data);
	void QueuedUberpounce();
	void ReceiveBeginPlay();
	void StartCheckingForFallingLatch();
	void ServerRequestLatchedAutoJump(const struct FVector& Velocity);
	void CheckForFallingLatch();
	void ServerRequestLatchedJump(const struct FVector& Velocity);
	void MultiOnPounceStarted();
	void ServerEndPouncing();
	void MULTI_ApplyAtCliffTopVelocity();
	void MULTI_TargetDodgedUberPounce(const struct FVector& newTargetLocation, const struct FRotator& NewTargetRotation, class APrimalCharacter* oldTarget);
	void BPUnstasis();
	void MULTI_SetLocation(const struct FVector& Location);
	void UberpounceDesyncDetected();
	void ServerSetLocDuringLatchedJump(const struct FVector& Loc);
	void Client_CallServerMulticast_JumpFX(class UParticleSystem* FX_to_Spawn, TArray<struct FName>* Attach_Point_Names);
	void Multicast_JumpFX(class UParticleSystem* FX_to_Spawn, TArray<struct FName>* Attach_Point_Names);
	void SpawnLocalClinetSuperJumpFX();
	void ExecuteUbergraph_Deinonychus_Character_BP(int EntryPoint);
	void NewEventDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
