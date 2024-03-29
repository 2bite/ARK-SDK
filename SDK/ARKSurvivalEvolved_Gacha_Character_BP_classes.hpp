#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gacha_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gacha_Character_BP.Gacha_Character_BP_C
// 0x018C (0x2414 - 0x2288)
class AGacha_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    EmoteFX;                                                  // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    CrystalFXC;                                               // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    CrystalFXB;                                               // 0x2298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    CrystalFXA;                                               // 0x22A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        CrystalMeshC;                                             // 0x22A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        CrystalMeshB;                                             // 0x22B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoInventory_GachaDigestion_C*             Digestion_Inventory;                                      // 0x22B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        CrystalMeshA;                                             // 0x22C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoTamedInventoryComponent_Gacha_C*        BaseInventory;                                            // 0x22C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Gacha_C*    DinoCharacterStatus_BP_Gacha;                             // 0x22D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiusToReachForFood;                                     // 0x22D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SearchOffset;                                             // 0x22DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEating;                                                 // 0x22E0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x22E1(0x0003) MISSED OFFSET
	float                                              TamingSearchInterval;                                     // 0x22E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamingSearchTimer;                                        // 0x22E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TamingConsumeAmount;                                      // 0x22EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AfterMealSearchInterval;                                  // 0x22F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildDigestionInterval;                                    // 0x22F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DigestionTimer;                                           // 0x22F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamedDigestionInterval;                                   // 0x22FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               CrystalSockets;                                           // 0x2300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	bool                                               AtePremiumFood;                                           // 0x2310(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2311(0x0007) MISSED OFFSET
	TArray<float>                                      DigestionPool;                                            // 0x2318(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	int                                                CurrentPool;                                              // 0x2328(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x232C(0x0004) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                Crystals;                                                 // 0x2330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DigestionPoolSize;                                        // 0x2340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildCrystalGrowthMin;                                     // 0x2344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DigestConsumeAmount;                                      // 0x2348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SearchForDropRadius;                                      // 0x234C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildCrystalGrowthMax;                                     // 0x2350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PremiumDigestionSpeed;                                    // 0x2354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            CrystalEffects;                                           // 0x2358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGacha_ResourceStruct>               ResourceProduction;                                       // 0x2368(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	float                                              EmotionInterval;                                          // 0x2378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EmotionLevel;                                             // 0x237C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              OvercrowdingRange;                                        // 0x2380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2384(0x0004) MISSED OFFSET
	class AActor*                                      WanderTarget;                                             // 0x2388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              AccruedDamage;                                            // 0x2390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              DamageEmotionScalar;                                      // 0x2394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageRecoveryRate;                                       // 0x2398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ProductionMode;                                           // 0x239C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TArray<struct FGacha_ResourceStruct>               Resources_Common;                                         // 0x23A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGacha_ResourceStruct>               Resources_Uncommon;                                       // 0x23B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGacha_ResourceStruct>               Resources_Rare;                                           // 0x23C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGacha_ResourceStruct>               Resources_VeryRare;                                       // 0x23D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MinChanceOfItem;                                          // 0x23E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxChanceOfItem;                                          // 0x23E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDroppedItemQuality;                                    // 0x23E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugPrint;                                               // 0x23EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x23ED(0x0003) MISSED OFFSET
	float                                              MinChanceOfItemWild;                                      // 0x23F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxChanceOfItemWild;                                      // 0x23F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x23F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x23F9(0x0003) MISSED OFFSET
	float                                              CallFunc_Array_Get_Item;                                  // 0x23FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x2400(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TamedDigestion_AteSomething;                     // 0x2401(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x2402(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2404(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x2408(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x240C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x240D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x240E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x240F(0x0001) MISSED OFFSET
	float                                              CallFunc_Array_Set_Item_RefProperty;                      // 0x2410(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gacha_Character_BP.Gacha_Character_BP_C");
		return ptr;
	}


	float CalculateItemChanceWild(float CrystalQuality);
	float CalculateItemChance(float CrystalQuality);
	bool HasEnemyTarget();
	bool HasFriendlyTarget();
	struct FVector STATIC_GetCrystalDropTransform(struct FRotator* Rotation);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	struct FRotator BPModifyAimOffsetNoTarget(struct FRotator* Aim);
	void OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void InitializeProduction();
	void InitializeCrystals();
	void FindWanderTarget();
	void STATIC_GetDigestionFrequencyMultiplier(float* mult);
	void STATIC_GetCrystalQualityMultiplier(float* mult);
	void STATIC_Get_Digestion_Amount_Multiplier(float* Multiplier);
	struct FVector BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation);
	float BPUnstasisConsumeFood(float* FoodNeeded);
	float GetEfficiencyFactor();
	void ResetDigestionTimer();
	void BabyDigestion(bool* AteSomething);
	bool Is_Unhappy();
	bool IsHappy();
	float CalculateCrystalQuality();
	void OnRep_EmotionLevel();
	void EmotionCheck();
	void ReceiveTick(float* DeltaSeconds);
	void Play_Start_Digest_Animation();
	void BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value);
	void STATIC_DistributeFood(float FoodEaten);
	void Look_for_Food_Drops(bool PlayerAttack, bool* FoundSomething);
	void STATIC_GetItemTamingValue(class UPrimalItem* Object, float* affinity, bool* IsWanted);
	void STATIC_GetItemFoodValue(class UPrimalItem* Object, bool* IsPremium, float* FoodValue);
	void Stop_Eating();
	void StartEating();
	void BPNotifyWildHarvestAttack(int* harvestIndex);
	void GetItemBaseValue(class UPrimalItem* PrimalItem, float BaseValue, float* Value);
	void ChooseLootSet();
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void WildDigestion();
	void Play_Digest_Animation();
	void SetCrystalScale();
	void DropCrystal();
	void FinishDigestion();
	void STATIC_TamedDigestion(bool* AteSomething);
	void Play_Release_Animation();
	void DigestionTick(float DeltaSeconds);
	void TamingTick(float DeltaSeconds);
	void STATIC_LookForTamingDrops(bool* FoundSomething);
	void GiveAffinity(float affinityToGive, class APrimalCharacter** tamer, bool* wasTamed);
	void WantsResource(class UPrimalItem** Item, bool* IsWanted, float* affinity);
	void BPDoHarvestAttack(int* harvestIndex);
	float BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected);
	float BPModifyHarvestDamage(class UPrimalHarvestingComponent** harvestComponent, float* inDamage);
	void UserConstructionScript();
	void AnimNotify_DoneEating();
	void AnimNotify_DropCrystal();
	void BPDinoPostBeginPlay();
	void AnimNotify_CheckForCrystal();
	void CleanUpEating();
	void ExecuteUbergraph_Gacha_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
