#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x01A1 (0x2561 - 0x23C0)
class AWyvern_Character_BP_Fire_Minion_C : public AWyvern_Character_BP_Fire_C
{
public:
	bool                                               IsTamed;                                                  // 0x23C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x23C1(0x0007) MISSED OFFSET
	class APrimalBuff*                                 LifeBuff;                                                 // 0x23C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 LifeHUDElement;                                           // 0x23D0(0x0150) (Edit, BlueprintVisible)
	float                                              LifeAmountPercentage;                                     // 0x2520(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeHitPerAttack;                                         // 0x2524(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	class AController*                                 RiderController;                                          // 0x2528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               LifeOver;                                                 // 0x2530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2531(0x0007) MISSED OFFSET
	class AShooterCharacter*                           Riderchar;                                                // 0x2538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              HitByForestKajiuDmgMultiplier;                            // 0x2540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2544(0x0004) MISSED OFFSET
	class AActor*                                      ForestKaijuChar;                                          // 0x2548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	double                                             CheckToSeeIfTooFar;                                       // 0x2550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TryingToClearRider;                                       // 0x2558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2559(0x0003) MISSED OFFSET
	float                                              CallFunc_ModifyCurrentStatusValue_ReturnValue;            // 0x255C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x2560(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C");
		return ptr;
	}


	bool BlueprintCanRiderAttack(int* AttackIndex);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	float BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	void BP_OnSetDeath();
	void BPTimerServer();
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
