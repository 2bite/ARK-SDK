#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_Character_BP_Fire_Minion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C
// 0x0101 (0x22C1 - 0x21C0)
class AWyvern_Character_BP_Fire_Minion_C : public AWyvern_Character_BP_Fire_C
{
public:
	bool                                               IsTamed;                                                  // 0x21C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x21C1(0x0007) MISSED OFFSET
	class APrimalBuff*                                 LifeBuff;                                                 // 0x21C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 LifeHUDElement;                                           // 0x21D0(0x00B0) (Edit, BlueprintVisible)
	float                                              LifeAmountPercentage;                                     // 0x2280(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeHitPerAttack;                                         // 0x2284(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	class AController*                                 RiderController;                                          // 0x2288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               LifeOver;                                                 // 0x2290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2291(0x0007) MISSED OFFSET
	class AShooterCharacter*                           Riderchar;                                                // 0x2298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              HitByForestKajiuDmgMultiplier;                            // 0x22A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x22A4(0x0004) MISSED OFFSET
	class AActor*                                      ForestKaijuChar;                                          // 0x22A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	double                                             CheckToSeeIfTooFar;                                       // 0x22B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TryingToClearRider;                                       // 0x22B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x22B9(0x0003) MISSED OFFSET
	float                                              CallFunc_ModifyCurrentStatusValue_ReturnValue;            // 0x22BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x22C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C");
		return ptr;
	}


	bool BlueprintCanRiderAttack(int* AttackIndex);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	float BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	void BP_OnSetDeath();
	void STATIC_BPTimerServer();
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void BPOnStaminaDrained();
	void OnLanded(struct FHitResult* Hit);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void ReceiveTick(float* DeltaSeconds);
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void BPDoAttack(int* AttackIndex);
	int BPAdjustAttackIndex(int* AttackIndex);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void UserConstructionScript();
	void Multi_ClearRider();
	void DelayedClearRider();
	void ExecuteUbergraph_Wyvern_Character_BP_Fire_Minion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
