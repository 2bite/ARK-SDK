#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0178 (0x0F00 - 0x0D88)
class AWeapSword_Tek_C : public AWeapSword_C
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM1P;                                                     // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0DA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM3P;                                                     // 0x0DA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRepHasAmmo;                                              // 0x0DB0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0DB1(0x0003) MISSED OFFSET
	float                                              CharacterElementCostPerHit;                               // 0x0DB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GenericStructureSettingsElementCostPerHit;                // 0x0DB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0DBC(0x0004) MISSED OFFSET
	TArray<float>                                      SpecificStructureSettingsElementCostPerHit;               // 0x0DC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SpecificStructureSettings;                                // 0x0DD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ExtraStructureDamageMultiplier;                           // 0x0DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoCostPerSwing;                                         // 0x0DE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 WeaponStaticMesh;                                         // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WeaponParticleSystem;                                     // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0DF8(0x0008) MISSED OFFSET
	struct UObject_FTransform                          _3PMeshTransformOverride;                                 // 0x0E00(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct UObject_FTransform                          _1PMeshTransformOverride;                                 // 0x0E30(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               HideWeapon;                                               // 0x0E60(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0E61(0x000F) MISSED OFFSET
	struct UObject_FTransform                          FPVWeaponParticleSystemTransformOverride;                 // 0x0E70(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct UObject_FTransform                          TPVWeaponParticleSystemTransformOverride;                 // 0x0EA0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseColorTypeParamForParticleSystem;                      // 0x0ED0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0ED1(0x0007) MISSED OFFSET
	class USoundBase*                                  OverrideLoopingIdleAudio;                                 // 0x0ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  AttackSound;                                              // 0x0EE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0EE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyOwned_ReturnValue;                      // 0x0EE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0EEA(0x0006) MISSED OFFSET
	class USkeletalMeshComponent*                      CallFunc_GetWeaponMesh_ReturnValue;                       // 0x0EF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x0EF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSword_Tek.WeapSword_Tek_C");
		return ptr;
	}


	void OnRep_HideWeapon();
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
