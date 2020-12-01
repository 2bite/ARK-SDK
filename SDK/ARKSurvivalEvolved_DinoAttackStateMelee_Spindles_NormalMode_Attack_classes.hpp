#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_Spindles_NormalMode_Attack_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMelee_Spindles_NormalMode_Attack.DinoAttackStateMelee_Spindles_NormalMode_Attack_C
// 0x0000 (0x0090 - 0x0090)
class UDinoAttackStateMelee_Spindles_NormalMode_Attack_C : public UDinoAttackStateMelee_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMelee_Spindles_NormalMode_Attack.DinoAttackStateMelee_Spindles_NormalMode_Attack_C");
		return ptr;
	}


	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Attack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
