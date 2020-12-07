#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_GasBagsExhaleAttack_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C
// 0x000C (0x00AC - 0x00A0)
class UDinoAttackState_GasBagsExhaleAttack_C : public UPrimalAIStateBPBase
{
public:
	struct FVector                                     AttackDirection;                                          // 0x00A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C");
		return ptr;
	}


	void BPOnAttackStart(int* AttackIndex);
	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	bool OnCanUseStateEvent();
	void GetInflationAndStaminaCost(float* CurrentInflationPercent, float* CurrentStamina, float* CurrentStaminaCost);
	void ExecuteUbergraph_DinoAttackState_GasBagsExhaleAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
