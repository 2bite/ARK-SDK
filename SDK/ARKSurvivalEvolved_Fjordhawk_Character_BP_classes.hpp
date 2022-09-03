#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Fjordhawk_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Fjordhawk_Character_BP.Fjordhawk_Character_BP_C
// 0x02A0 (0x2528 - 0x2288)
class AFjordhawk_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    trail;                                                    // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Bag;                                                      // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoTamedInventoryComponent_Fjordhawk_Retrieval_C* Inventory_Retrieval;                                      // 0x2298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoTamedInventoryComponent_Fjordhawk_C*    BaseInventory;                                            // 0x22A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Shield;                                                   // 0x22A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Fjordhawk_C* DinoCharacterStatus_BP_Fjordhawk_C1;                      // 0x22B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationToTarget_rotation_DFAFBCFE490FC9F7F809C0A10C4B22C0;// 0x22B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RotationToTarget__Direction_DFAFBCFE490FC9F7F809C0A10C4B22C0;// 0x22BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x22BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RotationToTarget;                                         // 0x22C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsRotating;                                               // 0x22C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x22C9(0x0003) MISSED OFFSET
	int                                                lastDamageByTeam;                                         // 0x22CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasShield;                                                // 0x22D0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x22D1(0x0003) MISSED OFFSET
	float                                              ShieldCooldown;                                           // 0x22D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AffinityPerDamageDone;                                    // 0x22D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x22DC(0x0004) MISSED OFFSET
	double                                             UpdateWanderTargetTime;                                   // 0x22E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              FollowPlayerSearchRadius;                                 // 0x22E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x22EC(0x0004) MISSED OFFSET
	class AActor*                                      PlayerToFollow;                                           // 0x22F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	class APrimalCharacter*                            LastMountCharacter;                                       // 0x22F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	class UClass*                                      MountedCharBuff;                                          // 0x2300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LootRadius_PostEat;                                       // 0x2308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LootRadius_Wander;                                        // 0x230C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            tamingCharacter;                                          // 0x2310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	double                                             LootPickupTime;                                           // 0x2318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	double                                             LootDropTime;                                             // 0x2320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              WildDamagePercentPerBite;                                 // 0x2328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamedBiteDamage;                                          // 0x232C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LootPickUpAnim;                                           // 0x2330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchOnTargetRange;                                      // 0x2338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FindLaunchTargetRadius;                                   // 0x233C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnablePreyDetection;                                      // 0x2340(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               HasLoot;                                                  // 0x2341(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               DeadPlayerLoot;                                           // 0x2342(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x2343(0x0005) MISSED OFFSET
	class FString                                      DeadPlayerID;                                             // 0x2348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	float                                              TameIneffectivenessPerBite;                               // 0x2358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x235C(0x0004) MISSED OFFSET
	double                                             EndLootingTime;                                           // 0x2360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	double                                             AffinityDecayStart;                                       // 0x2368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              SecondsBeforeAffinityDecays;                              // 0x2370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AffinityLostPerSecond;                                    // 0x2374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EscapeStart;                                              // 0x2378(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               CompletedTame;                                            // 0x2384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x2385(0x0003) MISSED OFFSET
	class AShooterPlayerController*                    LastPlayerController;                                     // 0x2388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               HasLootTarget;                                            // 0x2390(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x2391(0x0007) MISSED OFFSET
	class UAnimMontage*                                LootCarryAnim;                                            // 0x2398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                EatCorpseAnim;                                            // 0x23A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            DeadPlayer;                                               // 0x23A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               CachedWhistleSetting;                                     // 0x23B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               ReturningPlayerLoot;                                      // 0x23B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x23B2(0x0006) MISSED OFFSET
	class USoundBase*                                  ShieldBreakSound;                                         // 0x23B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ShieldResetSound;                                         // 0x23C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ThrownAtTarget;                                           // 0x23C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               CallFunc_BPIsConscious_ReturnValue;                       // 0x23C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x23CA(0x0002) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x23CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x23D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x23DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x23E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NewParam;                              // 0x23E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x23E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x23E6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x23E7(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x23E8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_FlattenVectorNormal_ReturnValue;                 // 0x23F4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x2400(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x240C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x2418(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x2424(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDistanceLessThan_ReturnValue;                  // 0x2430(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x2431(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_RandomUnitVector_ReturnValue;                    // 0x2434(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_TargetRotation;                        // 0x2440(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Time;                                  // 0x244C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_initialRotation;                       // 0x2450(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x245C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x2468(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue3;                   // 0x246C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x2478(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x2484(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2488(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x2490(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x249C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetGroundLocation_theGroundLoc;                  // 0x24A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetGroundLocation_ReturnValue;                   // 0x24B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x24B5(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_RLerp_ReturnValue;                               // 0x24B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x24C4(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x24C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch2;                                 // 0x24D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw2;                                   // 0x24D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll2;                                  // 0x24D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x24DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x24DD(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x24E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue;                    // 0x24EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x24ED(0x0003) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x24F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x24F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x24F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x24FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x5];                                       // 0x24FB(0x0005) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x2500(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AFjordhawk_AIController_BP_C*                K2Node_DynamicCast_AsFjordhawk_AIController_BP_C;         // 0x2508(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2510(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x2511(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x2518(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Fjordhawk_Character_BP.Fjordhawk_Character_BP_C");
		return ptr;
	}


	void UpdateLootTarget();
	void SetDestination(const struct FVector& NewDestination);
	void BPOnSetFlight(bool* bFly);
	bool PreventShowingDinoTooltip();
	bool BPPreventOrderAllowed(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted);
	void MulticastShieldBreakSound(bool Break);
	void BreakShield();
	void BuffClassIsStun(class UClass* BuffClass, bool* IsStun);
	bool BP_ForceAllowAddBuff(class UClass** BuffClass);
	void BPPostLoadedFromSaveGame();
	bool BP_PreventCarryingByCharacter(class APrimalCharacter** ByCarrier);
	bool CanEatCharacter(class APrimalCharacter* InputPin);
	void FinishEating();
	void OnPlayerDied(class APrimalCharacter* NewParam);
	void StopWaitingForPlayer();
	void GetApproachPoint(class AActor* Target, bool InAir, struct FVector* Point);
	void BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value);
	void ClientUpdate(float DeltaTime);
	void ServerUpdate(float DeltaTime);
	bool BPPreventStasis();
	void BPOnMassTeleportEvent(TEnumAsByte<EMassTeleportState>* EventState, class APrimalCharacter** TeleportInitiatedByChar);
	void RetrievePlayerInventory();
	void FinishedTame();
	void WildLookForCorpses();
	void ClientHideDino(bool Hide);
	void BPUnstasis();
	void CheckForLootDrop();
	void ReacquirePlayer(class AShooterCharacter* Player);
	bool BPIsBlockedByShield(bool* bBlockAllPointDamage, struct FHitResult* HitInfo, struct FVector* ShotDirection);
	void UpdateLoot(bool Loot, const class FString& PlayerId);
	void TogglePreyDetection();
	void PostLaunchUpdate();
	bool VerifyLaunchVectors(const struct FVector& Loc, const struct FVector& Dir);
	void BPPrepareForLaunchFromShoulder(struct FVector* viewLoc, struct FVector* viewDir);
	float BPGetTargetingDesirability(class AActor** Attacker);
	void CheckForPlayerDeath();
	void BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void UpdateForcedTickSetting();
	class AActor* GetEatTarget();
	void Net_Show_Bag(bool Show);
	void DinoShoulderMountedLaunch(struct FVector* launchDir, class AShooterCharacter** throwingCharacter);
	bool VerifyLootTarget(class APrimalCharacter* InputPin);
	bool BPShouldForceFlee();
	void PickUpLoot();
	void BPSetupTamed(bool* bWasJustTamed);
	void LookForLoot(float SearchRadius, bool LookForBetterLoot);
	void LootCache(class APrimalStructureItemContainer* StructureToLoot);
	void ReceiveDestroyed();
	void DropLoot();
	void BPDinoPostBeginPlay();
	void FindAimedTarget(const struct FVector& AimLoc, const struct FVector& AimDir, class AActor** HitActor);
	void OnLaunched(struct FVector* LaunchVelocity, bool* bXYOverride, bool* bZOverride);
	void BPOnClearMountedDino();
	void BPOnSetMountedDino();
	void OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec);
	void FindWanderAroundActor();
	void Eat__Corpse(class APrimalCharacter* DinoToEat);
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void RestoreShield();
	void OnRep_HasShield();
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void ReceiveTick(float* DeltaSeconds);
	void Disable_Landing();
	void AllowLanding();
	void BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void Rotate_Z_To_Point(const struct FVector& offsetFromCurrentLocation, float Time);
	void Rotate_Z_to_Target(float Time);
	void UserConstructionScript();
	void RotationToTarget__FinishedFunc();
	void RotationToTarget__UpdateFunc();
	void SlowlyRotateZTo(const struct FRotator& TargetRotation, float Time, const struct FRotator& initialRotation);
	void HideDino();
	void ShowDino();
	void ClientSetHidden(bool NewParam);
	void UpdateVisibilityAfterUnstasis();
	void VerifyEscape();
	void TryLanding();
	void ExecuteUbergraph_Fjordhawk_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
