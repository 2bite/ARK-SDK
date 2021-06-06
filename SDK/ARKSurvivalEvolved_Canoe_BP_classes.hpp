#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Canoe_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Canoe_BP.Canoe_BP_C
// 0x04F8 (0x2798 - 0x22A0)
class ACanoe_BP_C : public APrimalRaft
{
public:
	class UDinoCharacterStatusComponent_BP_Canoe_C*    DinoCharacterStatus_BP_Canoe_C1;                          // 0x22A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WaterEffectBack;                                          // 0x22A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WaterEffectFront;                                         // 0x22B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x22B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        KnockbackAnims;                                           // 0x22C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxBasedCharacters;                                       // 0x22D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x22D4(0x0004) MISSED OFFSET
	class UClass*                                      PickupItem;                                               // 0x22D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DefaultWeaponOverride;                                    // 0x22E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_CanoeReplicatedInputs;                             // 0x22E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasAnyLocallyControlledPassengers;                       // 0x22E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x22EA(0x0002) MISSED OFFSET
	float                                              AverageRightAxisInput;                                    // 0x22EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              AverageForwardAxisInput;                                  // 0x22F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUsingAdvancedSimCanoeMovement;                         // 0x22F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPerformingAdvancedSimMovement;                         // 0x22F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceAdvancedSimMovementForAllProxies;                   // 0x22F6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug_PrintCanoeMovementVars;                            // 0x22F7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug_CanoeSimulatedMovement;                            // 0x22F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x22F9(0x0007) MISSED OFFSET
	double                                             LastRightInputStartTime;                                  // 0x2300(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCanoeRotationSpeed;                                // 0x2308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCameraAlignmentStopped;                                  // 0x230C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x230D(0x0003) MISSED OFFSET
	float                                              CameraRotationInterpSpeed;                                // 0x2310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TPVCameraRotationInterpSpeed;                             // 0x2314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<double>                                     LastMovedCameraTime;                                      // 0x2318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TPVCameraAutoAlignTime;                                   // 0x2328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastFXOpacityFront;                                       // 0x232C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FXOpacityInterpSpeed;                                     // 0x2330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastFXOpacityBack;                                        // 0x2334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDebugFloatHistory                          DebugFloatHistory;                                        // 0x2338(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                              ForceAllowedBuffs;                                        // 0x2358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CanoeRotationDeceleration_Input;                          // 0x2368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CanoeRotationDeceleration_NoInput;                        // 0x236C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_CanoeInputSimStep;                                 // 0x2370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug_SimCanoeErrorCorrection;                           // 0x2371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug_PreventAdvancedSimMovement;                        // 0x2372(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x2373(0x0001) MISSED OFFSET
	struct FVector                                     CurrentSimCanoeInterpolatedLocation;                      // 0x2374(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurrentSimCanoeInterpolatedRotation;                      // 0x2380(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactMinVelocity;                                        // 0x238C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastImpactTime;                                           // 0x2390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTimeBetweenImpacts;                                    // 0x2398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x239C(0x0004) MISSED OFFSET
	class UParticleSystem*                             ImpactFX;                                                 // 0x23A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      ForwardInputPassengerNumCurve_MaxSpeed;                   // 0x23A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      ForwardInputPassengerNumCurve_MaxAccel;                   // 0x23B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      RightInputPassengerNumCurve_RotationRate;                 // 0x23C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      RightInputPassengerNumCurve_RotationAccel;                // 0x23D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastPassengerInputsUpdatedTime;                           // 0x23E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              RowInterval;                                              // 0x23F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentSimCanoeVelocity;                                  // 0x23F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              SimCanoeLocInterpSpeed_Return;                            // 0x2400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimCanoeRotInterpSpeed;                                   // 0x2404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimCanoeRotInterpSpeed_Return;                            // 0x2408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimCanoeRotInterpSpeed_RequiredMin;                       // 0x240C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimCanoeResetLocBelowVelocitySpeed;                       // 0x2410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimCanoeResetRotBelowRotationSpeed;                       // 0x2414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FRepCanoePassengerInputs>            ReplicatedPassengerInputs;                                // 0x2418(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                           CurrentPerPassengerInputs;                                // 0x2428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PackedInputsNegativeBit;                                  // 0x2438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CanoeRotationRate;                                        // 0x243C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CanoeRotationAcceleration;                                // 0x2440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CanoeExtraRotationRateMult;                               // 0x2444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CanoeExtraRotationAccelMult;                              // 0x2448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimCanoeAvoidBlockersInterpSpeed;                         // 0x244C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastToggledAdvancedSimMovementTime;                       // 0x2450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdvancedSimCanoeInterpBlendTime;                          // 0x2458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimCanoeAllowedPositionalErrorDelta;                      // 0x245C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimCanoeInterpTargetLocInterpSpeed_Forward;               // 0x2460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimCanoeInterpTargetLocInterpSpeed_Right;                 // 0x2464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DefaultMeshOffset;                                        // 0x2468(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimCanoeInterpTargetLocInterpSpeed_Z;                     // 0x2474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentSimCanoeInterpTargetLocation;                      // 0x2478(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              ServerDeltaTime;                                          // 0x2484(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastReceivedServerVelocity;                               // 0x2488(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x2494(0x0004) MISSED OFFSET
	double                                             LastClientPassengerInputsUpdatedTime;                     // 0x2498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_PrintPerPassengerMovementVars;                     // 0x24A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x24A1(0x0007) MISSED OFFSET
	double                                             LastClearedRiderTime;                                     // 0x24A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    FishingRotationOffset;                                    // 0x24B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FishingLocationOffset;                                    // 0x24BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SimCanoeGeneralSync_DistanceMinMax;                       // 0x24C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SimCanoeGeneralSync_InterpSpeedMinMax;                    // 0x24D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 FishingFireAnim;                                          // 0x24D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 FishingFireAnimFemale;                                    // 0x24E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCanoeServerReceivedPassengerSavedInputs> PassengerSavedInputsQueue_Forward;                        // 0x24F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<struct FCanoeServerReceivedPassengerSavedInputs> PassengerSavedInputsQueue_Right;                          // 0x2508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	double                                             PreviousServerTickTime_Forward;                           // 0x2518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	double                                             PreviousServerTickTime_Right;                             // 0x2520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCanoePassengerSavedInputAxis>       ServerReceivedPerPassengerSavedInputs_Forward;            // 0x2528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<struct FCanoePassengerSavedInputAxis>       ServerReceivedPerPassengerSavedInputs_Right;              // 0x2538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	int                                                MaxSavedInputQueueSize;                                   // 0x2548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSingleDriverCanoe;                                       // 0x254C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x254D(0x0003) MISSED OFFSET
	float                                              SimCanoeGeneralSync_InterpSpeedZ;                         // 0x2550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventCanoeExitingWater;                                // 0x2554(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugCanoePreventExitingWater;                           // 0x2555(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHitSomethingThisFrame;                                   // 0x2556(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x2557(0x0001) MISSED OFFSET
	float                                              AllowLeaveWaterTraceOffset;                               // 0x2558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AllowLeaveWaterTraceHeights;                              // 0x255C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowLeaveWaterTraceRadius;                               // 0x2564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AllowLeaveWaterTraceOffsetVelocityMinMax;                 // 0x2568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanoeWantsToBeach;                                       // 0x2570(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x2571(0x0007) MISSED OFFSET
	double                                             LastRefreshDisplayBeachInputHudTime;                      // 0x2578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisplayBeachInputHUD;                                    // 0x2580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x2581(0x0003) MISSED OFFSET
	float                                              LastCanoeFallingVelZ;                                     // 0x2584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   LandingSplashVelocityRange;                               // 0x2588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   LandingSplashScaleRange;                                  // 0x2590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   LandingSplashTimeDilationRange;                           // 0x2598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CanoeBeachingWalkableFloorAngle;                          // 0x25A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x25A4(0x0004) MISSED OFFSET
	struct FHitResult                                  LastCanoeCapsuleHit;                                      // 0x25A8(0x0088) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FHUDRichTextOverlayData                     BeachRichTextOverlay;                                     // 0x2630(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                      CanoeTextOverlayMessage_NearShore;                        // 0x2690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CanoeTextOverlayMessage_BeachInputPressed;                // 0x26A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CanoeTextOverlayMessage_Beached;                          // 0x26B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                CanoeTextOverlayColor_Beached;                            // 0x26C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                CanoeTextOverlayColor_NearShore;                          // 0x26D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                CanoeTextOverlayColor_BeachInputPressed;                  // 0x26E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanCanoeBePickedUp;                                      // 0x26F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x26F1(0x0003) MISSED OFFSET
	float                                              CurrentCanoeFallingPitchOffset;                           // 0x26F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCanoeDippingVelocity;                              // 0x26F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              CanoeFallingPitchOffsetInterpSpeed_Reset;                 // 0x26FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CanoeFallingPitchOffsetInterpSpeed_Falling;               // 0x2700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CanoeLandingDipVelocityDissapateSpeed;                    // 0x2704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CanoeLandingDipHeightOffsetResetSpeed;                    // 0x2708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CanoeFallingPitchOffsetMax;                               // 0x270C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CanoeImpactSound;                                         // 0x2710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CanoeWaterLandingSound;                                   // 0x2718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   LandingSplashSoundPitchRange;                             // 0x2720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   LandingSplashSoundVolumeRange;                            // 0x2728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowCanoeMovementSoundAboveSpeed;                        // 0x2730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SimCanoeInterpTargetLocInterpSpeedRange_Right;            // 0x2734(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         CurrentSimCanoeMovementMode;                              // 0x273C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x273D(0x0003) MISSED OFFSET
	class UMaterialInstanceDynamic*                    WaterEffectFrontMID;                                      // 0x2740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WaterEffectBackMID;                                       // 0x2748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxCanoePitchAngle;                                       // 0x2750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanoeAtRest;                                             // 0x2754(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x2755(0x0003) MISSED OFFSET
	float                                              CanoeRestVelocityThreshold;                               // 0x2758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanoeAdvancedSimVarsReset;                               // 0x275C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x275D(0x0003) MISSED OFFSET
	struct FVector                                     LastCanoeLocation;                                        // 0x2760(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastCanoeActualVelocity;                                  // 0x276C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_CanoeRest;                                         // 0x2778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanoeBeached;                                            // 0x2779(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanoeFalling;                                            // 0x277A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanoeSwimming;                                           // 0x277B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanoeHasAnyPassengers;                                   // 0x277C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         CurrentCanoeSimMovementMode;                              // 0x277D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x277E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x1];                                       // 0x277F(0x0001) MISSED OFFSET
	int                                                K2Node_CustomEvent_KnockDirectionIndex;                   // 0x2780(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x2784(0x0004) MISSED OFFSET
	class UAnimMontage*                                CallFunc_Array_Get_Item;                                  // 0x2788(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x2790(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x2791(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2794(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Canoe_BP.Canoe_BP_C");
		return ptr;
	}


	void OnCanoeAtRestStateChanged();
	void UpdateCanoeAtRest();
	void GetCanoeVelocity_External(struct FVector* Velocity);
	void GetCanoeVelocity(struct FVector* Velocity);
	bool BPAllowMovementSound();
	void CanModifyCanoeDesiredRotation(bool* bResult);
	void GetCanoeNumPassengers(int* NumPassengers);
	void DoesCanoeHaveAnyPassengers(bool* bResult);
	void IsPlayerCanoePassenger(class AShooterCharacter* CheckPlayer, bool* bResult);
	void STATIC_UpdateCanoeHudTextOverlay();
	void RemoveCanoeHudTextOverlayFromPassenger(class AShooterCharacter* FromPassenger);
	void AddCanoeHudTextOverlayToPassenger(class AShooterCharacter* ToPassenger);
	void BPRemovedAttachmentsForItem(class UPrimalItem** anItem);
	void BP_OnPaintingComponentInitialized(class UStructurePaintingComponent** PaintingComp);
	void CanUsePassengerReplicatedInputQueue(bool* bResult);
	void OnRep_bPreventCanoeExitingWater();
	void CanDynamicalyPreventExitingWater(bool* bResult);
	void UpdateBeachInputHUD();
	void OnUpdateCanoePreventExitingWater(bool bNewVal);
	void UpdateCanoeWantsToBeach();
	bool BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	void STATIC_UpdatePreventCanoeFromExitingWater();
	void PackInputAxesIntoVector2D(float Forward, float Right, struct FVector2D* Result);
	void STATIC_ProcessReceivedPassengerInputsQueue_Right();
	void ProcessReceivedPassengerInputsQueue_Forward();
	void STATIC_ConvertServerReceivedPassengerInputsIntoVector2Ds(TArray<struct FVector2D>* Inputs);
	void BP_OverrideSwimmingAcceleration(float* DeltaTime, struct FVector* ModifyAcceleration);
	void STATIC_ReceivedSavedPassengerInputStruct(const struct FCanoePassengerClientInputAxes& ClientSavedInputs, class AShooterCharacter* ForPassengerPlayer);
	class UAnimSequence* BPOverridePassengerAdditiveAnim(class APrimalCharacter** ForPassenger);
	void IsCanoeAdvancedSimProxy(bool* bResult);
	void CleanUpAllOarWeapons();
	void BP_OnSetDeath();
	void SetPlayerUseOarWeapon(class AShooterCharacter* ForPlayer, bool bNewUse);
	void BPAddedAttachmentsForItem(class UPrimalItem** anItem);
	void BPOnRefreshColorization(TArray<struct FLinearColor>* Colors);
	void DebugPrintReplicatedInputs();
	void DebugCanoeMovementVars();
	struct FVector BPOverrideSwimmingVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float* FluidFriction, float* NetBuoyancy, float* DeltaTime);
	void TryRow(double WithGameTime);
	void FetchLocallyControlledPassengerInputs();
	void ForceClearPassengerInputs();
	void SetUseAdvancedCanoeSimMovement(bool bNewValue);
	void ResetSimCanoeVars();
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void ShouldUseAdvancedSimMovement(bool* bResult);
	void BP_OnBasedPawnRemovedNotify(class AActor** RemovedActor);
	void BP_OnBasedPawnAddedNotify(class AActor** AddedActor);
	void DebugPerPassengerMovementVars();
	void UpdateCurrentPassengerInputs(bool* bAnyActive);
	void OnRep_ReplicatedPassengerInputs();
	void UnpackReplicatedPassengerInputs();
	void PackReplicatedPassengerInputs();
	void PerformSimCanoeMovement(float DeltaTime);
	void STATIC_BPTimerNonDedicated();
	void BPTimerServer();
	void BP_OverrideCameraTargetOriginLocation(struct FName* WithCameraStyle, struct FVector* OutOverrideOrigin);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	bool BPCanTakePassenger(class APrimalCharacter** Character, int* PassengerSeatIndex, bool* bForcePassenger, bool* bAllowFlyersAndWaterDinos);
	struct FVector GetPlayerSpawnLocation();
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void BPDinoPostBeginPlay();
	bool BP_ForceAllowAddBuff(class UClass** BuffClass);
	void HandleFX(float DeltaTime);
	void STATIC_SortSeatsByDistance(const struct FVector& ToLocation, class APrimalCharacter* forCharacter, TArray<struct FSaddlePassengerSeatDefinition>* SortedSeatDefinitons, TArray<int>* Sortedindices);
	struct FRotator BPCameraBaseOrientation(class APrimalCharacter** viewingCharacter);
	struct FRotator BPLimitPlayerRotation(class APrimalCharacter** viewingCharacter, struct FRotator* InViewRotation);
	bool BPModifyDesiredRotation(float* DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation);
	void PassengerWeaponChanged(class AShooterWeapon* newWeapon);
	void OnSpawnedForItem(class UPrimalItem** ForItem);
	bool BP_ForceAllowMountedWeapon(class UClass** WeaponTemplate);
	void GetCurrentPassengerAxisInputs(bool bDebug, bool* bAnyActiveInputs, TArray<struct FVector2D>* PerPassengerInputs, float* AvgForward, float* AvgRight, int* NumActiveForward, int* NumActiveRight);
	void BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex);
	void BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex);
	void STATIC_PickupCanoe(class AShooterCharacter* forChar);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPCanBeBaseForCharacter(class APawn** Pawn);
	bool BPCanCryo(class AShooterPlayerController** ForPC);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void UserConstructionScript();
	void DoPlayKnockAnimation(int KnockDirectionIndex);
	void Multicast_RefreshColors();
	void ExecuteUbergraph_Canoe_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
