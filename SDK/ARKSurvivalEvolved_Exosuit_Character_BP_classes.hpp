#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Exosuit_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Exosuit_Character_BP.Exosuit_Character_BP_C
// 0x1128 (0x33B0 - 0x2288)
class AExosuit_Character_BP_C : public ADino_Character_BP_C
{
public:
	class USkeletalMeshComponent*                      MeshFPV;                                                  // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Exosuit_C*  DinoCharacterStatus_BP_Exosuit_C1;                        // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachedWasStationary;                                   // 0x2298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x2299(0x0007) MISSED OFFSET
	class APrimalStructure*                            LocalAttachedStructure;                                   // 0x22A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bIsInPreview;                                             // 0x22A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x22A9(0x0007) MISSED OFFSET
	class APrimalStructure*                            PreviewStructure;                                         // 0x22B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       StructureAttachSocket;                                    // 0x22B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalStructure*                            LastAimedStructure;                                       // 0x22C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  AimedStructuresMaterials;                                 // 0x22C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LeapTraceDistance;                                        // 0x22D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChestBeamMaxRange;                                        // 0x22DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsChoosingRotation;                                      // 0x22E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x22E1(0x0007) MISSED OFFSET
	class APrimalStructurePlacer*                      StructurePlacerRef;                                       // 0x22E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class APrimalStructure*>                    AimedStructures;                                          // 0x22F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class FString                                      HUDText_AttachMode;                                       // 0x2300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      HUDText_StoreMode;                                        // 0x2310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      HUDText_CombatMode;                                       // 0x2320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   HUDText_Location;                                         // 0x2330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlacementActive;                                         // 0x2338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x2339(0x0007) MISSED OFFSET
	double                                             LastPlacementDeactivatedTime;                             // 0x2340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCraftingResourceRequirement>        TotalRepairRequirements;                                  // 0x2348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class APrimalStructure*>                    StructuresOnFloors;                                       // 0x2358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector2D                                   RepairHUDIconSize;                                        // 0x2368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   RepairHUDLocation;                                        // 0x2370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HUDText_Scale;                                            // 0x2378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x237C(0x0004) MISSED OFFSET
	TArray<class APrimalStructure*>                    StructuresInRepair;                                       // 0x2380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FLinearColor                                RepairHighlightColorMin;                                  // 0x2390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                RepairHighlighColorMax;                                   // 0x23A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastHitLocation;                                          // 0x23B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChestBeamDamagePerSecond;                                 // 0x23BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ChestBeamDamageType;                                      // 0x23C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChestBeamTraceRadius;                                     // 0x23C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastBeamHitLocation;                                      // 0x23CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastPressedJumpTime;                                      // 0x23D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QuickJumpZVelocity;                                       // 0x23E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetedJumpMinHoldTime;                                  // 0x23E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeldJumpDuration;                                         // 0x23E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x23EC(0x0004) MISSED OFFSET
	class UClass*                                      RiderBuff;                                                // 0x23F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHoldingJump;                                             // 0x23F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x23F9(0x0003) MISSED OFFSET
	float                                              CurrentCrosshairPulse;                                    // 0x23FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrosshairPulseSpeed;                                      // 0x2400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChestBeamChargeUpDuration;                                // 0x2404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ChestBeamState;                                           // 0x2408(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x240C(0x0004) MISSED OFFSET
	double                                             ChestBeamStartTime;                                       // 0x2410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChestBeamAimPitchLimit;                                   // 0x2418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChestBeamAimYawLimit;                                     // 0x241C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ChestBeamAimLimitInterpSpeed;                             // 0x2420(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChestBeamAimLimitInterpZone;                              // 0x242C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            LaunchPreviewParticleComps;                               // 0x2430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LaunchPreviewTimeStep;                                    // 0x2440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchPreviewMaxLength;                                   // 0x2444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bJumpPreviewVisible;                                      // 0x2448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x2449(0x0007) MISSED OFFSET
	class AShooterCharacter*                           OfflineRider;                                             // 0x2450(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bUsesChestBeam;                                           // 0x2458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsesStructurePickup;                                     // 0x2459(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x245A(0x0002) MISSED OFFSET
	float                                              KnockbackRadius;                                          // 0x245C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KnockbackStrength;                                        // 0x2460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KnockbackZMulti;                                          // 0x2464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             KnockbackFX;                                              // 0x2468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     KnockbackFXScale;                                         // 0x2470(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x247C(0x0004) MISSED OFFSET
	class UAnimMontage*                                HurtAnim_Left;                                            // 0x2480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                HurtAnim_Right;                                           // 0x2488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                HurtAnim_Forward;                                         // 0x2490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                HurtAnim_Back;                                            // 0x2498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PercentOfMaxHealthToPlayBigHurtAnim;                      // 0x24A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPercentOfMaxHealthToPlayHurtAnim;                      // 0x24A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bZeroVelocityOnLanding;                                   // 0x24A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x24A9(0x0007) MISSED OFFSET
	class UParticleSystem*                             LandedFX;                                                 // 0x24B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LandedFXMinVelocitySquared;                               // 0x24B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LandedFXScale;                                            // 0x24BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpTargetForwardAdjustment;                              // 0x24C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x24CC(0x0004) MISSED OFFSET
	class UClass*                                      RunningCameraShake;                                       // 0x24D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpGravity;                                              // 0x24D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                JumpMathSelector;                                         // 0x24DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ChestBeamStartSocket;                                     // 0x24E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPreparingJump;                                         // 0x24E8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugArc;                                                // 0x24E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x24EA(0x0002) MISSED OFFSET
	struct FVector                                     LastHitNormal;                                            // 0x24EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SecondsToReachTarget;                                     // 0x24F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x24FC(0x0004) MISSED OFFSET
	class UAnimMontage*                                LeapInAnim;                                               // 0x2500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                JumpInAnim;                                               // 0x2508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                BeamAttackInAnim;                                         // 0x2510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                BeamAttackLoop;                                           // 0x2518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                BeamAttackOut;                                            // 0x2520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CarryOutAnim;                                             // 0x2528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CarryInAnim;                                              // 0x2530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalStructure*                            PendingAttachedStructure;                                 // 0x2538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FPlacementData                              PendingPlacement;                                         // 0x2540(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                                    PendingRotation;                                          // 0x25A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanceledJump;                                            // 0x25AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x25AD(0x0003) MISSED OFFSET
	float                                              CurrentArcAlpha;                                          // 0x25B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcInterpSpeed;                                           // 0x25B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExosuitDefaultGravityScale;                               // 0x25B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x25BC(0x0004) MISSED OFFSET
	TArray<struct FStruct_ComponentMaterial>           AimedStructureSavedMaterials;                             // 0x25C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                InvalidStructureColor;                                    // 0x25D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInvalidStructureInChain;                                 // 0x25E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x25E1(0x0007) MISSED OFFSET
	class FString                                      InvalidStructureNotificationText;                         // 0x25E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      InvalidStructureName;                                     // 0x25F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              AttachedStructureWidthPercent;                            // 0x2608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MinMaxAttachedStructureWidth;                             // 0x260C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x2614(0x0004) MISSED OFFSET
	class UMaterialInterface*                          DefaultPreviewMat;                                        // 0x2618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LeapLandedAnim;                                           // 0x2620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LandedCameraShake;                                        // 0x2628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentMode;                                              // 0x2630(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x2634(0x0004) MISSED OFFSET
	class UClass*                                      RiderOfflineBuff;                                         // 0x2638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 HUDElement_ModeText;                                      // 0x2640(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	double                                             LastModeTextDisplayTime;                                  // 0x2790(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HUDModeTextFadeOutTimeMultiplier;                         // 0x2798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HUDTextMinOpacity;                                        // 0x279C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HUDTextMaxOpacity;                                        // 0x27A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x27A4(0x0004) MISSED OFFSET
	class UUserWidget*                                 HUDWidgetInstance;                                        // 0x27A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      HUDWidget;                                                // 0x27B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceWidthNextUpdate;                                    // 0x27B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x27B9(0x0003) MISSED OFFSET
	float                                              EnergyPercent;                                            // 0x27BC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              ChestBeamEnergyPercentCostPerSecond;                      // 0x27C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoTargetStructureWidthPercent;                            // 0x27C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    JumpPreviewEndParticleSystem;                             // 0x27C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      ExosuitDisabledNotificationText;                          // 0x27D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TPVOffsetInterpSpeedMultiplier;                           // 0x27E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPVCameraOffsetJumpPreview;                               // 0x27E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShooterCharacter*                           SavedRider;                                               // 0x27F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                LastPunchAttackIndex;                                     // 0x27F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRidingDrainsEnergy;                                      // 0x27FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x27FD(0x0003) MISSED OFFSET
	float                                              RidingEnergyCostPerSecondMoving;                          // 0x2800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastReplicatedEnergyPercent;                              // 0x2804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FuelItemClass;                                            // 0x2808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PreviousState;                                            // 0x2810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x2814(0x0004) MISSED OFFSET
	class FString                                      HUDText_DisabledMode;                                     // 0x2818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                StowedInAnim;                                             // 0x2828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                StowedOutAnim;                                            // 0x2830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StorageStructureAimTraceDistance;                         // 0x2838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeapTraceRadius;                                          // 0x283C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StructureAimTraceRadius;                                  // 0x2840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LiftStructureAimTraceDistance;                            // 0x2844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEjectRiderOnDepleted;                                    // 0x2848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x2849(0x0003) MISSED OFFSET
	float                                              ChestBeamRechargeDuration;                                // 0x284C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HandBeamFX;                                               // 0x2850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftHandBeamSocket;                                       // 0x2858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            HandBeamParticleComponents;                               // 0x2860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       RightHandBeamSocket;                                      // 0x2870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APrimalStructure*>                    TempFloorStructures;                                      // 0x2878(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class APhysicsVolume*                              PreviousPhyicsVolume;                                     // 0x2888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WaterSplashFX;                                            // 0x2890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             JumpPreviewEndPointFX;                                    // 0x2898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             UnderwaterFootstepsFX;                                    // 0x28A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningModifierMax;                                       // 0x28A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningTimeToReachMax;                                    // 0x28AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             StartedRunningTime;                                       // 0x28B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RiderEjectionBuff;                                        // 0x28B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DeathExplosionFX;                                         // 0x28C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseIncreasingRunningSpeed;                               // 0x28C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x28C9(0x0003) MISSED OFFSET
	float                                              RunningKnockbackStrength;                                 // 0x28CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningKnockbackZMulti;                                   // 0x28D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningKnockbackTraceCapsuleRadiusScale;                  // 0x28D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningKnockbackTraceForwardOffset;                       // 0x28D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugKnockback;                                          // 0x28DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x28DD(0x0003) MISSED OFFSET
	struct FVector                                     NewVar;                                                   // 0x28E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x28EC(0x0004) MISSED OFFSET
	class UParticleSystem*                             ChestBeamChargingFX;                                      // 0x28F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ChestBeamImpactParticleSystem;                            // 0x28F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ChestBeamFiringFX;                                        // 0x2900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ChestBeamImpactFX;                                        // 0x2908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            ChestBeamDustParticleSystems;                             // 0x2910(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ChestBeamDustSpacing;                                     // 0x2920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x4];                                       // 0x2924(0x0004) MISSED OFFSET
	class UParticleSystem*                             PunchTrailFX;                                             // 0x2928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    PunchTrailParticleSystem;                                 // 0x2930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PunchTrailSocketLeft;                                     // 0x2938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PunchTrailSocketRight;                                    // 0x2940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LandedWaterFX;                                            // 0x2948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    UnderwaterParticleSystem;                                 // 0x2950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             UnderwaterFX;                                             // 0x2958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   JumpPeakHeightOffsetMinMax;                               // 0x2960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningKnockbackRadius;                                   // 0x2968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningKnockbackMoveIgnoreRadius;                         // 0x296C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpPreviewArcStartOffset;                                // 0x2970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLeapHasBlockingHIt;                                      // 0x2974(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasPressedJump;                                          // 0x2975(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsesRunningKnockback;                                    // 0x2976(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x1];                                       // 0x2977(0x0001) MISSED OFFSET
	float                                              NoTargetPeakHeightOffset;                                 // 0x2978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChestBeamStartCost;                                       // 0x297C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HUDTextDisabledOffset;                                    // 0x2980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextDisabledColor;                                     // 0x2984(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoRepairEnabled;                                        // 0x2994(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               PreventAutoRepair;                                        // 0x2995(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x2];                                       // 0x2996(0x0002) MISSED OFFSET
	class UClass*                                      SelfHealBuffClass;                                        // 0x2998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             SelfHealCooldownStartNetworkTime;                         // 0x29A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SelfHealCooldownTime;                                     // 0x29A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x29AC(0x0004) MISSED OFFSET
	class UClass*                                      ItemTypeRequiredForAutoRepair;                            // 0x29B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                AutoRepairMessageTextColor;                               // 0x29B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             StoredStructureFX;                                        // 0x29C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlowPoseSelector;                                         // 0x29D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x29D4(0x0004) MISSED OFFSET
	class AShooterCharacter*                           LastRiderClearing;                                        // 0x29D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              StoreStructureDelay;                                      // 0x29E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x29E4(0x0004) MISSED OFFSET
	class APrimalStructure*                            PendingStructureToStore;                                  // 0x29E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                AttachedStructureID;                                      // 0x29F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   BeamCloseFarDamMultOutRange;                              // 0x29F4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x29FC(0x0004) MISSED OFFSET
	class AActor*                                      LastBeamHitActor;                                         // 0x2A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              RidingEnergyCostPerSecondIdle;                            // 0x2A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInZeroG;                                               // 0x2A0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasInZeroG;                                              // 0x2A0D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x2];                                       // 0x2A0E(0x0002) MISSED OFFSET
	class FString                                      StartedRepairingNotiText;                                 // 0x2A10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AlreadyRepairingNotiText;                                 // 0x2A20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      NotEnoughResourcesNotiText;                               // 0x2A30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     HLNAScale;                                                // 0x2A40(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x4];                                       // 0x2A4C(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      HLNAMeshComponent;                                        // 0x2A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ChestBeamFXComp;                                          // 0x2A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               StowedIdleSequence;                                       // 0x2A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeapZVelocityZeroG;                                       // 0x2A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QuickJumpZVelocityZeroG;                                  // 0x2A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeapForwardVelocityZeroG;                                 // 0x2A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QuickForwardVelocityZeroG;                                // 0x2A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PainCausingVolumeMinDamage;                               // 0x2A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeapFoliageDestructionRadius;                             // 0x2A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeapFoliageDestructionRange;                              // 0x2A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DroppedInventoryLifespan;                                 // 0x2A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasInFPV;                                                // 0x2A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x2A89(0x0003) MISSED OFFSET
	float                                              DissolveDuration;                                         // 0x2A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DissolveStartTimeFromEnd;                                 // 0x2A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisabledMeshCollision;                                   // 0x2A94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRotateHLNAToBeamDirection;                               // 0x2A95(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x2];                                       // 0x2A96(0x0002) MISSED OFFSET
	struct FName                                       RidingRequiredEngramName;                                 // 0x2A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      HUDTextReqEngram;                                         // 0x2AA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<ECameraStyle>                          LastCameraStyle;                                          // 0x2AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x2AB1(0x0003) MISSED OFFSET
	float                                              TransitionTimeIntoTPV;                                    // 0x2AB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanUseSlamAttack;                                        // 0x2AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x2AB9(0x0003) MISSED OFFSET
	struct FName                                       PendingStructureTag;                                      // 0x2ABC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x4];                                       // 0x2AC4(0x0004) MISSED OFFSET
	class FString                                      JumpPressedInputString;                                   // 0x2AC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TooManyStructureNotification;                             // 0x2AD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxStructures_to_allow_pickup;                            // 0x2AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0x4];                                       // 0x2AEC(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x2AF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x2AF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2B00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x7];                                       // 0x2B01(0x0007) MISSED OFFSET
	class FString                                      CallFunc_GetPlayerCharacterName_ReturnValue;              // 0x2B08(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_LinkedPlayerIDString_ReturnValue;                // 0x2B18(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue;                   // 0x2B28(0x0028) (Transient, DuplicateTransient)
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue2;                  // 0x2B50(0x0028) (Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument;                     // 0x2B78(0x0050) (Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument2;                    // 0x2BC8(0x0050) (Transient, DuplicateTransient)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array;                                   // 0x2C18(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue;                              // 0x2C28(0x0028) (Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_TextToString_ReturnValue;                   // 0x2C50(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x2C60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x2C61(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue3;                  // 0x2C62(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue4;                  // 0x2C63(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2C64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x2C65(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x2C66(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x2C67(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x2C68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue5;                  // 0x2C69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x2];                                       // 0x2C6A(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x2C6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2C70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location5;                             // 0x2C74(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_Rotation2;                             // 0x2C80(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_viewRotation;                          // 0x2C8C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x2C98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2CA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x7];                                       // 0x2CA1(0x0007) MISSED OFFSET
	class APrimalStructure*                            K2Node_CustomEvent_StructureToGrab2;                      // 0x2CA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2CB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x2CB4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2CC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanAttachStructure_bCanGrab;                     // 0x2CC1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x2CC2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x1];                                       // 0x2CC3(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_BPGetActorEyesViewPoint_Location;                // 0x2CC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BPGetActorEyesViewPoint_Rotation;                // 0x2CD0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x4];                                       // 0x2CDC(0x0004) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue2;                 // 0x2CE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructure*                            K2Node_CustomEvent_StructureToGrab;                       // 0x2CE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_CustomEvent_ShooterPC;                             // 0x2CF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructure*                            K2Node_CustomEvent_Structure;                             // 0x2CF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class APrimalStructure*>                    K2Node_CustomEvent_StructuresPlacedOnFloor;               // 0x2D00(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x2D10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x2D14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location4;                             // 0x2D18(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_HeldTime;                              // 0x2D24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bWasBlockingHIt;                       // 0x2D28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x3];                                       // 0x2D29(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_HitNormal;                             // 0x2D2C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x2D38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x3];                                       // 0x2D39(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Location3;                             // 0x2D3C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bWasHit2;                              // 0x2D48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x3];                                       // 0x2D49(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Location2;                             // 0x2D4C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bWasHit;                               // 0x2D58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue;         // 0x2D59(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2D5A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_VectorVector_ReturnValue;               // 0x2D5B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_NewState;                              // 0x2D5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x2D60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_SnapPastDist_ReturnValue;              // 0x2D64(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x2D70(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x4];                                       // 0x2D7C(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2D80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue;           // 0x2D88(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x2D98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x2D9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x2DA0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;          // 0x2DAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x2DB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x2DB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x2DB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x2DBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue;                      // 0x2DC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x3];                                       // 0x2DC1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x2DC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x2DD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NewIsPreparingJump;                    // 0x2DD1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x2DD2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x2DD3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2DD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                K2Node_Select_ReturnValue;                                // 0x2DD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x2DE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x3];                                       // 0x2DE1(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x2DE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue3;                         // 0x2DE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BPGetActorEyesViewPoint_Location2;               // 0x2DEC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BPGetActorEyesViewPoint_Rotation2;               // 0x2DF8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x2E04(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x2E10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BPGetStructureID_ReturnValue;                    // 0x2E14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue5;                       // 0x2E18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue5;                  // 0x2E1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x2E1D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x2];                                       // 0x2E1E(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x2E20(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanAttachStructure_bCanGrab2;                    // 0x2E2C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x3];                                       // 0x2E2D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue2;              // 0x2E30(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue2;                              // 0x2E3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue3;                 // 0x2E40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x2E48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x3];                                       // 0x2E49(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x2E4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x2E50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x2E51(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x6];                                       // 0x2E52(0x0006) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item;                                  // 0x2E58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       K2Node_Select_ReturnValue2;                               // 0x2E60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x2E68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x2E69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x2];                                       // 0x2E6A(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue5;                // 0x2E6C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue2;              // 0x2E78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x3];                                       // 0x2E79(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue3;              // 0x2E7C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2E88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x3];                                       // 0x2E89(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x2E8C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x2E98(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x4];                                       // 0x2EA4(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x2EA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2EB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x3];                                       // 0x2EB1(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X2;                                  // 0x2EB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x2EB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x2EBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ShouldKnockbackChar_ShouldKnockback;             // 0x2EC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x3];                                       // 0x2EC1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x2EC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x2ED0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x2EDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue4;                 // 0x2EE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x2EE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x3];                                       // 0x2EE9(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x2EEC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_Rotation;                              // 0x2EF8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue6;                            // 0x2F04(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x3];                                       // 0x2F05(0x0003) MISSED OFFSET
	class UObject*                                     CallFunc_PureDefaultObject_ReturnValue;                   // 0x2F08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructureItemContainer*               K2Node_DynamicCast_AsPrimalStructureItemContainer;        // 0x2F10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x2F18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x7];                                       // 0x2F19(0x0007) MISSED OFFSET
	class APrimalStructure*                            K2Node_DynamicCast_AsPrimalStructure;                     // 0x2F20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x2F28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x3];                                       // 0x2F29(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_NewMode;                               // 0x2F2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorLocationAndRotation_ReturnValue;         // 0x2F30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsModeAllowed_bIsAllowed;                        // 0x2F31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue6;                  // 0x2F32(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x5];                                       // 0x2F33(0x0005) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue5;                 // 0x2F38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue7;                            // 0x2F40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x7];                                       // 0x2F41(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x2F48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_ExosuitRider_Offline_C*                K2Node_DynamicCast_AsBuff_ExosuitRider_Offline_C;         // 0x2F50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x2F58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue8;                            // 0x2F59(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue7;                  // 0x2F5A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x1];                                       // 0x2F5B(0x0001) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x2F5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x2F60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue8;                  // 0x2F64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x2F65(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x2];                                       // 0x2F66(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x2F68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x2F6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x2F70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x3];                                       // 0x2F71(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue6;                       // 0x2F74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue6;                 // 0x2F78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue2;                     // 0x2F80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue9;                            // 0x2F81(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x6];                                       // 0x2F82(0x0006) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController2;            // 0x2F88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x2F90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue9;                  // 0x2F91(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x2F92(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0x5];                                       // 0x2F93(0x0005) MISSED OFFSET
	class APhysicsVolume*                              K2Node_CustomEvent_NewVolume;                             // 0x2F98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable3;                          // 0x2FA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x2FA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x2FA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2FA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x2FAA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPrimalCharFalling_ReturnValue;                 // 0x2FAB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x2FAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x3];                                       // 0x2FAD(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetCapsuleBottomLocation_ReturnValue;            // 0x2FB0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x2FBC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x2FBD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x2];                                       // 0x2FBE(0x0002) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x2FC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue6;                  // 0x2FC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData77[0x7];                                       // 0x2FC9(0x0007) MISSED OFFSET
	class APhysicsVolume*                              CallFunc_GetPhysicsVolume_ReturnValue;                    // 0x2FD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             K2Node_CustomEvent_Time;                                  // 0x2FD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class APrimalCharacter*>                    K2Node_CustomEvent_Chars;                                 // 0x2FE0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FVector>                             K2Node_CustomEvent_Impulses;                              // 0x2FF0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue7;                       // 0x3000(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue10;                           // 0x3004(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData78[0xB];                                       // 0x3005(0x000B) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x3010(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_AddComponent_ReturnValue;                        // 0x3040(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable4;                          // 0x3048(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue4;                        // 0x304C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData79[0x3];                                       // 0x304D(0x0003) MISSED OFFSET
	class APrimalStructure*                            CallFunc_Array_Get_Item2;                                 // 0x3050(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x3058(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ShouldRequestStructuresPlacedOnFloor_ReturnValue;// 0x305C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x3];                                       // 0x305D(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue4;                         // 0x3060(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue11;                           // 0x3064(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData81[0x3];                                       // 0x3065(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0x3068(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData82[0x4];                                       // 0x3074(0x0004) MISSED OFFSET
	class UParticleSystem*                             K2Node_Select_ReturnValue3;                               // 0x3078(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select3_CmpSuccess;                                // 0x3080(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData83[0x7];                                       // 0x3081(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x3088(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue12;                           // 0x3090(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData84[0x7];                                       // 0x3091(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_AddComponent_ReturnValue2;                       // 0x3098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_AddComponent_RelativeTransform_AddComponentDefaultTransform;// 0x30A0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue13;                           // 0x30D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x30D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData85[0x2];                                       // 0x30D2(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable5;                          // 0x30D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue7;                  // 0x30D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData86[0x3];                                       // 0x30D9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Array_Get_Item3;                                 // 0x30DC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue5;                        // 0x30E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData87[0x7];                                       // 0x30E9(0x0007) MISSED OFFSET
	class APrimalCharacter*                            CallFunc_Array_Get_Item4;                                 // 0x30F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue5;                         // 0x30F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetCapsuleBottomLocation_ReturnValue2;           // 0x30FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData88[0x8];                                       // 0x3108(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_K2_GetComponentToWorld_ReturnValue;              // 0x3110(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_InverseTransformLocation_ReturnValue;            // 0x3140(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue14;                           // 0x314C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData89[0x3];                                       // 0x314D(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x3150(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue8;                       // 0x3158(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData90[0x4];                                       // 0x315C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item5;                                 // 0x3160(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue6;                        // 0x3168(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue15;                           // 0x3169(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bForceOnOwningClient;                  // 0x316A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData91[0x5];                                       // 0x316B(0x0005) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue2;               // 0x3170(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue2;                     // 0x3178(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x3179(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x317A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData92[0x1];                                       // 0x317B(0x0001) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue9;                       // 0x317C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasResources_ReturnValue;                        // 0x3180(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue3;                     // 0x3181(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue16;                           // 0x3182(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData93[0x5];                                       // 0x3183(0x0005) MISSED OFFSET
	class APrimalStructureLadder*                      K2Node_DynamicCast_AsPrimalStructureLadder;               // 0x3188(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x3190(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue17;                           // 0x3191(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData94[0x6];                                       // 0x3192(0x0006) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_GetAttachedActors_OutActors;                     // 0x3198(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue10;                      // 0x31A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData95[0x4];                                       // 0x31AC(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item6;                                 // 0x31B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue7;                        // 0x31B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData96[0x7];                                       // 0x31B9(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x31C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x31C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsShooterCharacter_ReturnValue;                  // 0x31C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData97[0x6];                                       // 0x31CA(0x0006) MISSED OFFSET
	class APrimalStructureSeating*                     K2Node_DynamicCast_AsPrimalStructureSeating;              // 0x31D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast9_CastSuccess;                          // 0x31D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue18;                           // 0x31D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue19;                           // 0x31DA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_RefreshStructurePlacement_ReturnValue;           // 0x31DB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData98[0x4];                                       // 0x31DC(0x0004) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue;                        // 0x31E0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x3210(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x321C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x3228(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue20;                           // 0x3234(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue21;                           // 0x3235(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData99[0x2];                                       // 0x3236(0x0002) MISSED OFFSET
	class UObject*                                     CallFunc_PureDefaultObject_ReturnValue2;                  // 0x3238(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructure*                            K2Node_DynamicCast_AsPrimalStructure2;                    // 0x3240(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast10_CastSuccess;                         // 0x3248(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData100[0x7];                                      // 0x3249(0x0007) MISSED OFFSET
	class UObject*                                     CallFunc_PureDefaultObject_ReturnValue3;                  // 0x3250(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructure*                            K2Node_DynamicCast_AsPrimalStructure3;                    // 0x3258(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast11_CastSuccess;                         // 0x3260(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue3;              // 0x3261(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x3262(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue4;              // 0x3263(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue22;                           // 0x3264(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x3265(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData101[0x2];                                      // 0x3266(0x0002) MISSED OFFSET
	class UObject*                                     CallFunc_PureDefaultObject_ReturnValue4;                  // 0x3268(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructure*                            K2Node_DynamicCast_AsPrimalStructure4;                    // 0x3270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast12_CastSuccess;                         // 0x3278(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x3279(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData102[0x2];                                      // 0x327A(0x0002) MISSED OFFSET
	int                                                CallFunc_IsAllowedToBuild_ReturnValue;                    // 0x327C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x3280(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue4;                     // 0x3281(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue23;                           // 0x3282(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData103[0x1];                                      // 0x3283(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue4;              // 0x3284(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue24;                           // 0x3290(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData104[0x3];                                      // 0x3291(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x3294(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x32A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x32AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x32B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x32B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x32B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsListenServer_ReturnValue;                      // 0x32BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData105[0x3];                                      // 0x32BD(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x32C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x32CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData106[0x3];                                      // 0x32CD(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_ComposeRotators_ReturnValue;                     // 0x32D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_RemoveItem_ReturnValue;                    // 0x32DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData107[0x3];                                      // 0x32DD(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_AddUnique_ReturnValue;                     // 0x32E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ActorHasTag_ReturnValue;                         // 0x32E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x32E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData108[0x2];                                      // 0x32E6(0x0002) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x32E8(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x32F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData109[0x3];                                      // 0x32F9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_MakeVector_ReturnValue3;                         // 0x32FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_SphereTraceMultiForObjects_ActorsToIgnore_RefProperty;// 0x3308(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	unsigned char                                      UnknownData110[0x8];                                      // 0x3318(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_AddComponent_RelativeTransform2_AddComponentDefaultTransform;// 0x3320(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_AddComponent_RelativeTransform3_AddComponentDefaultTransform;// 0x3350(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_AddComponent_RelativeTransform4_AddComponentDefaultTransform;// 0x3380(0x0030) (Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Exosuit_Character_BP.Exosuit_Character_BP_C");
		return ptr;
	}


	void GetHudData(bool* bUsesChestBeam, bool* bCanUseChestBeam, float* ChestBeamEnergyPercent, int* ChestBeamState, class UPrimalInventoryComponent** InventoryComponent, class UClass** FuelItem, float* EnergyPercent, int* CurrentMode, bool* bIsPreparingJump);
	bool HasOfflineRider();
	void BP_OnCryo(class AShooterPlayerController** ForPC);
	void GetFinalBeamTarget(class AActor** FinalTarget);
	TEnumAsByte<ECameraStyle> BPForceCameraStyle(class APrimalCharacter** ForViewTarget);
	void BPTimerNonDedicated();
	void SetFPVMaterialParamter(bool bIsFPV);
	void OnChangedCameraMode(bool bIsFPV);
	void OnJumped();
	void DisableExperienceAndLevelUps();
	void BPSetupTamed(bool* bWasJustTamed);
	void DestroyExosuit();
	bool ShouldRequestStructuresPlacedOnFloor(class APrimalStructure* Structure);
	void ShouldKnockbackChar(class APrimalCharacter* Char, bool* ShouldKnockback);
	void RemovedAttachedStructure();
	void SetupAttachedStructure();
	void ClientInitAttachedStructure();
	void OnRep_AttachedStructureID();
	int BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
	void STATIC_BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void IsAllowedToAutoRepair(bool* IsAllowed, float* TimeRemaining);
	void BPTimerServer();
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void ModifyHudMultiUseLoc(class APlayerController** PC, int* index, struct FVector2D* theVec);
	void STATIC_HasSavedMaterialForComponent(class USceneComponent* Component, class APrimalStructure* Structure, int* index);
	void BP_OnJumpPressed();
	float BPOverrideJumpZModifier(float* InJumpZModifier);
	void BPAnimNotifyCustomState_End(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotifyState** AnimNotifyObject);
	void BPAnimNotifyCustomState_Begin(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration, class UAnimNotifyState** AnimNotifyObject);
	bool BP_InterceptMoveRight(float* AxisValue);
	void BlueprintPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void UpdateFuel(float DeltaTime, bool ForceUpdateEnergyPercentRep);
	void BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem);
	void BP_OnSetRunning(bool* bNewIsRunning);
	float BP_GetCustomModifier_MaxSpeed();
	class UParticleSystem* BPOverrideCharacterParticle(class UParticleSystem** ParticleIn);
	struct FVector BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter);
	struct FVector BPGetRiderUnboardDirection(class APrimalCharacter** RidingCharacter);
	void ReceiveBeginPlay();
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void BPNotifyToggleHUD(bool* bHudHidden);
	void SetupAimedStructure(class APrimalStructure* InStructure);
	void STATIC_AttachHandBeams();
	int BPAdjustAttackIndex(int* AttackIndex);
	void FillEnergy();
	void BPPostLoadedFromSaveGame();
	void BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed);
	bool BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance);
	void GetChestBeamEnergy(float* RemainingEnergy);
	struct FLinearColor BPGetCrosshairColor();
	void Cycle_Mode();
	void SyncHUD();
	void DestroyHudWidget(bool DestroyNow);
	void SetupHUDWidget(class APlayerController* PC);
	void IsModeAllowed(int NewMode, bool* bIsAllowed);
	void SetCurrentMode(int NewMode);
	void ReceiveDestroyed();
	void InterceptInputEvent(class FString* InputName);
	void BP_OnJumpReleased();
	float BPGetGravityZScale();
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void GetJumpVelocity(const struct FVector& StartLocation, const struct FVector& EndLocation, bool bForPreview, struct FVector2D* Velocity, bool* bFoundValidTrajectory, float* Gravity, struct FVector* AdjustedEndLocation);
	void OnLanded(struct FHitResult* Hit);
	struct FVector BPAdjustImpulseFromDamage(struct FVector* DesiredImpulse, float* DamageTaken, struct FDamageEvent* TheDamageEvent, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	class UAnimMontage* BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent);
	void BP_OnSetDeath();
	void OnRep_OfflineRider();
	void SetJumpPreviewVisibility(bool NewVisibility);
	void STATIC_UpdateJumpPreview();
	struct FRotator BPLimitPlayerRotation(class APrimalCharacter** viewingCharacter, struct FRotator* InViewRotation);
	void SetChestBeamState(int NewState, bool ReplicateToOwner);
	void OnRep_ChestBeamState();
	float BPGetCrosshairAlpha();
	bool CanUseChestBeam(bool* ShouldDeplete);
	bool BPOnStopJump();
	bool BPOnStartJump();
	void STATIC_LocalClientUpdateChestBeamLocation();
	void EnableChestBeamFX(bool bIsEnabled);
	bool BPHandleOnStopTargeting();
	bool CanJumpInternal();
	float BPGetAddForwardVelocityOnJump();
	float BPGetTargetingDesirability(class AActor** Attacker);
	void SetHighlightColor(class APrimalStructure* ForStructure, const struct FLinearColor& Color);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void SetStructureHighlighted(class APrimalStructure* Structure, bool bNewHighlighted, const struct FLinearColor& Color);
	void StoreStructure(class APrimalStructure* StructureToGrab, bool bShowNotifications);
	void GetStructurePlacer(class APrimalStructurePlacer** OutStructurePlacer);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPDrawToRiderHUD(class AShooterHUD** HUD);
	void CanAttachStructure(class APrimalStructure* PrimalStructure, bool* bCanGrab);
	void UpdateAimedStructure();
	void Set_Last_Aimed_Structure(class APrimalStructure* LastAimedStructure);
	void ResetLastAimedStructure();
	void SpawnPreviewStructure();
	void STATIC_RidingTick(float* DeltaSeconds);
	void GetAimedStructure(class APrimalStructure** OutStructure);
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	void UserConstructionScript();
	void Server_RequestPlacement(const struct FVector& Location, const struct FRotator& Rotation, const struct FRotator& ViewRotation);
	void Server_RequestAttachStructure(class APrimalStructure* StructureToGrab);
	void Server_RequestStoreStructure(class APrimalStructure* StructureToGrab);
	void BindReceivedStructuresDelegate(class AShooterPlayerController* ShooterPC);
	void OnClientReceiveStructuresPlacedOnFloor_Event(class APrimalStructure* Structure, TArray<class APrimalStructure*>* StructuresPlacedOnFloor);
	void Server_RequestJump(const struct FVector& Location, float HeldTime, bool bWasBlockingHIt, const struct FVector& HitNormal);
	void Server_SetBeamEndLocation(const struct FVector& Location, bool bWasHit);
	void Multicast_SetBeamEndLocation(const struct FVector& Location, bool bWasHit);
	void Server_RequestChestBeamState(int NewState);
	void AttachOfflineRider();
	void DoKnockback();
	void Multicast_KnockbackFX();
	void Multicast_SpawnLandedFX();
	void SpawnLandedFX();
	void Server_SetPreparingJump(bool NewIsPreparingJump);
	void DoAttachStructure();
	void DoPlacement();
	void Multicast_DoPlacment(const struct FVector& Location, const struct FRotator& Rotation);
	void Server_SetCurrentMode(int NewMode);
	void ServerRestart();
	void Multicast_HideAttachedStructure();
	void Multicast_ShowAttachedStructure();
	void Multicast_ResetPendingAttachedStructure();
	void OnChangedPhysicsVolume(class APhysicsVolume* NewVolume);
	void Server_SetStartedRunning(double Time);
	void Server_KnockbackChars(TArray<class APrimalCharacter*>* Chars, TArray<struct FVector>* Impulses);
	void ClearMoveIgnoredActors();
	void ClearHUDReference();
	void Multicast_StoredStructureFX(bool bForceOnOwningClient);
	void ClearRiderIgnoreExosuitCollision();
	void DelayedRequestStoreStructure();
	void Server_RequestStoreAttachedStructure();
	void ExecuteUbergraph_Exosuit_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
