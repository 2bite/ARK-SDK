#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KingKaiju_Character_BP.KingKaiju_Character_BP_C
// 0x0B60 (0x2D58 - 0x21F8)
class AKingKaiju_Character_BP_C : public ADino_Character_BP_RootMotion_C
{
public:
	class USceneComponent*                             Target_Left;                                              // 0x21F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Right;                                             // 0x2200(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SpawnInMesh;                                              // 0x2208(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           RightArmPusher;                                           // 0x2210(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           LeftArmPusher;                                            // 0x2218(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           ChargeOverlapComponent;                                   // 0x2220(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_KingKaiju_C* DinoCharacterStatus_BP_KingKaiju_C1;                      // 0x2228(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CenterArenaLocation;                                      // 0x2230(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InHordeMode;                                              // 0x223C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x223D(0x0003) MISSED OFFSET
	TArray<class APrimalCharacter*>                    ArenaEnemies;                                             // 0x2240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TEnumAsByte<EKingKaijuMovementMode>                MovementMode_1;                                           // 0x2250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EKingKaijuMovementMode>                DesiredMovementMode_1;                                    // 0x2251(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x2252(0x0006) MISSED OFFSET
	class UAnimMontage*                                MovementMontage;                                          // 0x2258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HadRequestedVelocity_1;                                   // 0x2260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x2261(0x0007) MISSED OFFSET
	double                                             LastLocomotionChange_1;                                   // 0x2268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TransitionBlock_1;                                        // 0x2270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    currentRotation_1;                                        // 0x2274(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DesiredRotation_1;                                        // 0x2280(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnRate;                                                 // 0x228C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocomotionDone_1;                                         // 0x2290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2291(0x0003) MISSED OFFSET
	struct FRotator                                    NetDesiredRotation_1;                                     // 0x2294(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnKaijuToFaceActor;                                     // 0x22A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnKaijuToFaceLoc;                                       // 0x22A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x22A2(0x0006) MISSED OFFSET
	class AActor*                                      KaijuTargetActorToTurn;                                   // 0x22A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     KaijuTurnToFaceLoc;                                       // 0x22B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCharging;                                               // 0x22BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartedCharging;                                          // 0x22BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingChargeLoop;                                        // 0x22BE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x22BF(0x0001) MISSED OFFSET
	TArray<class APrimalCharacter*>                    ShovedDinos;                                              // 0x22C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              ChargeHitImpulseScalar;                                   // 0x22D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeHitImpulseHorizontaltoVerticalRatio;                // 0x22D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AKingKaiju_AIController_BP_C*                AIController;                                             // 0x22D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SummonDinoLimit;                                          // 0x22E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x22E4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              PossibleCorruptDinoClasses;                               // 0x22E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastTimeSpawnedCorruptling;                               // 0x22F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnCorruptlingCooldown;                                 // 0x2300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLoc;                                                 // 0x2304(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        SectionDamageState;                                       // 0x2310(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        LastSectionDamageState;                                   // 0x2320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FDamageSections>                     BodySections;                                             // 0x2330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      ArmorHitPoints;                                           // 0x2340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      HardenTimer;                                              // 0x2350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DamageMultipliers;                                        // 0x2360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            DamageFX;                                                 // 0x2370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsInvulnerable;                                           // 0x2380(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayedFirstHordeMode;                                     // 0x2381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayedSecondHordeMode;                                    // 0x2382(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FinishCurrentHordeMode;                                   // 0x2383(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayersLostHordeMode;                                     // 0x2384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x2385(0x0003) MISSED OFFSET
	float                                              Temp_Timer;                                               // 0x2388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WaveSpread_Count;                                         // 0x238C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaveSpread_Angle;                                         // 0x2390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaveSpread_Dist;                                          // 0x2394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LatestBrokenArmorIndex;                                   // 0x2398(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x239C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CorruptionDynamicMaterial;                                // 0x23A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastHealthPercentBeforeHordeMode;                         // 0x23A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthPercentThresholdForHordeMode;                       // 0x23AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsVulnerable;                                             // 0x23B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x23B1(0x0003) MISSED OFFSET
	float                                              CurrentVulnerableColorValue;                              // 0x23B4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthPercentThresholdDuringHordeMode;                    // 0x23B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthPercentForFirstWipeout;                             // 0x23BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthPercentForSecondWipeout;                            // 0x23C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayedFirstWipeout;                                       // 0x23C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayedSecondWipeout;                                      // 0x23C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x23C6(0x0002) MISSED OFFSET
	float                                              InitialHealthWipeout;                                     // 0x23C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               FinishedWipeout;                                          // 0x23CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InWipeout;                                                // 0x23CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x23CE(0x0002) MISSED OFFSET
	class AActor*                                      CurrentElementNode;                                       // 0x23D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct UObject_FTransform>                  HandTraceCapsuleTransforms;                               // 0x23D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               RightHandTraceOn;                                         // 0x23E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftHandTraceOn;                                          // 0x23E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x23EA(0x0002) MISSED OFFSET
	int                                                MinLevelSummonDino;                                       // 0x23EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevelSummonDino;                                       // 0x23F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x23F4(0x0004) MISSED OFFSET
	class UAnimMontage*                                MoveMontage_Fwd;                                          // 0x23F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MoveMontage_Lft;                                          // 0x2400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MoveMontage_Rit;                                          // 0x2408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MoveMontage_Back;                                         // 0x2410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MoveMontage_Idle;                                         // 0x2418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MoveMontage_TurnLeft;                                     // 0x2420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MoveMontage_TurnRight;                                    // 0x2428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MoveMontage_TurnSmallLeft;                                // 0x2430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MoveMontage_TurnSmallRight;                               // 0x2438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MoveMontage_MoveFwdOutToIdle;                             // 0x2440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MoveMontage_IdleInToMoveFwd;                              // 0x2448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MoveMontage_MoveBackOutToIdle;                            // 0x2450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MoveMontage_IdleInToMoveBack;                             // 0x2458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    LoopingWipeoutFX;                                         // 0x2460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayWipeoutLoopingFX;                                     // 0x2468(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x2469(0x0003) MISSED OFFSET
	float                                              MegaMekPresenceDmgReduction;                              // 0x246C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseMeteorCooldownMin;                                    // 0x2470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseMeteorCooldownMax;                                    // 0x2474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAlpha;                                                  // 0x2478(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x2479(0x0003) MISSED OFFSET
	float                                              WipeoutChargeTime;                                        // 0x247C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ATargetPoint*                                LeashActor;                                               // 0x2480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingIntro;                                             // 0x2488(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x2489(0x0003) MISSED OFFSET
	float                                              ApplyHealthBarBuffFrequency;                              // 0x248C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeCheckApplyHealthBarBuff;                          // 0x2490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopPollingToPlayIntroLoop;                               // 0x2498(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x2499(0x0003) MISSED OFFSET
	int                                                ElementNodeCount;                                         // 0x249C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	class AActor*                                      KKSpawnLoc;                                               // 0x24A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HeadDynamicMIC;                                           // 0x24A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BodyDynamicMIC;                                           // 0x24B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LegsDynamicMIC;                                           // 0x24B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TailDynamicMIC;                                           // 0x24C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnInMICValue;                                          // 0x24C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x24CC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SpawnMeshDynamicMIC;                                      // 0x24D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TekShieldDamageMultiplier;                                // 0x24D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DifficultyIndex;                                          // 0x24DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             SpawnTime;                                                // 0x24E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              TimeSinceSpawn;                                           // 0x24E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              TimeLimitUntilDespawn;                                    // 0x24EC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Despawning;                                               // 0x24F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x24F1(0x0003) MISSED OFFSET
	float                                              StepDamageAmount;                                         // 0x24F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeHurt;                                             // 0x24F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccumulatedDamageSinceLastInterval;                       // 0x2500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayedLowHealthMusic;                                     // 0x2504(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x2505(0x0003) MISSED OFFSET
	class AActor*                                      ArenaManager;                                             // 0x2508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BodyDynamicMIC2;                                          // 0x2510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DmgMultiplierForSingleplayer;                             // 0x2518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x251C(0x0004) MISSED OFFSET
	TArray<class FString>                              PossibleCorruptDinoClassAssets;                           // 0x2520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UObject*                                     CallFunc_GetDefaultObject_ReturnValue;                    // 0x2530(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKingKaiju_Character_BP_C*                   K2Node_DynamicCast_AsKingKaiju_Character_BP_C;            // 0x2538(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2540(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x2541(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x2544(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x2548(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0x2549(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue3;                // 0x254A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x1];                                       // 0x254B(0x0001) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x254C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2550(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x2554(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor3;                   // 0x2558(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp3;                    // 0x2560(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex3;               // 0x2568(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bFromSweep3;                   // 0x256C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x256D(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_SweepResult3;                  // 0x2570(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x25F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_Value;                                       // 0x25F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_Value2;                                      // 0x25FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x5];                                       // 0x25FB(0x0005) MISSED OFFSET
	class AActor*                                      K2Node_Event_ArenaManager;                                // 0x2600(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x2608(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x260C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystem*                             K2Node_CustomEvent_FX;                                    // 0x2610(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x2618(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Scale;                                 // 0x2624(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable3;                          // 0x2630(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x2634(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x2638(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x2640(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x4];                                       // 0x2644(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor2;                   // 0x2648(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp2;                    // 0x2650(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex2;               // 0x2658(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bFromSweep2;                   // 0x265C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x265D(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_SweepResult2;                  // 0x2660(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor;                    // 0x26E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp;                     // 0x26F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex;                // 0x26F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bFromSweep;                    // 0x26FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x26FD(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_SweepResult;                   // 0x2700(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x2788(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x2789(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x278C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0x2798(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x27A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_ArmorIndex;                            // 0x27B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x27B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x27B5(0x0003) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x27B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKingKaiju_AIController_BP_C*                K2Node_DynamicCast_AsKingKaiju_AIController_BP_C;         // 0x27C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x27C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x27C9(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue;                     // 0x27CC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x27D4(0x0004) MISSED OFFSET
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue;                       // 0x27D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Value2;                                // 0x27E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Value;                                 // 0x27E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue4;                // 0x27E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue5;                // 0x27E3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0xC];                                       // 0x27E4(0x000C) MISSED OFFSET
	struct UObject_FTransform                          K2Node_CustomEvent_transform;                             // 0x27F0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_CreateWarning;                         // 0x2820(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x2821(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_WarningLoc;                            // 0x2824(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_WarningRot;                            // 0x2830(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x4];                                       // 0x283C(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x2840(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x2848(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x2854(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x2860(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x286C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x2870(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x2874(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AEX_Proj_Meteor_KingKaiju_C*                 CallFunc_FinishSpawningActor_ReturnValue;                 // 0x2878(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x2880(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x4];                                       // 0x288C(0x0004) MISSED OFFSET
	class AEX_Proj_Meteor_KingKaiju_C*                 K2Node_DynamicCast_AsEX_Proj_Meteor_KingKaiju_C;          // 0x2890(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x2898(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x7];                                       // 0x2899(0x0007) MISSED OFFSET
	class UProjectileMovementComponent*                CallFunc_AddComponent_ReturnValue;                        // 0x28A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x8];                                       // 0x28A8(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_AddComponent_RelativeTransform_AddComponentDefaultTransform;// 0x28B0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x28E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x4];                                       // 0x28E4(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x28E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x28F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable4;                          // 0x28FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue;           // 0x2900(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue4;                         // 0x2910(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2914(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2918(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x7];                                       // 0x2919(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item;                                  // 0x2920(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x2928(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x2930(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x2931(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x2];                                       // 0x2932(0x0002) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x2934(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable5;                          // 0x2938(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Loc3;                                  // 0x293C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue5;                         // 0x2948(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x4];                                       // 0x294C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x2950(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x2958(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x2960(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x4];                                       // 0x296C(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x2970(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue3;                      // 0x2978(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Loc2;                                  // 0x2980(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x4];                                       // 0x298C(0x0004) MISSED OFFSET
	class AKingKaiju_AIController_BP_C*                K2Node_DynamicCast_AsKingKaiju_AIController_BP_C2;        // 0x2990(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x2998(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x7];                                       // 0x2999(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue3;             // 0x29A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x29A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x4];                                       // 0x29AC(0x0004) MISSED OFFSET
	class APrimalCharacter*                            CallFunc_Array_Get_Item2;                                 // 0x29B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x29B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x3];                                       // 0x29B9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x29BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue2;          // 0x29C8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x29D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x4];                                       // 0x29DC(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item3;                                 // 0x29E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x29E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x7];                                       // 0x29E9(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x29F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x29F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x7];                                       // 0x29F9(0x0007) MISSED OFFSET
	struct FHitResult                                  CallFunc_MakeHitResult_ReturnValue;                       // 0x2A00(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_Array_Contains_ReturnValue;                      // 0x2A88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x3];                                       // 0x2A89(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Loc;                                   // 0x2A8C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_Rot2;                                  // 0x2A98(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x4];                                       // 0x2AA4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue4;             // 0x2AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x2AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x2AB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x4];                                       // 0x2AC4(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue3;          // 0x2AC8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_CustomEvent_TurnOn;                                // 0x2AD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x3];                                       // 0x2AD9(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x2ADC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue6;                // 0x2AE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x3];                                       // 0x2AE1(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Start;                                 // 0x2AE4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_End;                                   // 0x2AF0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_Rot;                                   // 0x2AFC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetScaledCapsuleSize_OutRadius;                  // 0x2B08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetScaledCapsuleSize_OutHalfHeight;              // 0x2B0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  CallFunc_CapsuleSweepFast_OutHit;                         // 0x2B10(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_CapsuleSweepFast_ReturnValue;                    // 0x2B98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2B99(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x2B9A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x1];                                       // 0x2B9B(0x0001) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable6;                          // 0x2B9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue4;                        // 0x2BA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x7];                                       // 0x2BA1(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item4;                                 // 0x2BA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue6;                         // 0x2BB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoesImplementInterface_ReturnValue;              // 0x2BB4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoesImplementInterface_ReturnValue2;             // 0x2BB5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoesImplementInterface_ReturnValue3;             // 0x2BB6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x1];                                       // 0x2BB7(0x0001) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter2;                // 0x2BB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x2BC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x2BC1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x2BC2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x1];                                       // 0x2BC3(0x0001) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x2BC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalCharacterStatusComponent*             CallFunc_GetCharacterStatusComponent_ReturnValue;         // 0x2BC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2BD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x4];                                       // 0x2BD4(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue4;                        // 0x2BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADayCycleManager*                            CallFunc_GetDayCycleManager_ReturnValue;                  // 0x2BE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TScriptInterface<class UExtinctionDayCycle_Interface_C> K2Node_DynamicCast_AsExtinctionDayCycle_Interface_C;      // 0x2BE8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x2BF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x7];                                       // 0x2BF9(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetVar_KKArenaLoc_ServerPoint;                   // 0x2C00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoesImplementInterface_ReturnValue4;             // 0x2C08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x7];                                       // 0x2C09(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue5;                        // 0x2C10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x2C18(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x4];                                       // 0x2C24(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue4;          // 0x2C28(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue6;                        // 0x2C38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue5;                       // 0x2C40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x4];                                       // 0x2C44(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item5;                                 // 0x2C48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue5;                        // 0x2C50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x7];                                       // 0x2C51(0x0007) MISSED OFFSET
	TScriptInterface<class UMek_Character_BP_Interface_C> K2Node_DynamicCast_AsMek_Character_BP_Interface_C;        // 0x2C58(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast9_CastSuccess;                          // 0x2C68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoesImplementInterface_ReturnValue5;             // 0x2C69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x2];                                       // 0x2C6A(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue5;                // 0x2C6C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue5;          // 0x2C78(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_RandomBool_ReturnValue;                          // 0x2C88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x3];                                       // 0x2C89(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue6;                       // 0x2C8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue6;                        // 0x2C90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x7];                                       // 0x2C91(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item6;                                 // 0x2C98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TScriptInterface<class UMek_Character_BP_Interface_C> K2Node_DynamicCast_AsMek_Character_BP_Interface_C2;       // 0x2CA0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast10_CastSuccess;                         // 0x2CB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoesImplementInterface_ReturnValue6;             // 0x2CB1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x6];                                       // 0x2CB2(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue7;                        // 0x2CB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue6;                // 0x2CC0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x4];                                       // 0x2CCC(0x0004) MISSED OFFSET
	class ADayCycleManager*                            CallFunc_GetDayCycleManager_ReturnValue2;                 // 0x2CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TScriptInterface<class UExtinctionDayCycle_Interface_C> K2Node_DynamicCast_AsExtinctionDayCycle_Interface_C2;     // 0x2CD8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast11_CastSuccess;                         // 0x2CE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoesImplementInterface_ReturnValue7;             // 0x2CE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x6];                                       // 0x2CEA(0x0006) MISSED OFFSET
	class AActor*                                      CallFunc_GetVar_KKArenaLoc_ServerPoint2;                  // 0x2CF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue7;                // 0x2CF8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0x4];                                       // 0x2D04(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue4;                      // 0x2D08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKingKaiju_AIController_BP_C*                K2Node_DynamicCast_AsKingKaiju_AIController_BP_C3;        // 0x2D10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast12_CastSuccess;                         // 0x2D18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsStandalone_ReturnValue;                        // 0x2D19(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x2];                                       // 0x2D1A(0x0002) MISSED OFFSET
	float                                              CallFunc_Array_Set_Item_RefProperty;                      // 0x2D1C(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	int                                                CallFunc_Array_Set_Item2_RefProperty;                     // 0x2D20(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	unsigned char                                      UnknownData76[0x4];                                       // 0x2D24(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x2D28(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_CapsuleSweepMulti_ActorsToIgnore_RefProperty;    // 0x2D38(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_CapsuleSweepMulti_ActorsToIgnore2_RefProperty;   // 0x2D48(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KingKaiju_Character_BP.KingKaiju_Character_BP_C");
		return ptr;
	}


	void GetVar_DifficultyIndex(int* Return);
	void GetKingKaijuCharStatusComponent(class UPrimalCharacterStatusComponent** Component);
	void GetVar_InHordeMode(bool* Return);
	void GetKaijuEnemyList(TArray<class APrimalCharacter*>* EnemyList);
	void GetClosestEnemy(class AActor** Enemy);
	bool BPCanBaseOnCharacter(class APrimalCharacter** BaseCharacter);
	void STATIC_DoStepDmg(const struct FName& Socket);
	void STATIC_Spawn_Loot_Crate_on_Ascension_Platform();
	struct FHitMarkerSettings STATIC_BPOverrideDamageCauserHitMarker(class AShooterPlayerController** DamageCauserController, bool* bHitFriendlyTarget, float* PreDamageHealth, float* DamageAmount, bool* bIsPointDamage, struct FDamageEvent* DamageEvent, struct FHitResult* PointDamageHitResult);
	void BPSentKilledNotification(class AShooterPlayerController** ToPC);
	void InterpSpawnInMICs(float Delta);
	void TraceLeftHandChargeCapsule();
	void BPTimerServer();
	void TraceRightHandChargeCapsule();
	void MaybeStunKaijusFromBasicAttacks(class AActor* HitActor);
	void MaybeApplyHealthBarBuff(class AActor* DmgCauser);
	void BP_OnSetDeath();
	void Wipeout_Small_Knockback();
	void TriggerWipeout();
	void LerpDynamicMAT(float Delta);
	void BPDinoPostBeginPlay();
	void SetDamageState(int index, int* State);
	void STATIC_UpdateDamageStateFX(int InIndex, int InState);
	void BPOnAnimPlayedNotify(class UAnimMontage** AnimMontage, float* InPlayRate, struct FName* StartSectionName, bool* bReplicate, bool* bReplicateToOwner, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer);
	void IsLocomotionBlocked(bool* bLocked);
	void GetMovementMontage(TEnumAsByte<ERootMotionMovementMode>* Mode, class UAnimMontage** Montage);
	void STATIC_SpawnCorruptionWave(const struct FVector& Center, const struct FRotator& Rotation);
	void StartHordeMode();
	void CheckForNextStage(bool* StartHordeMode);
	void FindBodySectionNearestPoint(const struct FVector& DamagePoint, int* Section);
	void FindBodySectionByBone(const struct FName& Bone, const struct FVector& HitLocation, bool* FoundSection, int* Section);
	void InitializeDamageStates();
	void OnRep_DamageState();
	struct FRotator BPModifyRootMotionDeltaRotation(struct FRotator* Delta);
	void STATIC_RegisterHitForSwipeCharge(class AActor* HitActor, const struct FHitResult& HitResult);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void SummonCorruptDinos();
	float STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	void STATIC_Stun_KaijusFromCharge(class APrimalCharacter* Target, bool* StunnedKaiju);
	void MoveBlocked(bool* bLocked);
	void UpdateLocomotion();
	void ReceiveTick(float* DeltaSeconds);
	bool BPCanTargetCorpse();
	void UpdateArenaEnemies();
	void GroundPoundBigKnockback();
	void UserConstructionScript();
	void SetVar_KKArenaManager(class AActor* ArenaManager);
	void SetVar_FinishCurrentHordeMode(bool Value);
	void SetVar_PlayersLostHordeMode(bool Value);
	void ReceiveBeginPlay();
	void BndEvt__ChargeOverlapComponent_K2Node_ComponentBoundEvent_198_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void AnimNotify_StartCharging();
	void AnimNotify_SummonDinos();
	void Multi_SpawnFXAtLocation(class UParticleSystem* FX, const struct FVector& Location, const struct FVector& Scale);
	void AnimNotify_RoarKnockback();
	void BndEvt__LeftArmPusher_K2Node_ComponentBoundEvent_352_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void BndEvt__RightArmPusher_K2Node_ComponentBoundEvent_431_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void AnimNotify_RightHandOn();
	void AnimNotify_RightHandOff();
	void AnimNotify_LeftHandOn();
	void AnimNotify_LeftHandOff();
	void AnimNotify_StopActiveState();
	void AnimNotify_SpawnCorruptWave();
	void Multi_PlayArmorBreakReact(int ArmorIndex);
	void AnimNotify_DisableMeks();
	void Multi_SetVulnerable(bool Value);
	void Multi_SetInvulnerable(bool Value);
	void LaunchMeteor(const struct UObject_FTransform& Transform, bool CreateWarning, const struct FVector& WarningLoc, const struct FRotator& WarningRot);
	void AnimNotify_KillCorruptDinos();
	void AnimNotify_ExecuteArenaWipeout();
	void Multi_PlayWipeoutLightningFX(const struct FVector& Loc);
	void AnimNotify_FinishedArenaWipeout();
	void AnimNotify_WipeoutSmallKnockback();
	void Multi_ToggleWipeoutChargeFX();
	void Multi_SpawnESLightning(const struct FVector& Loc);
	void AnimNotify_TurnOffInvulnerable();
	void Multi_SpawnMeteorLandLocationFX(const struct FVector& Loc, const struct FRotator& Rot);
	void AnimNotify_PlayLoopingWipeoutFX();
	void Multi_SpawnLoopingWipeoutFX(bool TurnOn);
	void DebugCapsuleSweep(const struct FVector& Start, const struct FVector& End, const struct FRotator& Rot);
	void EnableMeks();
	void AnimNotify_RightFootStepDmg();
	void AnimNotify_LeftFootStepDmg();
	void ExecuteUbergraph_KingKaiju_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
