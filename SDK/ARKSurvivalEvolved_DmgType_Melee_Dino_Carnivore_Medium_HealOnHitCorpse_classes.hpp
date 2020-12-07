#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_Dino_Carnivore_Medium_HealOnHitCorpse_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_Dino_Carnivore_Medium_HealOnHitCorpse.DmgType_Melee_Dino_Carnivore_Medium_HealOnHitCorpse_C
// 0x000B (0x013C - 0x0131)
class UDmgType_Melee_Dino_Carnivore_Medium_HealOnHitCorpse_C : public UDmgType_Melee_Dino_Carnivore_Medium_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              PercentHealthToHealSelf;                                  // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PercentStamToRecover;                                     // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_Dino_Carnivore_Medium_HealOnHitCorpse.DmgType_Melee_Dino_Carnivore_Medium_HealOnHitCorpse_C");
		return ptr;
	}


	float BPAdjustHarvestingDamage(class AActor** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
