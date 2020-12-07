#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Scout_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Scout_Character_BP.Scout_Character_BP_C
// 0x1309 (0x3491 - 0x2188)
class AScout_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UAudioComponent*                             MovingAudio;                                              // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        LaserMesh;                                                // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    AlertModeFXComponent;                                     // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TrailParticleSystem;                                      // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Scout_C*    DinoCharacterStatus_BP_Scout_C1;                          // 0x21A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnParticleSystemComponent;                             // 0x21B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RechargeParticleSystemComponent;                          // 0x21B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LevitationParticleSystemComponent;                        // 0x21C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ThrusterParticleSystemComponent;                          // 0x21C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    PossessingPlayerController;                               // 0x21D0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWeapScoutRemote_C*                          FiringWeapon;                                             // 0x21D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                ShieldValueCurrent;                                       // 0x21E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ShieldValueMax;                                           // 0x21E4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastShieldHitTimeSeconds;                                 // 0x21E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AbsorbedDamagePerShieldHit;                               // 0x21EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldRechargeTimeSeconds;                                // 0x21F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrackerLifeTimeSeceonds;                                  // 0x21F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldDamageAlertTimeIntervalSeconds;                     // 0x21F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x21FC(0x0004) MISSED OFFSET
	TArray<struct FScoutDamageStageEntry>              ShieldDamageStages;                                       // 0x2200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystemComponent*                    LastShieldDamageVFX;                                      // 0x2210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ScoutDisconnectVFX;                                       // 0x2218(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TriggerExplosionOnEndPlay;                                // 0x2219(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x221A(0x0002) MISSED OFFSET
	float                                              DashAttackImpulse;                                        // 0x221C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             DashLastActivatedTimeSeconds;                             // 0x2220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DashDurationSeconds;                                      // 0x2228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x222C(0x0004) MISSED OFFSET
	TArray<class APrimalCharacter*>                    DashTargets;                                              // 0x2230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              DashDamageBase;                                           // 0x2240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrackerCooldownOnMissSeconds;                             // 0x2244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerifyPosessingSurvivorRateSeconds;                       // 0x2248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DashImpactImpulseOnTargetGround;                          // 0x224C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TrackerBuff;                                              // 0x2250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReturnToThrowerSpawnMaxDistance;                          // 0x2258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ScoutIsMoving;                                            // 0x225C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x225D(0x0003) MISSED OFFSET
	float                                              MovementVFXTickIntervalSeconds;                           // 0x2260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x2264(0x0004) MISSED OFFSET
	class UClass*                                      ScoutConsumedResouce;                                     // 0x2268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElevateSpeedMultiplier;                                   // 0x2270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x2274(0x0004) MISSED OFFSET
	class UPrimalItem*                                 FiringItem;                                               // 0x2278(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoutRange;                                               // 0x2280(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoutWarnRangePercent;                                    // 0x2284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoutWarnRangeNotificationLifetimeSeconds;                // 0x2288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x228C(0x0004) MISSED OFFSET
	double                                             ScoutWarnRangeLastNotificationTimeSeconds;                // 0x2290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrusterVFXRunningScale;                                  // 0x2298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetImpactVFXDuration;                                  // 0x229C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             ClientInitTrackerBeamFXTimeSeconds;                       // 0x22A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamImpactDistance;                                       // 0x22A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamVFXDurationBase;                                      // 0x22AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamVFXDurationCurrent;                                   // 0x22B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetImpactVFXMaxScale;                                  // 0x22B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 BeamDurationToLengthCurve;                                // 0x22B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BeamValidTarget;                                          // 0x22C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x22C1(0x0003) MISSED OFFSET
	struct FLinearColor                                WarningMessageColor;                                      // 0x22C4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BeamNoTargetColor;                                        // 0x22D4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BeamColorCurrent;                                         // 0x22E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DashAttackIndex;                                          // 0x22F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TrackerBeamAttackIndex;                                   // 0x22F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoutPosessionStaminaDrain;                               // 0x22FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoutStaminaDrainRunningMult;                             // 0x2300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoutStaminaDrainIntervalSeconds;                         // 0x2304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResourceStaminaValue;                                     // 0x2308(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x230C(0x0004) MISSED OFFSET
	double                                             TimePossessedByPlayerSeconds;                             // 0x2310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       StaminaDescriptiveName;                                   // 0x2318(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CheckConsumeResourceIntervalSeconds;                      // 0x2340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LowStaminaWarningDisplayTime;                             // 0x2344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastLowStaminaWarningTimeSeconds;                         // 0x2348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             ClientInitImpactVFXTimeSeconds;                           // 0x2350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      BeamValidTargetActor;                                     // 0x2358(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DestoryDelayOnUnpossess;                                  // 0x2360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x2364(0x0004) MISSED OFFSET
	double                                             DelayedDestroyTimeSeconds;                                // 0x2368(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DisconnectOnOutOfStaminaTimeSeconds;                      // 0x2370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerOwnedScout;                                         // 0x2374(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x2375(0x0003) MISSED OFFSET
	struct FHUDElement                                 ResourceHUDElement;                                       // 0x2378(0x00F8) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                PlayerResourceAmountOnSpawn;                              // 0x2470(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AIStrafeSpeed;                                            // 0x2474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AIStrafeSpeedAimedAt;                                     // 0x2478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DashAttackImpulseAILeftRight;                             // 0x247C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DashAttackImpulseAIForward;                               // 0x2480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LowStamina;                                               // 0x2484(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x2485(0x0003) MISSED OFFSET
	float                                              LowStaminaThreshold;                                      // 0x2488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x248C(0x0004) MISSED OFFSET
	double                                             LastShieldDamageTime;                                     // 0x2490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FScoutVisionDinoAIData>              ScoutVisionDinoAIData;                                    // 0x2498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRotator                                    ZeroVelocityRotationRate;                                 // 0x24A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x24B4(0x0004) MISSED OFFSET
	double                                             LastScoutRecallTime;                                      // 0x24B8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurrentlyPossessedByPlayer;                               // 0x24C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x24C1(0x0003) MISSED OFFSET
	float                                              MaxSupportedScoutRange;                                   // 0x24C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           ShieldStat;                                               // 0x24C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           EnergyStat;                                               // 0x24C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           EnergyPerResourceStat;                                    // 0x24CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           ScoutRangeStat;                                           // 0x24CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DashImpactImpulseOnTarget;                                // 0x24CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetRoll;                                               // 0x24D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRoll;                                                  // 0x24D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTurnInputValue;                                        // 0x24D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x24DC(0x0004) MISSED OFFSET
	double                                             LastTimePlayedTerrainImpactFX;                            // 0x24E0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CheckMekRadius;                                           // 0x24E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepairMekSparkScale;                                      // 0x24EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealMekAmountOnTick;                                      // 0x24F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FoodMekAmountOnTick;                                      // 0x24F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastMovementInputVectorReplicated;                        // 0x24F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           SpeedStat;                                                // 0x2504(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           LevelStat;                                                // 0x2505(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x2506(0x0002) MISSED OFFSET
	float                                              MovingVolumeMult;                                         // 0x2508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DefaultVFXColor;                                          // 0x250C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x251C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x2520(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x2528(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2530(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x2531(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x2538(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController2;            // 0x2540(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2548(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x2549(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue3;                      // 0x2550(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Variable;                                        // 0x2558(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x255C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x255D(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2560(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x2564(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_Event_MyComp;                                      // 0x2570(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_Other;                                       // 0x2578(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_Event_OtherComp;                                   // 0x2580(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bSelfMoved;                                  // 0x2588(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x2589(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_Event_HitLocation;                                 // 0x258C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_Event_HitNormal;                                   // 0x2598(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_Event_NormalImpulse;                               // 0x25A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  K2Node_Event_Hit;                                         // 0x25B0(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x2638(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x2640(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x2641(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x2644(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x2650(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x265C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x2660(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWildSlow_ReturnValue;                          // 0x266C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x266D(0x0003) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x2670(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x2678(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPrimalDino_ReturnValue;                        // 0x2679(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x267A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x267B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x267C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x267D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_Contains_ReturnValue;                      // 0x267E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x1];                                       // 0x267F(0x0001) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x2680(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue3;                        // 0x2684(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2688(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x2690(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x269C(0x0004) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x26A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x26A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x26AC(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x26B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x26B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x26B9(0x0007) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x26C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue;                 // 0x26C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue;             // 0x26C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x26CA(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetUpVector_ReturnValue;                         // 0x26CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x26D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x26DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x26DD(0x0003) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetSocketTransform_ReturnValue;                  // 0x26E0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_GetSocketTransform_ReturnValue2;                 // 0x2710(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x2740(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x274C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x2758(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location2;                        // 0x2764(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation2;                        // 0x2770(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale2;                           // 0x277C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x2788(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x2790(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2798(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x2799(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x2];                                       // 0x279A(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_InputVector;                           // 0x279C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Conv_FloatToVector_ReturnValue;                  // 0x27A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x27B4(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_CustomEvent_Mek;                                   // 0x27B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPVEServer_ReturnValue;                         // 0x27C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x27C1(0x0007) MISSED OFFSET
	TArray<class UActorComponent*>                     CallFunc_GetComponentsByCustomTag_ReturnValue;            // 0x27C8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x27D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x27D9(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x27DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x27E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue2;                   // 0x27E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x27E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x5];                                       // 0x27E3(0x0005) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x27E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x27F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x27F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x27F9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_ConsumeMovementInputVector_ReturnValue;          // 0x27FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsScoutFirst_Person_IsFirstPerson;               // 0x2808(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Targeting;                             // 0x2809(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x280A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x5];                                       // 0x280B(0x0005) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue;                  // 0x2810(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetModeBP>                            CallFunc_SwitchNetworkMode_OutNetworkMode;                // 0x2818(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetModeBP>                            CallFunc_SwitchNetworkMode_OutNetworkMode2;               // 0x2819(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x281A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x281B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x4];                                       // 0x281C(0x0004) MISSED OFFSET
	struct FHitResult                                  K2Node_CustomEvent_HitResult;                             // 0x2820(0x0088) (Transient, DuplicateTransient)
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x28A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x28B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x28C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x28CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x28D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x28E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x28E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x28F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x28F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x28FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x28FD(0x0003) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter2;                    // 0x2900(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x2908(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x2909(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X;                                   // 0x290C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x2910(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x2914(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x2918(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x291C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x2928(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x2929(0x0003) MISSED OFFSET
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x292C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue;                     // 0x2930(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2934(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x2935(0x0003) MISSED OFFSET
	int                                                CallFunc_Subtract_IntInt_ReturnValue2;                    // 0x2938(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x293C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x293D(0x0003) MISSED OFFSET
	float                                              CallFunc_Conv_IntToFloat_ReturnValue2;                    // 0x2940(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x2944(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter3;                    // 0x2948(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x2950(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x2951(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x2954(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue3;                    // 0x2958(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x295C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_FFloor_ReturnValue;                              // 0x2960(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x4];                                       // 0x2964(0x0004) MISSED OFFSET
	struct FScoutDamageStageEntry                      CallFunc_Array_Get_Item;                                  // 0x2968(0x0010) (Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x2978(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x7];                                       // 0x2979(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue2;               // 0x2980(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x2988(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue3;                  // 0x2989(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x6];                                       // 0x298A(0x0006) MISSED OFFSET
	class UObject*                                     CallFunc_SelectObject_ReturnValue;                        // 0x2990(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystem*                             K2Node_DynamicCast_AsParticleSystem;                      // 0x2998(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x29A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x7];                                       // 0x29A1(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue3;               // 0x29A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x29B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        K2Node_Event_EndPlayReason;                               // 0x29B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x29B2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x1];                                       // 0x29B3(0x0001) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x29B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x29C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x29CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x29D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x4];                                       // 0x29E4(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter4;                    // 0x29E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast9_CastSuccess;                          // 0x29F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x7];                                       // 0x29F1(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue3;             // 0x29F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x2A00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x2A01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue6;                            // 0x2A02(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x5];                                       // 0x2A03(0x0005) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue2;                 // 0x2A08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue3;                // 0x2A10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue7;                            // 0x2A1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x3];                                       // 0x2A1D(0x0003) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue3;                 // 0x2A20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue8;                            // 0x2A28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue;         // 0x2A29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue2;        // 0x2A2A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x5];                                       // 0x2A2B(0x0005) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue4;                      // 0x2A30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue9;                            // 0x2A38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x7];                                       // 0x2A39(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController3;            // 0x2A40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast10_CastSuccess;                         // 0x2A48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x7];                                       // 0x2A49(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue4;                 // 0x2A50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDead_ReturnValue;                              // 0x2A58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue10;                           // 0x2A59(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x2A5A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x5];                                       // 0x2A5B(0x0005) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter5;                    // 0x2A60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast11_CastSuccess;                         // 0x2A68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x2A69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x6];                                       // 0x2A6A(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue4;               // 0x2A70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue11;                           // 0x2A78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x7];                                       // 0x2A79(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue5;                 // 0x2A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue5;                // 0x2A88(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue6;                // 0x2A94(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClientOrSinglePlayer_Result;                   // 0x2AA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClientOrSinglePlayer_Result2;                  // 0x2AA1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClientOrSinglePlayer_Result3;                  // 0x2AA2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x1];                                       // 0x2AA3(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue7;                // 0x2AA4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue2;              // 0x2AB0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x4];                                       // 0x2ABC(0x0004) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue;                        // 0x2AC0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x2AF0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x2AFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x2B00(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x2B0C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x3];                                       // 0x2B0D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x2B10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x4];                                       // 0x2B1C(0x0004) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x2B20(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_SelectTransform_ReturnValue;                     // 0x2B50(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue12;                           // 0x2B80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x7];                                       // 0x2B81(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x2B88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AScoutReturnToThrower_Actor_C*               CallFunc_FinishSpawningActor_ReturnValue;                 // 0x2B90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue6;                 // 0x2B98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue3;        // 0x2BA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue4;        // 0x2BA1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsScoutFirst_Person_IsFirstPerson2;              // 0x2BA2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue13;                           // 0x2BA3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x2BA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x3];                                       // 0x2BA5(0x0003) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue7;                 // 0x2BA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsScoutFirst_Person_IsFirstPerson3;              // 0x2BB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x2BB1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClientOrSinglePlayer_Result4;                  // 0x2BB2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServerOrSinglePlayer_Result;                   // 0x2BB3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue14;                           // 0x2BB4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x3];                                       // 0x2BB5(0x0003) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue8;                 // 0x2BB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BPIncrementItemTemplateQuantity_ReturnValue;     // 0x2BC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue4;                  // 0x2BC4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x3];                                       // 0x2BC5(0x0003) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue9;                 // 0x2BC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AHUD*                                        CallFunc_GetHUD_ReturnValue;                              // 0x2BD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterHUD*                                 K2Node_DynamicCast_AsShooterHUD;                          // 0x2BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast12_CastSuccess;                         // 0x2BE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x7];                                       // 0x2BE1(0x0007) MISSED OFFSET
	class UObject*                                     CallFunc_GetClassDefaultObject_ReturnValue;               // 0x2BE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalItem*                                 K2Node_DynamicCast_AsPrimalItem;                          // 0x2BF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast13_CastSuccess;                         // 0x2BF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue;                    // 0x2BF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x6];                                       // 0x2BFA(0x0006) MISSED OFFSET
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue;                   // 0x2C00(0x0028) (Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument;                     // 0x2C28(0x0050) (Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_TextToString_ReturnValue;                   // 0x2C78(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x2C88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x3];                                       // 0x2C89(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X2;                                  // 0x2C8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x2C90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x2C94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue2;                              // 0x2C98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2C9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x2CA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_FloatFloat_ReturnValue;              // 0x2CA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x3];                                       // 0x2CA5(0x0003) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x2CA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x2CAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_BoolBool_ReturnValue;                   // 0x2CAD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue2;                   // 0x2CAE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x1];                                       // 0x2CAF(0x0001) MISSED OFFSET
	class AHUD*                                        CallFunc_GetHUD_ReturnValue2;                             // 0x2CB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterHUD*                                 K2Node_DynamicCast_AsShooterHUD2;                         // 0x2CB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast14_CastSuccess;                         // 0x2CC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x3];                                       // 0x2CC1(0x0003) MISSED OFFSET
	struct FLinearColor                                CallFunc_MakeColor_ReturnValue;                           // 0x2CC4(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FColor                                      CallFunc_Conv_LinearColorToColor_ReturnValue;             // 0x2CD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array;                                   // 0x2CD8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue;                              // 0x2CE8(0x0028) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsValid_ReturnValue15;                           // 0x2D10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x7];                                       // 0x2D11(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Conv_TextToString_ReturnValue2;                  // 0x2D18(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue10;                // 0x2D28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue8;                // 0x2D30(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue16;                           // 0x2D3C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x3];                                       // 0x2D3D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue9;                // 0x2D40(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue3;              // 0x2D4C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue3;                              // 0x2D58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x2D5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0x3];                                       // 0x2D5D(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x2D60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x2D64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x3];                                       // 0x2D65(0x0003) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x2D68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue2;                // 0x2D70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x7];                                       // 0x2D71(0x0007) MISSED OFFSET
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue2;                  // 0x2D78(0x0028) (Transient, DuplicateTransient)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x2DA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData77[0x7];                                       // 0x2DA1(0x0007) MISSED OFFSET
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument2;                    // 0x2DA8(0x0050) (Transient, DuplicateTransient)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array2;                                  // 0x2DF8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue2;                             // 0x2E08(0x0028) (Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_TextToString_ReturnValue3;                  // 0x2E30(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FDamageEvent                                K2Node_MakeStruct_DamageEvent;                            // 0x2E40(0x0020) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsSubmerged_ReturnValue;                         // 0x2E60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData78[0x3];                                       // 0x2E61(0x0003) MISSED OFFSET
	float                                              CallFunc_BPAdjustDamage_ReturnValue;                      // 0x2E64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x2E68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x2E70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData79[0x3];                                       // 0x2E71(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_BeamDistance;                          // 0x2E74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_ValidTarget;                           // 0x2E78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x7];                                       // 0x2E79(0x0007) MISSED OFFSET
	class UObject*                                     CallFunc_GetDefaultObject_ReturnValue;                    // 0x2E80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AScout_Character_BP_C*                       K2Node_DynamicCast_AsScout_Character_BP_C;                // 0x2E88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast15_CastSuccess;                         // 0x2E90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData81[0x3];                                       // 0x2E91(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue4;                        // 0x2E94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x2E98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Conv_FloatToVector_ReturnValue2;                 // 0x2E9C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x2EA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x2EB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData82[0x4];                                       // 0x2EB4(0x0004) MISSED OFFSET
	class UPrimalAIState*                              CallFunc_GetActiveState_ReturnValue;                      // 0x2EB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UDinoAttackStateRanged_Scout_C*              K2Node_DynamicCast_AsDinoAttackStateRanged_Scout_C;       // 0x2EC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast16_CastSuccess;                         // 0x2EC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_ValidTargets;                          // 0x2EC9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData83[0x2];                                       // 0x2ECA(0x0002) MISSED OFFSET
	float                                              K2Node_CustomEvent_ImpactDistance;                        // 0x2ECC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Amount;                                // 0x2ED0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x2ED4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_ModifyCurrentStatusValue_ReturnValue;            // 0x2ED8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue2;                          // 0x2EDC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData84[0x3];                                       // 0x2EDD(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x2EE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue5;                        // 0x2EE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServerOrSinglePlayer_Result2;                  // 0x2EE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x2EE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x2EEA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData85[0x1];                                       // 0x2EEB(0x0001) MISSED OFFSET
	float                                              CallFunc_BPGetCurrentStatusValue_ReturnValue;             // 0x2EEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BPGetMaxStatusValue_ReturnValue;                 // 0x2EF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x2EF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x2EF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData86[0x3];                                       // 0x2EF9(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x2EFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetItemTemplateQuantity_ReturnValue;             // 0x2F00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData87[0x4];                                       // 0x2F04(0x0004) MISSED OFFSET
	struct FText                                       CallFunc_Conv_IntToText_ReturnValue;                      // 0x2F08(0x0028) (Transient, DuplicateTransient)
	class AHUD*                                        CallFunc_GetHUD_ReturnValue3;                             // 0x2F30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument3;                    // 0x2F38(0x0050) (Transient, DuplicateTransient)
	class AShooterHUD*                                 K2Node_DynamicCast_AsShooterHUD3;                         // 0x2F88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast17_CastSuccess;                         // 0x2F90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData88[0x7];                                       // 0x2F91(0x0007) MISSED OFFSET
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array3;                                  // 0x2F98(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue3;                             // 0x2FA8(0x0028) (Transient, DuplicateTransient)
	struct FColor                                      CallFunc_Conv_LinearColorToColor_ReturnValue2;            // 0x2FD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData89[0x4];                                       // 0x2FD4(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Conv_TextToString_ReturnValue4;                  // 0x2FD8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FColor                                      CallFunc_Conv_LinearColorToColor_ReturnValue3;            // 0x2FE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData90[0x4];                                       // 0x2FEC(0x0004) MISSED OFFSET
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument4;                    // 0x2FF0(0x0050) (Transient, DuplicateTransient)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array4;                                  // 0x3040(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue4;                             // 0x3050(0x0028) (Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_TextToString_ReturnValue5;                  // 0x3078(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x3088(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData91[0x3];                                       // 0x3089(0x0003) MISSED OFFSET
	float                                              CallFunc_BPGetCurrentStatusValue_ReturnValue2;            // 0x308C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BPGetMaxStatusValue_ReturnValue2;                // 0x3090(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x3094(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData92[0x3];                                       // 0x3095(0x0003) MISSED OFFSET
	float                                              CallFunc_BPGetCurrentStatusValue_ReturnValue3;            // 0x3098(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x309C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue4;                        // 0x30A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue3;               // 0x30A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue2;                        // 0x30B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue3;                   // 0x30B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue4;                   // 0x30B2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData93[0x5];                                       // 0x30B3(0x0005) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue4;               // 0x30B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x30C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData94[0x3];                                       // 0x30C1(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue7;                // 0x30C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue11;                // 0x30C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue5;                   // 0x30D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x30D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData95[0x2];                                       // 0x30D2(0x0002) MISSED OFFSET
	int                                                CallFunc_GetItemTemplateQuantity_ReturnValue2;            // 0x30D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue5;                  // 0x30D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0x30D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData96[0x2];                                       // 0x30DA(0x0002) MISSED OFFSET
	struct FLinearColor                                CallFunc_MakeColor_ReturnValue2;                          // 0x30DC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FColor                                      CallFunc_Conv_LinearColorToColor_ReturnValue4;            // 0x30EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BPGetMaxStatusValue_ReturnValue3;                // 0x30F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData97[0x4];                                       // 0x30F4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_Array_Get_Item2;                                 // 0x30F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BPGetCurrentStatusValue_ReturnValue4;            // 0x3100(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData98[0x4];                                       // 0x3104(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x3108(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast18_CastSuccess;                         // 0x3110(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData99[0x3];                                       // 0x3111(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue4;                  // 0x3114(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue4;                    // 0x3118(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue5;                    // 0x311C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue5;                  // 0x3120(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue6;                        // 0x3124(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x3128(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData100[0x4];                                      // 0x312C(0x0004) MISSED OFFSET
	class UObject*                                     CallFunc_GetDefaultObject_ReturnValue2;                   // 0x3130(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter6;                    // 0x3138(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast19_CastSuccess;                         // 0x3140(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_RandomBool_ReturnValue;                          // 0x3141(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData101[0x2];                                      // 0x3142(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x3144(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorRightVector_ReturnValue;                 // 0x3150(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_RandomBool_ReturnValue2;                         // 0x315C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData102[0x3];                                      // 0x315D(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue7;                        // 0x3160(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue3;               // 0x3164(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_SelectVector_ReturnValue;                        // 0x3170(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue8;                        // 0x317C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue10;                        // 0x3180(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue3;                    // 0x3181(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x3182(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_BoolBool_ReturnValue2;                  // 0x3183(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData103[0x4];                                      // 0x3184(0x0004) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue2;            // 0x3188(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue5;        // 0x3190(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsScoutFirst_Person_IsFirstPerson4;              // 0x3191(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData104[0x6];                                      // 0x3192(0x0006) MISSED OFFSET
	class APlayerController*                           CallFunc_GetPlayerController_ReturnValue;                 // 0x3198(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue11;                        // 0x31A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData105[0x7];                                      // 0x31A1(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue12;                // 0x31A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue4;                // 0x31B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x31BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x31C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData106[0x4];                                      // 0x31C4(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue5;                      // 0x31C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AAIController*                               K2Node_DynamicCast_AsAIController;                        // 0x31D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast20_CastSuccess;                         // 0x31D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue17;                           // 0x31D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData107[0x6];                                      // 0x31DA(0x0006) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue3;            // 0x31E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AWeapScoutRemote_C*                          K2Node_DynamicCast_AsWeapScoutRemote_C;                   // 0x31E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast21_CastSuccess;                         // 0x31F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData108[0x7];                                      // 0x31F1(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue13;                // 0x31F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x3200(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_ScoutVision_C*                         K2Node_DynamicCast_AsBuff_ScoutVision_C;                  // 0x3208(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast22_CastSuccess;                         // 0x3210(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData109[0x7];                                      // 0x3211(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue14;                // 0x3218(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue2;                            // 0x3220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_ScoutVision_C*                         K2Node_DynamicCast_AsBuff_ScoutVision_C2;                 // 0x3228(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast23_CastSuccess;                         // 0x3230(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData110[0x7];                                      // 0x3231(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue6;                      // 0x3238(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController4;            // 0x3240(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast24_CastSuccess;                         // 0x3248(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData111[0x7];                                      // 0x3249(0x0007) MISSED OFFSET
	class AHUD*                                        CallFunc_GetHUD_ReturnValue4;                             // 0x3250(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue4;            // 0x3258(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterHUD*                                 K2Node_DynamicCast_AsShooterHUD4;                         // 0x3260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast25_CastSuccess;                         // 0x3268(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue2;            // 0x3269(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData112[0x6];                                      // 0x326A(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue5;                        // 0x3270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue10;               // 0x3278(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData113[0x4];                                      // 0x3284(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue;           // 0x3288(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x3298(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData114[0x4];                                      // 0x329C(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item3;                                 // 0x32A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x32A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData115[0x7];                                      // 0x32A9(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter7;                    // 0x32B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast26_CastSuccess;                         // 0x32B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData116[0x3];                                      // 0x32B9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue11;               // 0x32BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue4;              // 0x32C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlliedWithOtherTeam_ReturnValue;               // 0x32D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData117[0x3];                                      // 0x32D5(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize_ReturnValue4;                              // 0x32D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue3;                             // 0x32DC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  CallFunc_MakeHitResult_ReturnValue;                       // 0x32E8(0x0088) (Transient, DuplicateTransient)
	class AController*                                 CallFunc_GetController_ReturnValue7;                      // 0x3370(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MakeLiteralFloat_ReturnValue;                    // 0x3378(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData118[0x4];                                      // 0x337C(0x0004) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue5;            // 0x3380(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue6;                  // 0x3388(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x338C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue4;             // 0x3390(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue8;                // 0x3398(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_ImpactNormal;                          // 0x339C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X3;                                  // 0x33A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y3;                                  // 0x33AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z3;                                  // 0x33B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData119[0x4];                                      // 0x33B4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue5;               // 0x33B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue2;                            // 0x33C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue18;                           // 0x33CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData120[0x3];                                      // 0x33CD(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize_ReturnValue5;                              // 0x33D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue9;                        // 0x33D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_FloatFloat_ReturnValue2;             // 0x33D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData121[0x7];                                      // 0x33D9(0x0007) MISSED OFFSET
	TArray<float>                                      K2Node_CustomEvent_Stats;                                 // 0x33E0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_SelectVector_ReturnValue2;                       // 0x33F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_SelectVector_ReturnValue3;                       // 0x33FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue4;                             // 0x3408(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData122[0x4];                                      // 0x3414(0x0004) MISSED OFFSET
	TArray<struct FLinearColor>                        CallFunc_GetItemDyeColors_ReturnValue;                    // 0x3418(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_FInterpTo_ReturnValue2;                          // 0x3428(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetUpVector_ReturnValue2;                        // 0x342C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x3438(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_ComposeRotators_ReturnValue;                     // 0x3444(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x3450(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue2;                  // 0x3458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue3;                  // 0x3460(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetItemColorID_ReturnValue;                      // 0x3468(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData123[0x4];                                      // 0x346C(0x0004) MISSED OFFSET
	TArray<unsigned char>                              CallFunc_GetColorizationData_ReturnValue;                 // 0x3470(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_StaticGetDinoColorSetIndexForItemColorID_ReturnValue;// 0x3480(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_Conv_IntToByte_ReturnValue;                      // 0x3484(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData124[0x3];                                      // 0x3485(0x0003) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue6;                        // 0x3488(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue3;                // 0x3490(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Scout_Character_BP.Scout_Character_BP_C");
		return ptr;
	}


	bool BPCanCryo(class AShooterPlayerController** ForPC);
	void BPOnRefreshColorization(TArray<struct FLinearColor>* Colors);
	bool BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	void ServerIsFiringItemInInventory(bool* Retval);
	void ServerIsUsingTrackerBeam(bool* Result);
	void OnCheckMek();
	bool BP_InterceptTurnInput(float* AxisValue);
	void STATIC_Set_StatsFromItem(TArray<float>* Stats);
	void SetupScoutDisconnect(float DelayTimeSeconds);
	void DestroyScout();
	struct FVector BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation);
	void ClearExpiredDinoAIData();
	void SetIsFleeingForDino(class APrimalDinoCharacter* Dino, bool IsFleeing);
	void Is_Dino_Fleeing(class APrimalDinoCharacter* Dino, bool* IsFleeing);
	TEnumAsByte<EStencilAlliance> BPOverrideStencilAllianceForTarget(class APrimalCharacter** TargetDino, class UPrimitiveComponent** Component);
	bool BPShouldCancelDoAttack(int* AttackIndex);
	void OnRep_LowStamina();
	void IsDashing(bool* Result);
	void STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void ScoutIsFirstPerson(bool* Retval);
	void InitBeamVFX();
	void EndBeam_VFX();
	void SetBeamValidTarget(bool Value, class AActor* Actor);
	bool BPHandleOnStopFire();
	void STATIC_Update_Target_Impact_VFX_Implementation();
	void Update_Beam_VFX_Implementation();
	void SetTargetImpactMaterial(float ImpactDistance);
	bool BPPreventStasis();
	bool BPHandleUseButtonPress(class AShooterPlayerController** RiderController);
	void IsScoutFirst_Person(bool* IsFirstPerson);
	void SetFirstPersonMaterial(bool IsFirstPerson);
	void IsServerOrSinglePlayer(bool* Result);
	void IsClientOrSinglePlayer(bool* Result);
	void Tracker_Missed();
	void Update_Scout_Vision();
	bool BPOverrideFPVViewLocation(class APrimalCharacter** viewingCharacter);
	struct FVector BPGetFPVViewLocation(class APrimalCharacter** viewingCharacter);
	void STATIC_PrivateTracker_Missed();
	void STATIC_Dash(const struct FVector& Direction, float Impulse);
	float BP_GetCustomModifier_RotationRate();
	float BP_GetCustomModifier_MaxSpeed();
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void ServerIs_Tracked_Target(class AActor* Target, bool* IsTrackedTarget);
	void Tracker_Hit_Character(class APrimalCharacter* HitCharacter, bool ApplyTracker, bool* ValidTarget);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void BP_OnSetDeath();
	bool STATIC_BPHandleControllerInitiatedAttack(int* AttackIndex);
	void Release_Possessing_Survivor();
	void GetPossessedByPlayer();
	void Spawned_From_Projectile(class AShooterPlayerController* ShooterPlayerController, float PossessDelay, class UPrimalItem* FiringItem);
	bool BPIsValidUnStasisCaster();
	void UserConstructionScript();
	void InpActEvt_Crouch_K2Node_InputActionEvent_124();
	void InpActEvt_Crouch_K2Node_InputActionEvent_123();
	void InpActEvt_Jump_K2Node_InputActionEvent_122();
	void InpActEvt_Jump_K2Node_InputActionEvent_121();
	void InpActEvt_Prone_K2Node_InputActionEvent_120();
	void InpActEvt_Prone_K2Node_InputActionEvent_119();
	void CrouchTick();
	void JumpTick();
	void StopPossessingPlayerMovement();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void CheckMek();
	void AnimNotify_RepairHandLeft();
	void AnimNotify_RepairHandRight();
	void ReplicateInputVector(const struct FVector& InputVector);
	void MULTI_ReplairMek(class APrimalDinoCharacter* Mek);
	void SERVER_SetScoutTargeting(bool Targeting);
	void ReleasePossessingSurvivorAndDestroy();
	void RechargeShield();
	void ClientActivateAlertMode();
	void ClientScoutDamaged(const struct FHitResult& HitResult);
	void ClientTickShieldDamageVFX();
	void ClientRechargeShield();
	void ReceiveBeginPlay();
	void SpawnEnd();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void TriggerDisconnectFX();
	void ScoutDied();
	void PossessedByPlayer();
	void MULTI_ReleasePossessingSurvivor();
	void ServerDashAttack();
	void VerifyPossessingSurvivor();
	void ReleasePossessingSurvivorAndDelayedDestroy();
	void DelayedDestroyActor();
	void ClientTrackerMissed();
	void BP_OnJumpPressed();
	void BP_OnJumpReleased();
	void CheckConsumeResource();
	void ClientConsumeResource();
	void TickThrusterVFX();
	void ClientTickAlertMode();
	void ClientDeactivateAlertMode();
	void ClientRanOutOfStamina();
	void ClientScoutRangeCheck();
	void CheckSubmerged();
	void ClientDashTick();
	void ClientDashEnd();
	void ClientInitTrackerBeamFX(float BeamDistance, bool ValidTarget);
	void UpdateTargetImpactVFX();
	void UpdateBeamVFX();
	void StartImpactVFX();
	void ServerHandleOnStopFire();
	void ClientEndTrackerBeamFX(bool ValidTargets, float ImpactDistance);
	void ApplyStaminaCost(float amount);
	void StaminaDrain();
	void ClientLowStamina();
	void ReleasePossessingSurvivorAndLongDelayedDestroy();
	void TickStaminaMeter();
	void MULTI_InitAIStrafing();
	void MULTI_InitAINonStrafing();
	void MULTI_AITargetAimingAtScout();
	void MULTI_AITargetNoLongerAimingAtScout();
	void ClientCheckClearExpiredDinoData();
	void DisableAI();
	void MULTI_SpawnedFromProjectile();
	void DelayedReleasePossessingSurvivorAndDelayedDestroy();
	void UpdateScoutVisionBuff();
	void RequestRecallScout();
	void ClientHitTerrain(const struct FVector& ImpactNormal);
	void MULTI_SetStatsFromItem(TArray<float>* Stats);
	void OWNINGCLIENT_TrackerHitCharacter();
	void ExecuteUbergraph_Scout_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
