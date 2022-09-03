#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mek_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mek_Character_BP.Mek_Character_BP_C
// 0x1440 (0x36C8 - 0x2288)
class AMek_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UAudioComponent*                             OverheatSoundLoop;                                        // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             HoverSoundLoop;                                           // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Left;                                              // 0x2298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Right;                                             // 0x22A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    HoverGroundParticles;                                     // 0x22A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      GunMesh;                                                  // 0x22B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           SwordTraceCapsuleVFX4;                                    // 0x22B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SwordImpactSFX;                                           // 0x22C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           SwordTraceCapsuleVFX3;                                    // 0x22C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           SwordTraceCapsuleVFX2;                                    // 0x22D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           SwordTraceCapsuleVFX1;                                    // 0x22D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           SwordTraceCapsule;                                        // 0x22E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SwordMesh;                                                // 0x22E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LeftFootHoverVFX;                                         // 0x22F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RightFootHoverVFX;                                        // 0x22F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            UnboardLocation;                                          // 0x2300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Mek_C*      DinoCharacterStatus_BP_Mek_C1;                            // 0x2308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugMekHovering;                                         // 0x2310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugMekSword;                                            // 0x2311(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugMekPistol;                                           // 0x2312(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugMekBackpacks;                                        // 0x2313(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysAllowMegaMekTransformation;                         // 0x2314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MegaMekTransformationDontRequireKingKaiju;                // 0x2315(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableMekPistol;                                          // 0x2316(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableMekTargeting;                                       // 0x2317(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityZScale_Normal;                                     // 0x2318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityZScale_Hover;                                      // 0x231C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsHovering;                                               // 0x2320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2321(0x0003) MISSED OFFSET
	float                                              FuelLevel;                                                // 0x2324(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              FuelLevel_Client;                                         // 0x2328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelMax;                                                  // 0x232C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHUDElement                                 FuelHUDElement;                                           // 0x2330(0x0150) (Edit, BlueprintVisible)
	double                                             LastHoverTickTime;                                        // 0x2480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverStrength;                                            // 0x2488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverAcceleration;                                        // 0x248C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverStrength_Current;                                    // 0x2490(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftFootVFXSocket;                                        // 0x2494(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightFootVFXSocket;                                       // 0x249C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x24A4(0x0004) MISSED OFFSET
	class UParticleSystem*                             HoverStartGroundParticleSystem;                           // 0x24A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetHoverHeight;                                        // 0x24B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InfiniteFuel;                                             // 0x24B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x24B5(0x0003) MISSED OFFSET
	float                                              FuelCostPerSecondWhileHovering;                           // 0x24B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeatCostPerSecondWhileHovering;                           // 0x24BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasValidCurrentHoverTarget;                               // 0x24C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x24C1(0x0003) MISSED OFFSET
	struct FVector                                     CurrentHoverTarget;                                       // 0x24C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             HoverStartTime;                                           // 0x24D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHoverWorldZ;                                           // 0x24D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DesiredInputDirection;                                    // 0x24DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DesiredFlattenedInputDirection;                           // 0x24E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FallVelocityDelta;                                        // 0x24F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHoldingTargetingButton;                                 // 0x2500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x2501(0x0007) MISSED OFFSET
	class UClass*                                      HoverBuffClass;                                           // 0x2508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentGroundPointUnderHoverTarget;                       // 0x2510(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHoverVelocity;                                         // 0x251C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHUDElement                                 HeatHUDElement;                                           // 0x2520(0x0150) (Edit, BlueprintVisible)
	float                                              HeatHUDElementPercentToStartColorShift;                   // 0x2670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimpleCurve>                          HeatHUDElementColorCurve;                                 // 0x2674(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x2675(0x0003) MISSED OFFSET
	struct FLinearColor                                HeatHUDElementCoolColor;                                  // 0x2678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HeatHUDElementHotColor;                                   // 0x2688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeatLevel;                                                // 0x2698(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              HeatLevel_Client;                                         // 0x269C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeatMax;                                                  // 0x26A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x26A4(0x0004) MISSED OFFSET
	double                                             LastHeatIncreaseTime;                                     // 0x26A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HeatDynamicMaterial_Limbs;                                // 0x26B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HeatDynamicMaterial_Torso;                                // 0x26B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SwordHandleDynamicMat;                                    // 0x26C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SwordBladeDynamicMat;                                     // 0x26C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    PistolDynamicMat;                                         // 0x26D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CurrentBackpackType;                                      // 0x26D8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FVector                                     MekUnboardRelativeLocation;                               // 0x26E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PistolTargetHitDistance;                                  // 0x26EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurrentPistolAimDirection;                                // 0x26F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverDamagePerSecond;                                     // 0x26FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             SwordEnemyImpactEffect;                                   // 0x2700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             SwordWorldImpactEffect;                                   // 0x2708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SwordImpactEffectScale;                                   // 0x2710(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SwordAttackForwardIndex;                                  // 0x271C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SwordAttackLeftIndex;                                     // 0x2720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SwordAttackRightIndex;                                    // 0x2724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ForceSwordSwingDirection;                                 // 0x2728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeFromMontageEndToAllowSwordCombo;                      // 0x272C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HurtAnim_Left;                                            // 0x2730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HurtAnim_Right;                                           // 0x2738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HurtAnim_Forward;                                         // 0x2740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HurtAnim_Back;                                            // 0x2748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableHeat;                                              // 0x2750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x2751(0x0003) MISSED OFFSET
	float                                              HoverVelocityZSmoothed;                                   // 0x2754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoRepairEnabled;                                        // 0x2758(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x2759(0x0007) MISSED OFFSET
	class UClass*                                      MekSelfHealBuffClass;                                     // 0x2760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             SelfHealCooldownStartNetworkTime;                         // 0x2768(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SelfHealCooldownTime;                                     // 0x2770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x2774(0x0004) MISSED OFFSET
	class UClass*                                      ItemTypeRequiredForAutoRepair;                            // 0x2778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AutoRepairMessageTextColor;                               // 0x2780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnInPlaceSpeed;                                         // 0x2790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x2794(0x0004) MISSED OFFSET
	class UClass*                                      BuffToGiveRiderOnMekDeath;                                // 0x2798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseUnboardEjectMode;                                      // 0x27A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x27A1(0x0007) MISSED OFFSET
	class UClass*                                      MekDestructionEmitter;                                    // 0x27A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MekDestructionDestroyActorDelayTime;                      // 0x27B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x27B4(0x0004) MISSED OFFSET
	struct FHUDElement                                 TransformHUDElement;                                      // 0x27B8(0x0150) (Edit, BlueprintVisible)
	struct FHUDElement                                 MegaMekTransformTimerHUDElement;                          // 0x2908(0x0150) (Edit, BlueprintVisible)
	struct FDinoSetup                                  MegaMekTransformationSetup;                               // 0x2A58(0x00F0) (Edit, BlueprintVisible)
	int                                                MegaMekTransformationNumMeksRequired;                     // 0x2B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KingKaijuDetectionRadius;                                 // 0x2B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastClientMegaMekTransformCheck;                          // 0x2B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCostPerPistolShot;                                    // 0x2B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeatAddedPerPistolShot;                                   // 0x2B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPercentOfMaxHealthToPlayHurtAnim;                      // 0x2B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentOfMaxHealthToPlayBigHurtAnim;                      // 0x2B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FuelAmmoType;                                             // 0x2B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastSwordVFXSweepTime;                                    // 0x2B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeatReductionCooldown;                                    // 0x2B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeatReductionSpeed;                                       // 0x2B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeatHoverVelocityMultiplier;                              // 0x2B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x2B84(0x0004) MISSED OFFSET
	struct FHUDElement                                 FuelBackgroundHUDElement;                                 // 0x2B88(0x0150) (Edit, BlueprintVisible)
	struct FHUDElement                                 HeatForegroundHUDElement;                                 // 0x2CD8(0x0150) (Edit, BlueprintVisible)
	bool                                               IsDying;                                                  // 0x2E28(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDoneDying;                                              // 0x2E29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x6];                                       // 0x2E2A(0x0006) MISSED OFFSET
	class AActor*                                      Murderer;                                                 // 0x2E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MegaMekSetupBuff;                                         // 0x2E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MekDepletedBuff;                                          // 0x2E40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastRemoteDepletedMekCheck;                               // 0x2E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DepletedMekCheckInterval;                                 // 0x2E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x2E54(0x0004) MISSED OFFSET
	TArray<class AMek_Character_BP_C*>                 TargetMeksToDeplete;                                      // 0x2E58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	double                                             LastSwordComboRequestTime;                                // 0x2E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             MegaMekTransformationStartNetworkTime;                    // 0x2E70(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MegaMekTransformationDuration;                            // 0x2E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MegaMekTransformationMinKingKaijuDifficulty;              // 0x2E7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsScanningForMeksToDeplete;                               // 0x2E80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MegaMekTransformationAllowedToActivate;                   // 0x2E81(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MegaMekTransformationStarted;                             // 0x2E82(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackpackMalfunctioning;                                   // 0x2E83(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MalfunctionFailsafeKingKaijuDistanceCheck;                // 0x2E84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MalfunctionFailsafeIntervalRange;                         // 0x2E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MalfunctionFailsafeInterval;                              // 0x2E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x2E94(0x0004) MISSED OFFSET
	double                                             MalfunctionFailsafeLastCheckTime;                         // 0x2E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OwningClientWantsToHover;                                 // 0x2EA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x2EA1(0x0007) MISSED OFFSET
	double                                             LastServerUpdateHoverParamsTime;                          // 0x2EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ServerHoveringVelocitySyncRate;                           // 0x2EB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x2EB4(0x0004) MISSED OFFSET
	class UClass*                                      RiderBuff;                                                // 0x2EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastUpkeepNetworkTime;                                    // 0x2EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              FuelUpkeepCostPerMinute;                                  // 0x2EC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthUpkeepCostPerMinuteWhenOutOfFuel;                   // 0x2ECC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UpkeepEnabled;                                            // 0x2ED0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x2ED1(0x0003) MISSED OFFSET
	float                                              WaterHoverVerticalSpeed;                                  // 0x2ED4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaterHoverHorizSpeedMultiplier;                           // 0x2ED8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x2EDC(0x0004) MISSED OFFSET
	double                                             LastOutOfFuelElementCheck;                                // 0x2EE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMekBackpackData                            BackpackSaveData;                                         // 0x2EE8(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	class USoundBase*                                  HoverEndSound;                                            // 0x2F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PrevRiderCanBeDamage;                                     // 0x2F48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x2F49(0x0007) MISSED OFFSET
	double                                             BackpackBuffFailsafeCheck;                                // 0x2F50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BackpackBuffFailsafeInterval;                             // 0x2F58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipDestructionEmitter;                                  // 0x2F5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowSwordLeftRightCombos;                                // 0x2F5D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PreventAutoRepair;                                        // 0x2F5E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x1];                                       // 0x2F5F(0x0001) MISSED OFFSET
	double                                             LastMeleeTime;                                            // 0x2F60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinValidMeleeDuration;                                    // 0x2F68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x2F6C(0x0004) MISSED OFFSET
	double                                             LastRangedTime;                                           // 0x2F70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinValidRangeDuration;                                    // 0x2F78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SkipDurabilityPercentLossOnCryo;                          // 0x2F7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x2F7D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue;             // 0x2F7E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue2;            // 0x2F7F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0x2F80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue3;                // 0x2F81(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2F82(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x2F83(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x2F84(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x2F85(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x2F86(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x1];                                       // 0x2F87(0x0001) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2F88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x2F90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorUpVector_ReturnValue;                    // 0x2F9C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x2FA8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x2FB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x2FB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x2FC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  CallFunc_VTraceSingleBP_OutHit;                           // 0x2FD0(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_VTraceSingleBP_ReturnValue;                      // 0x3058(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x3059(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x305C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x3068(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x3074(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x3080(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x4];                                       // 0x308C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x3090(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x3098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x30A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x30A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x30B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x30B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x30B5(0x0003) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x30B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x30C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Direction4;                            // 0x30C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_VertOffset;                            // 0x30D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_CustomEvent_Color3;                                // 0x30D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Length;                                // 0x30E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_duration4;                             // 0x30EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x30F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x30F1(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x30F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x30F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_LinearColorLerp_ReturnValue;                     // 0x30FC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x310C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x3110(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue3;               // 0x311C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x3128(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue4;               // 0x3134(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x3140(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorUpVector_ReturnValue2;                   // 0x3144(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_FloatFloat_ReturnValue;              // 0x3150(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x3151(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue5;               // 0x3154(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x3160(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Direction3;                            // 0x316C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue3;                   // 0x3178(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_FlattenDirectionVector_ReturnValue;              // 0x3184(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x3190(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x319C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x319D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x2];                                       // 0x319E(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_velocity;                              // 0x31A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_HasHoverTarget;                        // 0x31AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x31AD(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_HoverTarget;                           // 0x31B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode2;               // 0x31BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x31BD(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Start;                                 // 0x31C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_End;                                   // 0x31CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_CustomEvent_Color2;                                // 0x31D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Duration3;                             // 0x31E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Thickness2;                            // 0x31EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x31F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x7];                                       // 0x31F1(0x0007) MISSED OFFSET
	struct FHitResult                                  K2Node_CustomEvent_Hit2;                                  // 0x31F8(0x0088) (Transient, DuplicateTransient)
	struct FLinearColor                                K2Node_CustomEvent_NoHitColor;                            // 0x3280(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_CustomEvent_CollisionColor;                        // 0x3290(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Duration2;                             // 0x32A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_thickness;                             // 0x32A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_HitSize;                               // 0x32A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_TraceStart2;                           // 0x32AC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_TraceEnd2;                             // 0x32B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsTargeting2;                          // 0x32C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsTargeting;                           // 0x32C5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue;                      // 0x32C6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x32C7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode3;               // 0x32C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum5_CmpSuccess;                            // 0x32C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x6];                                       // 0x32CA(0x0006) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x32D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x32D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x32E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x7];                                       // 0x32E1(0x0007) MISSED OFFSET
	struct FHitResult                                  K2Node_CustomEvent_Hit;                                   // 0x32E8(0x0088) (Transient, DuplicateTransient)
	struct FVector                                     K2Node_CustomEvent_TraceStart;                            // 0x3370(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_TraceEnd;                              // 0x337C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode4;               // 0x3388(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x3389(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location2;                        // 0x338C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal2;                          // 0x3398(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint2;                     // 0x33A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal2;                    // 0x33B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x4];                                       // 0x33BC(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat2;                         // 0x33C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor2;                        // 0x33C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent2;                    // 0x33D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName2;                     // 0x33D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem2;                         // 0x33E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit2;                     // 0x33E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum6_CmpSuccess;                            // 0x33E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPrimalStructure_ReturnValue;                   // 0x33E6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x33E7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPrimalCharacter_ReturnValue;                   // 0x33E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x33E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x2];                                       // 0x33EA(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x33EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x33F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x33F9(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Loc;                                   // 0x33FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x3408(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode3;            // 0x3410(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum7_CmpSuccess;                            // 0x3411(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x3412(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetEquippedBackpack_HasBackpack;                 // 0x3413(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x4];                                       // 0x3414(0x0004) MISSED OFFSET
	class ABuff_MekBackpack_Base_C*                    CallFunc_GetEquippedBackpack_BackpackBuff;                // 0x3418(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_GetEquippedBackpack_BackpackType;                // 0x3420(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetEquippedBackpack_HasBackpack2;                // 0x3428(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x7];                                       // 0x3429(0x0007) MISSED OFFSET
	class ABuff_MekBackpack_Base_C*                    CallFunc_GetEquippedBackpack_BackpackBuff2;               // 0x3430(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_GetEquippedBackpack_BackpackType2;               // 0x3438(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Direction2;                            // 0x3440(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AllowMekHover_CanHover;                          // 0x344C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x344D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Normal_ReturnValue3;                             // 0x3450(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetEquippedBackpack_HasBackpack3;                // 0x345C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x3];                                       // 0x345D(0x0003) MISSED OFFSET
	class ABuff_MekBackpack_Base_C*                    CallFunc_GetEquippedBackpack_BackpackBuff3;               // 0x3460(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_GetEquippedBackpack_BackpackType3;               // 0x3468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetEquippedBackpack_HasBackpack4;                // 0x3470(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x7];                                       // 0x3471(0x0007) MISSED OFFSET
	class ABuff_MekBackpack_Base_C*                    CallFunc_GetEquippedBackpack_BackpackBuff4;               // 0x3478(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_GetEquippedBackpack_BackpackType4;               // 0x3480(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasEnoughResourcesToHover_CanHover;              // 0x3488(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x7];                                       // 0x3489(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue3;             // 0x3490(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x3498(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue;                            // 0x3499(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue;                 // 0x349A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetCurrentSwordStatus_IsSwingingSword;           // 0x349B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x4];                                       // 0x349C(0x0004) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentSwordStatus_CurrentMontage;            // 0x34A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetCurrentSwordStatus_AttackAnimIndex;           // 0x34A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetCurrentSwordStatus_AnimTimeRemaining;         // 0x34AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x34B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x34B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x34B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0x34B9(0x0003) MISSED OFFSET
	float                                              CallFunc_FMax_ReturnValue;                                // 0x34BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x34C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x34C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x34C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x34C3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue3;                  // 0x34C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue4;                  // 0x34C5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x2];                                       // 0x34C6(0x0002) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x34C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x34CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x3];                                       // 0x34CD(0x0003) MISSED OFFSET
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue;                  // 0x34D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue2;               // 0x34E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue2;                // 0x34E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetEquippedBackpack_HasBackpack5;                // 0x34E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x5];                                       // 0x34E3(0x0005) MISSED OFFSET
	class ABuff_MekBackpack_Base_C*                    CallFunc_GetEquippedBackpack_BackpackBuff5;               // 0x34E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_GetEquippedBackpack_BackpackType5;               // 0x34F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x34F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x34FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x3500(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AllowMekSword_Allowed;                           // 0x3504(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0xB];                                       // 0x3505(0x000B) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_K2_GetComponentToWorld_ReturnValue;              // 0x3510(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode4;            // 0x3540(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x7];                                       // 0x3541(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x3548(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum8_CmpSuccess;                            // 0x3550(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x7];                                       // 0x3551(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_FinishSpawningActor_ReturnValue;                 // 0x3558(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Direction;                             // 0x3560(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x356C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue2;                     // 0x356D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x356E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode5;               // 0x356F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum9_CmpSuccess;                            // 0x3570(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x7];                                       // 0x3571(0x0007) MISSED OFFSET
	class FString                                      K2Node_CustomEvent_Message;                               // 0x3578(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_duration;                              // 0x3588(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_CustomEvent_color;                                 // 0x358C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_ModifyHeatLevel_NewHeatLevel;                    // 0x359C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FColor                                      CallFunc_Conv_LinearColorToColor_ReturnValue;             // 0x35A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x4];                                       // 0x35A4(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x35A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_DynamicCast_AsPlayerController;                    // 0x35B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x35B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x7];                                       // 0x35B9(0x0007) MISSED OFFSET
	class AHUD*                                        CallFunc_GetHUD_ReturnValue;                              // 0x35C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterHUD*                                 K2Node_DynamicCast_AsShooterHUD;                          // 0x35C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x35D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x3];                                       // 0x35D1(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x35D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NewParam;                              // 0x35D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x35D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x35DA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x5];                                       // 0x35DB(0x0005) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x35E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue2;                 // 0x35E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x35F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue3;            // 0x35F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x3];                                       // 0x35F9(0x0003) MISSED OFFSET
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x35FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode6;               // 0x3600(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x3601(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum10_CmpSuccess;                           // 0x3602(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode7;               // 0x3603(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue2;                // 0x3604(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum11_CmpSuccess;                           // 0x3605(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x2];                                       // 0x3606(0x0002) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x3608(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x360C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue2;                               // 0x3610(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x4];                                       // 0x3614(0x0004) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue2;                      // 0x3618(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_DisableBackpack;                             // 0x3620(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetEquippedBackpack_HasBackpack6;                // 0x3621(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x6];                                       // 0x3622(0x0006) MISSED OFFSET
	class ABuff_MekBackpack_Base_C*                    CallFunc_GetEquippedBackpack_BackpackBuff6;               // 0x3628(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_GetEquippedBackpack_BackpackType6;               // 0x3630(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue4;                // 0x3638(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode8;               // 0x3639(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum12_CmpSuccess;                           // 0x363A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x363B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x363C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x363D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetCurrentSwordStatus_IsSwingingSword2;          // 0x363E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x1];                                       // 0x363F(0x0001) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentSwordStatus_CurrentMontage2;           // 0x3640(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetCurrentSwordStatus_AttackAnimIndex2;          // 0x3648(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetCurrentSwordStatus_AnimTimeRemaining2;        // 0x364C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x3650(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CancelCurrentAttack_ReturnValue;                 // 0x3651(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPPreventFirstPerson_ReturnValue;                // 0x3652(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x5];                                       // 0x3653(0x0005) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x3658(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FColor                                      CallFunc_Conv_LinearColorToColor_ReturnValue2;            // 0x3660(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x4];                                       // 0x3664(0x0004) MISSED OFFSET
	class APlayerController*                           K2Node_DynamicCast_AsPlayerController2;                   // 0x3668(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x3670(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x3];                                       // 0x3671(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_GetControlRotation_ReturnValue;                  // 0x3674(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AHUD*                                        CallFunc_GetHUD_ReturnValue2;                             // 0x3680(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x3688(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x4];                                       // 0x3694(0x0004) MISSED OFFSET
	class AShooterHUD*                                 K2Node_DynamicCast_AsShooterHUD2;                         // 0x3698(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x36A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x3];                                       // 0x36A1(0x0003) MISSED OFFSET
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x36A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x36A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x7];                                       // 0x36A9(0x0007) MISSED OFFSET
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x36B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty;// 0x36B8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mek_Character_BP.Mek_Character_BP_C");
		return ptr;
	}


	void ModifyMekHeat(float Delta, bool Subtract, float* NewHeatLevel);
	void ModifyMekFuel(float Delta, bool Subtract, float* NewFuelLevel, bool* Success);
	void GetMekFuel(float* CurrentFuel, float* MaxFuel);
	void GetMekHeat(float* CurrentHeat, float* MaxHeat);
	void BP_OnCryo(class AShooterPlayerController** ForPC);
	struct FName GetSocketForMeleeTraceForHitBlockers(int* AttackIndex);
	void BPDoAttack(int* AttackIndex);
	bool BPCanBaseOnCharacter(class APrimalCharacter** BaseCharacter);
	void SyncBackpackColorization();
	bool BPOverrideMoveToOrder(struct FVector* MoveToLocation, class AShooterCharacter** OrderingPlayer);
	void Get_Transform_Key_Name(struct FText* KeyName);
	void BPPostLoadedFromSaveGame();
	void BPPreSerializeSaveGame();
	struct FVector BPAdjustImpulseFromDamage(struct FVector* DesiredImpulse, float* DamageTaken, struct FDamageEvent* TheDamageEvent, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void BPOnRefreshColorization(TArray<struct FLinearColor>* Colors);
	void BPDinoARKDownloadedEnd();
	void BPTimerServer();
	bool BPHandlePoop();
	bool BPPreventFirstPerson();
	void RepairedByScout();
	void BPOnLethalDamage(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, bool* bPreventDeath);
	void UpdateDepletedMeksList(bool ClearAllTargets);
	void IsRemoteMekValidForDepletion(class AMek_Character_BP_C* Mek, bool* IsValid, bool* HasDepletedBuff);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	bool BPPreventInputType(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	void ClientIsMegaMekTransformationAllowed(bool* Allowed, bool* KingKaijuNearby, int* FriendlyMeksNearby);
	void MegaMekTransformation();
	void AllowedToAutoRepair(bool* Allowed, float* CooldownTimeRemaining);
	void STATIC_BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void GetTurnInPlaceSpeed(float DefaultSpeed, float* newSpeed);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	bool BPHandleOnStopFire();
	void STATIC_HoverTrace(float TraceDistance, bool DebugDraw, float DebugDrawDuration, struct FHitResult* HitResult, bool* BlockingHit, struct FVector* TraceStart, struct FVector* TraceEnd);
	void STATIC_IsPlayingAttackAnim(int AttackIndex, bool* Playing);
	void BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed);
	class UAnimMontage* BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent);
	void GetCurrentSwordStatus(bool* IsSwingingSword, class UAnimMontage** CurrentMontage, int* AttackAnimIndex, float* AnimTimeRemaining);
	bool BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	int BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
	void GetHeatLevel(float* Heat, float* MaxHeat);
	void IsBackpackActive(bool* IsActive);
	bool HasEquippedBackpack();
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void GetEquippedBackpack(bool* HasBackpack, class ABuff_MekBackpack_Base_C** BackpackBuff, struct FName* BackpackType);
	void BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem);
	void BPDinoPostBeginPlay();
	void ModifyHeatLevel(float Delta, bool Subtract, float* NewHeatLevel);
	void STATIC_GetPistolMuzzleInfo(struct FVector* MuzzleLocation, struct FVector* MuzzleDirection);
	void UpdateTargetingMode(bool NewTargetingState);
	void STATIC_ReceiveTick(float* DeltaSeconds);
	int BPAdjustAttackIndex(int* AttackIndex);
	void IsCurrentlyTargeting(bool* IsTargeting);
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	bool BPHandleOnStopTargeting();
	void Set_Camera_Offset_Multipliers(float HorizMultiplier, float VertMultiplier);
	void UpdateHoverJetsVFX();
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	struct FVector BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	void ModifyFuelLevel(float Delta, bool Subtract, float* NewFuelLevel, bool* Success);
	void HasEnoughResourcesToHover(bool* CanHover);
	void BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value);
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void BP_OnJumpReleased();
	void BP_OnJumpPressed();
	float BPGetGravityZScale();
	bool BPPreventFallDamage(float* FallDamageAmount, struct FHitResult* HitResult);
	void STATIC_RidingTick(float* DeltaSeconds);
	struct FVector STATIC_BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void UserConstructionScript();
	void ServerRequestStartHover();
	void ServerRequestStopHover();
	void MultiStartHover();
	void MultiStopHover();
	void PlayHoverStartVFX();
	void MultiDebugDrawDirectionVector(const struct FVector& Direction, float VertOffset, const struct FLinearColor& Color, float Length, float Duration);
	void ServerUpdateInputDirection(const struct FVector& Direction);
	void ForceStopHover();
	void MultiUpdateHoverParams(const struct FVector& Velocity, bool HasHoverTarget, const struct FVector& HoverTarget);
	void MultiDebugDrawLine(const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color, float Duration, float Thickness);
	void MultiDebugDrawHitResult(const struct FHitResult& Hit, const struct FLinearColor& NoHitColor, const struct FLinearColor& CollisionColor, float Duration, float Thickness, float HitSize, const struct FVector& TraceStart, const struct FVector& TraceEnd);
	void ServerSetTargetingMode(bool IsTargeting);
	void MultiUpdateTargetingMode(bool IsTargeting);
	void OnSwordHit(const struct FHitResult& Hit, const struct FVector& TraceStart, const struct FVector& TraceEnd);
	void MultiOnSwordHit(const struct FVector& Location);
	void MultiHoverJetsDamagedTarget(const struct FVector& Loc);
	void ServerActivateBackpack();
	void ServerUpdatePistolAimDirection(const struct FVector& Direction);
	void ServerRequestSwordAttackCombo();
	void DoDelayedSwordCombo();
	void MultiOnMekDestroyed();
	void ServerRequestTransform();
	void MultiUpdatePistolAimDirection(const struct FVector& Direction);
	void OnPistolFiredProjectile();
	void ClientShowHUDNotification(const class FString& Message, float Duration, const struct FLinearColor& Color);
	void GetReadyToDieMulti();
	void EnableInputMulti(bool NewParam);
	void ServerRequestCancelMegaMekTransform();
	void SetBackpackMalfunction(bool DisableBackpack);
	void ReceiveBeginPlay();
	void CancelSwordCombo();
	void ServerRequestCancelCombo();
	void ClientShowEmptyFuelNotification();
	void GetReadyToDieSkip();
	void MultiSyncBackpackColorization();
	void ExecuteUbergraph_Mek_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
