#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateRamming_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateRamming.DinoAttackStateRamming_C
// 0x000D (0x0065 - 0x0058)
class UDinoAttackStateRamming_C : public UPrimalAIState
{
public:
	float                                              BuildUpTime;                                              // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TickedOnce;                                               // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              LoSRateLimiterSeconds;                                    // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CalledRamStartedOnce;                                     // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateRamming.DinoAttackStateRamming_C");
		return ptr;
	}


	void OnTickEvent(float* DeltaSeconds);
	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void OnEndEvent();
	void ExecuteUbergraph_DinoAttackStateRamming(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
