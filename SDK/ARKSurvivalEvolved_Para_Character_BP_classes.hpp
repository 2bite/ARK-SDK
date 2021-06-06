#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Para_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Para_Character_BP.Para_Character_BP_C
// 0x01F1 (0x2459 - 0x2268)
class APara_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    WarningParticles;                                         // 0x2268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Para_C*     DinoCharacterStatus_BP_Para_C1;                           // 0x2270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPara_WarningMode>                     WarningMode;                                              // 0x2278(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2279(0x0003) MISSED OFFSET
	float                                              EnemyScanRadius;                                          // 0x227C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiusMultiplierForPlayerAlerts;                          // 0x2280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AlertPulseCooldownSeconds;                                // 0x2284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AlertPulseStaminaCost;                                    // 0x2288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AlertIntervalSeconds;                                     // 0x228C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurretModeFoodConsumptionMultiplier;                      // 0x2290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WarningScanTickIntervalMin;                               // 0x2294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WarningScanTickIntervalMax;                               // 0x2298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x229C(0x0004) MISSED OFFSET
	class UClass*                                      AlertPulseEmitterClass;                                   // 0x22A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FriendlyPlayerAlertBuffClass;                             // 0x22A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AlertAnim;                                                // 0x22B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAlertActive;                                            // 0x22B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x22B9(0x0003) MISSED OFFSET
	float                                              FrightenRadius;                                           // 0x22BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FrightenCooldownBuffClass;                                // 0x22C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              FrightenExtraDinoTypes;                                   // 0x22C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      FrightenBuffToApply;                                      // 0x22D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrightenMassThresholdCarnivore;                           // 0x22E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrightenMassThresholdHerbivore;                           // 0x22E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FrightenAnim;                                             // 0x22E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FrightenFailedAnim;                                       // 0x22F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrightenAnimDuration;                                     // 0x22F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoFrightenInTurretMode;                                 // 0x22FC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x22FD(0x0003) MISSED OFFSET
	double                                             LastTurretModeToggleTime;                                 // 0x2300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APrimalCharacter*>                    NearbyEnemies;                                            // 0x2308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	double                                             LastAlertPulseServerTime;                                 // 0x2318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastAlertPulseClientTime;                                 // 0x2320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AlertPulseAnim;                                           // 0x2328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HighFoodConsumptionEnabled;                               // 0x2330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowFloatingHudWarning;                                   // 0x2331(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x2332(0x0006) MISSED OFFSET
	double                                             LastWarningScanTickTime;                                  // 0x2338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WarningScanTickInterval;                                  // 0x2340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x2344(0x0004) MISSED OFFSET
	TArray<class AShooterCharacter*>                   NearbyPlayers;                                            // 0x2348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               TurretModePaused;                                         // 0x2358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2359(0x0003) MISSED OFFSET
	struct FLinearColor                                WarningTextColor;                                         // 0x235C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_IsMontagePlaying_ReturnValue;                    // 0x236C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x236D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x236E(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x2370(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2374(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_WarningModeEnabled2;                   // 0x2378(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2379(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x237A(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x237C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMontagePlaying_ReturnValue2;                   // 0x2380(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_WarningModeEnabled;                    // 0x2381(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x2382(0x0006) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2388(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x2390(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x2394(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x2398(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0xC];                                       // 0x23A4(0x000C) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_Conv_VectorToTransform_ReturnValue;              // 0x23B0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x23E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x23E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_FinishSpawningActor_ReturnValue;                 // 0x23F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x23F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x23FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_ModifyCurrentStatusValue_ReturnValue;            // 0x2400(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanUseAlertPulse_Result;                         // 0x2404(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanUseAlertPulse_Result2;                        // 0x2405(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x2406(0x0002) MISSED OFFSET
	TArray<class APrimalCharacter*>                    CallFunc_Octree_Warning_Scan_FoundEnemies;                // 0x2408(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Octree_Warning_Scan_FoundSmallCreature;          // 0x2418(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x2419(0x0007) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_Octree_Warning_Scan_FoundPlayers;                // 0x2420(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2430(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x2431(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2434(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2438(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x2439(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_Array_Get_Item;                                  // 0x2440(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x2448(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x244C(0x0004) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_Array_Get_Item2;                                 // 0x2450(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x2458(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Para_Character_BP.Para_Character_BP_C");
		return ptr;
	}


	void CanUseAlertPulse(bool* Result);
	void ReceiveTick(float* DeltaSeconds);
	void GetNearbyEnemies(TArray<struct FVector>* Locations);
	void NotifyPlayerAboutAlert(class AShooterCharacter* Character);
	void SetHighFoodConsumption(bool Enabled);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	void ClassifyScanningTarget(class AActor* ScanTarget, TEnumAsByte<EPara_WarningMode> WarningMode, bool FleeingCountsAsHostile, bool* IsEnemy, bool* IsSmallCreature);
	void BP_OnSetDeath();
	void OnRep_IsAlertActive();
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void Is_Small_Creature(class APrimalCharacter* Character, bool* IsSmall);
	void Is_Frighten_On_Cooldown(bool* OnCooldown);
	void Find_Nearby_Small_Creatures(TArray<class APrimalDinoCharacter*>* Creatures);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void IsDinoHostile(class APrimalDinoCharacter* Dino, bool FleeingCountsAsHostile, bool* IsHostile);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void Octree_Warning_Scan(TEnumAsByte<EPara_WarningMode> Mode, bool IncludeFleeing, TArray<class APrimalCharacter*>* FoundEnemies, bool* FoundSmallCreature, TArray<class AShooterCharacter*>* FoundPlayers);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool SetTurretMode(bool* Enabled);
	void UserConstructionScript();
	void MulticastUpdateWarningMode(bool WarningModeEnabled);
	void AlertTick();
	void StartAlertTick();
	void StopAlertTick();
	void UpdateWarningMode(bool WarningModeEnabled);
	void ServerRequestAlertPulse();
	void DoAlertPulse();
	void ExecuteUbergraph_Para_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
