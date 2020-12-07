#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Cherufe_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cherufe_Character_BP.Cherufe_Character_BP_C
// 0x0870 (0x29F8 - 0x2188)
class ACherufe_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    VFX_SmeltingMouthFX;                                      // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SaddlePP_Killer;                                          // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    VFX_BodyLights;                                           // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TargetParticleSystem;                                     // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Cherufe_C*  DinoCharacterStatus_BP_Cherufe_C1;                        // 0x21A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    VFX_Weakened_Steam;                                       // 0x21B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    VFX_Vent_Socket_Constants;                                // 0x21B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BabyDinoSettings;                                         // 0x21C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AdultDinoSettings;                                        // 0x21C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastUnstasisStructureTime;                                // 0x21D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              UnstasisStructureCreateDamInterval;                       // 0x21D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x21DC(0x0004) MISSED OFFSET
	class UClass*                                      NestToSpawn;                                              // 0x21E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxStructuresInRadius;                                    // 0x21E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StructureCheckRadius;                                     // 0x21EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StructureTraceImpactOffset;                               // 0x21F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NestPointListCustomTagName;                               // 0x21FC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2204(0x0004) MISSED OFFSET
	double                                             LastEggSpawnTime;                                         // 0x2208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              StructureSpawnPointMaxDistance;                           // 0x2210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnstasisStructureCheckForDamInterval;                     // 0x2214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NestEggOffset;                                            // 0x2218(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StructureTraceSpawnOffset;                                // 0x2224(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NotifyNeighborCherufeOfEggRange;                          // 0x2230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamedKnockedOutTorpRecoveryRateMultiplier;                // 0x2234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpawnNestEgg;                                            // 0x2238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Retval;                                                   // 0x2239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsProjectileTargeting;                                    // 0x223A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x223B(0x0001) MISSED OFFSET
	float                                              ProjectileTargetVertAngleOffset;                          // 0x223C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FProjectileArc                              CurrentProjectileTargetArc;                               // 0x2240(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ProjectileArcForwardPower;                                // 0x2270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileMaxArcLength;                                   // 0x2274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MagmaProjectile;                                          // 0x2278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             ProjectileTargetingStartTime;                             // 0x2280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileCookTime;                                       // 0x2288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumProjectileCookTime;                                // 0x228C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaximumProjectileCookTime;                                // 0x2290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2294(0x0004) MISSED OFFSET
	struct FHUDElement                                 ProjectileCookingHUDTemplate;                             // 0x2298(0x00F8) (Edit, BlueprintVisible)
	class UTexture2D*                                  ProjectileCookingHUDReadytoUseIcon;                       // 0x2390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ServerProjectileCookTime;                                 // 0x2398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileForwardTargetingAngle;                          // 0x239C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileFoodCostMultiplier;                             // 0x23A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimpleCurve>                          ProjectileTargetingPowerCurve;                            // 0x23A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x23A5(0x0003) MISSED OFFSET
	float                                              ProjectileTargetingtoAirMultiplier;                       // 0x23A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSmelting;                                              // 0x23AC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x23AD(0x0003) MISSED OFFSET
	int                                                SmeltingMultiUseEntry;                                    // 0x23B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsChargingForge;                                          // 0x23B4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x23B5(0x0003) MISSED OFFSET
	float                                              ClientForgeChargeAmount;                                  // 0x23B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForgeChargeAmount;                                        // 0x23BC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxForgeCharge;                                           // 0x23C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForgeChargingStaminaPerSecondCost;                        // 0x23C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForgeChargingTime;                                        // 0x23C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargingForgeMovementSpeedMultiplier;                     // 0x23CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargingForgeRotationRateMultiplier;                      // 0x23D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x23D4(0x0004) MISSED OFFSET
	double                                             LastTimeToggleChargingForge;                              // 0x23D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputCooldownDelay;                                       // 0x23E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeForForgeToCool;                                       // 0x23E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VentForgeStaminaCostMax;                                  // 0x23E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VentForgeRadius;                                          // 0x23EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VentForgeImpulse;                                         // 0x23F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VentHeatMaxDamage;                                        // 0x23F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      VentHeatDamageType;                                       // 0x23F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimpleCurve>                          VentHeatDmgOverDistanceCurve;                             // 0x2400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x2401(0x0003) MISSED OFFSET
	float                                              VentHeatAttackOffset;                                     // 0x2404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      VentHeatBuffToAdd;                                        // 0x2408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VentHeatCost;                                             // 0x2410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VentHeatCooldown;                                         // 0x2414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastTimeVentHeat;                                         // 0x2418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeProjectileTargeting;                              // 0x2420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileTargetingCooldown;                              // 0x2428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x242C(0x0004) MISSED OFFSET
	class UParticleSystem*                             VentHeatParticleEffect;                                   // 0x2430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              LavaDamageTypes;                                          // 0x2438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      VentHeatProjectiles;                                      // 0x2448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             VentHeatProjectileLocations;                              // 0x2450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             VentHeatProjectileDirecitons;                             // 0x2460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               VentHeatProjectileSocketNames;                            // 0x2470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SpawningBatchIndex;                                       // 0x2480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PushBackRadius;                                           // 0x2484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Testfloat;                                                // 0x2488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentChargeAmountForClient;                             // 0x248C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentVentVFXKillZPercentage;                            // 0x2490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetVentVFXKillZPercentage;                             // 0x2494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentVFXFlameSpawnPercentage;                           // 0x2498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentVFXFlameTempreturePrecentage;                      // 0x249C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              Don_tEatClasses;                                          // 0x24A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              GetOnFireRadius;                                          // 0x24B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x24B4(0x0004) MISSED OFFSET
	TArray<class APrimalCharacter*>                    WarnedActorList;                                          // 0x24B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              FoodValuePerResourceItem;                                 // 0x24C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInRain;                                                // 0x24CC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInWater;                                               // 0x24CD(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x24CE(0x0002) MISSED OFFSET
	struct FRotator                                    AimingCameraRotationOffset;                               // 0x24D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AimingCameraLocationOffset;                               // 0x24DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AimingLocation;                                           // 0x24E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentCameraLocation;                                    // 0x24F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurrentCameraRotation;                                    // 0x2500(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsOveridingCamera;                                       // 0x250C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ResetCameraOverideLocation;                               // 0x250D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x250E(0x0002) MISSED OFFSET
	double                                             StopAimingTime;                                           // 0x2510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxChargePercentageInRain;                                // 0x2518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PrevIsProjectileTargeting;                                // 0x251C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x251D(0x0003) MISSED OFFSET
	double                                             PostTargetingStartTime;                                   // 0x2520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBabyAgeForHeat;                                        // 0x2528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x252C(0x0004) MISSED OFFSET
	double                                             LastTimeAteOil;                                           // 0x2530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EatOilCooldown;                                           // 0x2538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x253C(0x0004) MISSED OFFSET
	class UClass*                                      OilItemClass;                                             // 0x2540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeAmountAddedOnOilComsumption;                        // 0x2548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FoodStatAddedOnConsumeOil;                                // 0x254C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastForgeChargingUpdateTime;                              // 0x2550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    StartingRotationRate;                                     // 0x2558(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x2564(0x0004) MISSED OFFSET
	class UClass*                                      TauntBuffType;                                            // 0x2568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInLava;                                                // 0x2570(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x2571(0x0007) MISSED OFFSET
	double                                             LastWasInLavaTime;                                        // 0x2578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PreventFreezingBuffType;                                  // 0x2580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForgeSmeltingFoodConsumptionMultiplier;                   // 0x2588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x258C(0x0004) MISSED OFFSET
	class FString                                      FireballAbilityName;                                      // 0x2590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FHUDElement                                 AbilityNotUsableHUDTemplate;                              // 0x25A0(0x00F8) (Edit, BlueprintVisible)
	bool                                               bAllowMating;                                             // 0x2698(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x2699(0x0003) MISSED OFFSET
	float                                              FireballAttackCooldownInterval;                           // 0x269C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      UnableToMateString;                                       // 0x26A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ShotRequiresResourceType;                                 // 0x26B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShotRequiresResourceAmount;                               // 0x26B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x26BC(0x0004) MISSED OFFSET
	class UClass*                                      RiderBuff;                                                // 0x26C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AGameState*                                  CallFunc_GetGameState_ReturnValue;                        // 0x26C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterGameState*                           K2Node_DynamicCast_AsShooterGameState;                    // 0x26D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x26D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x26D9(0x0003) MISSED OFFSET
	struct FProjectileArc                              K2Node_CustomEvent_Arc;                                   // 0x26DC(0x0030) (Transient, DuplicateTransient)
	unsigned char                                      K2Node_CustomEvent_MessageType;                           // 0x270C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x270D(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_DisplayTime;                           // 0x2710(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsSingleton;                           // 0x2714(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x2715(0x0003) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x2718(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FColor                                      K2Node_MakeStruct_Color;                                  // 0x2720(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x2724(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x2728(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2730(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ProjectileTrySubtractFood_Success;               // 0x2731(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x6];                                       // 0x2732(0x0006) MISSED OFFSET
	class AHUD*                                        CallFunc_GetHUD_ReturnValue;                              // 0x2738(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterHUD*                                 K2Node_DynamicCast_AsShooterHUD;                          // 0x2740(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x2748(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Allowed_to_ChargeForge_ReturnValue;              // 0x2749(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_ChargingForge;                         // 0x274A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x274B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x274C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x274D(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x2750(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2754(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2758(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x275C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x275D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x275E(0x0002) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2760(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x2768(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x2769(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2770(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x2778(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue;                 // 0x2780(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x7];                                       // 0x2781(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x2788(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_CanRun;                                // 0x2790(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue2;                // 0x2791(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetModeBP>                            CallFunc_SwitchNetworkMode_OutNetworkMode;                // 0x2792(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x5];                                       // 0x2793(0x0005) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x2798(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x27A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x27A1(0x0007) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x27A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue3;                // 0x27B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x27B1(0x0007) MISSED OFFSET
	class UPrimalItem*                                 CallFunc_AddNewItem_ReturnValue;                          // 0x27B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x27C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x27C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_ModifyCurrentStatusValue_ReturnValue;            // 0x27C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x27CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x27CD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NewActiveState;                        // 0x27CE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x27CF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x27D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x27D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x6];                                       // 0x27D2(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue4;                        // 0x27D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x27E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x27EC(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue;           // 0x27F0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2800(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x2804(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item;                                  // 0x2808(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2810(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x7];                                       // 0x2811(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x2818(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x2820(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWildSlow_ReturnValue;                          // 0x2821(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x2822(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTeamIDInvincible_ReturnValue;                  // 0x2823(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlliedWithOtherTeam_ReturnValue;               // 0x2824(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x2825(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x2];                                       // 0x2826(0x0002) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x2828(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_NearChrufe_C*                          K2Node_DynamicCast_AsBuff_NearChrufe_C;                   // 0x2830(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x2838(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x2839(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x283C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue5;                        // 0x2848(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADayCycleManager*                            CallFunc_GetDayCycleManager_ReturnValue;                  // 0x2850(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetTemperatureAtLocation_ReturnValue;            // 0x2858(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x285C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPVEServer_ReturnValue;                         // 0x2860(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x2861(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2862(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x1];                                       // 0x2863(0x0001) MISSED OFFSET
	struct FRotator                                    CallFunc_Multiply_RotatorFloat_ReturnValue;               // 0x2864(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_SelectRotator_ReturnValue;                       // 0x2870(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsStart;                               // 0x287C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable2;                             // 0x287D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanAttack_ReturnValue;                           // 0x287E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue;                            // 0x287F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x2880(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x2881(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable2;                       // 0x2882(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable3;                             // 0x2883(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable3;                       // 0x2884(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x2885(0x0003) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue2;                      // 0x2888(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue3;                      // 0x2890(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2898(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x7];                                       // 0x2899(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue4;                      // 0x28A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_StaticGetItemNameAndIcon_OutItemName;            // 0x28A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UTexture2D*                                  CallFunc_StaticGetItemNameAndIcon_OutItemIcon;            // 0x28B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_StaticGetItemNameAndIcon_ReturnValue;            // 0x28C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x28C1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x28C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue;                   // 0x28D0(0x0028) (Transient, DuplicateTransient)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x28F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x4];                                       // 0x2904(0x0004) MISSED OFFSET
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument;                     // 0x2908(0x0050) (Transient, DuplicateTransient)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x2958(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x4];                                       // 0x295C(0x0004) MISSED OFFSET
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array;                                   // 0x2960(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x2970(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x7];                                       // 0x2971(0x0007) MISSED OFFSET
	struct FText                                       CallFunc_Format_ReturnValue;                              // 0x2978(0x0028) (Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_TextToString_ReturnValue;                   // 0x29A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue6;                        // 0x29B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_SelectString_ReturnValue;                        // 0x29B8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_BPFastTrace_ReturnValue;                         // 0x29C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x7];                                       // 0x29C9(0x0007) MISSED OFFSET
	class FString                                      K2Node_Select_ReturnValue;                                // 0x29D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x29E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x7];                                       // 0x29E1(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x29E8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cherufe_Character_BP.Cherufe_Character_BP_C");
		return ptr;
	}


	void OnRep_bAllowMating();
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void GetAllowMating(bool* Allow);
	void UpdateAllowMating();
	void UpdateForgeCharging();
	float BP_GetCustomModifier_MaxSpeed();
	void STATIC_UpdateTargetingAndAiming(float DeltaTime);
	void BPTimerNonDedicated();
	void BPTimerServer();
	bool BP_InterceptMoveForward(float* AxisValue);
	void IsConsumingOil(bool* Result);
	void BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed);
	void BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV);
	void Update_Targeting_Location_Particle(bool IsVisialbe, const struct FVector& Location);
	void CheckRaining(bool* ThisCharacterIsOpenToSkyAndItIsRaining);
	void STATIC_SpawnNestEgg();
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void ToggleInOutWaterVFX(bool InWater);
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void SetForgeEnabled(bool Enable);
	void UpdateVFX(float DeltaTime);
	void PushBackPawns();
	void OnRep_IsProjectileTargeting();
	void STATIC_BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void SpawnVentProjectiles();
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	float GetVentForgeStaminaCost();
	int BPAdjustAttackIndex(int* AttackIndex);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void StopChargingForge();
	void GetForgeChargedAmount(bool SmoothedValues, float* Value, float* Percent);
	void StartChargingForge();
	bool Allowed_to_ChargeForge();
	void DoVentHeatAttack();
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void ProjectileTrySubtractFood(bool* Success);
	void STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	bool BPHandleOnStopTargeting();
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	void BPDoAttack(int* AttackIndex);
	void GetVerticalViewAngle(float* Angle);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	bool SetTurretMode(bool* Enabled);
	void BPSetupTamed(bool* bWasJustTamed);
	void BPBecomeAdult();
	void BPBecomeBaby();
	void UserConstructionScript();
	void ServerRequest_FireProjectile(const struct FProjectileArc& Arc);
	void ClientShowErrorMessage(unsigned char MessageType, float DisplayTime, bool IsSingleton);
	void ServerRequestStartChargingForge();
	void ServerRequestStopChargingForge();
	void ServerRequestDoVentForgeAttack();
	void MultiSetSpeed(bool ChargingForge);
	void ReceiveBeginPlay();
	void BPUnstasis();
	void Multi_SetCanRun(bool CanRun);
	void AnimNotify_EatingFromOilGeyser();
	void Multi_UpdateSmeltingFX(bool NewActiveState);
	void TimeGatedTryAoEHeat();
	void BP_OnJumpPressed();
	void Multi_StartOrStopForgeChargingFX(bool IsStart);
	void AnimNotify_Taunt();
	void Server_TryTauntAttack();
	void Multi_UpdateLavaFloating();
	void ExecuteUbergraph_Cherufe_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
