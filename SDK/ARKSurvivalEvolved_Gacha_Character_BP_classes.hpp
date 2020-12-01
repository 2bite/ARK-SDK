#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x018C (0x2294 - 0x2108)
class AGacha_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    EmoteFX;                                                  // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    CrystalFXC;                                               // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    CrystalFXB;                                               // 0x2118(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    CrystalFXA;                                               // 0x2120(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        CrystalMeshC;                                             // 0x2128(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        CrystalMeshB;                                             // 0x2130(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoInventory_GachaDigestion_C*             Digestion_Inventory;                                      // 0x2138(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        CrystalMeshA;                                             // 0x2140(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoTamedInventoryComponent_Gacha_C*        BaseInventory;                                            // 0x2148(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Gacha_C*    DinoCharacterStatus_BP_Gacha;                             // 0x2150(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiusToReachForFood;                                     // 0x2158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SearchOffset;                                             // 0x215C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEating;                                                 // 0x2160(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2161(0x0003) MISSED OFFSET
	float                                              TamingSearchInterval;                                     // 0x2164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamingSearchTimer;                                        // 0x2168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TamingConsumeAmount;                                      // 0x216C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AfterMealSearchInterval;                                  // 0x2170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildDigestionInterval;                                    // 0x2174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DigestionTimer;                                           // 0x2178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamedDigestionInterval;                                   // 0x217C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               CrystalSockets;                                           // 0x2180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	bool                                               AtePremiumFood;                                           // 0x2190(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2191(0x0007) MISSED OFFSET
	TArray<float>                                      DigestionPool;                                            // 0x2198(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	int                                                CurrentPool;                                              // 0x21A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x21AC(0x0004) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                Crystals;                                                 // 0x21B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DigestionPoolSize;                                        // 0x21C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildCrystalGrowthMin;                                     // 0x21C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DigestConsumeAmount;                                      // 0x21C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SearchForDropRadius;                                      // 0x21CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildCrystalGrowthMax;                                     // 0x21D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PremiumDigestionSpeed;                                    // 0x21D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            CrystalEffects;                                           // 0x21D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGacha_ResourceStruct>               ResourceProduction;                                       // 0x21E8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	float                                              EmotionInterval;                                          // 0x21F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EmotionLevel;                                             // 0x21FC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              OvercrowdingRange;                                        // 0x2200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2204(0x0004) MISSED OFFSET
	class AActor*                                      WanderTarget;                                             // 0x2208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              AccruedDamage;                                            // 0x2210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              DamageEmotionScalar;                                      // 0x2214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageRecoveryRate;                                       // 0x2218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ProductionMode;                                           // 0x221C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TArray<struct FGacha_ResourceStruct>               Resources_Common;                                         // 0x2220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGacha_ResourceStruct>               Resources_Uncommon;                                       // 0x2230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGacha_ResourceStruct>               Resources_Rare;                                           // 0x2240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGacha_ResourceStruct>               Resources_VeryRare;                                       // 0x2250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MinChanceOfItem;                                          // 0x2260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxChanceOfItem;                                          // 0x2264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDroppedItemQuality;                                    // 0x2268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugPrint;                                               // 0x226C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x226D(0x0003) MISSED OFFSET
	float                                              MinChanceOfItemWild;                                      // 0x2270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxChanceOfItemWild;                                      // 0x2274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x2278(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x2279(0x0003) MISSED OFFSET
	float                                              CallFunc_Array_Get_Item;                                  // 0x227C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x2280(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TamedDigestion_AteSomething;                     // 0x2281(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x2282(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2284(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x2288(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x228C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x228D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x228E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x228F(0x0001) MISSED OFFSET
	float                                              CallFunc_Array_Set_Item_RefProperty;                      // 0x2290(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gacha_Character_BP.Gacha_Character_BP_C");
		return ptr;
	}


	float CalculateItemChanceWild(float CrystalQuality);
	float CalculateItemChance(float CrystalQuality);
	bool HasEnemyTarget();
	bool HasFriendlyTarget();
	struct FVector GetCrystalDropTransform(struct FRotator* Rotation);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	struct FRotator BPModifyAimOffsetNoTarget(struct FRotator* Aim);
	void OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void STATIC_InitializeProduction();
	void InitializeCrystals();
	void FindWanderTarget();
	void GetDigestionFrequencyMultiplier(float* mult);
	void GetCrystalQualityMultiplier(float* mult);
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
	void DistributeFood(float FoodEaten);
	void Look_for_Food_Drops(bool PlayerAttack, bool* FoundSomething);
	void GetItemTamingValue(class UPrimalItem* Object, float* Affinity, bool* IsWanted);
	void GetItemFoodValue(class UPrimalItem* Object, bool* IsPremium, float* FoodValue);
	void Stop_Eating();
	void StartEating();
	void BPNotifyWildHarvestAttack(int* harvestIndex);
	void STATIC_GetItemBaseValue(class UPrimalItem* PrimalItem, float BaseValue, float* Value);
	void ChooseLootSet();
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	bool STATIC_BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void WildDigestion();
	void Play_Digest_Animation();
	void SetCrystalScale();
	void STATIC_DropCrystal();
	void FinishDigestion();
	void TamedDigestion(bool* AteSomething);
	void Play_Release_Animation();
	void DigestionTick(float DeltaSeconds);
	void TamingTick(float DeltaSeconds);
	void LookForTamingDrops(bool* FoundSomething);
	void GiveAffinity(float affinityToGive, class APrimalCharacter** Tamer, bool* WasTamed);
	void WantsResource(class UPrimalItem** Item, bool* IsWanted, float* Affinity);
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
