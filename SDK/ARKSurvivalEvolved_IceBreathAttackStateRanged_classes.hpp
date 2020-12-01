#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceBreathAttackStateRanged_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IceBreathAttackStateRanged.IceBreathAttackStateRanged_C
// 0x0000 (0x00A0 - 0x00A0)
class UIceBreathAttackStateRanged_C : public UPrimalAIStateBPBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IceBreathAttackStateRanged.IceBreathAttackStateRanged_C");
		return ptr;
	}


	bool BPShouldEndAttack();
	void OnEndEvent();
	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void STATIC_OnTickEvent(float* DeltaSeconds);
	void OnBeginEvent(class UPrimalAIState** InParentState);
	void ExecuteUbergraph_IceBreathAttackStateRanged(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
