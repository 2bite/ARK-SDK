#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Scout_Dash_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_Scout_Dash.DinoAttackState_Scout_Dash_C
// 0x0000 (0x00A0 - 0x00A0)
class UDinoAttackState_Scout_Dash_C : public UPrimalAIStateBPBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_Scout_Dash.DinoAttackState_Scout_Dash_C");
		return ptr;
	}


	bool BPShouldEndAttack();
	void OnBeginEvent(class UPrimalAIState** InParentState);
	void IsAIControlled(bool* NewParam);
	void ExecuteUbergraph_DinoAttackState_Scout_Dash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
