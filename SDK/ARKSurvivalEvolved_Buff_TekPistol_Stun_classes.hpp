#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekPistol_Stun_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekPistol_Stun.Buff_TekPistol_Stun_C
// 0x005C (0x0B14 - 0x0AB8)
class ABuff_TekPistol_Stun_C : public ABuff_Base_PointOfInterest_C
{
public:
	TArray<class AActor*>                              Damagers;                                                 // 0x0AB8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                MaxDamagers;                                              // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StunWeight;                                               // 0x0ACC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StunWeightPerHit;                                         // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StunWeightDecay;                                          // 0x0AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredStunWeight;                                       // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0ADC(0x0004) MISSED OFFSET
	double                                             LastStunTime;                                             // 0x0AE0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeStunDecay;                                     // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET
	double                                             StartTime;                                                // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerStunWeight;                                         // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StunWeightLimit;                                          // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      StunnedBuffToApply;                                       // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              POIActorBoundsMult;                                       // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              POIOffsetZClose;                                          // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              POIOffsetZFar;                                            // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekPistol_Stun.Buff_TekPistol_Stun_C");
		return ptr;
	}


	void BuffTickClient(float* DeltaTime);
	void CanApplyToTarget(class APrimalCharacter* Target, bool* Allowed);
	void STATIC_BPSetupForInstigator(class AActor** ForInstigator);
	bool CanBeViewed(class AActor** ByActor);
	class UClass* GetPointCustomData();
	struct FPointOfInterestData STATIC_GetPointOfInterestData();
	void BuffTickServer(float* DeltaTime);
	void ApplyStunWeight(class AActor* DamageCauser);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void BPReactivateWithDamageCauser(class AActor** ForInstigator, class AActor** ForDamageCauser);
	void BPActivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekPistol_Stun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
