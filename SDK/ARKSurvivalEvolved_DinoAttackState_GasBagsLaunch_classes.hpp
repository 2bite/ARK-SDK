#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_GasBagsLaunch_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C
// 0x000C (0x00AC - 0x00A0)
class UDinoAttackState_GasBagsLaunch_C : public UPrimalAIStateBPBase
{
public:
	struct FVector                                     AttackDirection;                                          // 0x00A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C");
		return ptr;
	}


	bool ShouldSkipRangeCheckEvent();
	void OnBeginEvent(class UPrimalAIState** InParentState);
	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	bool OnCanUseStateEvent();
	void GetInflation(float* Value, float* Percent);
	void ExecuteUbergraph_DinoAttackState_GasBagsLaunch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
