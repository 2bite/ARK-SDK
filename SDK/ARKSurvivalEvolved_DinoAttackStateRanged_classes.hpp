#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateRanged_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateRanged.DinoAttackStateRanged_C
// 0x0000 (0x00A0 - 0x00A0)
class UDinoAttackStateRanged_C : public UPrimalAIStateDinoRangedState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateRanged.DinoAttackStateRanged_C");
		return ptr;
	}


	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void ExecuteUbergraph_DinoAttackStateRanged(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
