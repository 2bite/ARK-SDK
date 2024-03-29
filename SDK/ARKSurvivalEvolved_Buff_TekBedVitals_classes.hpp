#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekBedVitals_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekBedVitals.Buff_TekBedVitals_C
// 0x005C (0x09D4 - 0x0978)
class ABuff_TekBedVitals_C : public ABuff_Base_C
{
public:
	float                                              MinXPPerSecond;                                           // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxXPPerSecond;                                           // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PercentageXPPerSecond;                                    // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0984(0x0004) MISSED OFFSET
	TArray<float>                                      MinStatPerSecond;                                         // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MaxStatPerSecond;                                         // 0x0998(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      PercentageStatPerSecond;                                  // 0x09A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastGiveStatTime;                                         // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TArray<class APrimalBuff*>                         CurBuffs;                                                 // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              AbsoluteMaxXP_PerTick;                                    // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekBedVitals.Buff_TekBedVitals_C");
		return ptr;
	}


	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	bool PreventActorTargeting(class AActor** ByActor);
	bool BPCanBeCarried(class APrimalCharacter** ByCarrier);
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void BuffTickServer(float* DeltaTime);
	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekBedVitals(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
