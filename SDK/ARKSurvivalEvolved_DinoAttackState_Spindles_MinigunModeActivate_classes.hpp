#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Spindles_MinigunModeActivate_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_Spindles_MinigunModeActivate.DinoAttackState_Spindles_MinigunModeActivate_C
// 0x0000 (0x00B0 - 0x00B0)
class UDinoAttackState_Spindles_MinigunModeActivate_C : public UDinoAttackState_Spindles_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_Spindles_MinigunModeActivate.DinoAttackState_Spindles_MinigunModeActivate_C");
		return ptr;
	}


	void OnEndEvent();
	bool STATIC_BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void OnBeginEvent(class UPrimalAIState** InParentState);
	void ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeActivate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
