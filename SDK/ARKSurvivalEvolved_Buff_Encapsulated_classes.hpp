#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Encapsulated_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Encapsulated.Buff_Encapsulated_C
// 0x008C (0x097C - 0x08F0)
class ABuff_Encapsulated_C : public ABuff_FrozenEffect_Base_C
{
public:
	float                                              IceShieldHealthPctOfCharBaseHealth;                       // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IceShieldMinHealth;                                       // 0x08F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PctOfDamageToForwardToOwnerOwl;                           // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AddPercentOfBaseHealthPerSecond;                          // 0x08FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OwlStaminaDrainPerSecond;                                 // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EncapsulatedFallDamageMultiplier;                         // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EncapsulatedGravityScale;                                 // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EncapsulatedDamageMultiplier;                             // 0x090C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaterialLength;                                           // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartedFlying;                                            // 0x0914(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartedInAir;                                             // 0x0915(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0916(0x0002) MISSED OFFSET
	double                                             FallStartTime;                                            // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCollisionResponseSet                       OrigCollisionResponseSet;                                 // 0x0920(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              IceShieldCurrentHealth;                                   // 0x0940(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IceShieldMaxHealth;                                       // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrigGravityScale;                                         // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrigFallDamageMultiplier;                                 // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      OrigPoopItemClass;                                        // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VelocityAtBuffStart;                                      // 0x0958(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeactivatingSoon;                                         // 0x0964(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreventCameraControlWhileFrozen;                          // 0x0965(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0966(0x0002) MISSED OFFSET
	float                                              PrevFoodConsumptionMultiplier;                            // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPVEEnemyPlayer;                                        // 0x096C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x096D(0x0003) MISSED OFFSET
	struct FVector                                     StartLocation;                                            // 0x0970(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Encapsulated.Buff_Encapsulated_C");
		return ptr;
	}


	class UClass* BPOverrideBuffToGiveOnDeactivation();
	bool PreventJump();
	bool CheckPVEEnemy();
	void BuffTickServer(float* DeltaTime);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	struct FVector BPAdjustImpulseFromDamage(struct FVector* DesiredImpulse, float* DamageTaken, struct FDamageEvent* TheDamageEvent, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void IsOwnerOwlRider(bool* IsOwlRider);
	void DeactivateSoon(float DelayTime);
	void BPActivated(class AActor** ForInstigator);
	void OnRep_IceShieldCurrentHealth();
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void ApplyDamageToIceShield(float Damage, bool IsRemoteDamage);
	bool Is_Riding_or_Carried_Player(class AActor* Actor);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void FreezeCharacter(class APrimalCharacter* Character, bool Freeze);
	void STATIC_BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Encapsulated(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
