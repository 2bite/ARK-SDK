#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0EE7 (0x3540 - 0x2659)
class ADeinonychus_Character_BP_C : public ARaptor_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2659(0x0007) MISSED OFFSET
	class UCapsuleComponent*                           UberpounceDamageComponent;                                // 0x2660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Deinonychus_C* DinoCharacterStatus_BP_Deinonychus_C1;                    // 0x2668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             PounceApexStart;                                          // 0x2670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalDinoCharacter*                        PouncedTargetRidingDino;                                  // 0x2678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceRange;                                          // 0x2680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2684(0x0004) MISSED OFFSET
	TArray<float>                                      UpberpounceTargetingLocationsTraceRadii;                  // 0x2688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      BaseUberpounceSocketName;                                 // 0x2698(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      UberpounceTargetingTagActor;                              // 0x26A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      UberpounceTargetingTagActorClass;                         // 0x26B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseUberpounceAngle;                                      // 0x26B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBaseUberpounceAngleVertical;                           // 0x26BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxBaseUberpounceAngleVertical;                           // 0x26C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseUberounceAngleHoriz;                                  // 0x26C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceAimingDirVectorWeighMult;                       // 0x26C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x26CC(0x0004) MISSED OFFSET
	class APrimalCharacter*                            UberpounceTargetCharacter;                                // 0x26D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceInterpSpeedBase;                                // 0x26D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x26DC(0x0004) MISSED OFFSET
	double                                             StartUberpounceTime;                                      // 0x26E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceCapsuleSizeMult;                                // 0x26E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x26EC(0x0004) MISSED OFFSET
	struct FUberpounceData                             UberpounceQueuedData;                                     // 0x26F0(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FUberpounceData                             UberpounceCurrentData;                                    // 0x2720(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              UberpounceEndpounceSpeed;                                 // 0x2750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceTargetingImpactLocationDistanceThreshold;       // 0x2754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpouncePercentDistanceThresholdForRotationInterp;      // 0x2758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceInterpSpeedRotationRoll;                        // 0x275C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceCameraDistanceOpacityThreshold;                 // 0x2760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceOpacityFresnelExponent;                         // 0x2764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EUberpounceState>                      UberpounceState;                                          // 0x2768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceBufferedJumpInput;                              // 0x2769(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x276A(0x0002) MISSED OFFSET
	float                                              UberpounceDistancePercentToTargetThresholdForStateChange; // 0x276C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraOffsetWhenAttachedToLocation;                       // 0x2770(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceMinRange;                                       // 0x277C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousCameraLocationOffset;                             // 0x2780(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x278C(0x0004) MISSED OFFSET
	class FString                                      ServerDebugString;                                        // 0x2790(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	double                                             TimeLastUpdatedUberpounce;                                // 0x27A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GeoLineSuccess;                                           // 0x27A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x27A9(0x0007) MISSED OFFSET
	TArray<class APrimalCharacter*>                    ActiveBleeds;                                             // 0x27B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector2D                                   HUDElementShakeOffsetBase;                                // 0x27C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   BleedHUDElementLocationBase;                              // 0x27C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   BleedHUDElementSize;                                      // 0x27D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAnchors                                    BleedHUDElementAnchor;                                    // 0x27D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BleedIndicatorEdgeMarginPercent;                          // 0x27E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BleedIndicatorSizeMult;                                   // 0x27EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    StartingUberpounceRotation;                               // 0x27F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingUberpounceDistanceToTarget;                       // 0x27FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpouncePercentDistanceThresholdForYawRotationInterp;   // 0x2800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpouncePercentDistanceThresholdForPitchRotationInterp; // 0x2804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpouncePercentDistanceThresholdForRollRotationInterp;  // 0x2808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenPercentMulti;                                       // 0x280C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenPercentAdd;                                         // 0x2810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceRotationYawAlpha;                               // 0x2814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceRotationYawInterpSpeed;                         // 0x2818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    UberpounceAttachToLocationStartTargetRotation;            // 0x281C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FUberpounceData                             PreviousUberpounceData;                                   // 0x2828(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              UberpounceStartTargetRotationInterpSpeed;                 // 0x2858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceOutOfRangeMax;                                  // 0x285C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceTargetingUIIconSize;                            // 0x2860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x2864(0x0004) MISSED OFFSET
	struct FUberpounceData                             BackwardUberpounceQueuedData;                             // 0x2868(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAnchors                                    BackwardsPounceUIIconAnchor;                              // 0x2898(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                                   BackwardsPounceUIIconLocation;                            // 0x28A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayedAttachAnim;                                         // 0x28B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x28B1(0x0003) MISSED OFFSET
	struct FVector                                     StartUberpounceLocation;                                  // 0x28B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceLocationInterpAlpha;                            // 0x28C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayedStateChangeEffects;                                 // 0x28C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x28C5(0x0003) MISSED OFFSET
	float                                              UberpounceMinDistanceForInterpSpeed;                      // 0x28C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceAttachLocationCapsuleOffsetMult;                // 0x28CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasQueuedUberpounce;                                      // 0x28D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x28D1(0x0003) MISSED OFFSET
	float                                              UberpounceEndpounceSpeedVertical;                         // 0x28D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrevCameraLocation;                                       // 0x28D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedBase;                                    // 0x28E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrevFOV;                                                  // 0x28E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fovInterpSpeed;                                           // 0x28EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceDistanceToTarget;                               // 0x28F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x28F4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CameraInterpSpeedMultCurve;                               // 0x28F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PrevCameraRotation;                                       // 0x2900(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceCameraOnLeft;                                   // 0x290C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDeinonychusCameraState>               CameraState;                                              // 0x290D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x290E(0x0002) MISSED OFFSET
	struct FVector                                     UberpounceTPVOffsetLeft;                                  // 0x2910(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     UberpounceTPVOffsetRight;                                 // 0x291C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPVOffsetAttachedToCharacter;                             // 0x2928(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPVOffsetAttachedToCharacterRight;                        // 0x2934(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraRotationInterpSpeedAttachToCharacter;               // 0x2940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedLeftOrRightCameraState;                  // 0x2944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceBloodVFXScale;                                  // 0x2948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceInitialLatchDamageBase;                         // 0x294C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EUberpounceState>                      PreviousUberpounceState;                                  // 0x2950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugMode;                                                // 0x2951(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x2952(0x0002) MISSED OFFSET
	int                                                DebugUberpounceTraceCount;                                // 0x2954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DebugTraceCount;                                          // 0x2958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               QueuedBufferedUberpounce;                                 // 0x295C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x295D(0x0003) MISSED OFFSET
	float                                              UberpouncePercentDistanceThresholdForBufferedJump;        // 0x2960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x2964(0x0004) MISSED OFFSET
	double                                             TimeLastUberpounceAttached;                               // 0x2968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeUntilUberpounceSlidingBase;                           // 0x2970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           UberpounceSliddingStat;                                   // 0x2974(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceIsSliding;                                      // 0x2975(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x2976(0x0002) MISSED OFFSET
	float                                              UberpounceSlidingCapsuleSizeMult;                         // 0x2978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x297C(0x0004) MISSED OFFSET
	class UParticleSystem*                             UberpounceWallImpactEmitter;                              // 0x2980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             UberpounceDinoImpactEmitter;                              // 0x2988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      UberpounceFanAnglesAimedUp;                               // 0x2990(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              UberpounceDistancePercentToTargetThresholdForStateChangeTargetIsGround;// 0x29A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x29A4(0x0004) MISSED OFFSET
	TArray<float>                                      UberpounceReflectionMult;                                 // 0x29A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              UberounceIsGroundDotProductThreshold;                     // 0x29B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeShowFans;                                        // 0x29BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x29BD(0x0003) MISSED OFFSET
	TArray<float>                                      UberpounceFanAnglesAimedDown;                             // 0x29C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      UberpounceGroundTargetingForwardAngles;                   // 0x29D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ShowCursor;                                               // 0x29E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x29E1(0x0003) MISSED OFFSET
	float                                              UberpounceIsAttachableDotProductThreshold;                // 0x29E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationInterpSpeedAttachedToCharacter;                   // 0x29E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceMinCameraDistanceAttachedToCharacter;           // 0x29EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastJumpPressedTime;                                      // 0x29F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastFallingTime;                                          // 0x29F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsJumpButtonHeld;                                         // 0x2A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x2A01(0x0007) MISSED OFFSET
	double                                             LastUberpounceGrabStartTime;                              // 0x2A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceTraceSelectDinoDotProductThreshold;             // 0x2A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceOnSurvivorRange;                                    // 0x2A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceOnSurvivorTraceRadius;                              // 0x2A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceParabolicPositionZScaleBase;                    // 0x2A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           UberpunceLocationInterpFunction;                          // 0x2A20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x2A21(0x0003) MISSED OFFSET
	float                                              UberpouncePrevZOffset;                                    // 0x2A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpouncePressAndHoldMinTime;                            // 0x2A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceMaxSuicideJumpStrength;                         // 0x2A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceLatchedJumpMaxSpeed;                            // 0x2A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceMaxVelocityZ;                                   // 0x2A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceSlideSpeedBase;                                 // 0x2A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x2A3C(0x0004) MISSED OFFSET
	double                                             UberpounceTimeStartedSliding;                             // 0x2A40(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceMaxSlideSpeed;                                  // 0x2A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpouncePressAndHoldCameraShakeScale;                   // 0x2A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceGrabTraceRadiusMult;                            // 0x2A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceJumpSpeed;                                      // 0x2A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceJumpAngleFromLocation;                          // 0x2A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceDistancePercentToTargetThresholdForStateChangeTargetBuffered;// 0x2A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceRotationInterpSpeedPitch;                       // 0x2A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceJumpAngle;                                      // 0x2A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeHUDElements;                                     // 0x2A68(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x2A69(0x0003) MISSED OFFSET
	struct FVector2D                                   DebugStringHUDElementLoc;                                 // 0x2A6C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceAtTargetRotation;                               // 0x2A74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceIsGrab;                                         // 0x2A75(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x2];                                       // 0x2A76(0x0002) MISSED OFFSET
	float                                              UberpounceRotationInterpSpeedPitchGrab;                   // 0x2A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeNonAuthoritativeClient;                          // 0x2A7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableSimulatedMovement;                                 // 0x2A7D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x2A7E(0x0002) MISSED OFFSET
	float                                              UberpoucneTargetIsGroundBufferedThreshold;                // 0x2A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowUberpounceHUD;                                        // 0x2A84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x2A85(0x0003) MISSED OFFSET
	float                                              SuicideJumpSpeedOnFailedTargetIsGround;                   // 0x2A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x4];                                       // 0x2A8C(0x0004) MISSED OFFSET
	struct FUberpounceData                             AIBufferedUberpounce;                                     // 0x2A90(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              AIUberpounceAttackInterval;                               // 0x2AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LatchedJumpVelocity;                                      // 0x2AC4(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeLatching;                                        // 0x2AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x2AD1(0x0003) MISSED OFFSET
	float                                              LatchedJumpVelcityInterpSpeed;                            // 0x2AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchedJumpSpeed;                                         // 0x2AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchedJumpWallHugSpeed;                                  // 0x2ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchedJumpTimeToAutoLatch;                               // 0x2AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchedJumpOffWallSpeed;                                  // 0x2AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeAutoLatchedJump;                                  // 0x2AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoLatchJumpCooldown;                                    // 0x2AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LatchedJumpRotation;                                      // 0x2AF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CachedLatchJumpVelocity;                                  // 0x2B00(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchedAutoJumpSlowDownSpeed;                             // 0x2B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceTraceIsFacingThreshold;                         // 0x2B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeUberpounceCharacterTrace;                        // 0x2B14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceUseArcTargeting;                                // 0x2B15(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x2];                                       // 0x2B16(0x0002) MISSED OFFSET
	float                                              FallingLatchRange;                                        // 0x2B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingInterpFromVerticalSpeed;                           // 0x2B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDistanceForUberpounce;                                 // 0x2B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceStartedSpeedTowardsTarget;                          // 0x2B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceStartedUpwardsSpeed;                                // 0x2B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceInterpSpeedBaseAI;                              // 0x2B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceAttachedToCharacterStaminaCostPerSecond;        // 0x2B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceAttachedToLocationStaminaCostPerSecond;         // 0x2B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpStaminaCost;                                          // 0x2B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchJumpStaminaCost;                                     // 0x2B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceEndpounceSpeedOutOfStamina;                     // 0x2B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceFitsInSpaceSizeMult;                            // 0x2B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CachedHasLatchableSurfaceInFrontOfDeinonychusResult;      // 0x2B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x2B49(0x0007) MISSED OFFSET
	struct FUberpounceData                             CachedHasLatchableSurfaceInFrontOfDeinonychusUberpounceData;// 0x2B50(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                LastFrameCheckedLatchableSurface;                         // 0x2B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceZOffsetScalar;                                  // 0x2B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceZOffsetInterpSpeed;                             // 0x2B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceInterpSpeed;                                    // 0x2B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceFromCharacterFaceCameraRotationThreshold;       // 0x2B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceAimPitchOffsetAttached;                         // 0x2B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeAimDirection;                                    // 0x2B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x2B99(0x0003) MISSED OFFSET
	struct FRotator                                    WallRotator;                                              // 0x2B9C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeLatchedJump;                                     // 0x2BA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeWallHugging;                                     // 0x2BA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x2];                                       // 0x2BAA(0x0002) MISSED OFFSET
	float                                              LatchedJumpLedgeTopSpeed;                                 // 0x2BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceSocketToSocketDotProductThreshold;              // 0x2BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     UberpounceDefaultTPVOffset;                               // 0x2BB4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceFoundLedge;                                     // 0x2BC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x7];                                       // 0x2BC1(0x0007) MISSED OFFSET
	TArray<class UAnimMontage*>                        UninteruptableAnimMontages;                               // 0x2BC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastTimeJumpReleasedTookAction;                           // 0x2BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LatchedJumpRequested;                                     // 0x2BE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpawnNestEgg;                                            // 0x2BE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x2];                                       // 0x2BE2(0x0002) MISSED OFFSET
	struct FName                                       NestPointListCustomTagName;                               // 0x2BE4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StructureSpawnPointMaxDistance;                           // 0x2BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StructureCheckRadius;                                     // 0x2BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x4];                                       // 0x2BF4(0x0004) MISSED OFFSET
	class UClass*                                      NestToSpawn;                                              // 0x2BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxStructuresInRadius;                                    // 0x2C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StructureTraceImpactOffset;                               // 0x2C04(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StructureTraceSpawnOffset;                                // 0x2C10(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NestEggOffset;                                            // 0x2C1C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NotifyNeighborDeinonychusOfEggRange;                      // 0x2C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x4];                                       // 0x2C2C(0x0004) MISSED OFFSET
	double                                             LastEggSpawnTime;                                         // 0x2C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnstasisStructureCreateEggInterval;                       // 0x2C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x4];                                       // 0x2C3C(0x0004) MISSED OFFSET
	double                                             LastUnstasisStructureTime;                                // 0x2C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeUberpounceCollision;                             // 0x2C48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x2C49(0x0003) MISSED OFFSET
	float                                              UberpounceCollisionTraceDistance;                         // 0x2C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceCollisionRadiusMult;                            // 0x2C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     UberpounceLastKnownGoodLocation;                          // 0x2C54(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UberpounceNumFramesColliding;                             // 0x2C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UberpounceNumFramesCollidingToEndUberpounce;              // 0x2C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      UberpounceTargetingCharactersTraceRadii;                  // 0x2C68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DebugModeSliding;                                         // 0x2C78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x2C79(0x0003) MISSED OFFSET
	struct FVector                                     UberpounceStartingTargetLocation;                         // 0x2C7C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnSlideEndUberpounceDotThreshold;                         // 0x2C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceNoSlideThreshold;                               // 0x2C8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceRedwoodTreeSizeZThreshold;                      // 0x2C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceAttachedCooldown;                               // 0x2C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceTotalDisplacementTraveled;                      // 0x2C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxUberpounceDistanceGiveUpMult;                          // 0x2C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceBaseStaminaCost;                                // 0x2CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EUberpounceState>                      UberpounceServerState;                                    // 0x2CA4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x2CA5(0x0003) MISSED OFFSET
	float                                              UberpounceDetectDesyncTimer;                              // 0x2CA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AddedUberpouncePinnedBuff;                                // 0x2CAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x3];                                       // 0x2CAD(0x0003) MISSED OFFSET
	float                                              UberpounceErrorLocTolerance;                              // 0x2CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchedJumpErrorLocTolerance;                             // 0x2CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceEndSpeedOnJump;                                 // 0x2CB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceMaxTimeToAttach;                                // 0x2CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    NewEventDispatcher;                                       // 0x2CC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              UberpounceDistanceThresholdForAttach;                     // 0x2CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceLoSRadius;                                      // 0x2CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LatchedJumpLastWallNormalVector;                          // 0x2CD8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData44[0x4];                                       // 0x2CE4(0x0004) MISSED OFFSET
	double                                             LatchedJumpTimeLastHadWall;                               // 0x2CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LatchJumpAppliedCliffImpulse;                             // 0x2CF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeLoS;                                             // 0x2CF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnablePinnedBuffOnDinos;                                  // 0x2CF2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RespectStaminaDuringUberpounce;                           // 0x2CF3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x4];                                       // 0x2CF4(0x0004) MISSED OFFSET
	class UObject*                                     LatchJumpRitAnim;                                         // 0x2CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     LatchJumpLftAnim;                                         // 0x2D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     LatchJumpAnim;                                            // 0x2D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LatchOutToFallAnim;                                       // 0x2D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PouncePinInAnim;                                          // 0x2D18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     LatchAutoJumpAnim;                                        // 0x2D20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     LatchHopRightAnim;                                        // 0x2D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     LatchHopLeftAnim;                                         // 0x2D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SupportNoHoldWallJumpOff;                                 // 0x2D38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x7];                                       // 0x2D39(0x0007) MISSED OFFSET
	double                                             LastTimeStartedLatchedJump;                               // 0x2D40(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeQueuedAutoJump;                                   // 0x2D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactVFXScale;                                           // 0x2D50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpoiunceAttachedToLocationCameraShakeScale;            // 0x2D54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpoiunceAttachedToLocationCameraShakeSpeed;            // 0x2D58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewVar_1;                                                 // 0x2D5C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastEndUberpounceTime;                                    // 0x2D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastWalkingTime;                                          // 0x2D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableClientSimulation;                                   // 0x2D78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData47[0x7];                                       // 0x2D79(0x0007) MISSED OFFSET
	double                                             LastTickTime;                                             // 0x2D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeTimer;                                           // 0x2D88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData48[0x7];                                       // 0x2D89(0x0007) MISSED OFFSET
	class UCurveFloat*                                 HoldTimeToJumpSpeedMult;                                  // 0x2D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                UberpounceDetachMontage;                                  // 0x2D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CheckForFallingLatchDelayAfterJump;                       // 0x2DA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData49[0x4];                                       // 0x2DA4(0x0004) MISSED OFFSET
	struct FUberpounceData                             OutOfRangeUberpounceData;                                 // 0x2DA8(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SupportPressAndHoldUberpounce;                            // 0x2DD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData50[0x7];                                       // 0x2DD9(0x0007) MISSED OFFSET
	TArray<struct FName>                               UberJumpFXAttachNames;                                    // 0x2DE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             UberJumpFXParticle;                                       // 0x2DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InstantJumpOffWall;                                       // 0x2DF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData51[0x3];                                       // 0x2DF9(0x0003) MISSED OFFSET
	struct FRotator                                    EndUberpounceTargetRotation;                              // 0x2DFC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InstantRotateOnUberpounce;                                // 0x2E08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData52[0x3];                                       // 0x2E09(0x0003) MISSED OFFSET
	float                                              EndUberpounceTargetRotationInterpSpeed;                   // 0x2E0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseLeapImpactFX;                                          // 0x2E10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData53[0x3];                                       // 0x2E11(0x0003) MISSED OFFSET
	float                                              SpawnLocalClinetSuperJumpFXDelay;                         // 0x2E14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LeapImpactFX;                                             // 0x2E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceTargetsCharacters;                              // 0x2E20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData54[0x3];                                       // 0x2E21(0x0003) MISSED OFFSET
	int                                                UberpounceTraceGroups;                                    // 0x2E24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     UberpounceTraceChannel;                                   // 0x2E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData55[0x3];                                       // 0x2E29(0x0003) MISSED OFFSET
	float                                              MeshDebugDrawDuration;                                    // 0x2E2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshProtectionLatchedDashScalar;                          // 0x2E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeLatchMesh;                                       // 0x2E34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData56[0x3];                                       // 0x2E35(0x0003) MISSED OFFSET
	float                                              OffsetLatch;                                              // 0x2E38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AttachedCharacterLocation;                                // 0x2E3C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     UberpounceStartLocation;                                  // 0x2E48(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceHackDistCheck;                                  // 0x2E54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeCarried;                                          // 0x2E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceFitsInSpaceMultHalfHeight;                      // 0x2E60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SlidingInputPressed;                                      // 0x2E64(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData57[0x3];                                       // 0x2E65(0x0003) MISSED OFFSET
	TArray<float>                                      FallingLatchingAngles;                                    // 0x2E68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     MeshLocationOffset;                                       // 0x2E78(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UberpounceLocationUpdatesOnServerOnly;                    // 0x2E84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData58[0x3];                                       // 0x2E85(0x0003) MISSED OFFSET
	float                                              LatchJumpBlendIn;                                         // 0x2E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchJumpBlendOut;                                        // 0x2E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchingMeshMultForCapsuleValidation;                     // 0x2E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndUberpounceOnStaminaDepleted;                           // 0x2E94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData59[0x3];                                       // 0x2E95(0x0003) MISSED OFFSET
	float                                              DelayBeforeLatchJumpLedgeTopPush;                         // 0x2E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData60[0x4];                                       // 0x2E9C(0x0004) MISSED OFFSET
	double                                             LastCliffImpulseTime;                                     // 0x2EA0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeAppliedVelocityOnEndUberpounce;                   // 0x2EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchJumpAnimPlayRate;                                    // 0x2EB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinJumpStrengthOnJumpFromUberpounce;                      // 0x2EB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastEndUberpounceWasJumpFromWall;                         // 0x2EB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableWallHugging;                                        // 0x2EB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData61[0x2];                                       // 0x2EBA(0x0002) MISSED OFFSET
	float                                              WallHugMaxSpeed;                                          // 0x2EBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlideInterpSpeed;                                         // 0x2EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SupportsLatchJumpOnJumpReleased;                          // 0x2EC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData62[0x3];                                       // 0x2EC5(0x0003) MISSED OFFSET
	float                                              SupportsLatchJumpOnJumpReleasedDotProductThresholdForCameraDirection;// 0x2EC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceTargetRotatorIsEqualThreshold;                  // 0x2ECC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SupportsUberpounceClampingAtTargetRotation;               // 0x2ED0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SupportsLedgeTopPushValidation;                           // 0x2ED1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseQinterpForUberpounceRotation;                          // 0x2ED2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableServerUpdateTransformDuringLatchedJump;             // 0x2ED3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ServerUpdateTransformDuringLatchedJumpValidation;         // 0x2ED4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData63[0x3];                                       // 0x2ED5(0x0003) MISSED OFFSET
	float                                              ValidateUberpounceDistance;                               // 0x2ED8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinVelocityThresholdForRotationOnEndUberpounce;           // 0x2EDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastServerTransformCorrectionTime;                        // 0x2EE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastRequestJumpTime;                                      // 0x2EE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2EF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x2EF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0x2EF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue;             // 0x2EFA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x1];                                       // 0x2EFB(0x0001) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Location4;                             // 0x2EFC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location3;                             // 0x2F08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EUberpounceState>                      K2Node_CustomEvent_VerifiedState;                         // 0x2F14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_SetActorLocation_ReturnValue;                 // 0x2F15(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x2];                                       // 0x2F16(0x0002) MISSED OFFSET
	struct FUberpounceData                             K2Node_CustomEvent_Data2;                                 // 0x2F18(0x0030) (Transient, DuplicateTransient)
	struct FVector                                     K2Node_CustomEvent_Location2;                             // 0x2F48(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_Rotation;                              // 0x2F54(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetUberpounceTransform_Location;                 // 0x2F60(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetUberpounceTransform_Rotation;                 // 0x2F6C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetUberpounceTransform_IsGroundSurface;          // 0x2F78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2F79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x6];                                       // 0x2F7A(0x0006) MISSED OFFSET
	struct FUberpounceData                             K2Node_CustomEvent_Data;                                  // 0x2F80(0x0030) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue;         // 0x2FB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x3];                                       // 0x2FB1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x2FB4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x2FC0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x2FCC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue2;        // 0x2FD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x3];                                       // 0x2FD1(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Velocity2;                             // 0x2FD4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x2FE0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetModeBP>                            CallFunc_SwitchNetworkMode_OutNetworkMode;                // 0x2FEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x2FED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x2];                                       // 0x2FEE(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_velocity;                              // 0x2FF0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetModeBP>                            CallFunc_SwitchNetworkMode_OutNetworkMode2;               // 0x2FFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x3];                                       // 0x2FFD(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x3000(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x300C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x3];                                       // 0x300D(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Velocity3;                             // 0x3010(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x301C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x3];                                       // 0x301D(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Velocity4;                             // 0x3020(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue2;                              // 0x302C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Velocity5;                             // 0x3030(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x4];                                       // 0x303C(0x0004) MISSED OFFSET
	class UAnimMontage*                                K2Node_CustomEvent_MontageToPlayOnNonZeroVelocity;        // 0x3040(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FUberpounceData                             K2Node_CustomEvent_QueuedUberpounceData;                  // 0x3048(0x0030) (Transient, DuplicateTransient)
	bool                                               K2Node_CustomEvent_QuickUberpounce;                       // 0x3078(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0x7];                                       // 0x3079(0x0007) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetInitialAnimationForUberpounce_OutAnim;        // 0x3080(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_GetInitialAnimationForUberpounce_RetStartSectionName;// 0x3088(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                CallFunc_GetInitialAnimationForUberpounce_OutAnim2;       // 0x3090(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_GetInitialAnimationForUberpounce_RetStartSectionName2;// 0x3098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x30A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x30A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetUberpounceTransform_Location2;                // 0x30A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetUberpounceTransform_Rotation2;                // 0x30B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetUberpounceTransform_IsGroundSurface2;         // 0x30C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x30C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_VectorVector_ReturnValue;            // 0x30C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x1];                                       // 0x30C3(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorRightVector_ReturnValue;                 // 0x30C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x30D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x3];                                       // 0x30D1(0x0003) MISSED OFFSET
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x30D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x30D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x30D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x30DA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x30DB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x30DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x30DD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData77[0x2];                                       // 0x30DE(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x30E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x30EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue2;              // 0x30F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetUpVector_ReturnValue;                         // 0x3104(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue3;                             // 0x3110(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x311C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x3128(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x3134(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x3140(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x314C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Velocity6;                             // 0x3158(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData78[0x4];                                       // 0x3164(0x0004) MISSED OFFSET
	class UAnimMontage*                                K2Node_CustomEvent_MontageToPlayOnNonZeroVelocity2;       // 0x3168(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_CustomEvent_target;                                // 0x3170(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DeductStamina_SuccessfullyRemovedStamina;        // 0x3178(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DeductStamina_SuccessfullyRemovedStamina2;       // 0x3179(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DeductStamina_SuccessfullyRemovedStamina3;       // 0x317A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DeductStamina_SuccessfullyRemovedStamina4;       // 0x317B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorRightVector_ReturnValue2;                // 0x317C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue2;                   // 0x3188(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x318C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x318D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x318E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x318F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorUpVector_ReturnValue;                    // 0x3190(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_NegateVector_ReturnValue;                        // 0x319C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue3;               // 0x31A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x31B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue3;                   // 0x31C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetUpVector_ReturnValue2;                        // 0x31CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetUpVector_ReturnValue3;                        // 0x31D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_newTargetLocation;                     // 0x31E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_NewTargetRotation;                     // 0x31F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData79[0x4];                                       // 0x31FC(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_OldTarget;                             // 0x3200(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue3;                   // 0x3208(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x320C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x320D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x320E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum5_CmpSuccess;                            // 0x320F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x3210(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x3211(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x6];                                       // 0x3212(0x0006) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x3218(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue2;            // 0x3220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue3;            // 0x3228(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x3230(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x3238(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x323C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData81[0x3];                                       // 0x323D(0x0003) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue2;              // 0x3240(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x3248(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue2;                 // 0x3254(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_SetActorLocation_ReturnValue2;                // 0x3258(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x3259(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DeductStamina_SuccessfullyRemovedStamina5;       // 0x325A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData82[0x1];                                       // 0x325B(0x0001) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Loc;                                   // 0x325C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum6_CmpSuccess;                            // 0x3268(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData83[0x7];                                       // 0x3269(0x0007) MISSED OFFSET
	class UObject*                                     CallFunc_SelectObject_ReturnValue;                        // 0x3270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_SelectObject_ReturnValue2;                       // 0x3278(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                K2Node_DynamicCast_AsAnimMontage;                         // 0x3280(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x3288(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData84[0x7];                                       // 0x3289(0x0007) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue4;            // 0x3290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_SelectObject_ReturnValue3;                       // 0x3298(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_SelectObject_ReturnValue4;                       // 0x32A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue2;            // 0x32A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData85[0x7];                                       // 0x32A9(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_DynamicCast_AsAnimMontage2;                        // 0x32B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x32B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData86[0x7];                                       // 0x32B9(0x0007) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue5;            // 0x32C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue6;            // 0x32C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue3;            // 0x32D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData87[0x7];                                       // 0x32D1(0x0007) MISSED OFFSET
	class UParticleSystem*                             K2Node_CustomEvent_FX_to_Spawn2;                          // 0x32D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FName>                               K2Node_CustomEvent_Attach_Point_Names2;                   // 0x32E0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                             K2Node_CustomEvent_FX_to_Spawn;                           // 0x32F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FName>                               K2Node_CustomEvent_Attach_Point_Names;                    // 0x32F8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x3308(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData88[0x3];                                       // 0x3309(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue5;                // 0x330C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue3;              // 0x3318(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue4;              // 0x3324(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue3;                              // 0x3330(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue4;                              // 0x3334(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x3338(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData89[0x3];                                       // 0x3339(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue6;                // 0x333C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x3348(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData90[0x7];                                       // 0x3349(0x0007) MISSED OFFSET
	struct FHitResult                                  CallFunc_VTraceSingleBP_OutHit;                           // 0x3350(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_VTraceSingleBP_ReturnValue;                      // 0x33D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData91[0x3];                                       // 0x33D9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue5;              // 0x33DC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x33E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue5;                              // 0x33F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData92[0x4];                                       // 0x33F4(0x0004) MISSED OFFSET
	struct FHitResult                                  CallFunc_VTraceSingleBP_OutHit2;                          // 0x33F8(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_VTraceSingleBP_ReturnValue2;                     // 0x3480(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue3;                    // 0x3481(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData93[0x2];                                       // 0x3482(0x0002) MISSED OFFSET
	float                                              CallFunc_GetUberpounceMaxRange_REt;                       // 0x3484(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x3488(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_VectorVector_ReturnValue2;           // 0x348C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue4;                    // 0x348D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData94[0x2];                                       // 0x348E(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue7;                // 0x3490(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue6;              // 0x349C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue6;                              // 0x34A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue5;                    // 0x34AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData95[0x3];                                       // 0x34AD(0x0003) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x34B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x34B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue;                 // 0x34B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x34BA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x34BB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x34BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x34BD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData96[0x2];                                       // 0x34BE(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue3;                         // 0x34C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue4;                         // 0x34C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_L;                                     // 0x34C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_R;                                     // 0x34D4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum7_CmpSuccess;                            // 0x34E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorLocationAndRotation_ReturnValue;         // 0x34E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPrimalCharWalking_ReturnValue;                 // 0x34E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Recently_Unlatched_Ret;                       // 0x34E3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue8;                // 0x34E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue4;                        // 0x34F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VectorDistance_ReturnValue;                      // 0x34F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPFastTrace_ReturnValue;                         // 0x34FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue6;                    // 0x34FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData97[0x2];                                       // 0x34FE(0x0002) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue5;                        // 0x3500(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue7;            // 0x3508(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue2;                // 0x3510(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPrimalCharWalking_ReturnValue2;                // 0x3511(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData98[0x2];                                       // 0x3512(0x0002) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x3514(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue6;                        // 0x3518(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue7;                    // 0x3520(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue3;                // 0x3521(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData99[0x6];                                       // 0x3522(0x0006) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue8;            // 0x3528(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x3530(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Deinonychus_Character_BP.Deinonychus_Character_BP_C");
		return ptr;
	}


	void IsUsingZipline(bool* Ret);
	void Is_Playing_Latched_Jump_Anim_Public(float TimeFromEndToConsiderFinished, bool* Ret);
	bool CanUpdateRotation();
	void updateRotation(float DeltaSeconds);
	struct FVector GetUberpounceTraceStartingLocation();
	void UpdateErrorTolerance();
	void IsValidUberpounceTargetingData(const struct FUberpounceData& TargetingData, bool* Ret);
	void MultiRequestJumpFn(const struct FVector& Velocity);
	void CanContinueUberpounce(bool* Ret);
	void GetDelayBeforeLatchAfterLatchedJump(float* LatchedJumpTimeToAutoLatch);
	void JumpFromUberpounce(float JumpStrength);
	void IsPlayingLatchedJumpAnim(float TimeFromEndToConsiderFinished, bool* Ret);
	float GetTargetFOV();
	void ServerEndUberpounceFn(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity);
	void STATIC_TickSetRotation(float DeltaTime);
	void STATIC_UpdateRotationForUberpounce(float PercentDistanceToTarget, const struct FRotator& TargetRotation, bool* Ret);
	void GetFallingLatchingAngles(TArray<float>* FallingLatchingAngles);
	void IsValidUberpounceDataForLatching(const struct FUberpounceData& Data, bool* Ret);
	bool IsValidDirectionForLatchingSurfaceTrace(const struct FVector& Direction);
	void BPRemovedAsPassenger(class APrimalCharacter** Character);
	void BP_OnEndCarried(bool* bFromDino, bool* bCancelAnyCarryBuffs);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void OnNonInstanceJumpOffWallInput(float HoldTime);
	void GetLatchJumpSpeedThresholdForRotate(float* Res);
	void SpawnUberJumpFX(class UParticleSystem* FX_To_Spawn, const struct FRotator& Rotation, TArray<struct FName>* Attach_Point_Names);
	void Is_Recently_Unlatched(float Threshold, bool* Ret);
	void GetCameraInterpSpeed(float* InterpSpeed);
	void OnJumpFromGround(float HoldTime);
	void GetUberpounceInterpSpeed(float* Speed);
	void CalcCurrentJump_Hold_Time(float* Result);
	void ClearOutOfRangeData();
	void GetUberpounceRangeBase(float* Ret);
	void GetUberpounceMaxRange(float* Ret);
	void STATIC_UpdateTickThrottles();
	void BPTimerNonDedicated();
	void Throttled_TickFn();
	void BPTimerServer();
	void On_Uberpounce_AttachedToLocation();
	void ScheduleChecking_Falling_Latch(float Delay);
	void TryAddPinnedBuff(class APrimalCharacter* Target);
	void ApplyJump(const struct FVector& Velocity, class UAnimMontage* Anim);
	void Get_Pounce_Latched_Anim(class UAnimMontage** Anim, struct FName* StartSectionName);
	void GetInitialAnimationForUberpounce(bool QuickUberpounce, class UAnimMontage** OutAnim, struct FName* RetStartSectionName);
	void STATIC_Los(const struct FVector& Start, const struct FVector& End, float Radius, class APrimalCharacter* Target, bool* Ret);
	void OnRep_UberpounceServerState();
	void UberpounceSurface_Normal_Allows_Sliding(bool* Allowed, struct FVector* Direction, bool* EndUberpounce);
	void BPDoAttack(int* AttackIndex);
	void IsGroundRotation(const struct FRotator& Rotation, bool* Result, bool* IsCeiling);
	void IsPounceTarget(class APrimalCharacter** Target, bool* Result);
	void UberpounceCollisionCheck(bool* RetHitSomething);
	void STATIC_SpawnNestEgg();
	void GetUberpounceLocationOffsetForSocket(const struct FRotator& Rotation, struct FVector* Offset);
	void TerrainCheck(const struct FVector& Start, const struct FVector& End, float Radius, bool* HitSomething);
	void IsAnotherDeinonychusAttachedToSocket(class APrimalCharacter* Target, const struct FName& Socket, bool* Ret);
	bool AllowPlayMontage(class UAnimMontage** AnimMontage);
	void OnPounceTargetDodged(class APrimalCharacter** Target);
	struct FRotator BPModifyAimOffsetNoTarget(struct FRotator* Aim);
	void Get_Uberpounce_Position_Offset_Curves(class UCurveFloat** RetZOffset, class UCurveFloat** RetXYMult);
	void Has_Latchable_SurfaceWhileFalling(bool* RetSucccess, struct FUberpounceData* RetResultUberpounceData);
	void GetInitialDamageOnUberpounceLatch(class APrimalCharacter* Target, float* Damage);
	void Get_Uberpounce_Stamina_Cost_Over_Time(float* StaminaCost);
	void DeductStamina(float amount, bool* SuccessfullyRemovedStamina);
	void OnPinnedBuffEnded(class APrimalCharacter** BuffTarget);
	void ComputeJumpVector(struct FVector* Ret);
	void PushbackAfterPounceFn();
	void Latched_Jump_Launched();
	void LatchedJumpStart();
	void ResetMeshRelativeRotation();
	void JumpPressedAndHeldFn();
	void STATIC_CheckForFallingLatchFn(bool AutoJumpAfterLatch);
	void OnDeinonychusLatchedAttack();
	void AllowSurfaceNormalForUberpounce(const struct FVector& SurfaceNormal, bool* Ret);
	void TryAIBufferedUberpounce();
	void SetQueuedUberpounceData(const struct FUberpounceData& Data);
	void Get_Uberpounce_Transform_Public(const struct FUberpounceData& UberpounceData, struct FVector* Location, struct FRotator* Rotation, bool* IsGroundSurface);
	void OnUberpounceStateChanged(TEnumAsByte<EUberpounceState> NewState, TEnumAsByte<EUberpounceState> PrevState);
	void SetUberpounceState(TEnumAsByte<EUberpounceState> NewState);
	void LatchedJump(float JumpStrength, bool IsLatchedAutoJump, const struct FVector& WallHugDirection, const struct FVector& DirectionOverride);
	void IsNonAuthoritativeClient(bool* Ret);
	void SendClientMovementAdjustments();
	void IsDebugModeNonAuthoritativeClient(bool* Ret);
	void StartUberpounceFromFalling(const struct FUberpounceData& Data);
	void STATIC_ClearQueuedData();
	void STATIC_on_Jump_Input_Released(bool QueryOnly, bool PounceOnly, bool QueryOnlyOnGroundTarget, struct FUberpounceData* UberpounceData, bool* Result, class APrimalCharacter** RaptorPounceTarget);
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	void IsValidGeoTypeForUberpounce(class AActor* Actor, class UPrimitiveComponent* HitComponent, bool* Result, bool* RetIsFoliage);
	int BPAdjustAttackIndex(int* AttackIndex);
	void CanTryUberpounce(bool* Result);
	void STATIC_ResetMeshRelativeLocation();
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void BP_OnJumpPressed();
	void UberpounceFanTrace(const struct FVector& Direction, const struct FVector& Start, const struct FRotator& Rotation, TArray<float>* FanAngles, struct FUberpounceData* ResultData);
	void STATIC_OnError(const class FString& Msg);
	void STATIC_ComputeBufferedUberpounce(const struct FUberpounceData& CurrentUberpounceData, const struct FVector& PreviousUberpounceStartLocation, struct FUberpounceData* ResultData, bool* IsValid);
	void BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value);
	void IsUberpounceDataNearlyEqual(const struct FUberpounceData& L, const struct FUberpounceData& R, float FloatErrorTolerance, bool* Result);
	void RidingTick(float* DeltaSeconds);
	int BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
	bool CanJumpInternal();
	void STATIC_BP_OnJumpReleased();
	void OnLanded(struct FHitResult* Hit);
	void _Uberpounce_Trace(const struct FVector& Start, const struct FVector& End, float InClosestTargetDistance, bool TraceForLocations, const struct FVector& DeinonychusLocation, const struct FRotator& DeinonychusRotation, bool DebugMode, bool CheckDinoDotProduct, const struct FVector& DotProductCompareVector, float DotProductThreshold, const struct FVector& DotProductLocation, bool TraceForCharacters, TArray<float>* TraceRadii, struct FUberpounceData* Result, bool* RetFoundTarget, bool* RetTargetOutOfRange, float* RetClosestTargetDistance, int* RetFoundIndex);
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void GetCurrentSocketLevel(class APrimalCharacter* forCharacter, int* OutLevel);
	void STATIC_Get_Socket_Level(const class FString& SocketName, int* OutLevel);
	bool EnableTurnToFaceRotation();
	void STATIC_FindScreenEdgeLocation(const struct FVector& WorldLocation, float EdgeMarginPct, struct FVector2D* ScreenPosition);
	void GetBleed_HUDData_for_Character(class APrimalCharacter* Character, int index, struct FVector2D* WorldLocToScreenLoc, struct FVector2D* ScreenLoc, float* ProgressBar, class FString* RetBuffCountString, class FString* DinoName, float* Scale, struct FLinearColor* TextColor, bool* Result);
	void BPDrawToRiderHUD(class AShooterHUD** HUD);
	void RemoveBleed(class APrimalCharacter* Instigator);
	void AddBleed(class APrimalCharacter* Instigator);
	void GetDebugString(class FString* Output);
	void Get_RotationAndLocation_for_UberpounceOnSurface(const struct FVector& Location, const struct FVector& SurfaceNormal, class UPrimitiveComponent* HitComponent, const struct FVector& DeinonychusLocation, struct FRotator* retRotation, struct FVector* retLocation, bool* Success);
	void IsValidGeoLocationForUberpounce(const struct FVector& Location, const struct FVector& SurfaceNormal, class AActor* Actor, const struct FVector& DeinonychusLocation, const struct FRotator& DeinonychusRotation, class UPrimitiveComponent* HitComponent, bool* Result, bool* IsGround, bool* IsFoliage);
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
	void UpdateUberPounceTargetingFn();
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void TryStartUberPounceTargeting();
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void UserConstructionScript();
	void InpActEvt_Crouch_K2Node_InputActionEvent_249();
	void InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_248();
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
	void ServerStartUberpounceFromFalling(const struct FUberpounceData& Data, const struct FVector& Location, const struct FRotator& Rotation);
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
	void MULTI_TargetDodgedUberPounce(const struct FVector& NewTargetLocation, const struct FRotator& NewTargetRotation, class APrimalCharacter* OldTarget);
	void BPUnstasis();
	void MULTI_SetLocation(const struct FVector& Location);
	void UberpounceDesyncDetected();
	void ServerSetLocDuringLatchedJump(const struct FVector& Loc);
	void Client_CallServerMulticast_JumpFX(class UParticleSystem* FX_To_Spawn, TArray<struct FName>* Attach_Point_Names);
	void Multicast_JumpFX(class UParticleSystem* FX_To_Spawn, TArray<struct FName>* Attach_Point_Names);
	void SpawnLocalClinetSuperJumpFX();
	void ServerSlideInputPressed();
	void ServerSlideInputReleased();
	void TimeOutUberpounceRequest();
	void ServerUpdateTransformDuringLatchedJump(const struct FVector& L, const struct FRotator& R);
	void ExecuteUbergraph_Deinonychus_Character_BP(int EntryPoint);
	void NewEventDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
