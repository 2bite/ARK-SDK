#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvern_Character_BP_Ember_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C
// 0x0018 (0x2488 - 0x2470)
class ACrystalWyvern_Character_BP_Ember_C : public ACrystalWyvern_Character_BP_Base_C
{
public:
	float                                              EmberIncreasePerAttack;                                   // 0x2470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentEmberMultiplier;                                   // 0x2474(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxEmberMultiplier;                                       // 0x2478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EmberLossPerSec;                                          // 0x247C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastEmberAttackTime;                                      // 0x2480(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C");
		return ptr;
	}


	float BPGetHUDOverrideBuffProgressBarPercent();
	void ExtraFlameFXSetup(class UParticleSystemComponent** ParticleSystem);
	void BPDoAttack(int* AttackIndex);
	void UserConstructionScript();
	void ExecuteUbergraph_CrystalWyvern_Character_BP_Ember(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
