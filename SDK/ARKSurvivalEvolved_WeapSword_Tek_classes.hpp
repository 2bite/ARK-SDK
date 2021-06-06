#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSword_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapSword_Tek.WeapSword_Tek_C
// 0x0072 (0x0E02 - 0x0D90)
class AWeapSword_Tek_C : public AWeapSword_C
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM1P;                                                     // 0x0DA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0DA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM3P;                                                     // 0x0DB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRepHasAmmo;                                              // 0x0DB8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0DB9(0x0003) MISSED OFFSET
	float                                              CharacterElementCostPerHit;                               // 0x0DBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GenericStructureSettingsElementCostPerHit;                // 0x0DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0DC4(0x0004) MISSED OFFSET
	TArray<float>                                      SpecificStructureSettingsElementCostPerHit;               // 0x0DC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SpecificStructureSettings;                                // 0x0DD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ExtraStructureDamageMultiplier;                           // 0x0DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoCostPerSwing;                                         // 0x0DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      CallFunc_GetWeaponMesh_ReturnValue;                       // 0x0DF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x0DF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0E00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyOwned_ReturnValue;                      // 0x0E01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSword_Tek.WeapSword_Tek_C");
		return ptr;
	}


	void AppliedDamageToTarget(class AActor* DamageTarget, float ElementCostMultiplier, int DamageIn, bool* bExtraDamage);
	int BPWeaponDealDamage(int* DamageAmount, class UClass** DamageType, float* Impulse, struct FHitResult* Impact, struct FVector* ShootDir);
	void BPStartEquippedNotify();
	void StartUnequipEvent();
	void ReceiveTick(float* DeltaSeconds);
	void BPHandleMeleeAttack();
	void BPAppliedPrimalItemToWeapon();
	void UserConstructionScript();
	void PlayAttackSound();
	void NetDoPlayMeleeAttackSound();
	void ExecuteUbergraph_WeapSword_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
