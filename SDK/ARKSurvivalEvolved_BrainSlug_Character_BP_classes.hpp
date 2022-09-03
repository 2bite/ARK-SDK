#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BrainSlug_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BrainSlug_Character_BP.BrainSlug_Character_BP_C
// 0x10A9 (0x3331 - 0x2288)
class ABrainSlug_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    VFXComponent;                                             // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_BrainSlug_C* DinoCharacterStatus_BP_BrainSlug_C1;                      // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastThrownTime;                                           // 0x2298(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            BrainControlTargetChar;                                   // 0x22A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBrainJumpAngle;                                        // 0x22A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxBrainJumpAngle;                                        // 0x22AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultBrainJumpVelocity;                                 // 0x22B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetedBrainJumpVelocity;                                // 0x22B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FullyTameIneffectivenessEquivalentDamageAmount;           // 0x22B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x22BC(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    LastThrowingPC;                                           // 0x22C0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BrainControlBuff;                                         // 0x22C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BrainSlugLaunchVelocity;                                  // 0x22D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x22D4(0x0004) MISSED OFFSET
	double                                             LastTimeRecievedAffinity;                                 // 0x22D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CooldownBeforeRecievingAffinity;                          // 0x22E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseTamingAffinity;                                       // 0x22E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              BrainFoodDinoClasses;                                     // 0x22E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              NoBrainDinoClasses;                                       // 0x22F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TamingAffinityMultiplier;                                 // 0x2308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoodPercentToGetPerTickWhileTaming;                       // 0x230C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HumanControlBuff;                                         // 0x2310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ControlBuffDuration;                                      // 0x2318(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x231C(0x0004) MISSED OFFSET
	double                                             ControlBuffStartTime;                                     // 0x2320(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalBuff*                                 ControlBuffRef;                                           // 0x2328(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BrainSlugMountedBuff;                                     // 0x2330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 MountedBuff;                                              // 0x2338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBrainSlugAttached;                                     // 0x2340(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x2341(0x0007) MISSED OFFSET
	class APrimalCharacter*                            AttachedToChar;                                           // 0x2348(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PreventBrainControlBuff;                                  // 0x2350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsReturning;                                             // 0x2358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasPuppeteerMoveInput;                                   // 0x2359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x235A(0x0002) MISSED OFFSET
	struct FVector                                     PuppeteerMoveInput;                                       // 0x235C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreventFullyTameBelowDragWeight;                          // 0x2368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x236C(0x0004) MISSED OFFSET
	struct FHUDElement                                 BrainSlugAttachedHudElement;                              // 0x2370(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MinAllowedTargetControlHealthPercent;                     // 0x24C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinAllowedTargetControlDragWeight;                        // 0x24C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasHumanController;                                      // 0x24C8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x24C9(0x0007) MISSED OFFSET
	class UClass*                                      ControlPostProcessBuff;                                   // 0x24D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowedToPossessAllies;                                  // 0x24D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldFlee;                                              // 0x24D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x24DA(0x0002) MISSED OFFSET
	float                                              FleeTimer;                                                // 0x24DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldFleeAfterPossess;                                  // 0x24E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x24E1(0x0003) MISSED OFFSET
	float                                              BrainJumpTargetCheckDistance;                             // 0x24E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                JumpAttackMontage;                                        // 0x24E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BrainJumpParticle;                                        // 0x24F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BrainHuntParticle;                                        // 0x24F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BrainHuntAntennaParticle;                                 // 0x2500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TameAffinityPerTargetLimit;                               // 0x2508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TameAffinityPercentGainedFromThisDino;                    // 0x250C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        PastTameAffinityTargetID1s;                               // 0x2510(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<int>                                        PastTameAffinityTargetID2s;                               // 0x2520(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	float                                              TameIneffectivenessPerPossessionPastMax;                  // 0x2530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x2534(0x0004) MISSED OFFSET
	class APrimalBuff*                                 PostProcessBuff;                                          // 0x2538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 InvalidTargetTextHudElementTemplate;                      // 0x2540(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              InvalidTargetTextMaxScale;                                // 0x2690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InvalidTargetTextMinScale;                                // 0x2694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldInvalidTargetTextHoverOverTarget;                  // 0x2698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBrainJumping;                                          // 0x2699(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x269A(0x0002) MISSED OFFSET
	struct FVector                                     HumanTVCameraOffset;                                      // 0x269C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      InvalidTargetString_Fallback;                             // 0x26A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      InvalidTargetString_Unconscious;                          // 0x26B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      InvalidTargetString_LevelTooHigh;                         // 0x26C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      InvalidTargetString_RobotOrVehicle;                       // 0x26D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      InvalidTargetString_BossDino;                             // 0x26E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      InvalidTargetString_LowHealth;                            // 0x26F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      InvalidTargetString_TooSmall;                             // 0x2708(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      InvalidTargetString_ImmunityBuff;                         // 0x2718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      InvalidTargetString_Friendly;                             // 0x2728(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               DinoCustomTagNotAllowedToControl;                         // 0x2738(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               TimeSinceLastAccessInventoryPressed;                      // 0x2748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTickedOnceForController;                                 // 0x2749(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x6];                                       // 0x274A(0x0006) MISSED OFFSET
	class FString                                      InvalidTargetString_PreventHUD;                           // 0x2750(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                CrosshairColor;                                           // 0x2760(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalStructureItemContainer*               BrainTargetHarvestBag;                                    // 0x2770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FindBrainJumpTargetStartHeight;                           // 0x2778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_ForceAllowPossessJumpTargets;                      // 0x277C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x277D(0x0003) MISSED OFFSET
	float                                              BrainJumpStaminaCost;                                     // 0x2780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NonAttackJumpStaminaCost;                                 // 0x2784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTameTargetPossessionsForPerfectTame;                   // 0x2788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x278C(0x0004) MISSED OFFSET
	class UClass*                                      TrackerBuff;                                              // 0x2790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDistanceToSpawnTrackerBuff;                            // 0x2798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x279C(0x0004) MISSED OFFSET
	class USoundBase*                                  ThrownSound;                                              // 0x27A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAttemptBrainControlDistance;                           // 0x27A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x27AC(0x0004) MISSED OFFSET
	class USphereComponent*                            AttachedProjIntersectSphere;                              // 0x27B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachedPlantTurretDamageMultiplier;                      // 0x27B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x27BC(0x0004) MISSED OFFSET
	class FString                                      InvalidTargetString_NoglinCryosickness;                   // 0x27C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x27D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x27D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x27D2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue2;            // 0x27D3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue3;            // 0x27D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x27D5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bNewActive;                            // 0x27D6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x1];                                       // 0x27D7(0x0001) MISSED OFFSET
	class APrimalStructure*                            K2Node_CustomEvent_TargetedDoor;                          // 0x27D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AStructureItemContainerBaseBP_C*             K2Node_DynamicCast_AsStructureItemContainerBaseBP_C;      // 0x27E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x27E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x27E9(0x0007) MISSED OFFSET
	class APrimalStructureDoor*                        K2Node_DynamicCast_AsPrimalStructureDoor;                 // 0x27F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x27F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AttemptItemContainerActivationToggle_ActivationChanged;// 0x27F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x27FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x1];                                       // 0x27FB(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x27FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x2808(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x280C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDead_ReturnValue;                              // 0x2810(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2811(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x6];                                       // 0x2812(0x0006) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_TargetChar2;                           // 0x2818(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_GetDefaultObject_ReturnValue;                    // 0x2820(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABrainSlug_Character_BP_C*                   K2Node_DynamicCast_AsBrainSlug_Character_BP_C;            // 0x2828(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x2830(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x2831(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0x2834(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetSocketRotation_ReturnValue;                   // 0x2840(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue2;                  // 0x284C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_VectorVector_ReturnValue;               // 0x2858(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x2859(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_SelectVector_ReturnValue;                        // 0x285C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x2868(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x2870(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x2871(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x2878(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x2880(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x2888(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x2889(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x2890(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 K2Node_CustomEvent_NewController;                         // 0x2898(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x28A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x28A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x28B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWildSlow_ReturnValue;                          // 0x28B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsShooterCharacter_ReturnValue;                  // 0x28B2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x5];                                       // 0x28B3(0x0005) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue;                                // 0x28B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x28C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ShouldForceFlee_ReturnValue;                     // 0x28C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x28C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x5];                                       // 0x28C3(0x0005) MISSED OFFSET
	class UParticleSystem*                             K2Node_CustomEvent_particle;                              // 0x28C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x28D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x28DC(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_AttachToActor;                         // 0x28E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_AttachToSocket;                        // 0x28E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Activate2;                             // 0x28F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_FromThrow;                             // 0x28F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x6];                                       // 0x28F2(0x0006) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter2;                    // 0x28F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x2900(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x7];                                       // 0x2901(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x2908(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x2910(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x7];                                       // 0x2911(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x2918(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2920(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_activate;                              // 0x2921(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x6];                                       // 0x2922(0x0006) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue2;                            // 0x2928(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class UActorComponent*>                     CallFunc_GetComponentsByCustomTag_ReturnValue;            // 0x2930(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue2;               // 0x2940(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2948(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x294C(0x0004) MISSED OFFSET
	TArray<class UActorComponent*>                     CallFunc_GetComponentsByCustomTag_ReturnValue2;           // 0x2950(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x2960(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x2964(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue3;               // 0x2968(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue4;               // 0x2970(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x2978(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x2984(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x2988(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x2990(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x2994(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x2998(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x299C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable2;                       // 0x29A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWildSlow_ReturnValue2;                         // 0x29A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x2];                                       // 0x29AA(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x29AC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlliedWithOtherTeam_ReturnValue;               // 0x29B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x29B9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x29BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x29C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlliedWithOtherTeam_ReturnValue2;              // 0x29CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x29CD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x2];                                       // 0x29CE(0x0002) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue3;                      // 0x29D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x29D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x29E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AllowStructureAccess_ReturnValue;                // 0x29E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AllowStructureAccess_ReturnValue2;               // 0x29E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryMultiUse_ReturnValue;                         // 0x29E3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x4];                                       // 0x29E4(0x0004) MISSED OFFSET
	class AController*                                 K2Node_CustomEvent_InController;                          // 0x29E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController2;            // 0x29F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast9_CastSuccess;                          // 0x29F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x29F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x6];                                       // 0x29FA(0x0006) MISSED OFFSET
	class ABuff_BrainSlug_HumanControl_C*              K2Node_DynamicCast_AsBuff_BrainSlug_HumanControl_C;       // 0x2A00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast10_CastSuccess;                         // 0x2A08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x7];                                       // 0x2A09(0x0007) MISSED OFFSET
	class ABuff_BrainSlugControl_C*                    K2Node_DynamicCast_AsBuff_BrainSlugControl_C;             // 0x2A10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast11_CastSuccess;                         // 0x2A18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x7];                                       // 0x2A19(0x0007) MISSED OFFSET
	struct FBPNetExecParams                            K2Node_MakeStruct_BPNetExecParams;                        // 0x2A20(0x0040) (Transient, DuplicateTransient)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x2A60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x7];                                       // 0x2A61(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue3;                            // 0x2A68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x2A70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x2A71(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x6];                                       // 0x2A72(0x0006) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue;                  // 0x2A78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue2;                 // 0x2A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bDontActuallyPossess;                  // 0x2A88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x7];                                       // 0x2A89(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x2A90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue3;                 // 0x2A98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x2AA0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch2;                                 // 0x2AAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw2;                                   // 0x2AB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll2;                                  // 0x2AB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 K2Node_CustomEvent_Target2;                               // 0x2AB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_newRot3;                               // 0x2AC0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue2;                            // 0x2ACC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue3;                // 0x2AD8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x4];                                       // 0x2AE4(0x0004) MISSED OFFSET
	class FString                                      K2Node_CustomEvent_OutMessage;                            // 0x2AE8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_BreakRot_Pitch3;                                 // 0x2AF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw3;                                   // 0x2AFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll3;                                  // 0x2B00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue3;                            // 0x2B04(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x2B10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x7];                                       // 0x2B11(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_K2_GetPawn_ReturnValue;                          // 0x2B18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue4;                 // 0x2B20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue5;                 // 0x2B28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x2B30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x2B31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x2];                                       // 0x2B32(0x0002) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue4;                // 0x2B34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue6;                            // 0x2B40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x3];                                       // 0x2B41(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakRot_Pitch4;                                 // 0x2B44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw4;                                   // 0x2B48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll4;                                  // 0x2B4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x2B50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x3];                                       // 0x2B51(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_MakeRot_ReturnValue4;                            // 0x2B54(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue4;                      // 0x2B60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue4;            // 0x2B68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue7;                            // 0x2B69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2B6A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x5];                                       // 0x2B6B(0x0005) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuffWithCustomTag_ReturnValue;                // 0x2B70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x2B78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x2B79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x6];                                       // 0x2B7A(0x0006) MISSED OFFSET
	class APrimalStructureItemContainer*               K2Node_CustomEvent_HarvestBag;                            // 0x2B80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_K2_GetPawn_ReturnValue2;                         // 0x2B88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_UpdateComponentVisibilityWithCameraStyle_bSuccess;// 0x2B90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue5;            // 0x2B91(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue6;            // 0x2B92(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_UpdateComponentVisibilityWithCameraStyle_bSuccess2;// 0x2B93(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x2B94(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x2B95(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_UpdateComponentVisibilityWithCameraStyle_bSuccess3;// 0x2B96(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x2B97(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_UpdateComponentVisibilityWithCameraStyle_bSuccess4;// 0x2B98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x2B99(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x2];                                       // 0x2B9A(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x2B9C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue7;            // 0x2BA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x7];                                       // 0x2BA9(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2BB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x2BB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue8;                            // 0x2BB9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x2];                                       // 0x2BBA(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x2BBC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_SetActorLocation_ReturnValue;                 // 0x2BC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x2BC9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPFastTrace_ReturnValue;                         // 0x2BCA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue9;                            // 0x2BCB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x2BCC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue10;                           // 0x2BCD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x2];                                       // 0x2BCE(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x2BD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x4];                                       // 0x2BD4(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x2BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast12_CastSuccess;                         // 0x2BE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x2BE1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x6];                                       // 0x2BE2(0x0006) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue2;                      // 0x2BE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue;                 // 0x2BF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDistanceTo_ReturnValue;                       // 0x2BF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x2BFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x3];                                       // 0x2BFD(0x0003) MISSED OFFSET
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x2C00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_CustomEvent_TargetChar;                            // 0x2C08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x2C10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x3];                                       // 0x2C11(0x0003) MISSED OFFSET
	float                                              CallFunc_GetDistanceTo_ReturnValue2;                      // 0x2C14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAllowedToControl_Allowed;                      // 0x2C18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x7];                                       // 0x2C19(0x0007) MISSED OFFSET
	class FString                                      CallFunc_IsAllowedToControl_TargetValidationString;       // 0x2C20(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue2;               // 0x2C30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x2C31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x6];                                       // 0x2C32(0x0006) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter2;                   // 0x2C38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast13_CastSuccess;                         // 0x2C40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x7];                                       // 0x2C41(0x0007) MISSED OFFSET
	class ABuff_BrainSlug_HumanControl_C*              K2Node_DynamicCast_AsBuff_BrainSlug_HumanControl_C2;      // 0x2C48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast14_CastSuccess;                         // 0x2C50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x7];                                       // 0x2C51(0x0007) MISSED OFFSET
	class ABuff_BrainSlug_HumanControl_C*              K2Node_DynamicCast_AsBuff_BrainSlug_HumanControl_C3;      // 0x2C58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast15_CastSuccess;                         // 0x2C60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x7];                                       // 0x2C61(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2C68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter3;                   // 0x2C70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast16_CastSuccess;                         // 0x2C78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue5;                  // 0x2C79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable2;                             // 0x2C7A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bStartJump;                            // 0x2C7B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x2C7C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetMaxSpeed_ReturnValue;                         // 0x2C88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x2C8C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x3];                                       // 0x2C8D(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x2C90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetMovementSpeedModifier_ReturnValue;            // 0x2C94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue5;                      // 0x2C98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable3;                       // 0x2CA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x7];                                       // 0x2CA1(0x0007) MISSED OFFSET
	class ABuff_BrainSlug_HumanControl_C*              K2Node_DynamicCast_AsBuff_BrainSlug_HumanControl_C4;      // 0x2CA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast17_CastSuccess;                         // 0x2CB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x7];                                       // 0x2CB1(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue6;                      // 0x2CB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetControlRotation_ReturnValue;                  // 0x2CC0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x4];                                       // 0x2CCC(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController3;            // 0x2CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast18_CastSuccess;                         // 0x2CD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue11;                           // 0x2CD9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue2;              // 0x2CDA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue8;            // 0x2CDB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_NewRot2;                               // 0x2CDC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_CustomEvent_InstigatingController2;                // 0x2CE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_NewLoc;                                // 0x2CF0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_NewAimDir;                             // 0x2CFC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_NewRot;                                // 0x2D08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue9;            // 0x2D14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable3;                             // 0x2D15(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x2D16(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x2D17(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x2D18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue12;                           // 0x2D19(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x6];                                       // 0x2D1A(0x0006) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue7;                      // 0x2D20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue13;                           // 0x2D28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x3];                                       // 0x2D29(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0x2D2C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue2;                        // 0x2D38(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue2;                              // 0x2D44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x2D48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x2D4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x2D50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x4];                                       // 0x2D54(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue;                  // 0x2D58(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue3;              // 0x2D68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x7];                                       // 0x2D69(0x0007) MISSED OFFSET
	class ABuff_BrainSlug_HumanControl_C*              K2Node_DynamicCast_AsBuff_BrainSlug_HumanControl_C5;      // 0x2D70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast19_CastSuccess;                         // 0x2D78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue10;           // 0x2D79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x2];                                       // 0x2D7A(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_MoveDir2;                              // 0x2D7C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_MoveDir;                               // 0x2D88(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0x4];                                       // 0x2D94(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_CustomEvent_InstigatingController;                 // 0x2D98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_ConsumeMovementInputVector_ReturnValue;          // 0x2DA0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue11;           // 0x2DAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0x2DAD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x2];                                       // 0x2DAE(0x0002) MISSED OFFSET
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x2DB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue10;                        // 0x2DB4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x2DB5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue11;                        // 0x2DB6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x1];                                       // 0x2DB7(0x0001) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x2DB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x2DBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_ClampVectorSize_ReturnValue;                     // 0x2DC0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x2DCC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X2;                                  // 0x2DD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x2DDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x2DE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x2DE4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_CustomEvent_ForCharacter;                          // 0x2DF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bIsSleeping;                           // 0x2DF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue14;                           // 0x2DF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData77[0x6];                                       // 0x2DFA(0x0006) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue6;                 // 0x2E00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue15;                           // 0x2E08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData78[0x7];                                       // 0x2E09(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x2E10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_CustomEvent_NewPC;                                 // 0x2E18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x2E20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData79[0x4];                                       // 0x2E24(0x0004) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacterByController_ReturnValue;      // 0x2E28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_IntToString_ReturnValue;                    // 0x2E30(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsValid_ReturnValue16;                           // 0x2E40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2E41(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x6];                                       // 0x2E42(0x0006) MISSED OFFSET
	class UActorComponent*                             CallFunc_Array_Get_Item;                                  // 0x2E48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x2E50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData81[0x4];                                       // 0x2E54(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionResponse>>            K2Node_MakeArray_Array;                                   // 0x2E58(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<TEnumAsByte<ECollisionChannel>>             K2Node_MakeArray_Array2;                                  // 0x2E68(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FCollisionResponseSet                       K2Node_MakeStruct_CollisionResponseSet;                   // 0x2E78(0x0020) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData82[0x8];                                       // 0x2E98(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x2EA0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue17;                           // 0x2ED0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData83[0x7];                                       // 0x2ED1(0x0007) MISSED OFFSET
	class USphereComponent*                            CallFunc_AddComponent_ReturnValue;                        // 0x2ED8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue18;                           // 0x2EE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData84[0x3];                                       // 0x2EE1(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable3;                          // 0x2EE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_IntToString_ReturnValue2;                   // 0x2EE8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x2EF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData85[0x7];                                       // 0x2EF9(0x0007) MISSED OFFSET
	class UActorComponent*                             CallFunc_Array_Get_Item2;                                 // 0x2F00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x2F08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue6;                  // 0x2F0C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Enable;                                // 0x2F0D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bShouldCollide;                        // 0x2F0E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData86[0x1];                                       // 0x2F0F(0x0001) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_TargetChar3;                           // 0x2F10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_BoolToString_ReturnValue;                   // 0x2F18(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x2F28(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x2F38(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsAllowedToBrainJump_ReturnValue;                // 0x2F48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAllowedToBrainJump_ReturnValue2;               // 0x2F49(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData87[0x6];                                       // 0x2F4A(0x0006) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue7;                 // 0x2F50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_K2_GetPawn_ReturnValue3;                         // 0x2F58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x2F60(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2F70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x2F74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData88[0x3];                                       // 0x2F75(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_GetControlRotation_ReturnValue2;                 // 0x2F78(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch5;                                 // 0x2F84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw5;                                   // 0x2F88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll5;                                  // 0x2F8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue19;                           // 0x2F90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData89[0x3];                                       // 0x2F91(0x0003) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x2F94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x2F98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x2F9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x2FA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue5;                            // 0x2FA4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              K2Node_MakeArray_Array3;                                  // 0x2FB0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x2FC0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData90[0x4];                                       // 0x2FCC(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              K2Node_MakeArray_Array4;                                  // 0x2FD0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x2FE0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x2FEC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue5;                           // 0x2FF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData91[0x3];                                       // 0x2FF9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue5;                // 0x2FFC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWalking_ReturnValue;                           // 0x3008(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x3009(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue12;                        // 0x300A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData92[0x1];                                       // 0x300B(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue2;              // 0x300C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue6;                // 0x3018(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue3;               // 0x3024(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x3030(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData93[0x4];                                       // 0x303C(0x0004) MISSED OFFSET
	TArray<struct FHitResult>                          CallFunc_BoxTraceMultiForObjects_OutHits;                 // 0x3040(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_BoxTraceMultiForObjects_ReturnValue;             // 0x3050(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData94[0x3];                                       // 0x3051(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x3054(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  CallFunc_Array_Get_Item3;                                 // 0x3058(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x30E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData95[0x3];                                       // 0x30E1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x30E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x30F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x30FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x3108(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData96[0x4];                                       // 0x3114(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x3118(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x3120(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x3128(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x3130(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x3138(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x313C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue13;                        // 0x313D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData97[0x2];                                       // 0x313E(0x0002) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter3;                    // 0x3140(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast20_CastSuccess;                         // 0x3148(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue12;           // 0x3149(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData98[0x6];                                       // 0x314A(0x0006) MISSED OFFSET
	class FString                                      CallFunc_GetDisplayName_ReturnValue;                      // 0x3150(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsServer_ReturnValue6;                           // 0x3160(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue7;                           // 0x3161(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData99[0x2];                                       // 0x3162(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x3164(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue8;                           // 0x3168(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData100[0x3];                                      // 0x3169(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_Get_Aim_Adjusted_Throwing_Dir_AdjustedThrowingDir;// 0x316C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch6;                                 // 0x3178(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw6;                                   // 0x317C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll6;                                  // 0x3180(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue2;                   // 0x3184(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue6;                            // 0x3190(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue4;               // 0x319C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue;                    // 0x31A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         K2Node_Event_PrevMovementMode;                            // 0x31A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         K2Node_Event_NewMovementMode;                             // 0x31AA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_Event_PrevCustomMode;                              // 0x31AB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_Event_NewCustomMode;                               // 0x31AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x31AD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x31AE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData101[0x1];                                      // 0x31AF(0x0001) MISSED OFFSET
	struct FRotator                                    CallFunc_GetControlRotation_ReturnValue3;                 // 0x31B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue14;                        // 0x31BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData102[0x3];                                      // 0x31BD(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakRot_Pitch7;                                 // 0x31C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw7;                                   // 0x31C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll7;                                  // 0x31C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x31CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue7;                // 0x31D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x31DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Lerp_ReturnValue2;                               // 0x31E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue20;                           // 0x31E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData103[0x3];                                      // 0x31E5(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_MakeRot_ReturnValue7;                            // 0x31E8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue3;                        // 0x31F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue3;                   // 0x31F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue8;                // 0x3204(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue5;               // 0x3210(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_FindLookAtRotation_ReturnValue;                  // 0x321C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x3228(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue4;                   // 0x3234(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue6;               // 0x3240(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_SelectVector_ReturnValue2;                       // 0x324C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x3258(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x3264(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData104[0x4];                                      // 0x3274(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_SelfActor;                             // 0x3278(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_OtherActor;                            // 0x3280(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_NormalImpulse;                         // 0x3288(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData105[0x4];                                      // 0x3294(0x0004) MISSED OFFSET
	struct FHitResult                                  K2Node_CustomEvent_Hit;                                   // 0x3298(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class APrimalCharacter*                            K2Node_CustomEvent_target;                                // 0x3320(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter4;                    // 0x3328(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast21_CastSuccess;                         // 0x3330(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BrainSlug_Character_BP.BrainSlug_Character_BP_C");
		return ptr;
	}


	void Sync_Crosshair_Color(const struct FLinearColor& InColor, struct FLinearColor* outColor);
	void GetHudData(class APrimalCharacter* TargetChar, bool* IsAllowedToControlTarget, class FString* TargetValidationString, class FString* InvalidTargetString_PreventHUD, struct FHUDElement* HUDElementTemplate, float* BrainJumpTargetCheckDistance);
	struct FVector BP_OverrideTargetingLocation(class AActor** Attacker);
	float BPGetTargetingDesirability(class AActor** Attacker);
	void IsPlayerOnMission(class APawn* OverrideCharacterToTest, bool* IsOnMission);
	struct FVector STATIC_GetBrainSlugAimDirection();
	void DecreaseStamina(float StaminaCost);
	void UpdateComponentVisibilityWithCameraStyle(const struct FName& CameraStyle, bool* bSuccess);
	void BP_OnCameraStyleChangedNotify(struct FName* NewCameraStyle, struct FName* OldCameraStyle);
	bool IsAllowedToBrainJump(bool IsAttackJump);
	float BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected);
	void BPTriggerStasisEvent();
	void HasHumanControllerOrDinoDoes(bool* bHasHumanController);
	void BPUnstasis();
	bool BPPreventStasis();
	void AttemptItemContainerActivationToggle(class APrimalStructureItemContainer* StructureRef, bool* ActivationChanged);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	bool HasForbiddenDinoCustomTag(const struct FName& TagToCheck);
	bool BPOverrideInventoryAccessInput();
	void UpdateBuffControlDur();
	bool BPCanCryo(class AShooterPlayerController** ForPC);
	void BPSetupTamed(bool* bWasJustTamed);
	bool BlueprintOverrideWantsToRun(bool* bInputWantsToRun);
	bool IsDinoInPastTameAffinityTargets(int* ID1, int* ID2);
	void BPUnsetupDinoTameable();
	void BrainSlugIterateAffinity(class APrimalCharacter* DinoToGetAffinityFrom);
	struct FRotator BPModifyAimOffsetNoTarget(struct FRotator* Aim);
	float BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	bool BPShouldForceFlee();
	void EndBrainHunt();
	bool BPIsValidUnStasisCaster();
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPDoAttack(int* AttackIndex);
	bool BPPreventFirstPerson();
	void STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void BPNewDoorInteractionDrawHUD(class AShooterHUD** HUD, struct FVector2D* DoorDescriptionLoc);
	void ReturnToPlayer();
	bool BP_InterceptMoveRight(float* AxisValue);
	bool BP_InterceptMoveForward(float* AxisValue);
	void StartBrainSlugAttachment(class APrimalCharacter* AttachedToChar);
	void STATIC_FindViableBrainJumpTargetFromControlRot(class AController* Controller, class APrimalCharacter** ViableTarget);
	void BPOnClearMountedDino();
	void BPOnSetMountedDino();
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	int IsDinoBrainFood(class AActor* TargetActor);
	void BPCharacterSleeped();
	void Get_Aim_Adjusted_Throwing_Dir(struct FRotator* AdjustedThrowingDir);
	void FullyTameTarget(class APrimalDinoCharacter* TargetChar, bool* DidTame);
	void IsAllowedToFullyTame(class APrimalCharacter* TestChar, bool* Allowed);
	void ReceiveDestroyed();
	void BP_OnSetDeath();
	void BPTimerServer();
	int BPAdjustAttackIndex(int* AttackIndex);
	void BlueprintPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void InterceptInputEvent(class FString* InputName);
	bool BPCanMountOnCharacter(class APrimalCharacter** Character);
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	void STATIC_IsAllowedToControl(class APrimalCharacter* TestChar, bool* Allowed, class FString* TargetValidationString);
	struct FLinearColor BPGetCrosshairColor();
	void ReceiveUnpossessed(class AController** OldController);
	void ReceivePossessed(class AController** NewController);
	void BPTimerNonDedicated();
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void DinoShoulderMountedLaunch(struct FVector* launchDir, class AShooterCharacter** throwingCharacter);
	void UserConstructionScript();
	void ServerAttemptBrainControl(class APrimalCharacter* TargetChar);
	void MultiEnableNonDediTimer(bool Enable);
	void ServerClearBrainHunt();
	void Multi_EndBrainHunt();
	void ClearPossession();
	void TemporaryPlayerPassThrough();
	void ClearBrainSlugAttachment();
	void Multi_PlayFullyTamedVFX(class APrimalCharacter* TargetChar);
	void Multi_SetDrawCrosshair(bool bNewActive);
	void ServerTryDoorInteraction(class APrimalStructure* TargetedDoor);
	void Server_ClearBrainSlugAttachment();
	void Multi_DestroyController(class AController* NewController);
	void ResetFlee();
	void ReceiveBeginPlay();
	void Multi_SpawnEffect(class UParticleSystem* particle, const struct FVector& Location, class AActor* AttachToActor, const struct FName& AttachToSocket);
	void Multi_DoJumpParticle(bool Activate, bool FromThrow);
	void Multi_DoBrainHuntParticle(bool Activate);
	void ServerRepossess(class AController* InController);
	void TimerClearBrainSlugAttachment();
	void StartPossessionBehaviors(bool bDontActuallyPossess);
	void ChangeControllers();
	void Multi_SetControlRotForController(class AController* Target, const struct FRotator& newRot);
	void TestingMessage(const class FString& OutMessage);
	void SetupHarvestingBag(class APrimalStructureItemContainer* HarvestBag);
	void Timer_TryUpdateComponentVisibility();
	void AttemptBrainControl(class APrimalCharacter* TargetChar);
	void BP_OnJumpReleased();
	void TryFire();
	void ForceFireWeapon();
	void ServerFireWeapon();
	void Server_TryJump(bool bStartJump);
	void BP_OnJumpPressed();
	void DelayedUpdateRot();
	void Server_SetControlRot(const struct FRotator& newRot, class AShooterPlayerController* InstigatingController, const struct FVector& NewLoc, const struct FVector& NewAimDir);
	void Multi_SetControlRot(const struct FRotator& newRot);
	void Multi_MoveInput(const struct FVector& moveDir);
	void Server_MoveBrainControlTarget(const struct FVector& moveDir, class AShooterPlayerController* InstigatingController);
	void ClearPossessionBinds();
	void RespondToPlayerSleep(class APrimalCharacter* forCharacter, bool bIsSleeping);
	void RespondToPlayerDeath(class APrimalCharacter* DiedCharacter);
	void OnPossessionResponse(class AShooterPlayerController* NewPC);
	void Multi_UpdateCollisionProfile(bool bShouldCollide);
	void JumpLeapInput();
	void UpdateJumpCheck();
	void DelayedLaunchVelocity();
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void StartBrainJump();
	void ClearBrainJump();
	void ActorHitDelegateEvent(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult* Hit);
	void BrainControlInput(class APrimalCharacter* Target);
	void ExecuteUbergraph_BrainSlug_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
