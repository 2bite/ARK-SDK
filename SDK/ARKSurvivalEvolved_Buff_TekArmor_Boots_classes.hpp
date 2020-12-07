#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Boots_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekArmor_Boots.Buff_TekArmor_Boots_C
// 0x00E6 (0x0BE0 - 0x0AFA)
class ABuff_TekArmor_Boots_C : public ABuff_TekArmor_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0AFA(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleSystemLeft;                                       // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ElementCost_bootSlam;                                     // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B0C(0x0004) MISSED OFFSET
	class UParticleSystem*                             DamageAbsorbedParticle;                                   // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DamageAbsorbedSound;                                      // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimesTotalHealthIsBlockable;                              // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxAmmo;                                                  // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimalItemArmor_TekBoots_C*                 Ref_TekBoots;                                             // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElementDamageAbsorptionScale;                             // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	class UAnimMontage*                                Ref_LandingAnim_Male;                                     // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_LandingAnim_Female;                                   // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewWalkableFoorZ;                                         // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultWalkableFloorZ;                                    // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewWalkableZIsActive;                                     // 0x0B50(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0B51(0x0003) MISSED OFFSET
	float                                              Accumulation;                                             // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccumulationMultiplier;                                   // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsParticleActive;                                         // 0x0B5C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0B5D(0x0003) MISSED OFFSET
	class USoundCue*                                   ActivatedFootstepSoundCue;                                // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinInsulationTime;                                        // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxInsulationTime;                                        // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToWaitToCheck;                                        // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0B74(0x0004) MISSED OFFSET
	double                                             TimeOfLastInsulationCheck;                                // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              BuffsToLookFor;                                           // 0x0B80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0B90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x0B9C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0BA8(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x0BB0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor_Boots.Buff_TekArmor_Boots_C");
		return ptr;
	}


	void OnRep_IsParticleActive();
	void IsOnSteepSlope(bool* ret, struct FVector* surfaceNormal);
	void OnRep_NewWalkableZIsActive();
	void BuffTickServer(float* DeltaTime);
	void BPDeactivated(class AActor** ForInstigator);
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void AdjustFallDamageAndElement(float fallDamage_In, float* fallDamage_Out);
	void CanUseTekAbility(bool* bNotifyIfOutOfElement, bool* bResult);
	void SetCastedArmorPieceRef();
	void UserConstructionScript();
	void PlayDamageAbsorbFX();
	void ExecuteUbergraph_Buff_TekArmor_Boots(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
