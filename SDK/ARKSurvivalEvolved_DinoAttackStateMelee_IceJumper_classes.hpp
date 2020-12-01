#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_IceJumper_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMelee_IceJumper.DinoAttackStateMelee_IceJumper_C
// 0x0008 (0x0098 - 0x0090)
class UDinoAttackStateMelee_IceJumper_C : public UPrimalAIStateDinoMeleeState
{
public:
	double                                             LastOnMeleeHitTime;                                       // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMelee_IceJumper.DinoAttackStateMelee_IceJumper_C");
		return ptr;
	}


	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void ExecuteUbergraph_DinoAttackStateMelee_IceJumper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
