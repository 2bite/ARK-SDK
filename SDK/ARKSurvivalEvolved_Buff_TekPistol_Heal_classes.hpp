#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekPistol_Heal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekPistol_Heal.Buff_TekPistol_Heal_C
// 0x002D (0x098D - 0x0960)
class ABuff_TekPistol_Heal_C : public ABuff_Base_C
{
public:
	TArray<class AActor*>                              Damagers;                                                 // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<double>                                     LastDamageTime;                                           // 0x0970(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              HealerTimeOut;                                            // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HalfPowerCount;                                           // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastDamageMultiplier;                                     // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugHealModifier;                                        // 0x098C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekPistol_Heal.Buff_TekPistol_Heal_C");
		return ptr;
	}


	void STATIC_BuffPostAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void AddHealer(class AActor* Damager);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekPistol_Heal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
