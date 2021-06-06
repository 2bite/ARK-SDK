#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_CherufeChargeHeat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C
// 0x0000 (0x00A0 - 0x00A0)
class UDinoAttackState_CherufeChargeHeat_C : public UPrimalAIStateBPBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C");
		return ptr;
	}


	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	bool ShouldSkipRangeCheckEvent();
	float BPOverrideAttackWeight(float* inputWeight, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void BPOnClearAttackState();
	void EndAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role);
	void BPOnAttackEnd(int* AttackIndex);
	void BPOnAttackStart(int* AttackIndex);
	void ExecuteUbergraph_DinoAttackState_CherufeChargeHeat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
