#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekPistol_Kill_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekPistol_Kill.Buff_TekPistol_Kill_C
// 0x0078 (0x0B50 - 0x0AD8)
class ABuff_TekPistol_Kill_C : public ABuff_Base_PointOfInterest_C
{
public:
	TArray<class AActor*>                              Damagers;                                                 // 0x0AD8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                MaxDamagers;                                              // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeWeight;                                             // 0x0AEC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeWeightPerHit;                                       // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeWeightDecay;                                        // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredChargeWeight;                                     // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AFC(0x0004) MISSED OFFSET
	double                                             LastChargeTime;                                           // 0x0B00(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeChargeDecay;                                   // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B0C(0x0004) MISSED OFFSET
	double                                             StartTime;                                                // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumDamageMultiplier;                                  // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumDamageMultiplier;                                  // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionalMultiplierAtMaxCharge;                          // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              POIActorBoundsMult;                                       // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              POIOffsetZClose;                                          // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              POIOffsetZFar;                                            // 0x0B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumImpactScale;                                       // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumImpactScale;                                       // 0x0B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionalScaleAtMaxCharge;                               // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0B3C(0x0004) MISSED OFFSET
	double                                             LastHurtAnimTime;                                         // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumTimeBetweenHurtAnims;                              // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BossDamageMultiplier;                                     // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekPistol_Kill.Buff_TekPistol_Kill_C");
		return ptr;
	}


	void Public_Calculate_Damage_Multiplier(float* mult);
	void CalculateImpactScale(float* ImpactScale);
	void CalculateDamageMultiplier(float* mult);
	float BPAdjustDamage_Ex(float* Damage, class AController** EventInstigator, class AActor** InDamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo, struct FVector* ImpulseDir);
	void CanApplyToTarget(class APrimalCharacter* Target, bool* Allowed);
	void STATIC_BPSetupForInstigator(class AActor** ForInstigator);
	bool CanBeViewed(class AActor** ByActor);
	class UClass* GetPointCustomData();
	struct FPointOfInterestData STATIC_GetPointOfInterestData();
	void BuffTickServer(float* DeltaTime);
	void ApplyChargeWeight(class AActor* DamageCauser);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void BPReactivateWithDamageCauser(class AActor** ForInstigator, class AActor** ForDamageCauser);
	void BuffTickClient(float* DeltaTime);
	void BPActivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekPistol_Kill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
