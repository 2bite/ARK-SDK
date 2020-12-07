#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tropeognathus_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tropeognathus_Character_BP.Tropeognathus_Character_BP_C
// 0x0D78 (0x2F00 - 0x2188)
class ATropeognathus_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UAudioComponent*                             DiveSound;                                                // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AfterburnerLoop;                                          // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ThrusterLoop;                                             // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    MuzzleFlash;                                              // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Tropeognathus_C* DinoCharacterStatus_BP_Tropeognathus_C1;                  // 0x21A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Right;                                                    // 0x21B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Left;                                                     // 0x21B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TurboJet;                                                 // 0x21C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    OffGas;                                                   // 0x21C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Jet;                                                      // 0x21D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RightTail;                                                // 0x21D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LeftTail;                                                 // 0x21E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLatchingLoc;                                        // 0x21E8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LatchAnimStarted;                                         // 0x21F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x21F5(0x0003) MISSED OFFSET
	double                                             LatchStartTime;                                           // 0x21F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldFaceLatchingObject;                                 // 0x2200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUnLatchingComplete;                                     // 0x2201(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x2202(0x0002) MISSED OFFSET
	struct FVector                                     LatchingDirection;                                        // 0x2204(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LatchingSurfaceNormal;                                    // 0x2210(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x221C(0x0004) MISSED OFFSET
	class APrimalStructure*                            LatchingStructure;                                        // 0x2220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanLatchOnGround;                                         // 0x2228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartControllerRotation;                                  // 0x2229(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x222A(0x0002) MISSED OFFSET
	float                                              MaxLatchingAngle;                                         // 0x222C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             UnlatchingStartTime;                                      // 0x2230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchingOffset;                                           // 0x2238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWasFirstPerson;                                          // 0x223C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x223D(0x0003) MISSED OFFSET
	float                                              LatchInCameraTransitionDuration;                          // 0x2240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchOutCameraTransitionDuration;                         // 0x2244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBrakeDinoPressed;                                        // 0x2248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SuperFlight;                                              // 0x2249(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x224A(0x0002) MISSED OFFSET
	struct FVector                                     PrevCameraLoc;                                            // 0x224C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeed;                                        // 0x2258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x225C(0x0004) MISSED OFFSET
	struct FHUDElement                                 SuperFlightIconHUDElement;                                // 0x2260(0x00F8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ServerRightAxisInput;                                     // 0x2358(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuperFlightRightAxisInput;                                // 0x235C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuperFlightRollInterpSpeed;                               // 0x2360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastFrameInterceptMoveRight;                              // 0x2364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuperFlightMaxRollAngle;                                  // 0x2368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraLookDeltaForSuperFlihtQuickTurn;                    // 0x236C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeRequestedSuperFlightQuickTurn;                    // 0x2370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuperFlightQuickTurnCooldown;                             // 0x2378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x237C(0x0004) MISSED OFFSET
	double                                             LastSuperFlightQuickTurn;                                 // 0x2380(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastSuperFlightQuickTurnStartTime;                        // 0x2388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QuickTurnCameraInterpSpeed;                               // 0x2390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuperFlightWalkingSpeedMult;                              // 0x2394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultFOV;                                               // 0x2398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DotProductForDiving;                                      // 0x239C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPercentDiveSpeedForDiving;                             // 0x23A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FOVInterpSpeed;                                           // 0x23A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFoV;                                               // 0x23A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x23AC(0x0004) MISSED OFFSET
	double                                             TimeStartedDive;                                          // 0x23B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DivingCameraShakeScale;                                   // 0x23B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DivingCameraShakeSpeed;                                   // 0x23BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             TimeStoppedDiving;                                        // 0x23C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamedWalkingSpeedMultiplierDiving;                        // 0x23C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPVOffsetDiving;                                          // 0x23CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RiderBuff;                                                // 0x23D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindGustRadius;                                           // 0x23E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugWindGust;                                            // 0x23E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x23E5(0x0003) MISSED OFFSET
	class UClass*                                      WindGustStructureSettingsClassForDamage;                  // 0x23E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WindGustTargetBuff;                                       // 0x23F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindGustForwardOffset;                                    // 0x23F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x23FC(0x0004) MISSED OFFSET
	class UParticleSystem*                             WindGustWindEmitter;                                      // 0x2400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WindGustMontage;                                          // 0x2408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeRequestShootFlakCannon;                           // 0x2410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeTriggeredFlakCannon;                              // 0x2418(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FlakCannonProj;                                           // 0x2420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FlakCannonProjSpawnSocket;                                // 0x2428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeAllyAOECheck;                                     // 0x2430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllyAOERadius;                                            // 0x2438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PercentOfMaxSpeedForAllyAOE;                              // 0x243C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AllyAOEBuff;                                              // 0x2440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllyAOECheckCooldown;                                     // 0x2448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugAllyAOE;                                             // 0x244C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x244D(0x0003) MISSED OFFSET
	float                                              TamedWalkingSpeedModifierNormalFlight;                    // 0x2450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WindGustScale;                                            // 0x2454(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuperFlightMinSpeed;                                      // 0x2460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuperFlightAccelerationScale;                             // 0x2464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlightDraftingRadius;                                     // 0x2468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDrafting;                                               // 0x246C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x246D(0x0003) MISSED OFFSET
	float                                              IsFlightDraftingDotProduct;                               // 0x2470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DraftingTamedWalkingSpeedAddMod;                          // 0x2474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastDraftingUpdateTime;                                   // 0x2478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SuperSaddleCustomTag;                                     // 0x2480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugDrawDrafting;                                        // 0x2488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x2489(0x0007) MISSED OFFSET
	class UClass*                                      CarriedTargetBuff;                                        // 0x2490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SaddleFuelItem;                                           // 0x2498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastConsumeFuelTime;                                      // 0x24A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelConsumeFrequency;                                     // 0x24A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x24AC(0x0004) MISSED OFFSET
	struct FHUDElement                                 GasHUDElement;                                            // 0x24B0(0x00F8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     DefaultJetScale;                                          // 0x25A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentZScale;                                            // 0x25B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimePlayedStruggleAnim;                               // 0x25B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastWindGustRequestTime;                                  // 0x25C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                OnStruggleAnim;                                           // 0x25C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastForwardInputTime;                                     // 0x25D0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeUpdatedServerFwdInput;                            // 0x25D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             SuperBoostStartTime;                                      // 0x25E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationRateInterpSpeed;                                  // 0x25E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationRateMultSuperBoost;                               // 0x25EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuperBoostCameraShakeSpeed;                               // 0x25F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuperBoostCameraShakeScale;                               // 0x25F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPVOffsetSuperBoost;                                      // 0x25F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuperBoostMaxRollAngle;                                   // 0x2604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuperFlightToggleEndDelay;                                // 0x2608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x260C(0x0004) MISSED OFFSET
	double                                             SuperFlightStartEndTime;                                  // 0x2610(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelConsumeFrequencySuperBoost;                           // 0x2618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x261C(0x0004) MISSED OFFSET
	class UParticleSystem*                             DraftingParticle;                                         // 0x2620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedRequirementForDrafting;                              // 0x2628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateDraftingInterval;                                   // 0x262C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DraftingEmitterOffset;                                    // 0x2630(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DraftingParticleRotationOffset;                           // 0x263C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastWindGustStart;                                        // 0x2648(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindGustCooldown;                                         // 0x2650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindGust180EndDelay;                                      // 0x2654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             WindGust180StartTime;                                     // 0x2658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 WindGust180UpVelocityCurve;                               // 0x2660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 WindGust180ForwardVelocityCurve;                          // 0x2668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindGust180UpVelocityScalar;                              // 0x2670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindGust180ForwardVelocityScalar;                         // 0x2674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    WindGust180TargetRotation;                                // 0x2678(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RollAngleForTrailVisibility;                              // 0x2684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                GroundGrindAnim;                                          // 0x2688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                FlyingGrindAnim;                                          // 0x2690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlakCannonCooldown;                                       // 0x2698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugFlakCannon;                                          // 0x269C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x269D(0x0003) MISSED OFFSET
	float                                              WindGust180Boost;                                         // 0x26A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x26A4(0x0004) MISSED OFFSET
	class UAnimMontage*                                FlakCannonRecoilAnim;                                     // 0x26A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FlakCannonAmmo;                                           // 0x26B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCrosshairX;                                        // 0x26B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCrosshairY;                                        // 0x26BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrosshairInterpSpeed;                                     // 0x26C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NormalFlightTPVOffsetMultiplierZ;                         // 0x26C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                _180Montage;                                              // 0x26C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             Last180Time;                                              // 0x26D0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _180CooldownTime;                                         // 0x26D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningSpeedModNormalFlight;                              // 0x26DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimePressedGamepadRightStick;                         // 0x26E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeStartedRightThumbstickPress;                      // 0x26E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GamepadToggledSuperFlight;                                // 0x26F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x26F1(0x0003) MISSED OFFSET
	struct FRotator                                    ReplicatedControlRotation;                                // 0x26F4(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugAllowFlakCannonFireWithoutSuperFlight;               // 0x2700(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x2701(0x0007) MISSED OFFSET
	double                                             LastTimePressedJump;                                      // 0x2708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeReleasedJump;                                     // 0x2710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IsDraftingDotProductForwardsMatching;                     // 0x2718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x271C(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        BlockingAnim;                                             // 0x2720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       StartTamingBuff;                                          // 0x2730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartTamingBuffDurationMultAdd;                           // 0x2738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageAdjustmentOnStartTamingBuffDamage;                  // 0x273C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TamingItem;                                               // 0x2740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             StartedRunningTime;                                       // 0x2748(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             StoppedRunningTime;                                       // 0x2750(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  AfterburnerOnSound;                                       // 0x2758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  AfterburnerOffSound;                                      // 0x2760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ThrusterOnSound;                                          // 0x2768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ThrusterOffSound;                                         // 0x2770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundAttenuation*                           ThrusterAttenuationSettings;                              // 0x2778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPVOffset180;                                             // 0x2780(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleHalfHeightForDrafting;                             // 0x278C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrusterVFXScaleAdditive;                                 // 0x2790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JetFXScaleInterpSpeed;                                    // 0x2794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialThrusterVFXScaleAdditive;                          // 0x2798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Tameable;                                                 // 0x279C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x279D(0x0003) MISSED OFFSET
	struct FRotator                                    PrevAimOffset;                                            // 0x27A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetRotSpeed;                                        // 0x27AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditiveAccelerationOnDrafting;                           // 0x27B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelConsumeFrequencyForwardInput;                         // 0x27B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SaddleDMIC;                                               // 0x27B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FeathersDMICIndex;                                        // 0x27C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x27C4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          FeathersMIC;                                              // 0x27C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UpdateSaddleDmic;                                         // 0x27D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue;             // 0x27D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x27D2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x1];                                       // 0x27D3(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x27D4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x27E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_DeltaSeconds2;                         // 0x27EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x27F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x27FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x2808(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x2810(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x2814(0x0004) MISSED OFFSET
	class APlayerController*                           CallFunc_GetPlayerController_ReturnValue;                 // 0x2818(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2820(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x2828(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_NegateVector_ReturnValue;                        // 0x2834(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x2840(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x2848(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x2854(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x2860(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x2864(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x2868(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_NegateVector_ReturnValue2;                       // 0x286C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue3;                // 0x2878(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue2;               // 0x2884(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch2;                                 // 0x2890(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw2;                                   // 0x2894(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll2;                                  // 0x2898(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue3;               // 0x289C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x28A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue;                    // 0x28AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x28AD(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x28B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x28B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x28B5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x28B6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x1];                                       // 0x28B7(0x0001) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue4;                // 0x28B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch3;                                 // 0x28C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw3;                                   // 0x28C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll3;                                  // 0x28CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_NegateVector_ReturnValue3;                       // 0x28D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue4;               // 0x28DC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch4;                                 // 0x28E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw4;                                   // 0x28EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll4;                                  // 0x28F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x28F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue2;                                // 0x28F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_NegateVector_ReturnValue4;                       // 0x28FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x2908(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x2909(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue5;               // 0x290C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x2918(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x2919(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakRot_Pitch5;                                 // 0x291C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw5;                                   // 0x2920(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll5;                                  // 0x2924(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x2928(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2929(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x2];                                       // 0x292A(0x0002) MISSED OFFSET
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x292C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_DegAcos_ReturnValue;                             // 0x2930(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x2934(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x2938(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x2940(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2948(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x2949(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue3;                      // 0x2950(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2958(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x7];                                       // 0x2959(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController2;            // 0x2960(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2968(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x2969(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x2];                                       // 0x296A(0x0002) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue5;                // 0x296C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x2978(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Conv_RotatorToVector_ReturnValue;                // 0x297C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2988(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue2;                   // 0x298C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x2990(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x7];                                       // 0x2991(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue4;                      // 0x2998(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimMontage_ReturnValue;                     // 0x29A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotFromX_ReturnValue;                        // 0x29A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue6;                // 0x29B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_ComposeRotators_ReturnValue;                     // 0x29BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue;                 // 0x29C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_DeltaTime;                             // 0x29D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimMontage_ReturnValue2;                    // 0x29D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_CustomEventName;                             // 0x29D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USkeletalMeshComponent*                      K2Node_Event_MeshComp;                                    // 0x29E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequenceBase*                           K2Node_Event_Animation;                                   // 0x29E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimNotify*                                 K2Node_Event_AnimNotifyObject;                            // 0x29F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x29F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue2;                // 0x29F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue3;                // 0x29FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_LatchingInterrupted;                   // 0x29FB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x29FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x29FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x2];                                       // 0x29FE(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_NegateVector_ReturnValue5;                       // 0x2A00(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue3;                   // 0x2A0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue6;               // 0x2A10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_DegAcos_ReturnValue2;                            // 0x2A1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch6;                                 // 0x2A20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw6;                                   // 0x2A24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll6;                                  // 0x2A28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x2A2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x2A30(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x2A3C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x2A3D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x2A40(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue3;                   // 0x2A4C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFirstPerson_ReturnValue;                       // 0x2A58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_SetActorLocation_ReturnValue;                 // 0x2A59(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x2A5A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x2A5B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x2A5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue6;                            // 0x2A5D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x2];                                       // 0x2A5E(0x0002) MISSED OFFSET
	float                                              K2Node_CustomEvent_Yaw;                                   // 0x2A60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Pitch;                                 // 0x2A64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Roll;                                  // 0x2A68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x2A6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x2A70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x2A74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x2A75(0x0003) MISSED OFFSET
	TArray<class APrimalCharacter*>                    CallFunc_GetPassengers_ReturnValue;                       // 0x2A78(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2A88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x4];                                       // 0x2A8C(0x0004) MISSED OFFSET
	class APrimalCharacter*                            CallFunc_Array_Get_Item;                                  // 0x2A90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2A98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x7];                                       // 0x2A99(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x2AA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x2AA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue4;                // 0x2AA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x2];                                       // 0x2AAA(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimMontage_ReturnValue3;                    // 0x2AAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimMontage_ReturnValue4;                    // 0x2AB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_DeltaSeconds;                          // 0x2AB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_RInterpTo_ReturnValue;                           // 0x2AB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue2;                   // 0x2AC4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x3];                                       // 0x2AC5(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x2AC8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x2AD4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x2AE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x2AE1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2AE2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x2AE3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0x2AE4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x2AF0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue7;                // 0x2AFC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x2B08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue4;                   // 0x2B14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_AxisValue;                             // 0x2B18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x2B1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x2B1D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x2];                                       // 0x2B1E(0x0002) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x2B20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue2;            // 0x2B28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Quick_Turning_ReturnValue;                    // 0x2B29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x2];                                       // 0x2B2A(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Epicenter;                             // 0x2B2C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetModeBP>                            CallFunc_SwitchNetworkMode_OutNetworkMode;                // 0x2B38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x2B39(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetModeBP>                            CallFunc_SwitchNetworkMode_OutNetworkMode2;               // 0x2B3A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x1];                                       // 0x2B3B(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_GetWindGustEpicenter_ReturnValue;                // 0x2B3C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x2B48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0x2B49(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Dir;                                   // 0x2B4C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Loc;                                   // 0x2B58(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2B64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue8;                // 0x2B68(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x4];                                       // 0x2B74(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x2B78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasSaddle_Ret;                                   // 0x2B80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasSaddle_RetIsSuperSaddle;                      // 0x2B81(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x2B82(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasFuel_ReturnValue;                             // 0x2B83(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_HasFuel_Quantity;                                // 0x2B84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x2B88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x2B89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x2];                                       // 0x2B8A(0x0002) MISSED OFFSET
	float                                              K2Node_InputAxisEvent_AxisValue;                          // 0x2B8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue3;                    // 0x2B90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x3];                                       // 0x2B91(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x2B94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue2;            // 0x2B98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue3;            // 0x2BA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue;                    // 0x2BA1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x6];                                       // 0x2BA2(0x0006) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue3;            // 0x2BA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue4;            // 0x2BB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x7];                                       // 0x2BB1(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_target;                                // 0x2BB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x2BC0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x2BCC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue3;               // 0x2BD8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue4;                   // 0x2BE4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2BF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x2BF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue4;            // 0x2C00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue;                 // 0x2C08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue5;            // 0x2C09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x6];                                       // 0x2C0A(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x2C10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_TimeSince_Network_ReturnValue;                   // 0x2C18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x2C1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetFloatValue_ReturnValue;                       // 0x2C20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_backwardsLatching;                     // 0x2C24(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x3];                                       // 0x2C25(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x2C28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x2C2C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2C38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x3];                                       // 0x2C39(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorUpVector_ReturnValue;                    // 0x2C3C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_SelectColor_ReturnValue;                         // 0x2C48(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x2C58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_TimeSince_Network_ReturnValue2;                  // 0x2C60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetFloatValue_ReturnValue2;                      // 0x2C64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue2;              // 0x2C68(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x2C74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x2C78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x2C7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue4;               // 0x2C80(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue5;               // 0x2C8C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue9;                // 0x2C98(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue5;                   // 0x2CA4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue6;                   // 0x2CB0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x2CBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_QInterpTo_ReturnValue;                           // 0x2CC0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue3;                   // 0x2CCC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue4;                   // 0x2CCD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         CallFunc_GetPrimalCharMovementMode_ReturnValue;           // 0x2CCE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x2CCF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x2CD0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue3;              // 0x2CDC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue2;              // 0x2CE8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue5;                   // 0x2CF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue2;                              // 0x2CF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x2CFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue4;                    // 0x2CFD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x2];                                       // 0x2CFE(0x0002) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue4;                        // 0x2D00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue5;                // 0x2D08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x4];                                       // 0x2D14(0x0004) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue5;            // 0x2D18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPFastTrace_ReturnValue;                         // 0x2D20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue6;            // 0x2D21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x6];                                       // 0x2D22(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue5;                        // 0x2D28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue2;                // 0x2D30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x3];                                       // 0x2D31(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue4;              // 0x2D34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue6;               // 0x2D40(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue7;               // 0x2D4C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue6;            // 0x2D58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Conv_RotatorToVector_ReturnValue2;               // 0x2D60(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue;         // 0x2D6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x3];                                       // 0x2D6D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue7;               // 0x2D70(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue7;                   // 0x2D7C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue5;                      // 0x2D88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_CastToPlayerController_ReturnValue;              // 0x2D90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAmmo_ReturnValue;                             // 0x2D98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x3];                                       // 0x2D99(0x0003) MISSED OFFSET
	int                                                CallFunc_HasAmmo_Quantity;                                // 0x2D9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue6;                        // 0x2DA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue7;            // 0x2DA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue7;            // 0x2DB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x3];                                       // 0x2DB1(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x2DB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue3;                // 0x2DB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x7];                                       // 0x2DB9(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue7;                        // 0x2DC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue4;                // 0x2DC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsGamePadConnected_ReturnValue;                  // 0x2DC9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x6];                                       // 0x2DCA(0x0006) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue8;            // 0x2DD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue9;            // 0x2DD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue8;                        // 0x2DE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue5;                // 0x2DE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x7];                                       // 0x2DE9(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue9;                        // 0x2DF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue6;                // 0x2DF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsUsingSuperFlight_Ret;                          // 0x2DF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x6];                                       // 0x2DFA(0x0006) MISSED OFFSET
	double                                             CallFunc_IsUsingSuperFlight_StartedEndingTime;            // 0x2E00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetReplicatedControlRotation_ReturnValue;        // 0x2E08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetReplicatedControlRotation_ReturnValue2;       // 0x2E14(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_RInterpTo_ReturnValue2;                          // 0x2E20(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_RInterpTo_ReturnValue3;                          // 0x2E2C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x2E38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x7];                                       // 0x2E39(0x0007) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue10;           // 0x2E40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayingBlockingAnim_ReturnVal;                 // 0x2E48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EMoveComponentAction>                  Temp_byte_Variable;                                       // 0x2E49(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x6];                                       // 0x2E4A(0x0006) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuffWithCustomTag_ReturnValue;                // 0x2E50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue7;                            // 0x2E58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x3];                                       // 0x2E59(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x2E5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ExtendBuffTime_ReturnValue;                      // 0x2E60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayingBlockingAnim_ReturnVal2;                // 0x2E61(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x6];                                       // 0x2E62(0x0006) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue11;           // 0x2E68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue8;            // 0x2E70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue9;            // 0x2E71(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x6];                                       // 0x2E72(0x0006) MISSED OFFSET
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x2E78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue2;                  // 0x2E80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue3;                  // 0x2E88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue4;                  // 0x2E90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetModeBP>                            CallFunc_SwitchNetworkMode_OutNetworkMode3;               // 0x2E98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x2E99(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x6];                                       // 0x2E9A(0x0006) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x2EA0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x2EB0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore3_RefProperty; // 0x2EC0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore4_RefProperty; // 0x2ED0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore5_RefProperty; // 0x2EE0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore6_RefProperty; // 0x2EF0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tropeognathus_Character_BP.Tropeognathus_Character_BP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void IsUsingWindGust(bool* ret, double* StartTime);
	void IsUsingForwardInput(bool* ret);
	void BPUnsetupDinoTameable();
	void BSetupDinoTameable();
	void UpdateRiderSocket();
	struct FName GetOverrideSocket(struct FName* From);
	bool AllowWakingTame(class APlayerController** ForPC);
	void OwningClientTryFlakCannonFire();
	void InterceptInputEvent(class FString* InputName);
	bool AllowPlayMontage(class UAnimMontage** AnimMontage);
	class UAnimMontage* GetDinoLevelUpAnimation();
	void UpdateTaming();
	bool BPShowTamingPanel(bool* currentVisibility);
	void GetTamingBuff(bool* IsValid, class APrimalBuff** Buff);
	class FString STATIC_BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	struct FRotator Get_Replicated_Control_Rotation_Public();
	void IsPlayingBlockingAnim(bool* ReturnVal);
	bool Is_Using_Drafting_Public(bool* DraftAcked);
	bool IsUsingDrafting(bool* DraftAcked);
	struct FName BPGetRiderSocket();
	bool STATIC_IsJumpHeld();
	void BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value);
	struct FRotator GetReplicatedControlRotation();
	void ReceiveTick(float* DeltaSeconds);
	void BPDoAttack(int* AttackIndex);
	float BPGetCrosshairAlpha();
	bool IsFlakCannonOnCooldown();
	void BPGetCrosshairLocation(float* CanvasClipX, float* CanvasClipY, float* OutX, float* OutY);
	void consumeItem(class UClass* Item);
	bool HasAmmo(int* Quantity);
	bool BPOnStopJump();
	void STATIC_Fire_Flak_Cannon(const struct FVector& Dir, const struct FVector& Loc);
	void Has_Saddle_Public(bool* ret, bool* RetIsSuperSaddle);
	void OnInventoryItemGrind();
	void UpdateWindGustCooldownVFX();
	int BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
	void TryInterruptLanding(TEnumAsByte<EMovementMode> Selection);
	void OnRep_SuperFlight();
	void SetSuperFlight(bool Value, bool TriggerVFX);
	float Get_Current_Percent_Of_Max_Fly_Speed_Public();
	void Is_Using_Super_Flight_Public(bool* ret, double* StartedEndingTime);
	void IsUsingSuperFlight(bool* ret, double* StartedEndingTime);
	void UpdateSuperFlightBoost();
	bool Is_Using_Super_Flight_Boost_Public();
	bool IsUsingSuperFlightBoost(double* StartTime);
	struct FName BPGetDragSocketName(class APrimalCharacter** DraggingChar);
	void OnCarriedStruggle();
	bool IsUsingWingGust();
	void Update_Jet_FX();
	bool HasFuel(int* Quantity);
	void UpdateFuel();
	void BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter);
	void HasSaddle(bool* ret, bool* RetIsSuperSaddle);
	void UpdateDrafting();
	struct FName BPGetDragSocketDinoName(class APrimalDinoCharacter** aGrabbedDino);
	void UpdateSuperFlightStateData();
	void UpdateAcceleration();
	void UpdateRotationRate();
	void UpdateAllyAOE();
	struct FVector GetWindGustEpicenter();
	void STATIC_DoWing_GustAOE();
	void Is_Diving_Public(bool* ret, double* TimeDiveStart);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void UpdateTPVOffset();
	void UpdateCheckQuickTurn();
	void UpdateSpeed();
	void UpdateDiving();
	void IsDiving(bool* ret, double* TimeDiveStart, double* TimeStoppedDiving);
	void GetAnimBP(class UTropeognathus_AnimBP_C** ret);
	float GetCurrentPercentOfMaxFlySpeed();
	void GetCDO(class ATropeognathus_Character_BP_C** AsTropeognathus_Character_BP_C);
	bool Is_Quick_Turning();
	void EndQuickTurn();
	void StartSuperFlightQuickTurn();
	void OnRep_LastSuperFlightQuickTurn();
	void UpdateSuperFlightRoll();
	bool BP_InterceptMoveRight(float* AxisValue);
	void UpdateTrails();
	void ActivateTrails();
	void DeactivateTrails();
	void RidingTick(float* DeltaSeconds);
	void BP_OnStartLandingNotify();
	struct FVector BPOverrideFlyingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	bool BP_InterceptMoveForward(float* AxisValue);
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV);
	void BP_OnSetRunning(bool* bNewIsRunning);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	bool BPHandleOnStopTargeting();
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	bool BPModifyDesiredRotation(struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation);
	void BPSetupTamed(bool* bWasJustTamed);
	bool BPOnStartJump();
	bool BPHandleUseButtonPress(class AShooterPlayerController** RiderController);
	void DisableCameraInterpolation();
	void OnRep_LatchingSurfaceNormal();
	void UpdateLatchedDinoCamera();
	void Controller_Follow_ActorRotation(float DeltaSeconds);
	void ReferenceLatchingObjects();
	void STATIC_LineTrace(class UMeshComponent* Mesh, const struct FName& SocketName, class AActor* Actor, const struct FVector& Offset, bool BackwardLatching, bool* Hit_Somthing, struct FVector* Location, struct FVector* Normal, class AActor** Hit_Actor);
	void InterruptLatching();
	void ProcessLatching(float DeltaSeconds);
	void STATIC_TryLatch(const struct FVector& Offset, bool backwardsLatching);
	void UserConstructionScript();
	void InpActEvt_AltFire_K2Node_InputActionEvent_216();
	void InpActEvt_BrakeDino_K2Node_InputActionEvent_215();
	void InpActEvt_BrakeDino_K2Node_InputActionEvent_214();
	void InpActEvt_Crouch_K2Node_InputActionEvent_213();
	void InpActEvt_Prone_K2Node_InputActionEvent_212();
	void InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_66();
	void InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_211();
	void InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_210();
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_65();
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_64();
	void Latch(bool backwardsLatching);
	void LatchStartAnimation();
	void UnLatch(bool LatchingInterrupted);
	void UnLatchStartAnimation();
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void MoveToUsingDirection(float DeltaTime);
	void UnLatchMoveAndRotate();
	void LatchingStartEvent();
	void LatchingEndEvent();
	void StopMovement(float DeltaSeconds);
	void DisableFaceLatchingObjectRotation();
	void SetPassengersSurfaceCamera(float Yaw, float Pitch, float Roll);
	void LocalFaceLatchingObject(float DeltaSeconds);
	void StartedJump();
	void ServerToggleSuperFlight();
	void ServerSuperFightRightInput(float AxisValue);
	void ServerRequestSuperFlightQuickTurn();
	void UpdateQuickTurn();
	void ServerRequestWindGust();
	void AnimNotify_WindGust();
	void ClientWindGust(const struct FVector& Epicenter);
	void AnimNotify_WindGustVFX();
	void ServerRequestFireFlakCannon(const struct FVector& Dir, const struct FVector& Loc);
	void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181(float AxisValue);
	void ServerUpdateLastForwardInputTime();
	void DelayedSuperFlightEnd();
	void MultiSuperFlightEnd();
	void ClientTagDraftee(class APrimalCharacter* Target);
	void WindGust180End();
	void WindGust180Tick();
	void AnimNotify_WindGustCheckFor180();
	void AnimNotify_WindGustBoost();
	void ServerRequest180();
	void GamepadRightStickPressed();
	void ServerSetLastTimePressedJump();
	void ServerSetLastTimeReleasedJump();
	void QueueLanding();
	void ServerRequestLanding();
	void OnBola();
	void ServerUpdateRunningStartTime();
	void ServerUpdateRunningStopTime();
	void MultiOnRunStarted();
	void MultiOnRunStopped();
	void MultiOnSuperFlightStart();
	void QueueGrabAttack();
	void MultiThrusterVFXBoost();
	void ExecuteUbergraph_Tropeognathus_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
