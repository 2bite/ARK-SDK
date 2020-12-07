#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_GasBagsInhale_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C
// 0x000C (0x00AC - 0x00A0)
class UDinoAttackState_GasBagsInhale_C : public UPrimalAIStateBPBase
{
public:
	struct FVector                                     AttackDirection;                                          // 0x00A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C");
		return ptr;
	}


	void OnBeginEvent(class UPrimalAIState** InParentState);
	void OnEndEvent();
	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	bool OnCanUseStateEvent();
	void GetInflation(float* Value, float* Percent);
	bool BPShouldEndAttack();
	void ExecuteUbergraph_DinoAttackState_GasBagsInhale(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
