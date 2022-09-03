#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceKaiju_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IceKaiju_Character_BP.IceKaiju_Character_BP_C
// 0x14B0 (0x37A8 - 0x22F8)
class AIceKaiju_Character_BP_C : public ADino_Character_BP_RootMotion_C
{
public:
	class UBoxComponent*                               PlatformSaddleBuildArea;                                  // 0x22F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Front_Left_Upper;                                  // 0x2300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Front_Right_Upper;                                 // 0x2308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Back_Left_Upper;                                   // 0x2310(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Back_Right_Upper;                                  // 0x2318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Head;                                              // 0x2320(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Back_Left;                                         // 0x2328(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Back_Right;                                        // 0x2330(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Front_Left;                                        // 0x2338(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Front_Right;                                       // 0x2340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SpawnInMesh;                                              // 0x2348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      CorruptNodes;                                             // 0x2350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           LeapCheckSphere;                                          // 0x2358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    IceAuras;                                                 // 0x2360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LeapTargetParticles;                                      // 0x2368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ShoulderNode;                                             // 0x2370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ChestNode;                                                // 0x2378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        RightShoulderNode;                                        // 0x2380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        RightLegNode;                                             // 0x2388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            AttackCheckSphere;                                        // 0x2390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_IceKaiju_C* DinoCharacterStatus_BP_IceKaiju_C1;                       // 0x2398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveSpeed;                                                // 0x23A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x23A4(0x0004) MISSED OFFSET
	double                                             LastAttackTime;                                           // 0x23A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EIceKaijuAttackList>                   E_IceKaijuAttack;                                         // 0x23B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShakingPlayersOff;                                        // 0x23B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x23B2(0x0002) MISSED OFFSET
	float                                              Cooldown_ShakePlayersOff;                                 // 0x23B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAngry;                                                  // 0x23B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x23B9(0x0003) MISSED OFFSET
	float                                              Cooldown_GroundSmash;                                     // 0x23BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastGroundSmashTime;                                      // 0x23C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastShakeOffTime;                                         // 0x23C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             StartLeapTime;                                            // 0x23D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartLeapLocation;                                        // 0x23D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeapImpulseForward;                                       // 0x23E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZLeapMultiplier;                                          // 0x23E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDoingLeap;                                               // 0x23EC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x23ED(0x0003) MISSED OFFSET
	double                                             OldUpdateLeapTime;                                        // 0x23F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeapAttackDamageOffset;                                   // 0x23F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeapFallAddedImpulse;                                     // 0x2404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLeapTime;                                              // 0x2408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeapAttackBaseDamage;                                     // 0x240C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PerformingLeapEnd;                                        // 0x2410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2411(0x0003) MISSED OFFSET
	float                                              Cooldown_IceBreath;                                       // 0x2414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastIceBreathTime;                                        // 0x2418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AngryDamageMultiplier;                                    // 0x2420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x2424(0x0004) MISSED OFFSET
	class AIceKaijuControlNode1_C*                     LeftLegControlNode;                                       // 0x2428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AIceKaijuControlNode1_C*                     RightLegControlNode;                                      // 0x2430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              RightLegNodeHealth;                                       // 0x2438(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              RightShoulderNodeHealth;                                  // 0x243C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               LegNodesHidden;                                           // 0x2440(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2441(0x0003) MISSED OFFSET
	float                                              AccumulatedRightLegNodeDamage;                            // 0x2444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccumulatedRightShoulderNodeDamage;                       // 0x2448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightLegNodeDestroyed;                                    // 0x244C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightShoulderNodeDestroyed;                               // 0x244D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x244E(0x0002) MISSED OFFSET
	float                                              Cooldown_TurnTailAttack;                                  // 0x2450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x2454(0x0004) MISSED OFFSET
	double                                             LastTurnTailAttackTime;                                   // 0x2458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationRateModifier;                                     // 0x2460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x2464(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetRotationRate;                                       // 0x2470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChestNodeHidden;                                          // 0x2474(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x2475(0x0003) MISSED OFFSET
	float                                              ChestNodeHealth;                                          // 0x2478(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               ChestNodeDestroyed;                                       // 0x247C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x247D(0x0003) MISSED OFFSET
	float                                              AccumulatedChestNodeDamage;                               // 0x2480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HealthThreshold1On;                                       // 0x2484(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x2485(0x0003) MISSED OFFSET
	float                                              AngryTimer;                                               // 0x2488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightLegNodeReacted;                                      // 0x248C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightShoulderNodeReacted;                                 // 0x248D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x248E(0x0002) MISSED OFFSET
	float                                              TorpidDuration;                                           // 0x2490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartLifeSpan;                                            // 0x2494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x2495(0x0003) MISSED OFFSET
	float                                              TorpidLife;                                               // 0x2498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDead;                                                   // 0x249C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChestNodeReacted;                                         // 0x249D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ImmuneToDamage;                                           // 0x249E(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurningForAttack;                                         // 0x249F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastAngryAttackTime;                                      // 0x24A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AngryAttackCooldown;                                      // 0x24A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopMovement;                                             // 0x24AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x24AD(0x0003) MISSED OFFSET
	float                                              IceSpearCooldown;                                         // 0x24B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x24B4(0x0004) MISSED OFFSET
	double                                             LastIceSpearTime;                                         // 0x24B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              IceSpearTargets;                                          // 0x24C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FVector>                             IceSpearLocations;                                        // 0x24D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             IceSpearDirections;                                       // 0x24E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             FreezeAOEParticle;                                        // 0x24F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IceAura_DamageFrequency;                                  // 0x24F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x24FC(0x0004) MISSED OFFSET
	double                                             LastFreezeAOECheckTime;                                   // 0x2500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreezeAOERadius;                                          // 0x2508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTorpid;                                                 // 0x250C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLeapTargeting;                                          // 0x250D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x250E(0x0002) MISSED OFFSET
	struct FVector                                     LeapStartLoc;                                             // 0x2510(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeapDirection;                                            // 0x251C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeapTargetVertAngleOffset;                                // 0x2528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FProjectileArc                              CurrentLeapTargetArc;                                     // 0x252C(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              LeapArcForwardPower;                                      // 0x255C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeapStartActorLoc;                                        // 0x2560(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeapHasValidTarget;                                       // 0x256C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x256D(0x0003) MISSED OFFSET
	struct FVector                                     CurrentLeapTargetLocation;                                // 0x2570(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurrentLeapTargetRotation;                                // 0x257C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentLeapTargetArcTime;                                 // 0x2588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x258C(0x0004) MISSED OFFSET
	struct FHitResult                                  CurrentLeapTargetHitResult;                               // 0x2590(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LeapInstant;                                              // 0x2618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x2619(0x0003) MISSED OFFSET
	float                                              LeapAimLimit;                                             // 0x261C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeapForceMult;                                            // 0x2620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceLength;                                              // 0x2624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeapTraceHit;                                             // 0x2628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x2629(0x0003) MISSED OFFSET
	struct FVector                                     LeapTraceLoc;                                             // 0x262C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeapVerticalDistanceMin;                                  // 0x2638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeapHorizontalDistanceMin;                                // 0x263C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLeaping;                                                // 0x2640(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HoldingDownJump;                                          // 0x2641(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x2642(0x0002) MISSED OFFSET
	float                                              LaunchedCharactersApexTravelTime;                         // 0x2644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeapUpStrengthMin;                                        // 0x2648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeapUpStrengthMax;                                        // 0x264C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LeapLaunchTime;                                           // 0x2650(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeapRotationTargetDir;                                    // 0x2658(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HoldingDownRightClick;                                    // 0x2664(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TPVCamOffsetMultiplier;                                   // 0x2665(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x2666(0x0002) MISSED OFFSET
	float                                              LiquidBombTraceLength;                                    // 0x2668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PerformingLiquidBomb;                                     // 0x266C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeapTraceWasShort;                                        // 0x266D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x2];                                       // 0x266E(0x0002) MISSED OFFSET
	float                                              TamedLeapStamPercentCost;                                 // 0x2670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x2674(0x0004) MISSED OFFSET
	TArray<class AActor*>                              TamedLeapAttackHitActorsFriendly;                         // 0x2678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              IceAura_FrozenBuffAddTimePerHit;                          // 0x2688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IceAura_FreezeBuffAddTimePerHit;                          // 0x268C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IceAura_FreezeBuffAmountPerHit;                           // 0x2690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IceAura_DamagePerHit;                                     // 0x2694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnedLoc;                                               // 0x2698(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x4];                                       // 0x26A4(0x0004) MISSED OFFSET
	class AController*                                 LeapAttackController;                                     // 0x26A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	double                                             LastLeapingCollisionCheckTime;                            // 0x26B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeapingCollisionCheckTimeInterval;                        // 0x26B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentLeapingCollisionStructureDamage;                   // 0x26BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             TamedTime;                                                // 0x26C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HoldingDownLeftClick;                                     // 0x26C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeashLeapingToSpawnLoc;                                   // 0x26C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x26CA(0x0002) MISSED OFFSET
	struct FVector                                     MaxDistLeapTraceGroundLoc;                                // 0x26CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FailedToFindMaxDistLeapTraceGroundLoc;                    // 0x26D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x26D9(0x0007) MISSED OFFSET
	class UClass*                                      LeapFoliageDamageType;                                    // 0x26E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LeapRockDamageType;                                       // 0x26E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ChestNodeDynamicMAT;                                      // 0x26F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                NodeHealthyColor;                                         // 0x26F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RightLegNodeDynamicMAT;                                   // 0x2708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RightShoulderNodeDynamicMAT;                              // 0x2710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                NodeUnhealthyColor;                                       // 0x2718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MAXRightLegNodeHealth;                                    // 0x2728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MAXRightShoulderNodeHealth;                               // 0x272C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MAXChestNodeHealth;                                       // 0x2730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x4];                                       // 0x2734(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    BackDynamicMAT;                                           // 0x2738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BodyDynamicMAT;                                           // 0x2740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HeadDynamicMAT;                                           // 0x2748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MetalDynamicMAT;                                          // 0x2750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnedFromCheatLoc;                                      // 0x2758(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastLeapVelocity;                                         // 0x2764(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimePrintedDebugInfo;                                 // 0x2770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             LastPos;                                                  // 0x2778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             RestPos;                                                  // 0x2788(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             PivotPos;                                                 // 0x2798(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             CurrentPos;                                               // 0x27A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      RestDistance;                                             // 0x27B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               FurSocketNames;                                           // 0x27C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct UObject_FTransform>                  LastFurSocketTransforms;                                  // 0x27D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct UObject_FTransform>                  LastFurSubstepSocketTransforms;                           // 0x27E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              UpdateRate;                                               // 0x27F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeAccumulator;                                          // 0x27FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct UObject_FTransform                          LastHeadTransform;                                        // 0x2800(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Gravity_Force;                                            // 0x2830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Drag_Force;                                               // 0x2834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x2838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spring_Force;                                             // 0x283C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      SpringModifiers;                                          // 0x2840(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      DampingModifiers;                                         // 0x2850(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              HairScale;                                                // 0x2860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damping_Front_Modifier;                                   // 0x2864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damping_Back;                                             // 0x2868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InWater;                                                  // 0x286C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HairWetness;                                              // 0x2870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Spring_Force_Front_Modifier;                              // 0x2874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Spring_Force_Back;                                        // 0x2878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugHair;                                               // 0x287C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResetHair;                                               // 0x287D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x2];                                       // 0x287E(0x0002) MISSED OFFSET
	float                                              DebugFurSphereDuration;                                   // 0x2880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugFurPivotRadius;                                      // 0x2884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugFurSpringPosRadius;                                  // 0x2888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NeckHairCollisionOffset;                                  // 0x288C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NeckHairCollisionRadius;                                  // 0x2898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCollideWithNeck;                                         // 0x289C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x289D(0x0003) MISSED OFFSET
	float                                              HeadHairCollisionRadius;                                  // 0x28A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HeadCollisionOffset;                                      // 0x28A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShoulderRCollisionRadius;                                 // 0x28B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShoulderRCollisionOffset;                                 // 0x28B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShoulderLCollisionRadius;                                 // 0x28C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShoulderLCollisionOffset;                                 // 0x28C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCollideMiddle;                                           // 0x28D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPosAsPivot;                                              // 0x28D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x2];                                       // 0x28D2(0x0002) MISSED OFFSET
	float                                              MaxDistanceToRestPos;                                     // 0x28D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaximumHairUpdateDistance;                                // 0x28D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HairSimulationSpeed;                                      // 0x28DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UpdateMaxNumSubsteps;                                     // 0x28E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastHairSocketPosition;                                   // 0x28E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HairSocketName;                                           // 0x28F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeHairSocketMoved;                                  // 0x28F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ChestSocketName;                                          // 0x2900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NeckSocketName;                                           // 0x2908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildLeapCheckFrequency;                                   // 0x2910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x2914(0x0004) MISSED OFFSET
	double                                             LastTimeWildLeapCheck;                                    // 0x2918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IncreasedGravity;                                         // 0x2920(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x7];                                       // 0x2921(0x0007) MISSED OFFSET
	double                                             LastTimeDamagedRightLegNode;                              // 0x2928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeDamagedRightShoulderNode;                         // 0x2930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkNodeInterpDuration;                                  // 0x2938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                NodeDamageColor;                                          // 0x293C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnForTamedLeap;                                         // 0x294C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RedCrosshair;                                             // 0x294D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x2];                                       // 0x294E(0x0002) MISSED OFFSET
	class UMaterialInstanceDynamic*                    NodeDynamicMAT;                                           // 0x2950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    NodeCorruptionDynamicMAT;                                 // 0x2958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LegNodeActiveState;                                       // 0x2960(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShoulderNodeActiveState;                                  // 0x2964(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChestNodeActiveState;                                     // 0x2968(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x4];                                       // 0x296C(0x0004) MISSED OFFSET
	double                                             LastTimeUpdateLeg;                                        // 0x2970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeDamagedChestNode;                                 // 0x2978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Stunned;                                                  // 0x2980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x7];                                       // 0x2981(0x0007) MISSED OFFSET
	double                                             TimeStartIncreasedGravity;                                // 0x2988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CorruptDinosDamageMultiplier;                             // 0x2990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TamedLeapDamage;                                          // 0x2994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamedLeapCooldown;                                        // 0x2998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionDamageMultiplier;                                // 0x299C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TekShieldDamageMultiplier;                                // 0x29A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TameEffectivenessMinHealthAddition;                       // 0x29A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TameEffectivenessMaxHealthAddition;                       // 0x29A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayingIntro;                                             // 0x29AC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x29AD(0x0003) MISSED OFFSET
	float                                              KingKaijuOutputDamageMultiplier;                          // 0x29B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnInMICValue;                                          // 0x29B4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FurDynamicMAT;                                            // 0x29B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATargetPoint*                                LeashActor;                                               // 0x29C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SpawnMeshDynamicMAT;                                      // 0x29C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar;                                                   // 0x29D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x7];                                       // 0x29D1(0x0007) MISSED OFFSET
	TArray<struct FName>                               CheapFurSocketNames;                                      // 0x29D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EObjectTypeQuery>>              NewVar0;                                                  // 0x29E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DamageMultiplierForSinglePlayer;                          // 0x29F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceThresholdToDamageKaiju;                           // 0x29FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeBeforeDestroyWhenNoTarget;                            // 0x2A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Despawning;                                               // 0x2A04(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x2A05(0x0003) MISSED OFFSET
	class ATargetPoint*                                SpawnTargetPoint;                                         // 0x2A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMultiplierFromTurretDamage;                         // 0x2A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalDistanceThresholdToDamageKaiju;                   // 0x2A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ArenaManager;                                             // 0x2A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeDamageThrottleCheck;                              // 0x2A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccumulatedDmgSinceLastThrottle;                          // 0x2A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPercentHleathThrottledPerCheck;                        // 0x2A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayedHalfHealthAngry;                                    // 0x2A30(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x2A31(0x0003) MISSED OFFSET
	float                                              RiderIceBreathCooldown;                                   // 0x2A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastRiderIceBreathNetworkTime;                            // 0x2A38(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiderBombCooldown;                                        // 0x2A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData42[0x4];                                       // 0x2A44(0x0004) MISSED OFFSET
	double                                             LastTimeRiderBomb;                                        // 0x2A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KKEleNodeMultiplier;                                      // 0x2A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeapStructureDamageBase;                                  // 0x2A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseTamedPhysics;                                          // 0x2A58(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x3];                                       // 0x2A59(0x0003) MISSED OFFSET
	int                                                SavedTamingEffectivenessLvl;                              // 0x2A5C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               CompletedFirstTameSetup;                                  // 0x2A60(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x2A61(0x0003) MISSED OFFSET
	float                                              WildKaijuDmgMultiplierToTamedKaiju;                       // 0x2A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalAccumulatedDamage;                                   // 0x2A68(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               NodeDebugOn;                                              // 0x2A6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x3];                                       // 0x2A6D(0x0003) MISSED OFFSET
	float                                              DownloadSicknessDamageMultiplier;                         // 0x2A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      previous_roll;                                            // 0x2A74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x3];                                       // 0x2A75(0x0003) MISSED OFFSET
	float                                              Last_movement_timestamp;                                  // 0x2A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x2A7C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x2A7D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0x2A7E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue3;                // 0x2A7F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue4;                // 0x2A80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue5;                // 0x2A81(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue6;                // 0x2A82(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Hide4;                                 // 0x2A83(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_delay2;                                // 0x2A84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_RightLeg2;                             // 0x2A88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Hide3;                                 // 0x2A89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_RightLeg;                              // 0x2A8A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x2A8B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x2A8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x2A90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x2A9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x2AA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_RLerp_ReturnValue;                               // 0x2AA4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue;                     // 0x2AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue;                    // 0x2AB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0x2AB9(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_NormalizedDeltaRotator_ReturnValue;              // 0x2ABC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x2AC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x2ACC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x2AD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x2AD4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x2AE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x4];                                       // 0x2AE4(0x0004) MISSED OFFSET
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue;                       // 0x2AE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x2AF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x7];                                       // 0x2AF1(0x0007) MISSED OFFSET
	class UObject*                                     CallFunc_GetValueAsObject_ReturnValue;                    // 0x2AF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_DynamicCast_AsActor;                               // 0x2B00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2B08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x3];                                       // 0x2B09(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x2B0C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Hide2;                                 // 0x2B18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x3];                                       // 0x2B19(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Delay;                                 // 0x2B1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x2B20(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x2B2C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch2;                                 // 0x2B38(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw2;                                   // 0x2B3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll2;                                  // 0x2B40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Hide;                                  // 0x2B44(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x3];                                       // 0x2B45(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x2B48(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2B54(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2B55(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2B56(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x2B57(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2B58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0x2B5C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x2B68(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x2B74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue2;                  // 0x2B78(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x2B84(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x2B90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue2;                          // 0x2B94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue2;                 // 0x2B98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_ON;                                    // 0x2B9C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x3];                                       // 0x2B9D(0x0003) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetSocketTransform_ReturnValue;                  // 0x2BA0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x2BD0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x2BDC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x2BE8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x4];                                       // 0x2BF4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x2BF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x2C00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2C01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x6];                                       // 0x2C02(0x0006) MISSED OFFSET
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor2;                   // 0x2C08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp2;                    // 0x2C10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex2;               // 0x2C18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bFromSweep2;                   // 0x2C1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x3];                                       // 0x2C1D(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_SweepResult2;                  // 0x2C20(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x2CA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x3];                                       // 0x2CA9(0x0003) MISSED OFFSET
	int                                                Temp_int_Variable;                                        // 0x2CAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x2CB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x3];                                       // 0x2CB1(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2CB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x2CB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x4];                                       // 0x2CC4(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x2CC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2CD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x3];                                       // 0x2CD1(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x2CD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2CD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x7];                                       // 0x2CD9(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item;                                  // 0x2CE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x2CE8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x2CF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue2;              // 0x2CF8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x2D04(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue3;                          // 0x2D10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x2D14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x2D18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x2D1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x3];                                       // 0x2D1D(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_AimLoc2;                               // 0x2D20(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_AimHit2;                               // 0x2D2C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_LeapInstant;                           // 0x2D2D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x2];                                       // 0x2D2E(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_MaxDistLeapTraceGroundLoc2;            // 0x2D30(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_FailedtoFindMaxdistLeapTraceGroundLoc2;// 0x2D3C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x3];                                       // 0x2D3D(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_AimLoc;                                // 0x2D40(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_AimHit;                                // 0x2D4C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x3];                                       // 0x2D4D(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_MaxDistLeapTraceGroundLoc;             // 0x2D50(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_FailedtoFindMaxDistLeapTraceGroundLoc; // 0x2D5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsHoldingLeap;                         // 0x2D5D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue;                    // 0x2D5E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsAngry;                               // 0x2D5F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x2D60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue7;                // 0x2D64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2D65(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue2;                          // 0x2D66(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x1];                                       // 0x2D67(0x0001) MISSED OFFSET
	class AActor*                                      K2Node_Event_ArenaManager;                                // 0x2D68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x2D70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_PreventInput;                          // 0x2D71(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x2D72(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x1];                                       // 0x2D73(0x0001) MISSED OFFSET
	int                                                K2Node_CustomEvent_AttackIndex;                           // 0x2D74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x2D78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x2D79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue;                            // 0x2D7A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue8;                // 0x2D7B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x2D7C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x2D7D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x2];                                       // 0x2D7E(0x0002) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x2D80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_ModifyCurrentStatusValue_ReturnValue;            // 0x2D84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ShouldStopJumpRotation_Return;                   // 0x2D88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x2D89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x2];                                       // 0x2D8A(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x2D8C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x2D98(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x2DA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch3;                                 // 0x2DA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw3;                                   // 0x2DAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll3;                                  // 0x2DB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x4];                                       // 0x2DB4(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue;                  // 0x2DB8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x2DC8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_Normal_ReturnValue3;                             // 0x2DD8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotFromX_ReturnValue;                        // 0x2DE4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue3;              // 0x2DF0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch4;                                 // 0x2DFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw4;                                   // 0x2E00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll4;                                  // 0x2E04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x2E08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_ShortestAngleDistance_Difference;                // 0x2E14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_VectorToString_ReturnValue;                 // 0x2E18(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_FInterpTo_Constant_ReturnValue;                  // 0x2E28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x4];                                       // 0x2E2C(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue2;                 // 0x2E30(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x2E40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x4];                                       // 0x2E44(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Concat_StrStr_ReturnValue2;                      // 0x2E48(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue2;                            // 0x2E58(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x4];                                       // 0x2E64(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Concat_StrStr_ReturnValue3;                      // 0x2E68(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_SetActorRotation_ReturnValue2;                   // 0x2E78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0x7];                                       // 0x2E79(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2E80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue3;                  // 0x2E88(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue4;                  // 0x2E94(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue3;                   // 0x2EA0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x4];                                       // 0x2EAC(0x0004) MISSED OFFSET
	struct FDinoAttackInfo                             CallFunc_Array_Get_Item2;                                 // 0x2EB0(0x0130) (Transient, DuplicateTransient)
	struct FVector                                     CallFunc_Divide_VectorFloat_ReturnValue;                  // 0x2FE0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x4];                                       // 0x2FEC(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue;           // 0x2FF0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue;                     // 0x3000(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x3004(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x3008(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData77[0x7];                                       // 0x3009(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item3;                                 // 0x3010(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x3018(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData78[0x7];                                       // 0x3019(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x3020(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x3028(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData79[0x3];                                       // 0x3029(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Add_ReturnValue4;                          // 0x302C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x3030(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x3038(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPrimalCharFriendly_ReturnValue;                // 0x3039(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_Contains_ReturnValue;                      // 0x303A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x303B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x4];                                       // 0x303C(0x0004) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x3040(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x3048(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue2;                    // 0x3050(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue2;                      // 0x3058(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_CustomEvent_target;                                // 0x3060(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x3068(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x3070(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_Freeze_C*                              K2Node_DynamicCast_AsBuff_Freeze_C;                       // 0x3078(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x3080(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData81[0x7];                                       // 0x3081(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue2;                            // 0x3088(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_Frozen_IceKaiju_C*                     K2Node_DynamicCast_AsBuff_Frozen_IceKaiju_C;              // 0x3090(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x3098(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData82[0x7];                                       // 0x3099(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor;                    // 0x30A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp;                     // 0x30A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex;                // 0x30B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bFromSweep;                    // 0x30B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData83[0x3];                                       // 0x30B5(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_SweepResult;                   // 0x30B8(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x3140(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x314C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x3158(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x3164(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x3170(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x3178(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x3180(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x3188(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x3190(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x3194(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData84[0x3];                                       // 0x3195(0x0003) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter2;                    // 0x3198(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x31A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData85[0x7];                                       // 0x31A1(0x0007) MISSED OFFSET
	class UInstancedStaticMeshComponent*               K2Node_DynamicCast_AsInstancedStaticMeshComponent;        // 0x31A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x31B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x31B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData86[0x2];                                       // 0x31B2(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x31B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x31C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData87[0x3];                                       // 0x31C1(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X;                                   // 0x31C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x31C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x31CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue2;              // 0x31D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData88[0x7];                                       // 0x31D1(0x0007) MISSED OFFSET
	class AInstancedFoliageActor*                      K2Node_DynamicCast_AsInstancedFoliageActor;               // 0x31D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x31E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x31E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x31E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData89[0x5];                                       // 0x31E3(0x0005) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x31E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Visible;                               // 0x31F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x31F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCurrentlyPlayingAttackAnimation_ReturnValue;   // 0x31F2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue5;                          // 0x31F3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue6;                          // 0x31F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCurrentlyPlayingAttackAnimation_ReturnValue2;  // 0x31F5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x31F6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue7;                          // 0x31F7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x31F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData90[0x7];                                       // 0x31F9(0x0007) MISSED OFFSET
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue3;                      // 0x3200(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue3;                    // 0x3208(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_Conv_VectorToTransform_ReturnValue;              // 0x3210(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue;       // 0x3240(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x3248(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ATargetPoint*                                CallFunc_FinishSpawningActor_ReturnValue;                 // 0x3250(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue2;      // 0x3258(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_Node;                                  // 0x3260(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Alpha;                                 // 0x3264(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_LinearColorLerp_ReturnValue;                     // 0x3268(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_Select_ReturnValue;                                // 0x3278(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x3280(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x3281(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData91[0x6];                                       // 0x3282(0x0006) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue3;                      // 0x3288(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue4;                      // 0x3290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AIceKaiju_AIController_BP_C*                 K2Node_DynamicCast_AsIceKaiju_AIController_BP_C;          // 0x3298(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast9_CastSuccess;                          // 0x32A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData92[0x3];                                       // 0x32A1(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue4;                    // 0x32A4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData93[0x4];                                       // 0x32AC(0x0004) MISSED OFFSET
	class UObject*                                     CallFunc_GetValueAsObject_ReturnValue2;                   // 0x32B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x32B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData94[0x4];                                       // 0x32BC(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_DynamicCast_AsActor2;                              // 0x32C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast10_CastSuccess;                         // 0x32C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x32C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData95[0x2];                                       // 0x32CA(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue5;                // 0x32CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_ObjectToString_ReturnValue;                 // 0x32D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue4;                      // 0x32E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue5;                      // 0x32F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue5;                    // 0x3300(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue5;                           // 0x3308(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData96[0x7];                                       // 0x3309(0x0007) MISSED OFFSET
	class UObject*                                     CallFunc_GetValueAsObject_ReturnValue3;                   // 0x3310(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_DynamicCast_AsActor3;                              // 0x3318(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast11_CastSuccess;                         // 0x3320(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData97[0x7];                                       // 0x3321(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Conv_ObjectToString_ReturnValue2;                // 0x3328(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue6;                // 0x3338(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData98[0x4];                                       // 0x3344(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Concat_StrStr_ReturnValue5;                      // 0x3348(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     K2Node_CustomEvent_Loc2;                                  // 0x3358(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_CustomEvent_LineColor;                             // 0x3364(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_duration;                              // 0x3374(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_radius;                                // 0x3378(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x337C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData99[0x3];                                       // 0x337D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x3380(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_CustomEvent_Color2;                                // 0x338C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X2;                                  // 0x339C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x33A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x33A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x33A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x33AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_CustomEvent_color;                                 // 0x33B0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue6;                           // 0x33C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x33C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData100[0x2];                                      // 0x33C2(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue2;              // 0x33C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x33D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue7;                // 0x33DC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue4;                   // 0x33E8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X3;                                  // 0x33F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y3;                                  // 0x33F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z3;                                  // 0x33FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x3400(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue5;                  // 0x340C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue7;                           // 0x3418(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData101[0x3];                                      // 0x3419(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue4;              // 0x341C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue4;                             // 0x3428(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X4;                                  // 0x3434(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y4;                                  // 0x3438(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z4;                                  // 0x343C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue3;      // 0x3440(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   K2Node_MakeStruct_Vector_NetQuantizeNormal;               // 0x3448(0x000C) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData102[0x4];                                      // 0x3454(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue4;                      // 0x3458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AIceKaiju_AIController_BP_C*                 K2Node_DynamicCast_AsIceKaiju_AIController_BP_C2;         // 0x3460(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast12_CastSuccess;                         // 0x3468(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData103[0x3];                                      // 0x3469(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue6;                    // 0x346C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData104[0x4];                                      // 0x3474(0x0004) MISSED OFFSET
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue6;                      // 0x3478(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue8;                // 0x3480(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData105[0x4];                                      // 0x348C(0x0004) MISSED OFFSET
	class UObject*                                     CallFunc_GetValueAsObject_ReturnValue4;                   // 0x3490(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X5;                                  // 0x3498(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y5;                                  // 0x349C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z5;                                  // 0x34A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData106[0x4];                                      // 0x34A4(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter3;                    // 0x34A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast13_CastSuccess;                         // 0x34B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData107[0x3];                                      // 0x34B1(0x0003) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x34B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue9;                // 0x34B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x34C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData108[0x3];                                      // 0x34C5(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue5;              // 0x34C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x34D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData109[0x3];                                      // 0x34D5(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Normal_ReturnValue5;                             // 0x34D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X6;                                  // 0x34E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y6;                                  // 0x34E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z6;                                  // 0x34EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   K2Node_MakeStruct_Vector_NetQuantizeNormal2;              // 0x34F0(0x000C) (Transient, DuplicateTransient)
	bool                                               CallFunc_BooleanOR_ReturnValue8;                          // 0x34FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Value;                                 // 0x34FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData110[0x2];                                      // 0x34FE(0x0002) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue;                   // 0x3500(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x3508(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData111[0x3];                                      // 0x3509(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x350C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCurrentlyPlayingAttackAnimation_ReturnValue3;  // 0x3510(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue9;                          // 0x3511(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData112[0x2];                                      // 0x3512(0x0002) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue3;                 // 0x3514(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x3518(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData113[0x4];                                      // 0x351C(0x0004) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue;                     // 0x3520(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue3;                         // 0x3528(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData114[0x4];                                      // 0x3534(0x0004) MISSED OFFSET
	class UIceKaiju_AnimBlueprint_C*                   K2Node_DynamicCast_AsIceKaiju_AnimBlueprint_C;            // 0x3538(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast14_CastSuccess;                         // 0x3540(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData115[0x7];                                      // 0x3541(0x0007) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue2;                    // 0x3548(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UIceKaiju_AnimBlueprint_C*                   K2Node_DynamicCast_AsIceKaiju_AnimBlueprint_C2;           // 0x3550(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast15_CastSuccess;                         // 0x3558(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue8;                           // 0x3559(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue9;                           // 0x355A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue6;                            // 0x355B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData116[0x4];                                      // 0x355C(0x0004) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue2;                  // 0x3560(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x3568(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData117[0x4];                                      // 0x356C(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue5;                      // 0x3570(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue7;                    // 0x3578(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AIceKaiju_AIController_BP_C*                 K2Node_DynamicCast_AsIceKaiju_AIController_BP_C3;         // 0x3580(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast16_CastSuccess;                         // 0x3588(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData118[0x7];                                      // 0x3589(0x0007) MISSED OFFSET
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue7;                      // 0x3590(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue4;                 // 0x3598(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_RotateAngleAxis_ReturnValue;                     // 0x359C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue5;                          // 0x35A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue3;              // 0x35AC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X7;                                  // 0x35B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y7;                                  // 0x35BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z7;                                  // 0x35C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x35C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue4;                         // 0x35C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x35D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData119[0x3];                                      // 0x35D5(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue6;              // 0x35D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue6;                             // 0x35E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_VectorToString_ReturnValue2;                // 0x35F0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Dot_VectorVector_ReturnValue2;                   // 0x3600(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_DegAcos_ReturnValue;                             // 0x3604(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue2;                                // 0x3608(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue2;               // 0x360C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData120[0x3];                                      // 0x360D(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x3610(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ApplyRadialDamage_ReturnValue;                   // 0x3614(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData121[0x3];                                      // 0x3615(0x0003) MISSED OFFSET
	class APlayerPawnTest_C*                           K2Node_DynamicCast_AsPlayerPawnTest_C;                    // 0x3618(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast17_CastSuccess;                         // 0x3620(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData122[0x7];                                      // 0x3621(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue6;                      // 0x3628(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BPGetMaxStatusValue_ReturnValue;                 // 0x3630(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData123[0x4];                                      // 0x3634(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x3638(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast18_CastSuccess;                         // 0x3640(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData124[0x3];                                      // 0x3641(0x0003) MISSED OFFSET
	float                                              CallFunc_BPGetCurrentStatusValue_ReturnValue;             // 0x3644(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x3648(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData125[0x4];                                      // 0x364C(0x0004) MISSED OFFSET
	class FString                                      CallFunc_MakeLiteralString_ReturnValue;                   // 0x3650(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x3660(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue10;                         // 0x3661(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue11;                         // 0x3662(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData126[0x5];                                      // 0x3663(0x0005) MISSED OFFSET
	class FString                                      CallFunc_SelectString_ReturnValue;                        // 0x3668(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue6;                      // 0x3678(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_PlayAnimEx_ReturnValue3;                         // 0x3688(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue10;                          // 0x368C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue7;                            // 0x368D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData127[0x2];                                      // 0x368E(0x0002) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue3;                            // 0x3690(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasBuff_ReturnValue;                             // 0x3698(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x3699(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue3;                          // 0x369A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData128[0x1];                                      // 0x369B(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue10;               // 0x369C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue11;                          // 0x36A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData129[0x7];                                      // 0x36A9(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x36B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue11;               // 0x36B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData130[0x4];                                      // 0x36C4(0x0004) MISSED OFFSET
	class ADayCycleManager*                            CallFunc_GetDayCycleManager_ReturnValue;                  // 0x36C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TScriptInterface<class UExtinctionDayCycle_Interface_C> K2Node_DynamicCast_AsExtinctionDayCycle_Interface_C;      // 0x36D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast19_CastSuccess;                         // 0x36E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoesImplementInterface_ReturnValue;              // 0x36E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData131[0x6];                                      // 0x36E2(0x0006) MISSED OFFSET
	class AActor*                                      CallFunc_GetVar_IKArenaLoc_ServerPoint;                   // 0x36E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue12;               // 0x36F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Loc;                                   // 0x36FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x3708(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_GetDefaultObject_ReturnValue;                    // 0x3710(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AIceKaiju_Character_BP_C*                    K2Node_DynamicCast_AsIceKaiju_Character_BP_C;             // 0x3718(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast20_CastSuccess;                         // 0x3720(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData132[0x7];                                      // 0x3721(0x0007) MISSED OFFSET
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x3728(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x3730(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData133[0x3];                                      // 0x3731(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue7;                // 0x3734(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_ModifyCurrentStatusValue_ReturnValue2;           // 0x3738(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData134[0x4];                                      // 0x373C(0x0004) MISSED OFFSET
	class UPrimalItem*                                 CallFunc_GiveSaddle_ReturnValue;                          // 0x3740(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalItem*                                 CallFunc_GetEquippedItemOfType_ReturnValue;               // 0x3748(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue8;                            // 0x3750(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData135[0x7];                                      // 0x3751(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x3758(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore_RefProperty;// 0x3768(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore2_RefProperty;// 0x3778(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereTraceSingleForObjects_ActorsToIgnore_RefProperty;// 0x3788(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore3_RefProperty;// 0x3798(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IceKaiju_Character_BP.IceKaiju_Character_BP_C");
		return ptr;
	}


	struct FName GetSocketForMeleeTraceForHitBlockers(int* AttackIndex);
	float BPOverrideHealthBarOffset(class APlayerController** ForPC);
	void BPDinoARKDownloadedBegin();
	class FString BPGetDebugInfoString();
	bool BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance);
	void BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value);
	bool BPCanBaseOnCharacter(class APrimalCharacter** BaseCharacter);
	void ActorIsKaiju(class AActor* Actor, bool* IsKaiju);
	void BPDinoARKDownloadedEnd();
	void OnRep_UseTamedPhysics();
	float BPGetHUDOverrideBuffProgressBarPercent();
	class USoundBase* BPOverrideCharacterSound(class USoundBase** SoundIn);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void HealNodesAndHealthFromLeashing();
	struct FHitMarkerSettings STATIC_BPOverrideDamageCauserHitMarker(class AShooterPlayerController** DamageCauserController, bool* bHitFriendlyTarget, float* PreDamageHealth, float* DamageAmount, bool* bIsPointDamage, struct FDamageEvent* DamageEvent, struct FHitResult* PointDamageHitResult);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	struct FVector BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	void InterpSpawnInMICs(float Delta);
	struct FVector BPGetHealthBarColor();
	struct FVector BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter);
	void IsLocomotionBlocked(bool* bLocked);
	void GetMovementMontage(TEnumAsByte<ERootMotionMovementMode>* Mode, class UAnimMontage** Montage);
	void InterpNodeActiveStates(float Delta);
	void ClientUpdateNodeStatus();
	bool BPHandleUseButtonPress(class AShooterPlayerController** RiderController);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPOnAnimPlayedNotify(class UAnimMontage** AnimMontage, float* InPlayRate, struct FName* StartSectionName, bool* bReplicate, bool* bReplicateToOwner, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer);
	void BPSetupTamed(bool* bWasJustTamed);
	bool BPPreventFirstPerson();
	struct FLinearColor BPGetCrosshairColor();
	bool BPPreventInputType(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	void SetTPVCamOffset();
	void BlinkDamageNodeInterp(float Delta);
	struct FRotator BPModifyRootMotionDeltaRotation(struct FRotator* Delta);
	void BPModifyRootMotionDeltaTranslation();
	float BPGetGravityZScale();
	void DealAOECollisionDamage();
	void Init_Fur();
	void InitFurRestDistance();
	void SetLastTransforms();
	void STATIC_UpdateFur();
	void STATIC_SimulateFur(float DeltaTime, TArray<struct UObject_FTransform>* InSocketTransforms, TArray<struct UObject_FTransform>* InLastSubstepSocketTransforms);
	void STATIC_SetFurParams(TArray<struct UObject_FTransform>* InSocketTransforms);
	void CreateNodeDynamicMATs();
	void Get_Launch_DirectionForWildLeap(class AActor* CalcActor, struct FVector* Return);
	bool BPHandleOnStopFire();
	void BP_OnSetDeath();
	void TraceForLeapCollisionDamage();
	void STATIC_AngryAOEDmg();
	void ShouldStopJumpRotation(bool* Return);
	void STATIC_LaunchLiquidBomb();
	void STATIC_LiquidBombTrace();
	void FinishLeapTamed();
	void GetLaunchDirection(class AActor* CalcActor, struct FVector* Return);
	void LaunchAtTracePoint();
	void ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference);
	void GetClampedLookDir(bool LimitLowerPitch, struct FVector* Return);
	void STATIC_LeapingTrace();
	void ExecuteTamedLEap();
	bool BPHandleOnStopTargeting();
	void UpdateLeapTargetVFXLocation(bool IsVisible, const struct FVector& WorldLoc, const struct FRotator& WorldRot, const struct FHitResult& HitResult, const struct FVector& SurfaceNormal);
	void STATIC_Calc_Leap_TargetTamed(const struct FProjectileArc& Arc, float DebugDrawDuration, bool* FoundValidTarget, bool* IsAirTarget, struct FVector* Location, struct FRotator* Rotation, struct FVector* TargetNormal, float* ArcTime, struct FHitResult* HitResult);
	void GetVerticalViewAngle(float* Angle);
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	bool MoveBlocked();
	void BSetupDinoTameable();
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void CreateIceSpearTargetArray(TArray<class AActor*>* NewParam, TArray<class AActor*>* NewParam1);
	void SetImmuneToDamage(bool Immune);
	void StartTorpid();
	void DestroyChestNode();
	void DamageChestNode(float Damage);
	bool BPCanTargetCorpse();
	void ExposeChestNode(bool Hide);
	void DestroyRightShoulderNode();
	void RightLegNode_Destroyed();
	void HideLegNodes();
	void ExposeLegNodes(bool Hide, bool RightLeg);
	void BPDoAttack(int* AttackIndex);
	void DamageRightShoulderNode(float Damage);
	void DamageRightLegNode(float Damage);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	float STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	void ClearLeapTarget();
	bool BPShouldLimitForwardDirection();
	void BPTimerNonDedicated();
	void CheckLeapAttackEnd();
	void STATIC_BPTimerServer();
	void FinishLeap();
	void OnRep_bDoingLeap();
	void STATIC_StartLeap();
	void IceKaijuShakePlayersOff(float* Duration);
	bool BPCanBeBaseForCharacter(class APawn** Pawn);
	int BPAdjustAttackIndex(int* AttackIndex);
	void Ice_Kaiju_Perform_Attack(TEnumAsByte<EIceKaijuAttackList> Attack);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void UserConstructionScript();
	void CallFunc_StunKaiju();
	void SetVar_IKArenaManager(class AActor* ArenaManager);
	void ReceiveTick(float* DeltaSeconds);
	void SetAngry(bool IsAngry);
	void MulticastApplyLeapDownForce();
	void BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void PlayLeapAttackHitFX();
	void ReceiveBeginPlay();
	void Rep_ExposeLegNodesWithDelay(bool Hide, float Delay, bool RightLeg);
	void Rep_ExposeLegNodes(bool Hide, bool RightLeg);
	void AnimNotify_TurnForAttack();
	void RotateAttack();
	void AnimNotify_AttackTurnFinished();
	void Rep_ExposeChestNodeWithDelay(bool Hide, float Delay);
	void Rep_ExposeChestNode(bool Hide);
	void AnimNotify_LeapAttackBegin();
	void LaunchIceSpears();
	void FreezeAOE(bool On);
	void DelayedPress();
	void Server_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, bool LeapInstant, const struct FVector& MaxDistLeapTraceGroundLoc, bool FailedToFindMaxDistLeapTraceGroundLoc);
	void Multi_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, const struct FVector& MaxDistLeapTraceGroundLoc, bool FailedToFindMaxDistLeapTraceGroundLoc);
	void RequestLeapResponse(bool IsHoldingLeap);
	void BP_OnJumpReleased();
	void BP_OnJumpPressed();
	void Multicast_SetInput(bool PreventInput);
	void ServerDoAttack(int AttackIndex);
	void AnimNotify_LaunchBomb();
	void DelayedClearLeap();
	void ClearLeap();
	void UpdateAllJumpRotation();
	void UpdateJumpRotation();
	void MultiRestoreInput();
	void AnimNotify_TamedLeapDamage();
	void Multi_ApplyFreezeFromIceAura(class APrimalCharacter* Target);
	void IceAuraCheck();
	void BndEvt__LeapCheckSphere_K2Node_ComponentBoundEvent_215_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void MultiToggleIceAuraVFX(bool Visible);
	void AnimNotify_EnableIK();
	void IsDoneAttacking();
	void Multi_SetNodeColor(int Node, float Alpha);
	void Multicast_IceKaijuDebugInfo();
	void Multicast_DrawDebugSphere(const struct FVector& Loc, const struct FLinearColor& LineColor, float Duration, float Radius);
	void Multi_InterpRightLegNode(const struct FLinearColor& Color);
	void Multi_InterpRightShoulderNode(const struct FLinearColor& Color);
	void Server_SetHoldLeftClick(bool Value);
	void StunKaiju();
	void EquipSaddle();
	void Multi_PlayNodeDestroyFX(const struct FVector& Loc);
	void UpdateSaddlePhysics();
	void Multi_DelayedTurnOffHealthRegen();
	void ExecuteUbergraph_IceKaiju_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
