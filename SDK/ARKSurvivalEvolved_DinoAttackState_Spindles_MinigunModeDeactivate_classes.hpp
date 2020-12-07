#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Spindles_MinigunModeDeactivate_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C
// 0x0000 (0x00B0 - 0x00B0)
class UDinoAttackState_Spindles_MinigunModeDeactivate_C : public UDinoAttackState_Spindles_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C");
		return ptr;
	}


	void OnEndEvent();
	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void OnBeginEvent(class UPrimalAIState** InParentState);
	void ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeDeactivate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
