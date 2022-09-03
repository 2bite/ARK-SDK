#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0039 (0x09B1 - 0x0978)
class ABuff_SpindlesMinigunHit_C : public APrimalBuff
{
public:
	float                                              StaminaMax;                                               // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaDrainPerStackBase;                                 // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCurrent;                                           // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaRegenPerSecond;                                    // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LandedStaminaRegenMultiplier;                             // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RestoreFlightAfterSeconds;                                // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             TimeLastAddStackSeconds;                                  // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaRegenDelayOnDamagedSeconds;                        // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InitialPreventHurtAnim;                                   // 0x099C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x099D(0x0003) MISSED OFFSET
	class UClass*                                      MinigunDamageType;                                        // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastDamageTime;                                           // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurrentPreventHurtAnim;                                   // 0x09B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C");
		return ptr;
	}


	class FString STATIC_BPGetDebugInfoString();
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
