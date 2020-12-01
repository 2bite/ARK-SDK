#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SpindlesMinigunHit_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C
// 0x0039 (0x08D9 - 0x08A0)
class ABuff_SpindlesMinigunHit_C : public APrimalBuff
{
public:
	float                                              StaminaMax;                                               // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaDrainPerStackBase;                                 // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCurrent;                                           // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaRegenPerSecond;                                    // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LandedStaminaRegenMultiplier;                             // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RestoreFlightAfterSeconds;                                // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             TimeLastAddStackSeconds;                                  // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaRegenDelayOnDamagedSeconds;                        // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InitialPreventHurtAnim;                                   // 0x08C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08C5(0x0003) MISSED OFFSET
	class UClass*                                      MinigunDamageType;                                        // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastDamageTime;                                           // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurrentPreventHurtAnim;                                   // 0x08D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C");
		return ptr;
	}


	class FString BPGetDebugInfoString();
	void OnRep_CurrentPreventHurtAnim();
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	bool STATIC_BPPreventflight();
	void ReceiveBeginPlay();
	void BuffTickServer(float* DeltaTime);
	void BPResetBuffStart();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_SpindlesMinigunHit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
