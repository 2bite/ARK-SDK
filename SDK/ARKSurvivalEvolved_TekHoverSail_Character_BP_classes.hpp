#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekHoverSail_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekHoverSail_Character_BP.TekHoverSail_Character_BP_C
// 0x20C0 (0x4348 - 0x2288)
class ATekHoverSail_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UAudioComponent*                             SpinSoundComp;                                            // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             HoverSoundComp;                                           // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             BoostSoundComp;                                           // 0x2298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_HoverSail_C* DinoCharacterStatus_BP_HoverSail_C1;                      // 0x22A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    rear_hoversail_thruster_R_AerialBoost;                    // 0x22A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    rear_hoversail_thruster_L_AerialBoost;                    // 0x22B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    drift_particle_emitter;                                   // 0x22B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             trailing_camera_focus;                                    // 0x22C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TEST;                                                     // 0x22C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene2;                                                   // 0x22D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene4;                                                   // 0x22D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene3;                                                   // 0x22E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x22E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    rear_hoversail_thruster_R;                                // 0x22F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    windstream_emitter;                                       // 0x22F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    levitation_emitter;                                       // 0x2300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    trail_emitter;                                            // 0x2308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    rear_hoversail_thruster_L;                                // 0x2310(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             RepairSoundComp;                                          // 0x2318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ThrusterSoundComp;                                        // 0x2320(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_2_NewTrack_0_955CFF0442E6A79D7C2EE39D17B1725C;   // 0x2328(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_955CFF0442E6A79D7C2EE39D17B1725C;   // 0x232C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x232D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x2330(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_NewTrack_0_62EDEC92480DFAA8641AD59EDC1DD4B1;   // 0x2338(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_62EDEC92480DFAA8641AD59EDC1DD4B1;   // 0x233C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x233D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x2340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Timeline_0_NewTrack_0_7B7CA9834CC84E2A3CCCD99A2B595414;   // 0x2348(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_7B7CA9834CC84E2A3CCCD99A2B595414;   // 0x2354(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2355(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x2358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     wobble_timeline_Rotation_9ED524FF4E8B957B6501C3ADAB1E4F7C;// 0x2360(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     wobble_timeline_Translation_9ED524FF4E8B957B6501C3ADAB1E4F7C;// 0x236C(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    wobble_timeline__Direction_9ED524FF4E8B957B6501C3ADAB1E4F7C;// 0x2378(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x2379(0x0007) MISSED OFFSET
	class UTimelineComponent*                          wobble_timeline;                                          // 0x2380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlyUp;                                                   // 0x2388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x2389(0x0007) MISSED OFFSET
	class UClass*                                      FuelItemClass;                                            // 0x2390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffHoverState>                CurrentHoverState;                                        // 0x2398(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffHoverState>                PreviousHoverState;                                       // 0x2399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x239A(0x0002) MISSED OFFSET
	float                                              TargetHoverHeight_HoverLimit;                             // 0x239C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentTargetHoverHeight;                                 // 0x23A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x23A4(0x0004) MISSED OFFSET
	double                                             LastTimeSentInputToServer;                                // 0x23A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentHoverFloorZ;                                       // 0x23B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x23B4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              AlternateFuelItemClasses;                                 // 0x23B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FuelCost_Hovering;                                        // 0x23C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFuelUnitPercent;                                   // 0x23CC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	double                                             LastTickTime;                                             // 0x23D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceSkiffDescend;                                       // 0x23D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x23D9(0x0003) MISSED OFFSET
	int                                                CurrentFuelUnitsInInventory;                              // 0x23DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bIsHoldingLeftMouse;                                      // 0x23E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x23E1(0x0003) MISSED OFFSET
	float                                              HoverVelocityAntiGravityMult;                             // 0x23E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffTerminalVelocity;                                    // 0x23E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInfiniteFuel;                                            // 0x23EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x23ED(0x0003) MISSED OFFSET
	double                                             LastCameraTransitionStartTime;                            // 0x23F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_MovingTowardsCamera;                // 0x23F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CrosshairAlphas;                                          // 0x23FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentCameraViewTargetOffset;                            // 0x2408(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_Default;                            // 0x2414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Montage_Turret_Open;                                      // 0x2418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Montage_Turret_Close;                                     // 0x2420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkiffWantsToLand;                                        // 0x2428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x2429(0x0003) MISSED OFFSET
	float                                              TargetHoverHeight_Min;                                    // 0x242C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastHoverTraceTime;                                       // 0x2430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HoverTraceIntervalRange_Hovering;                         // 0x2438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentHoverTraceInterval;                                // 0x2440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTrulyLanding;                                          // 0x2444(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x2445(0x0003) MISSED OFFSET
	float                                              AllowSkiffLanding_UnderHoverHeight;                       // 0x2448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowSkiffLanding_Under2DVelocity;                        // 0x244C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffHoverZVelocityDampingRate_Down;                      // 0x2450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightChangeSpeed_Up;                                // 0x2454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CollisionHitVFX;                                          // 0x2458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffHoverDampingHeightRange;                             // 0x2460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffLandingVelocity_DampingRate;                         // 0x2464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTakeoffTime;                                          // 0x2468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              PostTakeoffHoverStartDelay;                               // 0x2470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoHoverFloorZ;                                            // 0x2474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SkiffImpactAnim;                                          // 0x2478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HoverJetBottomScaleRange;                                 // 0x2480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightChangeSpeed_Down;                              // 0x2488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastHoverHeightRatio;                                     // 0x248C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffMovementInputs_Current;                              // 0x2490(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffMovementInputs_LastReplicated;                       // 0x249C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	int                                                LastMoveInputFrame_Forward;                               // 0x24A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastMoveInputFrame_Right;                                 // 0x24AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ResetMovementInputsAfterNumInactiveFrames;                // 0x24B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkiffFirePressed;                                        // 0x24B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkiffTargetingPressed;                                   // 0x24B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x24B6(0x0002) MISSED OFFSET
	class UParticleSystem*                             CrashingParticles;                                        // 0x24B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CrashingParticlesSocketName;                              // 0x24C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedCrashingParticles;                                 // 0x24C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCrashingHealth;                                    // 0x24D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxCrashingHealth;                                        // 0x24D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashExplosionRadius;                                     // 0x24D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashExplosionDamage_Pawns_Inner;                         // 0x24DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CrashExplosionDamageType;                                 // 0x24E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashExplosionImpulse_Inner;                              // 0x24E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashingMaxAllowedDuration;                               // 0x24EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AController*                                 CurrentMurderer_Instigator;                               // 0x24F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      SkiffCrashingState;                                       // 0x24F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x24F9(0x0007) MISSED OFFSET
	class AActor*                                      CurrentMurderer_DamageCauser;                             // 0x2500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashingRollRotationSpeed;                                // 0x2508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashingTerminalVelocity;                                 // 0x250C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffDamageTracker_CurrentDamage;                         // 0x2510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffDamageTracker_Interval;                              // 0x2514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             SkiffDamageTracker_LastDamageTime;                        // 0x2518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	int                                                FullTankFuelAmount;                                       // 0x2520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCost_Hovering_RunMult;                                // 0x2524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SkiffHitVFX_ScaleRanges;                                  // 0x2528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowSkiffHitVfxAboveImpact_Strength;                     // 0x2530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_LoweringAcceleration;                  // 0x2534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SkiffLandingVelocity_Range;                               // 0x2538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetHoverHeight_Default;                                // 0x2540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_RaisingAcceleration;                   // 0x2544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ModifyFlySpeed_BaseCharCapsuleVolume;                     // 0x2548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastCameraRelativeZ;                                      // 0x254C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetHoverHeight_Max;                                    // 0x2550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   FuelCost_Flying_Range;                                    // 0x2554(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x255C(0x0004) MISSED OFFSET
	double                                             LastHoverFoundGroundTime;                                 // 0x2560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedNoGroundTimeBeforeFreeFall;                        // 0x2568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_Hovering;                                          // 0x256C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x256D(0x0003) MISSED OFFSET
	double                                             LastStartFreeFallTime;                                    // 0x2570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeFallUseSphereGroundTraceDuration;                     // 0x2578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForceSlowHoverTraceIntervalBelowVelocity;                 // 0x257C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HoverTraceIntervalRange_NotMoving;                        // 0x2580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverTraceInterval_Landing;                               // 0x2588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFuelConsumeMult;                                   // 0x258C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFuelConsumeMultMax;                                // 0x2590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElementValueScale;                                        // 0x2594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCost_FreeFall;                                        // 0x2598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffFlyingVelocityDampingRate;                           // 0x259C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedFailTakeoffInterval;                               // 0x25A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x25A4(0x0004) MISSED OFFSET
	double                                             LastFailedTakeoffTime;                                    // 0x25A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             HoverIK_TraceStartOffsets;                                // 0x25B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              HoverIK_ExtraTraceDistance_Down;                          // 0x25C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_Skiff_IK;                                          // 0x25C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x25C5(0x0003) MISSED OFFSET
	float                                              HoverIK_ExtraTraceDistance_Up;                            // 0x25C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x25CC(0x0004) MISSED OFFSET
	TArray<struct FName>                               GroundParticlesTraceSocketNames;                          // 0x25D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              GroundParticlesTraceDistance_Default;                     // 0x25E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x25E4(0x0004) MISSED OFFSET
	double                                             LastGroundParticlesTraceTime;                             // 0x25E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             GroundParticlesTemplate_Default;                          // 0x25F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             GroundParticlesTemplate_Water;                            // 0x25F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             GroundParticlesTemplate_Snow;                             // 0x2600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             GroundParticlesTemplate_Lava;                             // 0x2608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundParticlesAllowedTraceInterval;                      // 0x2610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x2614(0x0004) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            SpawnedGroundParticles;                                   // 0x2618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDebugEnvironmentalVFX;                                   // 0x2628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x2629(0x0003) MISSED OFFSET
	float                                              GroundParticlesTraceDistance_RearThruster_Normal;         // 0x262C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundParticlesTraceDistance_RearThruster_Running;        // 0x2630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToFreeFall;                                         // 0x2634(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x2635(0x0003) MISSED OFFSET
	struct FName                                       GroundParticlesParamName_Orientation;                     // 0x2638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              LavaDamageTypes;                                          // 0x2640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CrashExplosionDamage_Structures_Inner;                    // 0x2650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashExplosionDamage_Pawns_FalloffMax;                    // 0x2654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashExplosionDamage_Structures_FalloffMax;               // 0x2658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashExplosionImpulse_FalloffMax;                         // 0x265C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashExplosionInnerRadiusMeshBoundsMult;                  // 0x2660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug_Crashing;                                           // 0x2664(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x2665(0x0003) MISSED OFFSET
	struct FVector2D                                   BasedCharCameraInterpSpeedRange;                          // 0x2668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffCameraOffset_Landed;                                 // 0x2670(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffCameraOffset_Crashing;                               // 0x267C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_Crashing;                           // 0x2688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffCameraOffset_HoverState_Hovering;                    // 0x268C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffCameraOffset_HoverState_Flying;                      // 0x2698(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffCameraOffset_HoverState_FreeFall;                    // 0x26A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_LookingForGround;                   // 0x26B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_Hovering;                           // 0x26B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BasedCharCameraInterpSpeedMult;                           // 0x26B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BasedCharCameraInterpSpeedMult_Fast;                      // 0x26BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastSkiffTargetingPressedTime;                            // 0x26C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredInputHoldTime_StartReeling;                       // 0x26C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GroundParticlesParamName_SpawnRate;                       // 0x26CC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   GroundParticlesSpawnRateRanges;                           // 0x26D4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GroundParticlesParamName_SpawnVelocity;                   // 0x26DC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GamepadStartFlyingUpRequiredLandPressedTime;              // 0x26E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffReplicatedAcceleration;                              // 0x26E8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasSkiffDemolished;                                      // 0x26F4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x26F5(0x0003) MISSED OFFSET
	float                                              CrashDamage;                                              // 0x26F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RiderUnboardSocketName;                                   // 0x26FC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HoverTraceIntervalRange_Flying;                           // 0x2704(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCost_Flying_MaxFlyHeight;                             // 0x270C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RegularRotationRateMult;                                  // 0x2710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMaxSpeedMult;                                       // 0x2714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_Flying;                             // 0x2718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSkiffWidgetHUD;                                       // 0x271C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x271D(0x0003) MISSED OFFSET
	struct FHUDElement                                 HudElement_Altimeter;                                     // 0x2720(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bSkiffWantsToRun;                                         // 0x2870(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x2871(0x0003) MISSED OFFSET
	float                                              AllowHoverTraceHitsBelowUpAngleDelta;                     // 0x2874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_SkiffDeath_Demolished;                                // 0x2878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_SkiffDeath_Destroyed_Landed;                          // 0x2880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_SkiffDeath_Destroyed_Midair;                          // 0x2888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_SkiffDeath_Destroyed_Crashed;                         // 0x2890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_SkiffImpact;                                          // 0x2898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedDinoLandingIndicator;                              // 0x28A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DinoLandingIndicatorParticleTemplate;                     // 0x28A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverStrengthRatioExponent;                               // 0x28B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_LoweringAcceleration_RunMult;          // 0x28B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_RaisingAcceleration_RunMult;           // 0x28B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalVelocityFuelMult_Up;                              // 0x28BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalVelocityFuelMult_Down;                            // 0x28C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DinoDropIndicatorBaseScaleDistFromCamera;                 // 0x28C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DinoDropIndicator_MaxArcTraceDist;                        // 0x28C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffLandingHeightRatioCurveExponent;                     // 0x28CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredFuel_ForTakeoff;                                  // 0x28D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsConsumingFuel;                                         // 0x28D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x28D5(0x0003) MISSED OFFSET
	struct FName                                       AllowRidingWithinRadiusSocketName;                        // 0x28D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredRiderDistFromSeatToMount;                         // 0x28E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffDeathDropInventoryLifetime;                          // 0x28E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkiffRepairModeActive;                                   // 0x28E8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x28E9(0x0003) MISSED OFFSET
	float                                              AutoRepair_MaxRepairHealthPercentage;                     // 0x28EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoRepair_RepairCostToHealthMult;                        // 0x28F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoRepair_RepairFuelCost_Tick_Hover;                     // 0x28F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoRepair_RepairFuelCost_Tick_Landed;                    // 0x28F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoRepair_RepairFuelCost_Tick_RepairMode;                // 0x28FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentAutoRepairFuelCost;                                // 0x2900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoRepair_HUD_TextOffsetY;                               // 0x2904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoRepair_HUD_DrawScale;                                 // 0x2908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x290C(0x0004) MISSED OFFSET
	class FString                                      AutoRepair_HUD_MultiUseString_Activate;                   // 0x2910(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AutoRepair_HUD_MultiUseString_Deactivate;                 // 0x2920(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              AutoRepair_HUD_CriticalHealthThreshold;                   // 0x2930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoRepair_RequiredFuelForRepairMode;                     // 0x2934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastSkiffRepairModeActivateTime;                          // 0x2938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	double                                             LastSkiffRepairModeDeactivateTime;                        // 0x2940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              PreventTakeoffPostRepairModeInterval;                     // 0x2948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepairModeWarmUpInterval;                                 // 0x294C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      AutoRepair_HUD_FloatingTextString_CriticalDamage;         // 0x2950(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AutoRepair_HUD_FloatingTextString_SomeDamage;             // 0x2960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AutoRepair_HUD_FloatingTextString_RepairModeActive;       // 0x2970(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AutoRepair_HUD_FloatingTextString_ActivatingRepairMode;   // 0x2980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AutoRepair_HUD_FloatingTextString_DeactivatingRepairMode; // 0x2990(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              AutoRepair_HUD_RepairTextPaddingY;                        // 0x29A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                AutoRepair_HUD_FloatingTextColor_RepairMode;              // 0x29A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x29B4(0x0004) MISSED OFFSET
	TArray<float>                                      FuelSubstituteItemConversionRates;                        // 0x29B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TakeoffBasedDragWeightLimit;                              // 0x29C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAllowedFlyingVelocityDeltaTime;                        // 0x29CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugSkiff_PrintFlyingVelocity;                          // 0x29D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasFinishedTakeoff;                                      // 0x29D1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x2];                                       // 0x29D2(0x0002) MISSED OFFSET
	struct FRotator                                    CachedLandedSkiffRootRotationOffset;                      // 0x29D4(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	class APrimalBuff*                                 SpawnedAutoRepairBuff;                                    // 0x29E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RepairModeClientBuffClass;                                // 0x29E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFX_HealthPercentage_StartBelow;                     // 0x29F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFX_HealthPercentage_Low;                            // 0x29F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DamageFX_Spark_Particles;                                 // 0x29F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DamageFX_Spark_Sound;                                     // 0x2A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastDamageFxTime;                                         // 0x2A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFxInterval;                                        // 0x2A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x2A14(0x0004) MISSED OFFSET
	TArray<struct FName>                               DamageFX_SparkSocketNames;                                // 0x2A18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   DamageFX_ParticleSpawnIntervalMaxRange;                   // 0x2A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageFX_SparkSpawnRateRange;                             // 0x2A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageFX_FlameSpawnRateRange;                             // 0x2A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageFX_SparkSpawnRateParamName;                         // 0x2A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageFX_FireSpawnRateParamName;                          // 0x2A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageFX_ParticleSpawnIntervalMinRange;                   // 0x2A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkiffAboveWater;                                         // 0x2A58(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x2A59(0x0003) MISSED OFFSET
	float                                              TargetHoverHeight_Min_AboveWater;                         // 0x2A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentRepairHealthPerSec;                                // 0x2A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x2A64(0x0004) MISSED OFFSET
	double                                             LastGamepadLandInputPressedTime;                          // 0x2A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              LandingInputDoubleTapWindow;                              // 0x2A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x4];                                       // 0x2A74(0x0004) MISSED OFFSET
	class UClass*                                      LastConsumedAltFuelItemClass;                             // 0x2A78(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentTotalAltFuel;                                      // 0x2A80(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayingRepairSound;                                      // 0x2A84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x2A85(0x0003) MISSED OFFSET
	TArray<float>                                      RepairSound_VolumesByState;                               // 0x2A88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      RepairSound_PitchesByState;                               // 0x2A98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   DamageFX_SparkSound_VolumeRange;                          // 0x2AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageFX_SparkSound_PitchRange;                           // 0x2AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageFX_Crashing_HeavyDamageSound_VolumeAndPitch;        // 0x2AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDamageFxActive_Severe;                                   // 0x2AC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x2AC1(0x0003) MISSED OFFSET
	struct FVector2D                                   DamageFX_HeavyDamageSound_VolumeRange;                    // 0x2AC4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageFX_HeavyDamageSound_PitchRange;                     // 0x2ACC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageMaterialOverlayParamName_PulseSpeed;                // 0x2AD4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageMaterialOverlayParamName_RepairColorStrength;       // 0x2ADC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageMaterialOverlayParamName_RepairColor;               // 0x2AE4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x4];                                       // 0x2AEC(0x0004) MISSED OFFSET
	TArray<struct FLinearColor>                        DamageMaterialOverlayParam_RepairColorsPerState;          // 0x2AF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DamageMaterialOverlayParam_RepairColorStrengthPerState;   // 0x2B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DamageMaterialOverlayParam_PulseSpeedPerState;            // 0x2B10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DamageMaterialOverlayParam_InterpSpeed_RepairColor;       // 0x2B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMaterialOverlayParam_InterpSpeed_RepairColorStrength;// 0x2B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMaterialOverlayParam_InterpSpeed_PulseSpeed;        // 0x2B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x4];                                       // 0x2B2C(0x0004) MISSED OFFSET
	class USoundBase*                                  DamageFX_FullRepairCompleteSound;                         // 0x2B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      CurrentAutoRepairState;                                   // 0x2B38(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x7];                                       // 0x2B39(0x0007) MISSED OFFSET
	double                                             LastSkiffDamagedTime;                                     // 0x2B40(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffAutoRepair_PreventForTimeAfterDamage;                // 0x2B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0x4];                                       // 0x2B4C(0x0004) MISSED OFFSET
	class FString                                      AutoRepair_HUD_FloatingTextString_TakingDamage;           // 0x2B50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                AutoRepair_HUD_FloatingTextColor_TakingDamage;            // 0x2B60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffDamageTimeUpdateRequiresDamageAmount;                // 0x2B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RepairModeMultiUseIndex;                                  // 0x2B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLastSkiffMoving;                                         // 0x2B78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x3];                                       // 0x2B79(0x0003) MISSED OFFSET
	struct FVector                                     NudgeImpulse;                                             // 0x2B7C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastNudgeTime;                                            // 0x2B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastLandedIKLocation;                                     // 0x2B90(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              HoverSlopeCheck_MaxSimTime;                               // 0x2B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HoverSlopeCheck_TotalNumSlices;                           // 0x2BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverSlopeCheck_SliceLength;                              // 0x2BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverSlopeCheck_AdditionalTraceZ;                         // 0x2BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverSlopeCheck_CurrentAverageSlopeDeltaRatio;            // 0x2BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugSkiff_HoverSlopeCheck;                              // 0x2BB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x2BB1(0x0003) MISSED OFFSET
	int                                                HoverSlopeCheck_CurrNumHits;                              // 0x2BB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverSlopeCheck_CurrentHitPercent;                        // 0x2BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverSlopeCheck_CurrentAverageZ;                          // 0x2BBC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HoverSlopeCheck_CurrentAverageNormal;                     // 0x2BC0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHoverSlopeCheck_CurrentFoundExtremeSlope;                // 0x2BCC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x3];                                       // 0x2BCD(0x0003) MISSED OFFSET
	float                                              HoverHeightControl_RaisingVelocity_MAX;                   // 0x2BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_LoweringVelocity_MAX;                  // 0x2BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_LoweringVelocity_MAX_RunMult;          // 0x2BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_RaisingVelocity_MAX_RunMult;           // 0x2BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_RaisingVelocity_FlyingMult;            // 0x2BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_LoweringVelocity_FlyingMult;           // 0x2BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverSlopeCheck_MinDeltaWeight;                           // 0x2BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverSlopeCheck_DeltaWeightCurveExponent;                 // 0x2BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffHoverZVelocityDampingRate_Up;                        // 0x2BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MultiUseIndex_TryLand;                                    // 0x2BF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MultiUseIndex_Nudge;                                      // 0x2BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedNudgeInterval;                                     // 0x2BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurrentSkiffRootRotOffset_IK;                             // 0x2C00(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FRotator                                    CurrentSkiffRootRotOffset_Hover;                          // 0x2C0C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	class UClass*                                      OverridePawnTPVAnimBlueprint_HM;                          // 0x2C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               sail_is_open;                                             // 0x2C20(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_weapon_out_with_sail_down;                            // 0x2C21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x6];                                       // 0x2C22(0x0006) MISSED OFFSET
	double                                             last_time_changed_sail_state;                             // 0x2C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              forward_input_value;                                      // 0x2C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               last_trace_was_near_ground;                               // 0x2C34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0x2C35(0x0003) MISSED OFFSET
	float                                              right_input_value;                                        // 0x2C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              aerial_trick_rotation_rate_MAX;                           // 0x2C3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              desired_rotation_ground_rotation_rate;                    // 0x2C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              desired_rotation_running_ground_rotation_rate;            // 0x2C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              desired_rotation_aerial_rotation_rate;                    // 0x2C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     non_boosting_tpv_camera_offset;                           // 0x2C4C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     boosting_tpv_camera_offset;                               // 0x2C58(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hmm;                                                      // 0x2C64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData48[0x3];                                       // 0x2C65(0x0003) MISSED OFFSET
	struct FVector                                     pre_clear_velocity;                                       // 0x2C68(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData49[0x4];                                       // 0x2C74(0x0004) MISSED OFFSET
	double                                             last_time_cleared_rider;                                  // 0x2C78(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_holding_jump;                                          // 0x2C80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               client_holding_low_friction_button;                       // 0x2C81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               server_holding_low_friction_button;                       // 0x2C82(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData50[0x1];                                       // 0x2C83(0x0001) MISSED OFFSET
	float                                              desired_rotation_while_crouch_is_held_rate;               // 0x2C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              holding_crouch_rotation_rate_MAX;                         // 0x2C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               server_is_holding_jump;                                   // 0x2C8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData51[0x3];                                       // 0x2C8D(0x0003) MISSED OFFSET
	struct FRotator                                    last_wind_emitter_rot;                                    // 0x2C90(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                vfx_color;                                                // 0x2C9C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData52[0x4];                                       // 0x2CAC(0x0004) MISSED OFFSET
	double                                             last_time_jumped;                                         // 0x2CB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              jump_vfx_time;                                            // 0x2CB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData53[0x4];                                       // 0x2CBC(0x0004) MISSED OFFSET
	double                                             Last_time_full_boosted;                                   // 0x2CC0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              allowed_time_between_full_boosts;                         // 0x2CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              full_boost_strength;                                      // 0x2CCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 full_boost_cooldown_hud_elem;                             // 0x2CD0(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               use_sail_open_mechanics_when_sail_is_closed;              // 0x2E20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData54[0x7];                                       // 0x2E21(0x0007) MISSED OFFSET
	class UClass*                                      OverridePawnTPVAnimBlueprint_HF;                          // 0x2E28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              distance_in_front_of_hoversail_to_check_for_ground_in_order_to_boost_off_ramsp;// 0x2E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              boost_amount_when_jumping_off_ramp;                       // 0x2E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     vector_downward_to_check_for_no_ground_when_jumping_off_a_ramp;// 0x2E38(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               debug_enable_manual_sail_swap;                            // 0x2E44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData55[0x3];                                       // 0x2E45(0x0003) MISSED OFFSET
	struct FVector                                     initial_mesh_translation_offset;                          // 0x2E48(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    initial_mesh_rotation_offset;                             // 0x2E54(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               enable_wobble_through_code;                               // 0x2E60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Doing_Trick_1;                                         // 0x2E61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Doing_Trick_2;                                         // 0x2E62(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData56[0x5];                                       // 0x2E63(0x0005) MISSED OFFSET
	double                                             last_time_started_trick;                                  // 0x2E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ground_particle_rot_offset;                               // 0x2E70(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DEBUG_ENABLE_WOBBLE;                                      // 0x2E7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Doing_Trick_3;                                         // 0x2E7D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Doing_Trick_4;                                         // 0x2E7E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData57[0x1];                                       // 0x2E7F(0x0001) MISSED OFFSET
	struct FRotator                                    predicted_next_control_rot;                               // 0x2E80(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     last_velocity_before_going_into_the_air;                  // 0x2E8C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               rider_has_correct_animbp;                                 // 0x2E98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData58[0x3];                                       // 0x2E99(0x0003) MISSED OFFSET
	struct FVector                                     replicated_aim_direction;                                 // 0x2E9C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              boosting_in_air_blend_amount;                             // 0x2EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData59[0x4];                                       // 0x2EAC(0x0004) MISSED OFFSET
	double                                             last_time_started_boosting;                               // 0x2EB0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 HudElement_AerialBoostChargeBar;                          // 0x2EB8(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              allowed_duration_to_boost_in_the_air;                     // 0x3008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              boost_in_air_max_recharge_time;                           // 0x300C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     saved_desired_rotation;                                   // 0x3010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              anim_rotation_rate;                                       // 0x301C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              anim_rotation_rate_multiplier;                            // 0x3020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData60[0x4];                                       // 0x3024(0x0004) MISSED OFFSET
	double                                             last_time_reached_max_anim_turn_rate;                     // 0x3028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              boost_in_air_time_before_full_strength;                   // 0x3030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_initially_attached;                                   // 0x3034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData61[0x3];                                       // 0x3035(0x0003) MISSED OFFSET
	struct FRotator                                    rider_rot_offset;                                         // 0x3038(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     rider_loc_offset;                                         // 0x3044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Aerial_Boost_On_Shift_instead_of_Space;                   // 0x3050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData62[0x7];                                       // 0x3051(0x0007) MISSED OFFSET
	double                                             last_time_landed;                                         // 0x3058(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             last_time_started_recharging_aerial_boost;                // 0x3060(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               multicasted_running_state;                                // 0x3068(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData63[0x7];                                       // 0x3069(0x0007) MISSED OFFSET
	class UAnimMontage*                                sail_close_anim;                                          // 0x3070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      has_landed_a_trick_buff;                                  // 0x3078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Landed_Trick;                                         // 0x3080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData64[0x3];                                       // 0x3081(0x0003) MISSED OFFSET
	float                                              Max_Boost_amount_after_landing_a_trick;                   // 0x3084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              trick_buff_speed_multiplier;                              // 0x3088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData65[0x4];                                       // 0x308C(0x0004) MISSED OFFSET
	double                                             last_time_landed_trick_clientside;                        // 0x3090(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              current_camera_pitch_acceleration;                        // 0x3098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    last_desired_camera_rot;                                  // 0x309C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               destroyed_by_item;                                        // 0x30A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData66[0x7];                                       // 0x30A9(0x0007) MISSED OFFSET
	class UPrimalItem*                                 spawned_item_ref;                                         // 0x30B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_removed;                                              // 0x30B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData67[0x3];                                       // 0x30B9(0x0003) MISSED OFFSET
	float                                              current_camera_pitch_velocity;                            // 0x30BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              camera_pitch_spring_strength;                             // 0x30C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              camera_pitch_spring_dampening;                            // 0x30C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              spring_pitch_clamp;                                       // 0x30C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    last_calculated_spring_rot;                               // 0x30CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              test_pitch_change;                                        // 0x30D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              hovering_over_water_fuel_consumption_multiplier;          // 0x30DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              aerial_boosting_fuel_consumption_multiplier;              // 0x30E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              trigger_full_boost_fuel_consumption_amount;               // 0x30E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              no_rider_fuel_consumption_multiplier;                     // 0x30E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              additional_passenger_fuel_consumption_multiplier;         // 0x30EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     rider_loc_offset_female;                                  // 0x30F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     landed_camera_translation;                                // 0x30FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Synced_Right;                                             // 0x3108(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              synced_forward;                                           // 0x310C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              current_halted_available_aerial_boost_percent;            // 0x3110(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Delay_Before_Starting_to_Recharge_Boost_in_Air_Time;      // 0x3114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             last_time_request_lower_velocity;                         // 0x3118(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              interval_check_for_lowering_velocity;                     // 0x3120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               aerialboosting_inactive_on_ground;                        // 0x3124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData68[0x3];                                       // 0x3125(0x0003) MISSED OFFSET
	struct FVector                                     replicated_loc;                                           // 0x3128(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              position_sync_lerp_rate;                                  // 0x3134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              camera_lerp_to_velocity_rate;                             // 0x3138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               use_last_set_velocity;                                    // 0x313C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               control_setting__camera_always_follows_behind;            // 0x313D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               free_camera_setting__camera_pitch_still_follows_slope;    // 0x313E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               control_setting__freecam,_independant_board_movement;     // 0x313F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              max_angle_offset_for_free_camera_left_and_right_turn;     // 0x3140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               server_holding_spin_button;                               // 0x3144(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData69[0x3];                                       // 0x3145(0x0003) MISSED OFFSET
	float                                              last_held_forced_rotate_direction;                        // 0x3148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               client_holding_spin_button;                               // 0x314C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Button_Config__C_Spins;                                   // 0x314D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               client_holding_crouch_button;                             // 0x314E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               client_holding_follow_camera_button;                      // 0x314F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               button_config__C_Does_Low_Friction_Freespin;              // 0x3150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               button_config__C_does_Follow_Camera;                      // 0x3151(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               button_config__C_Does_Tricks;                             // 0x3152(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               button_config__right_click_spins;                         // 0x3153(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               button_config__right_click_does_low_friction_freespin;    // 0x3154(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               button_config__right_click_does_follow_camera;            // 0x3155(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               button_config__right_click_does_tricks;                   // 0x3156(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               button_config__Left_Click_Spins;                          // 0x3157(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               button_config__Left_Click_Does_Low_Friction_Freespin;     // 0x3158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               button_config__Left_Click_Does_Follow_Camera;             // 0x3159(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               button_config__Left_Click_Does_tricks;                    // 0x315A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_started_trick_in_air;                                 // 0x315B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              turn_rate_when_holding_left_or_right_during_spin;         // 0x315C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               control_setting__freecam,_independant_board_movement_unless_pressing_forward;// 0x3160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               control_setting__freecam,_board_moves_in_camera_direction;// 0x3161(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData70[0x2];                                       // 0x3162(0x0002) MISSED OFFSET
	float                                              animbp_turn_rotation_rate;                                // 0x3164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fallback_animbp_turn_rate_when_desired_rot_is_compared_to_current_forward;// 0x3168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_drifting;                                              // 0x316C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData71[0x3];                                       // 0x316D(0x0003) MISSED OFFSET
	double                                             last_time_started_drifting;                               // 0x3170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              min_amount_of_drifting_time_needed_to_boosting;           // 0x3178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              time_after_stopping_drift_to_be_able_to_boost;            // 0x317C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    saved_camera_forward__desired_rot_;                       // 0x3180(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData72[0x4];                                       // 0x318C(0x0004) MISSED OFFSET
	double                                             Last_time_drift_boosted;                                  // 0x3190(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              trigger_drift_boost_fuel_consumption_amount;              // 0x3198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              allowed_time_between_drift_boosts;                        // 0x319C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              turn_percentage_needed_to_detect_a_drift_turn;            // 0x31A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData73[0x4];                                       // 0x31A4(0x0004) MISSED OFFSET
	class UClass*                                      woosh_lines_buff;                                         // 0x31A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              drift_boost_strength_min;                                 // 0x31B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               allowed_to_boost_without_stopping_drift_turn;             // 0x31B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData74[0x3];                                       // 0x31B5(0x0003) MISSED OFFSET
	float                                              drift_boost_strength_max;                                 // 0x31B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              saved_drift_duration;                                     // 0x31BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              time_until_drift_max_boost;                               // 0x31C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              tricks_performed_boost_bonus;                             // 0x31C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_Stepped_Drift_Amount_instead_of_smooth_gradiant;      // 0x31C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData75[0x7];                                       // 0x31C9(0x0007) MISSED OFFSET
	TArray<struct FLinearColor>                        Stepped_Drift_Boost_Colors;                               // 0x31D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              boost_percentage_bonus_for_completing_a_held_trick;       // 0x31E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              boost_percentage_bonus_for_completing_a_one_shot_trick;   // 0x31E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              boost_percentage_bonus_for_competing_a_360;               // 0x31E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       completed_trick_particle_attach_socket;                   // 0x31EC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData76[0x4];                                       // 0x31F4(0x0004) MISSED OFFSET
	class UParticleSystem*                             completed_trick_particle_template;                        // 0x31F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              required_duration_for_held_trick_to_count_for_bonus;      // 0x3200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              required_duration_for_trick_2_to_count_for_bonus;         // 0x3204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              required_duration_for_trick_1_to_count_for_bonus;         // 0x3208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              amount_of_aerial_boost_percentage_to_add_on_successful_one_shot_trick;// 0x320C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              amount_of_aerial_boost_percentage_to_add_on_successful_held_trick;// 0x3210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              amount_of_aerial_boost_percentage_to_add_on_successful_360;// 0x3214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Total_tricks_performed_Aerial_Boost_Amount;               // 0x3218(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              max_possible_aerial_boost_amount_from_tricks;             // 0x321C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     last_actor_forward_before_jumping;                        // 0x3220(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               trick_angle_detection__is_facing_forward;                 // 0x322C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               trick_angle_detection__is_facing_back_left;               // 0x322D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               trick_angle_detection__is_facing_back_right;              // 0x322E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               a_third_way_through_left_turn;                            // 0x322F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _2_third_way_through_left_turn;                           // 0x3230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               a_third_way_through_right_turn;                           // 0x3231(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _2_third_way_through_right_turn;                          // 0x3232(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               button_config__right_click_does_drift;                    // 0x3233(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               button_config__C_Does_drift;                              // 0x3234(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               button_config__Left_Click_Does_drift;                     // 0x3235(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               client_holding_held_drift_button;                         // 0x3236(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               server_holding_held_drift_button;                         // 0x3237(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              speed_multiplier_while_holding_drift_button_down;         // 0x3238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              last_held_direction_before_drift;                         // 0x323C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              angle_offset_when_drifting;                               // 0x3240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              drift_held_turn_rate;                                     // 0x3244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              amount_to_rotate_the_player_while_holding_drift;          // 0x3248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData77[0x4];                                       // 0x324C(0x0004) MISSED OFFSET
	double                                             last_time_started_holding_dash;                           // 0x3250(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     actor_forward_when_starting_holding_drift;                // 0x3258(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              saved_last_right_input_value_for_drift;                   // 0x3264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              multiplier_for_turn_rate_while_drifting_if_holding_in_same_direction;// 0x3268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              multiplier_for_turn_rate_while_drifting_if_holding_opposite_direction;// 0x326C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    drift_camera_shake_max_distance;                          // 0x3270(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              drift_camera_shake_speed;                                 // 0x327C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                current_boost_tier;                                       // 0x3280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               boost_on_button_release;                                  // 0x3284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Drifting_And_Facing_Acute_Angle;                       // 0x3285(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData78[0x2];                                       // 0x3286(0x0002) MISSED OFFSET
	float                                              upon_releasing_drift_and_going_straight,_how_much_should_we_turn_in_the_direction_drifting;// 0x3288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration_After_Drift_To_Retain_Velocity;                  // 0x328C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              acceptable_angle_to_allow_boosting_off_a_ramp_when_just_normally_jumping;// 0x3290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              follow_speed_limit;                                       // 0x3294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              passed_in_follow_distance_to_stop_within;                 // 0x3298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BoostBarColor_Default;                                    // 0x329C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BoostBarColor_BoostGained;                                // 0x32AC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BonusAccumulatingTextColor;                               // 0x32BC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BonusAwardedTextColor;                                    // 0x32CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostChargeToTrickScoreConversionMultiplier;              // 0x32DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DurationToShowBonusBoostAfterLanding;                     // 0x32E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DurationToShowAccumulatingTrickScore;                     // 0x32E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxBoostChargeTextScale;                                  // 0x32E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBoostChargeTextScale;                                  // 0x32EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrickScoreTextDestinationY;                               // 0x32F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FullBoostBarColor_NotReady;                               // 0x32F4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FullBoostBarColor_Ready;                                  // 0x3304(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData79[0x4];                                       // 0x3314(0x0004) MISSED OFFSET
	struct FHUDElement                                 HudElement_BoostLabelText;                                // 0x3318(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 HudElement_BoostChargePercentText;                        // 0x3468(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 HudElementTemplate_TrickScoreText;                        // 0x35B8(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              current_fov;                                              // 0x3708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fov_increase_on_boost;                                    // 0x370C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              boost_fov_lerp_in;                                        // 0x3710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              boost_fov_lerp_out;                                       // 0x3714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              speed_boost_after_drifting;                               // 0x3718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration_Of_Increased_Speed_After_Drifting;               // 0x371C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               gain_boost_on_trick_performing_instead_of_on_landing;     // 0x3720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_set_item_ref;                                         // 0x3721(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData80[0x6];                                       // 0x3722(0x0006) MISSED OFFSET
	class UClass*                                      hoversail_anim_bp;                                        // 0x3728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               allow_autorepairing;                                      // 0x3730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Begun_Movement;                                       // 0x3731(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               holding_back;                                             // 0x3732(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData81[0x5];                                       // 0x3733(0x0005) MISSED OFFSET
	class FString                                      no_fuel_string;                                           // 0x3738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              delay_before_lerping_to_weapon_out_location;              // 0x3748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              time_after_close_anim_before_attaching_player_to_socket;  // 0x374C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              time_after_opening_sail_to_attach_to_socket;              // 0x3750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              delay_before_lerping_to_sail_open_location;               // 0x3754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 FuelHUDElement;                                           // 0x3758(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                HUDTextColor_Default;                                     // 0x38A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor_Critical;                                    // 0x38B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor_Low;                                         // 0x38C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FuelHUDBackgroundColor_Default;                           // 0x38D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FuelHUDBackgroundColor_Critical;                          // 0x38E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FuelHUDBackgroundColor_Low;                               // 0x38F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Awaiting_Mounting;                                        // 0x3908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData82[0x3];                                       // 0x3909(0x0003) MISSED OFFSET
	float                                              Time_Between_Hit_Sparks_Spawn;                            // 0x390C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Collision_VFX_should_scrape_constantly;                   // 0x3910(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData83[0x7];                                       // 0x3911(0x0007) MISSED OFFSET
	class UClass*                                      RiderBuff;                                                // 0x3918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              scraping_vfx_velocity_threshold;                          // 0x3920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              impact_threshold_for_slowing_down;                        // 0x3924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeStartSelfDestruction;                             // 0x3928(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              SelfDestructTimer;                                        // 0x3930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Self_Destruct_HUD_Text_Offset_Y;                          // 0x3934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Self_Destruct_HUD_Text_Padding_Y;                         // 0x3938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Self_Destruct_HUD_Draw_Scale;                             // 0x393C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      Self_Destruct_Text;                                       // 0x3940(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class APlayerController*                           spawning_character;                                       // 0x3950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                pickup_multiuse;                                          // 0x3958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData84[0x4];                                       // 0x395C(0x0004) MISSED OFFSET
	class UClass*                                      Hoversail_Class;                                          // 0x3960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                original_spawner_player_id;                               // 0x3968(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               can_be_picked_up;                                         // 0x396C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData85[0x3];                                       // 0x396D(0x0003) MISSED OFFSET
	class UAnimMontage*                                passenger_no_weapon_pose;                                 // 0x3970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                _1_handed_passenger_anim;                                 // 0x3978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                _2_handed_passenger_anim;                                 // 0x3980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              no_rider_damage_multiplier;                               // 0x3988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData86[0x4];                                       // 0x398C(0x0004) MISSED OFFSET
	class UAnimMontage*                                passenger_no_weapon_pose_Female;                          // 0x3990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                _1_handed_passenger_anim_Female;                          // 0x3998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                _2_handed_passenger_anim_Female;                          // 0x39A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Holding_Trick_Button;                                  // 0x39A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData87[0x3];                                       // 0x39A9(0x0003) MISSED OFFSET
	float                                              aerial_boost_rotation_rate_mult;                          // 0x39AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              regular_braking_decelearation_flying;                     // 0x39B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              regular_max_acceleration;                                 // 0x39B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class FString>                              SkiffWhitelistedBuffClassesSoft;                          // 0x39B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              StrafeInputScale;                                         // 0x39C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData88[0x4];                                       // 0x39CC(0x0004) MISSED OFFSET
	class USoundBase*                                  HoverIdleSFX;                                             // 0x39D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HoverMoveSFX;                                             // 0x39D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HoverBoostSFX;                                            // 0x39E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  StopMoveSFX;                                              // 0x39E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  StopBoostSFX;                                             // 0x39F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  JumpSFX;                                                  // 0x39F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FailedBoostSFX;                                           // 0x3A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AerialBoostPitchMultiplier;                               // 0x3A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData89[0x4];                                       // 0x3A0C(0x0004) MISSED OFFSET
	class USoundBase*                                  LandedTrickSFX;                                           // 0x3A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFadingSpinSound;                                       // 0x3A18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData90[0x7];                                       // 0x3A19(0x0007) MISSED OFFSET
	struct FHUDElement                                 HudElementTemplate_TrickNameText;                         // 0x3A20(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                      AccumulatedTrickName;                                     // 0x3B70(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	class FString                                      Trick1Name;                                               // 0x3B80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      Trick2Name;                                               // 0x3B90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      Trick3Name;                                               // 0x3BA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      Trick4Name;                                               // 0x3BB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        AccumulatedTrickIndices;                                  // 0x3BC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ReadyToDisplayTrickActivationText;                        // 0x3BD0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasTrickActivationRichTextOverlay;                        // 0x3BD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData91[0x6];                                       // 0x3BD2(0x0006) MISSED OFFSET
	class AShooterHUD*                                 RiderHUD;                                                 // 0x3BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FHUDRichTextOverlayData                     TrickActivationRichTextOverlay;                           // 0x3BE0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	double                                             LastTrickActivationAddedTime;                             // 0x3C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrickActivationTextDisplayTime;                           // 0x3C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasStartedTrickThisRide;                                  // 0x3C4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugDisableForcedLocation;                              // 0x3C4D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               moving_left_or_right;                                     // 0x3C4E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               client_holding_trick_button;                              // 0x3C4F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               holding_forward;                                          // 0x3C50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData92[0x3];                                       // 0x3C51(0x0003) MISSED OFFSET
	int                                                TrailFXColorRegion;                                       // 0x3C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccumulatedTrickStyleMultiplier;                          // 0x3C58(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData93[0x4];                                       // 0x3C5C(0x0004) MISSED OFFSET
	class FString                                      SpinHintText;                                             // 0x3C60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      PerformTricksHintText;                                    // 0x3C70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ReduceFrequencyOfTrickActivationTextDisplay;              // 0x3C80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasTrickHintRichTextOverlay;                              // 0x3C81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData94[0x6];                                       // 0x3C82(0x0006) MISSED OFFSET
	struct FHUDRichTextOverlayData                     TrickHintRichTextOverlay;                                 // 0x3C88(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ReadyToDisplayTrickHintText;                              // 0x3CE8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData95[0x3];                                       // 0x3CE9(0x0003) MISSED OFFSET
	struct FRotator                                    LastCameraRotation;                                       // 0x3CEC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraRotationLerpAlpha;                                  // 0x3CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData96[0x4];                                       // 0x3CFC(0x0004) MISSED OFFSET
	class AShooterWeapon*                              PreviousWeapon;                                           // 0x3D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowShowingTrickHintText;                                // 0x3D08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_in_zero_g;                                             // 0x3D09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData97[0x2];                                       // 0x3D0A(0x0002) MISSED OFFSET
	float                                              difference_between_velocity_and_desired_angle_animbp_turn_multiplier;// 0x3D0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               uses_zero_g_logic;                                        // 0x3D10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData98[0x7];                                       // 0x3D11(0x0007) MISSED OFFSET
	class FString                                      ZoomInReleasedString;                                     // 0x3D18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ZoomInPressedString;                                      // 0x3D28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      UsePressed_ControllerString;                              // 0x3D38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      UseReleased_ControllerString;                             // 0x3D48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AccessInventoryPressedString;                             // 0x3D58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AccessInventoryReleasedString;                            // 0x3D68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ModifierReleased_Controller_GamepadString;                // 0x3D78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      FirePressed_ControllerString;                             // 0x3D88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TargetingPressed_ControllerString;                        // 0x3D98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      FireReleased_ControllerString;                            // 0x3DA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TargetingReleased_ControllerString;                       // 0x3DB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TargetingReleasedString;                                  // 0x3DC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x3DD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x3DD9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x3DDA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bFromImpact;                           // 0x3DDB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x3DDC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x3DDD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x3DDE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x3DDF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x3DE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x3DE1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLoadingSaveGame_ReturnValue;                   // 0x3DE2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_ByteByte_ReturnValue;                    // 0x3DE3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffHoverState>                K2Node_CustomEvent_NewState2;                             // 0x3DE4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffHoverState>                K2Node_CustomEvent_PreviousState;                         // 0x3DE5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffHoverState>                K2Node_CustomEvent_NewState;                              // 0x3DE6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue5;                           // 0x3DE7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x3DE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x3DE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_UpdateSyncedFuelAmount_bWasChanged;              // 0x3DEA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x3DEB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData99[0x4];                                       // 0x3DEC(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x3DF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue6;                           // 0x3DF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPressed;                              // 0x3DF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_ByteByte_ReturnValue2;                   // 0x3DFA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x3DFB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsGameInputAllowed_ReturnValue;                  // 0x3DFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bNewState;                             // 0x3DFD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue7;                           // 0x3DFE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x3DFF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_ByteByte_ReturnValue3;                   // 0x3E00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData100[0x3];                                      // 0x3E01(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Percent;                               // 0x3E04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0x3E08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue8;                           // 0x3E09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x3E0A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPressed2;                             // 0x3E0B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bLanding;                              // 0x3E0C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue9;                           // 0x3E0D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x3E0E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NewFlight;                             // 0x3E0F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_MoveInputs;                            // 0x3E10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x3E1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x3E20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x3E24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X2;                                  // 0x3E28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x3E2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x3E30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x3E34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x3E40(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_VectorVector_ReturnValue;               // 0x3E4C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue10;                          // 0x3E4D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData101[0x2];                                      // 0x3E4E(0x0002) MISSED OFFSET
	class FString                                      K2Node_Event_InputName;                                   // 0x3E50(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_CustomEvent_bFly;                                  // 0x3E60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchString_CmpSuccess;                           // 0x3E61(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue;                   // 0x3E62(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x3E63(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x3E64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x3E65(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x3E66(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x3E67(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x3E68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x3E70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData102[0x3];                                      // 0x3E71(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_GetControlRotation_ReturnValue;                  // 0x3E74(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x3E80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x3E84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x3E88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x3E8C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x3E98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x3E99(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_is_open;                               // 0x3E9A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData103[0x1];                                      // 0x3E9B(0x0001) MISSED OFFSET
	float                                              CallFunc_BreakRot_Pitch2;                                 // 0x3E9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw2;                                   // 0x3EA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll2;                                  // 0x3EA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X3;                                  // 0x3EA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y3;                                  // 0x3EAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z3;                                  // 0x3EB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Aiming_Direction;                      // 0x3EB4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue11;                          // 0x3EC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue5;                  // 0x3EC1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x3EC2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData104[0x5];                                      // 0x3EC3(0x0005) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x3EC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x3ED0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData105[0x7];                                      // 0x3ED1(0x0007) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x3ED8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x3EE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_VectorVector_ReturnValue;             // 0x3EE1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData106[0x2];                                      // 0x3EE2(0x0002) MISSED OFFSET
	float                                              K2Node_CustomEvent_Synced_Right;                          // 0x3EE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Synced_Fwd;                            // 0x3EE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x3EEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_FloatFloat_ReturnValue;                 // 0x3EED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x3EEE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_FloatFloat_ReturnValue2;                // 0x3EEF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x3EF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData107[0x3];                                      // 0x3EF1(0x0003) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x3EF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x3EF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue;                    // 0x3EFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData108[0x3];                                      // 0x3EFD(0x0003) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x3F00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x3F04(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue2;                   // 0x3F05(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x3F06(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData109[0x1];                                      // 0x3F07(0x0001) MISSED OFFSET
	float                                              CallFunc_K2_GetTimerRemainingTime_ReturnValue;            // 0x3F08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x3F0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue3;                // 0x3F10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x3F14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue3;                   // 0x3F18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData110[0x3];                                      // 0x3F19(0x0003) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue4;                // 0x3F1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x3F20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue4;                   // 0x3F21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x3F22(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData111[0x1];                                      // 0x3F23(0x0001) MISSED OFFSET
	float                                              CallFunc_K2_GetTimerRemainingTime_ReturnValue2;           // 0x3F24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x3F28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_K2_GetTimerRemainingTime_ReturnValue3;           // 0x3F2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue5;                   // 0x3F30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData112[0x3];                                      // 0x3F31(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x3F34(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x3F38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData113[0x3];                                      // 0x3F39(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_boost_direction;                       // 0x3F3C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_forward_boost;                         // 0x3F48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData114[0x3];                                      // 0x3F49(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x3F4C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue2;                      // 0x3F58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Percentage2;                           // 0x3F60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData115[0x4];                                      // 0x3F64(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x3F68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue;                  // 0x3F70(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x3F80(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x3F90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData116[0x3];                                      // 0x3F91(0x0003) MISSED OFFSET
	float                                              CallFunc_Get_Aerial_Charge_Meter_Amount_ReturnValue;      // 0x3F94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue3;                    // 0x3F98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue6;                   // 0x3F99(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData117[0x2];                                      // 0x3F9A(0x0002) MISSED OFFSET
	float                                              CallFunc_K2_GetTimerRemainingTime_ReturnValue4;           // 0x3F9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Percentage;                            // 0x3FA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode2;               // 0x3FA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData118[0x3];                                      // 0x3FA5(0x0003) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x3FA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x3FAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData119[0x3];                                      // 0x3FAD(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x3FB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue2;                                // 0x3FB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x3FB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue2;              // 0x3FBC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData120[0x3];                                      // 0x3FBD(0x0003) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue5;                // 0x3FC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x3FC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue4;                    // 0x3FC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData121[0x3];                                      // 0x3FC9(0x0003) MISSED OFFSET
	float                                              CallFunc_Get_Aerial_Charge_Meter_Amount_ReturnValue2;     // 0x3FCC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue7;                   // 0x3FD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue5;                    // 0x3FD1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData122[0x2];                                      // 0x3FD2(0x0002) MISSED OFFSET
	float                                              CallFunc_K2_GetTimerRemainingTime_ReturnValue5;           // 0x3FD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode3;               // 0x3FD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x3FD9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData123[0x2];                                      // 0x3FDA(0x0002) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x3FDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x3FE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X4;                                  // 0x3FE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y4;                                  // 0x3FE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z4;                                  // 0x3FEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x3FF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x3FF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x3FF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x3FFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue6;                // 0x4000(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x4004(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x4008(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue3;                         // 0x400C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue6;                    // 0x4018(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData124[0x3];                                      // 0x4019(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X5;                                  // 0x401C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y5;                                  // 0x4020(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z5;                                  // 0x4024(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue5;                     // 0x4028(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue6;                     // 0x402C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue7;                     // 0x4030(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue2;                            // 0x4034(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FBPNetExecParams                            K2Node_MakeStruct_BPNetExecParams;                        // 0x4040(0x0040) (Transient, DuplicateTransient)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue2;                 // 0x4080(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x4088(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x4089(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData125[0x2];                                      // 0x408A(0x0002) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetComponentRotation_ReturnValue;             // 0x408C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetWorldLocation_ReturnValue;                    // 0x4098(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue2;              // 0x40A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData126[0x3];                                      // 0x40A5(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_BPGetRiderSocket_ReturnValue;                    // 0x40A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_NameToString_ReturnValue;                   // 0x40B0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0x40C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetSocketRotation_ReturnValue;                   // 0x40CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VLerp_ReturnValue;                               // 0x40D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_RLerp_ReturnValue;                               // 0x40E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x40F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_TimeSince_Network_ReturnValue;                   // 0x40F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue7;                    // 0x40FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData127[0x3];                                      // 0x40FD(0x0003) MISSED OFFSET
	class FString                                      CallFunc_SelectString_ReturnValue;                        // 0x4100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue3;              // 0x4110(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData128[0x3];                                      // 0x4111(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_Conv_StringToName_ReturnValue;                   // 0x4114(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BPGetRiderSocket_ReturnValue2;                   // 0x411C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetComponentRotation_ReturnValue2;            // 0x4124(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_NameToString_ReturnValue2;                  // 0x4130(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_GetWorldLocation_ReturnValue2;                   // 0x4140(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue4;              // 0x414C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData129[0x3];                                      // 0x414D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue2;                  // 0x4150(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetSocketRotation_ReturnValue2;                  // 0x415C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VLerp_ReturnValue2;                              // 0x4168(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_RLerp_ReturnValue2;                              // 0x4174(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue2;            // 0x4180(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue3;            // 0x4188(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x4190(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue4;                         // 0x419C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue5;                         // 0x41A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x41B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x41C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue2;              // 0x41C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData130[0x4];                                      // 0x41D4(0x0004) MISSED OFFSET
	TArray<class AActor*>                              K2Node_MakeArray_Array;                                   // 0x41D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsServer_ReturnValue12;                          // 0x41E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData131[0x7];                                      // 0x41E9(0x0007) MISSED OFFSET
	struct FHitResult                                  CallFunc_VTraceSingleBP_IgnoreActorsArray_OutHit;         // 0x41F0(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_VTraceSingleBP_IgnoreActorsArray_ReturnValue;    // 0x4278(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData132[0x3];                                      // 0x4279(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x427C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x4288(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x4294(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x42A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData133[0x4];                                      // 0x42AC(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x42B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x42B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x42C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x42C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x42D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x42D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData134[0x3];                                      // 0x42D5(0x0003) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue4;            // 0x42D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_DoubleDouble_ReturnValue;               // 0x42E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsInStatusState_ReturnValue;                     // 0x42E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue10;                       // 0x42E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData135[0x5];                                      // 0x42E3(0x0005) MISSED OFFSET
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue;                 // 0x42E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x42F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue2;                // 0x42F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue2;                  // 0x4300(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsSkiffRunning_bResult;                          // 0x4308(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue2;                  // 0x4309(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue3;                  // 0x430A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x430B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue4;                  // 0x430C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x430D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue5;                  // 0x430E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x430F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue6;                  // 0x4310(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue5;                          // 0x4311(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue7;                  // 0x4312(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue6;                          // 0x4313(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue8;                  // 0x4314(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue7;                          // 0x4315(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue9;                  // 0x4316(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue10;                 // 0x4317(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue8;                          // 0x4318(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue9;                          // 0x4319(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue11;                 // 0x431A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue10;                         // 0x431B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue12;                 // 0x431C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue11;                         // 0x431D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue12;                         // 0x431E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData136[0x1];                                      // 0x431F(0x0001) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x4320(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x4330(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	class UParticleSystemComponent*                    CallFunc_Array_Set_Item_RefProperty;                      // 0x4340(0x0008) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekHoverSail_Character_BP.TekHoverSail_Character_BP_C");
		return ptr;
	}


	struct FRotator BPCameraRotationFinal(class APrimalCharacter** viewingCharacter, struct FRotator* InCurrentFinalRot);
	void Clear_Trick_Hint_Text();
	void Add_Trick_Hint_Text();
	void BPOnRefreshColorization(TArray<struct FLinearColor>* Colors);
	void Client_Holds_Trick_Button___direction_variant();
	bool BPOverrideFPVViewLocation(class APrimalCharacter** viewingCharacter);
	struct FVector BPGetFPVViewLocation(class APrimalCharacter** viewingCharacter);
	void ClearTrickActivationText();
	void STATIC_Add_Trick_Activation_Text();
	void ResetAccumulatedTricks();
	void STATIC_Add_To_Accumulated_Trick(int TrickIndexToAdd);
	void HandleThrusterSFX();
	void DeactivateGroundFX();
	void HandleCrouch(bool bWasReleased);
	void GetTotalFuelUnits(int* NewParam);
	void try_refill_from_inventory(class UPrimalInventoryComponent* InputPin, bool* Ret);
	void BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex);
	void Delaymount();
	bool BPHandleUseButtonPress(class AShooterPlayerController** RiderController);
	void is_FPV(class AShooterCharacter* InputPin, bool* NewParam);
	void spawn_collision_sparks_vfx(const struct FVector& hit_norm, const struct FVector& hit_location, float impact_strength);
	void Restricted_Sparks_Spawn_Rate();
	void Attach_Player_To_Sail_Open_Socket_Location();
	void Lerp_To_Sail_Open_Socket_Location();
	void Lerp_To_Weapon_Out_Location();
	void Attach_Player_To_Weapon_Out_Location();
	void BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex);
	void STATIC_Client_Halt_Hoversail();
	void destroy_if_item_reference_is_gone();
	void Duration_After_Drifting_To_Have_Increased_Speed();
	void destroy_itself();
	void BPTriggerStasisEvent();
	void Trick_Score_Display_Timer();
	void BoostBonusDisplayTimer();
	void Shortly_After_Clearing();
	void Time_After_Drift_To_Retain_Velocity();
	bool is_player_holding_drift();
	void STATIC_Client_Presses_Held_Drift_Button();
	void STATIC_Client_Releases_Held_Drift_Button();
	void set_up_everything_for_detecting_tricks_in_the_air();
	void Completed_360_in_air();
	void Completed_Held_Trick_for_Bonus();
	void Completed_One_Shot_Trick_For_Bonus();
	void Is_Shortly_After_Drift_Boost();
	void Can_Request_Drift_Boost(bool* Result);
	void Request_drift_boost();
	void Request_Boost_After_Drift();
	void Allowed_Time_After_Stopping_Drift_To_Be_Able_To_Boost();
	void client_releases_trick_button();
	void client_holds_trick_button();
	void Client_Releases_camera_button();
	void Client_Holds_camera_button();
	void Client_Presses_FreeSpin_Button();
	void Client_Releases_FreeSpin_Button();
	void client_releases_spin_button();
	void Client_Holds_Spin_Button();
	void ReceiveTick(float* DeltaSeconds);
	bool Is_Player_Currently_Holding_And_Able_To_Aerial_Boost();
	void Delay_Before_Starting_To_Recharge_Boost_In_Air();
	void Aerial_Boost_Drain();
	void Recharge_Aerial_Boost();
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	bool Is_Aerial_Boosting_Active_Not_pure();
	bool is_cliff_diving();
	bool Is_Near_Ground_not_pure();
	void BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV);
	void can_boost_forward_on_landing_trick(bool* Has_Landed_Trick);
	void can_request_full_boost(bool* Result);
	float BPGetGravityZScale();
	void Finished_Putting_Sail_Down();
	bool Is_Aerial_Boosting_Active();
	bool can_aerial_boost();
	float Get_Aerial_Charge_Meter_Amount();
	void finished_aerial_boost_timer_completely();
	void reset_aerial_boost(bool ignore_time_constraint);
	void Finish_Aerial_Boost();
	void begin_aerial_boosting();
	void Release_Holding_Tricks();
	void request_full_boost();
	void does_skiff_want_to_run(bool* wants_to_run);
	void ThrottledTick();
	bool is_near_ground();
	void Reset_Hold_Forward();
	void Reset_Hold_Right();
	void STATIC_RidingTick(float* DeltaSeconds);
	struct FName BPGetRiderSocket();
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	bool EnableTurnToFaceRotation();
	void ModifySkiffHorizontalInputs(const struct FVector& Input, struct FVector* NewInput);
	void GetCurrentHoverFloorZ(bool bUseAverage, bool* bValidFloor, float* FloorZ);
	void GetHoverSlopeDeltaRatio_PURE(bool bAdjustWithMax, float* Ratio);
	void GetHoverSlopeDeltaRatio(bool bAdjustWithMax, float* Ratio);
	void STATIC_DoHoverSlopeCheck();
	bool BPCanCryo(class AShooterPlayerController** ForPC);
	void IsSkiffRepairModeCooldownActive(bool* bResult, bool* bIsPost, float* RemainingTime);
	void IsSkiffRepairDisabledFromDamage(bool* bResult, float* RemainingTime);
	bool BPAcknowledgeServerCorrection(float* TimeStamp, struct FVector* NewLoc, struct FVector* NewVel, class UPrimitiveComponent** NewBase, struct FName* NewBaseBoneName, bool* bHasBase, bool* bBaseRelativePosition, unsigned char* ServerMovementMode);
	bool STATIC_BPOnStopJump();
	bool STATIC_BPOnStartJump();
	void BPNotifyToggleHUD(bool* bHudHidden);
	void CalculateTotalAlternateFuel(float* TotalAltFuel);
	void STATIC_GetRepairModeHudMessage(class FString* Message, struct FLinearColor* Color);
	void Tick_ManageDamageFX();
	void NetSetCachedLandedRootRotationOffset(const struct FRotator& NewOffset);
	void BP_OnBasedPawnRemovedNotify(class AActor** RemovedActor);
	void BP_OnBasedPawnAddedNotify(class AActor** AddedActor);
	void GetFuelConversionRateForClass(class UClass* ForClass, float* Rate);
	void OnSkiffRepairModeStateChanged(bool bNewState);
	void NetSetSkiffRepairModeActive(bool bNewActive);
	void CanSkiffUseRepairMode(bool bForStart, bool* bResult);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void Get_Repair_Mode_Hud_Message_PURE(class FString* Message, struct FLinearColor* Color);
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void Tick_ManageAutoRepair();
	bool BP_ForceAllowAddBuff(class UClass** BuffClass);
	void BlueprintPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	bool STATIC_BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void ConsumeFuel(float amount, bool MulticastFuel);
	void HasEnoughFuel(float RequiredFuel, bool* bResult);
	void TryRefillCurrentFuelUnit(bool* bSuccess);
	void HasAnyFuel(bool* bResult, float* CurrentFuel);
	void BPInventoryItemDropped(class UObject** InventoryItemObject);
	void BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem);
	void OnSkiffInventoryUpdated(class UPrimalItem* UpdatedItem);
	void BPSetupTamed(bool* bWasJustTamed);
	void DisableLevelUps();
	void BSetupDinoTameable();
	void Tick_ShowDropDinoIndicator();
	void GetSkiffAcceleration(struct FVector* NewParam);
	void IsValidHoverTraceHit(struct FHitResult* ForHit, bool* bResult);
	void IsSkiffRunning(bool* bResult);
	void BP_OnSetRunning(bool* bNewIsRunning);
	void OnReceiveSkiff2dMovementInput(float InputAxisVal, bool bright, bool* bShouldIntercept);
	bool BPCanBeBaseForCharacter(class APawn** Pawn);
	struct FVector BPGetRiderUnboardDirection(class APrimalCharacter** RidingCharacter);
	struct FVector BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter);
	void CanHover(bool bForStart, bool* bResult);
	void BP_OnTamedOrderReceived(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted);
	void WantsToFlyUp(bool* bResult);
	void Tick_CheckSkiffInputs();
	void UpdateSyncedFuelAmount(bool* bWasChanged);
	void GetSkiffBlockersTraceIgnoreActors(TArray<class AActor*>* IgnoreActors);
	void Tick_ManageSkiffCamera();
	void IsPhysicsVolumeLava(class APhysicsVolume* CheckVolume, bool* bIsLava);
	void CanSkiffTryToTrulyLand(const struct FVector& WithFlyingVelocity, bool* bResult);
	void BP_OnStartLandFailed(int* ReasonIndex);
	void ResetSkiffInputs();
	void GetEnvironmentalParticleTraceDistance(const struct FName& ForSocketName, float* TraceDist);
	void ReceiveDestroyed();
	void Tick_ManageHoverGroundFX();
	void OnSkiffFailedTakeoff();
	void SetTargetHoverHeight(float NewHeight);
	void UpdateSkiffHoverState();
	void OnSkiffHoverStateChanged(TEnumAsByte<E_HoverSkiffHoverState> NewState, TEnumAsByte<E_HoverSkiffHoverState> PreviousState);
	void NetSetSkiffHoverState(TEnumAsByte<E_HoverSkiffHoverState> NewState);
	float BP_GetCustomModifier_MaxSpeed();
	void GetMinHoverHeight(float* MinHeight);
	void IsSkiffChangingHoverHeight(bool* bResult);
	bool BP_CanFly();
	void Tick_ManageFuel();
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	float BP_OverrideTerminalVelocity();
	void KillSkiff();
	void OnSkiffCrash(bool bFromImpact);
	bool BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	void Tick_Crashing();
	void OnSkiffStartedCrashing();
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void UpdateOwningClientReplicatedInputs();
	void SetSkiffMovementInputAxisValue(int Axis, float Newval);
	bool BP_InterceptMoveRight(float* AxisValue);
	bool BP_InterceptMoveForward(float* AxisValue);
	struct FVector BPModifyRightDirectionInput(struct FVector* directionInput);
	bool BPShouldLimitRightDirection();
	bool BP_AllowWalkableSlopeOverride(class UPrimitiveComponent** ForComponent);
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void OnSkiffSetFlight(bool bFly);
	void BPOnSetFlight(bool* bFly);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void DoSkiffHoverTraces(bool bForceTraces);
	void OnLanded(struct FHitResult* Hit);
	void OnSkiffLandingStageChanged(bool bLanding);
	void BP_OnStartLandingNotify();
	void CanSendInputRPC(bool* bResult);
	void BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed);
	float BP_GetCustomModifier_RotationRate();
	struct FVector BPOverrideFlyingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	bool BPModifyDesiredRotation(float* DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation);
	void SetForceSkiffDescend(bool Enable);
	void StopHovering();
	void SetTimerIntervals(bool Fast);
	bool BPShouldLimitForwardDirection();
	struct FVector BPModifyForwardDirectionInput(struct FVector* directionInput);
	void BPTimerServer();
	void BPTimerNonDedicated();
	void UserConstructionScript();
	void wobble_timeline__FinishedFunc();
	void wobble_timeline__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void InterceptInputEvent(class FString* InputName);
	void Server_RequestBraking();
	void ReceiveBeginPlay();
	void BPUnstasis();
	void Multi_OnStartSkiffLanding(bool bLanding);
	void Multi_OnSkiffSetFlight(bool bFly);
	void Server_SyncMovementInputs(const struct FVector& MoveInputs);
	void Server_OnFireInputPressed(bool bPressed);
	void Server_OnTargetingInputPressed(bool bPressed);
	void Multi_OnSkiffStartedCrashing();
	void Multi_OnSkiffCrash(bool bFromImpact);
	void DestroySkiff();
	void CrashTimeout();
	void Multi_OnSkiffHoverStateChanged(TEnumAsByte<E_HoverSkiffHoverState> NewState, TEnumAsByte<E_HoverSkiffHoverState> PreviousState);
	void Server_SetSkiffHoverState(TEnumAsByte<E_HoverSkiffHoverState> NewState);
	void Multi_OnSkiffFailedTakeoff();
	void Multi_OnSkiffRepairModeStateChanged(bool bNewState);
	void Multi_SyncFuelPercent(float Percent);
	void Server_SetSkiffFlight(bool NewFlight);
	void Server_StartSkiffLanding();
	void multi_close_sail();
	void multi_open_sail();
	void full_boosted_multicast();
	void open_sail(bool is_open);
	void wobble();
	void resync_anim();
	void Server_SyncAim(const struct FVector& Aiming_Direction);
	void Successfully_Lands_A_Trick();
	void play_camera_impact_on_ground();
	void on_start_aerial_boost();
	void ServerSyncMovementValues(float Synced_Right, float Synced_Fwd);
	void on_recharge_aerial_boost();
	void on_delay_before_recharge_aerial_boost();
	void Drift_Boosted_Multicast(const struct FVector& boost_direction, bool forward_boost);
	void Multicast_completed_trick_in_air();
	void PUBLIC__Add_Aerial_Boost_Charge_Percentage_Amount(float Percentage);
	void multicast_add_aerial_boost_charge(float Percentage);
	void lerp_to_riding_socket();
	void stop_lerp_to_riding_socket();
	void lerp_to_open_sail_socket();
	void stop_lerp_to_open_sail_socket();
	void dismount();
	void Multicast_RefreshColors();
	void MultiTrickActivationText();
	void ExecuteUbergraph_TekHoverSail_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
