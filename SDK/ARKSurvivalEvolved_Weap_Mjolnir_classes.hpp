#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Weap_Mjolnir_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weap_Mjolnir.Weap_Mjolnir_C
// 0x0024 (0x0F24 - 0x0F00)
class AWeap_Mjolnir_C : public AWeapSword_Tek_C
{
public:
	bool                                               bIsCharged;                                               // 0x0F00(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0F01(0x0007) MISSED OFFSET
	double                                             LastTimeIdleSound;                                        // 0x0F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleMinDelay;                                             // 0x0F10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleMaxDelay;                                             // 0x0F14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  IdleSound;                                                // 0x0F18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0F20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weap_Mjolnir.Weap_Mjolnir_C");
		return ptr;
	}


	bool BPCanEquip(class AShooterCharacter** ByCharacter);
	void PlayRandomIdleSound();
	void CheckPlayIdleAudio();
	void OnRep_bIsCharged();
	void ReceiveTick(float* DeltaSeconds);
	void BPSpawnMeleeEffects(struct FVector* Impact, struct FVector* ShootDir);
	bool BPCanMeleeAttack();
	void UserConstructionScript();
	void PlayRandomIdleAudio();
	void ExecuteUbergraph_Weap_Mjolnir(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
