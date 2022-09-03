#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_Nocturnal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C
// 0x021D (0x24A5 - 0x2288)
class ADino_Character_BP_Nocturnal_C : public ADino_Character_BP_C
{
public:
	bool                                               bAllowSleepingOnDynamicActors;                            // 0x2288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsNaturallySleeping;                                     // 0x2289(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bIsDaytime;                                               // 0x228A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x228B(0x0005) MISSED OFFSET
	TArray<class UClass*>                              BuffsToAdd_Day;                                           // 0x2290(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              BuffsToAdd_Night;                                         // 0x22A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bShouldPlayNaturalSleepAnims;                             // 0x22B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventRiding;                                           // 0x22B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_NocturnalStateLock>                  NocturnalStateLock;                                       // 0x22B2(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x22B3(0x0001) MISSED OFFSET
	float                                              currentSleepDebt;                                         // 0x22B4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              sleepDebtMultiplier_Add;                                  // 0x22B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sleepDebtMultiplier_Reduce;                               // 0x22BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWakeUpWhenDamaged;                                       // 0x22C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AwakeOnTouched;                                           // 0x22C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreWakeOnTouchFromAllies;                              // 0x22C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ResetTorporOnWake;                                        // 0x22C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoTorporOutAtNightStart;                                // 0x22C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWasAlertedWhileSleeping;                                 // 0x22C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWakeUpWhenStructureBuiltNearby;                          // 0x22C6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x22C7(0x0001) MISSED OFFSET
	float                                              StructurePlacementDetectionRadius;                        // 0x22C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WakeUpDuration;                                           // 0x22CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             lastSleepEndTime;                                         // 0x22D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventSleepingWithValidTarget;                          // 0x22D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventSleepWhenFollowing;                               // 0x22D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x22DA(0x0006) MISSED OFFSET
	double                                             lastSleepStartTime;                                       // 0x22E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastValidTargetTime;                                      // 0x22E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                NaturalSleepingMontage;                                   // 0x22F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NaturalSleepAnimLoopSectionName;                          // 0x22F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                NaturalWakingMontage_Relaxed;                             // 0x2300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                NaturalWakingMontage_Alert;                               // 0x2308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallAsleepCooldownTime_Current;                           // 0x2310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallAsleepCooldownTime_Normal;                            // 0x2314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallAsleepCooldownTime_Alerted;                           // 0x2318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallAsleepCooldownTime_PostTarget;                        // 0x231C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallAsleepCooldownTime_PostRidden;                        // 0x2320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x2324(0x0004) MISSED OFFSET
	double                                             lastRiddenTime;                                           // 0x2328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              sleepDebtDeprivationLimit;                                // 0x2330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sleepDebt_MAX;                                            // 0x2334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_StartledAnim;                                         // 0x2338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_PoopAnim;                                             // 0x2340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SleepingBuff;                                             // 0x2348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_EatAnim;                                              // 0x2350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoBlueprintBase_RootBoneName_C*           Ref_AnimBP;                                               // 0x2358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalDinoAIController*                     Ref_DinoController;                                       // 0x2360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     Ref_NocturnalBuff;                                        // 0x2368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	double                                             lastTimerServerTickTime;                                  // 0x2370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NaturalSleepCheckDeltaTime;                               // 0x2378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x237C(0x0004) MISSED OFFSET
	class ADayCycleManager*                            Ref_DayCycleManager;                                      // 0x2380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              sleepingWaterSubmergedDepthThreshold;                     // 0x2388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForcePreventNocturnalLogic;                              // 0x238C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x238D(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_delay2;                                // 0x2390(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delay;                                 // 0x2394(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor;                    // 0x2398(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp;                     // 0x23A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_ComponentBoundEvent_NormalImpulse;                 // 0x23A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x23B4(0x0004) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_Hit;                           // 0x23B8(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x2440(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2448(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x2449(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x244A(0x0006) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2450(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2458(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2459(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsConscious_ReturnValue;                       // 0x245A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x245B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x245C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x245D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x245E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x245F(0x0001) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x2460(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue3;               // 0x2468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetCharacterController_ReturnValue;              // 0x2470(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x2478(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2480(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x2481(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x2482(0x0006) MISSED OFFSET
	class AGameState*                                  CallFunc_GetGameState_ReturnValue;                        // 0x2488(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue2;                          // 0x2490(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x2491(0x0007) MISSED OFFSET
	class AShooterGameState*                           K2Node_DynamicCast_AsShooterGameState;                    // 0x2498(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x24A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x24A1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x24A2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AllowNocturnalLogic_result;                      // 0x24A3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AllowNocturnalLogic_result2;                     // 0x24A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C");
		return ptr;
	}


	void BPBecomeAdult();
	void BPBecomeBaby();
	void AllowNocturnalLogic(bool* Result);
	void IsDinoInShallowWater(bool* shallowWaters);
	void Is_Target_Attacking_Ally(bool* Result);
	void IsPossibleToSleep(bool* Result);
	bool BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance);
	void SetupRefs();
	void IsDaytime(bool* Result);
	void Check_Time_Of_Day(bool ForceUpdate);
	void IsTamedFollowing(bool* Result);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void BPTimerServer();
	void PrintStringWithAuth(const class FString& String, const struct FLinearColor& Color);
	void BPUnstasis();
	void OnRep_bIsDaytime();
	void InitNocturnalDino();
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void BPNotifyStructurePlacedNearby(class APrimalStructure** NewStructure);
	void SetTorpidity(float newTorpidity);
	void OnRep_bIsNaturallySleeping();
	void PlayNaturalSleepingAnims(bool isFallingAsleep, bool isAlerted);
	void GetIsFullyAwake(bool* Result);
	void DinoNeedsToSleep(bool* Result);
	void HasSleepDebt(bool* Result);
	void HasValidTarget(bool* Result);
	void BPCharacterSleeped();
	void BPCharacterUnsleeped();
	void GetSleepDebtToDeprivedRatio(float* Ratio);
	void UpdateSleepDebt(float DeltaTime);
	void IsDinoGrounded(bool* Result);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void UpdateSleepRelatedActions();
	void CanWake(bool* Result);
	void CanSleep(bool* Result);
	void Net_Set_Natural_Sleep_State(bool isAsleep);
	void CheckForWake();
	void CheckForSleep();
	void OnFallAsleep();
	void OnWakeUp();
	void WakeUp(bool forceSuccess);
	void FallAsleep(bool forceSuccess, bool ignoreIsPossible);
	void UserConstructionScript();
	void OnIsDaytime();
	void OnIsNighttime();
	void EnableMovementAfterDelay(float Delay);
	void DisableMovementAfterDelay(float Delay);
	void ReceiveBeginPlay();
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit);
	void ReInitializeNocturnalDino();
	void ExecuteUbergraph_Dino_Character_BP_Nocturnal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
