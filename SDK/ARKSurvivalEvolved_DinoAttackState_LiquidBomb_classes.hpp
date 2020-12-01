#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_LiquidBomb_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_LiquidBomb.DinoAttackState_LiquidBomb_C
// 0x0000 (0x00A0 - 0x00A0)
class UDinoAttackState_LiquidBomb_C : public UPrimalAIStateBPBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_LiquidBomb.DinoAttackState_LiquidBomb_C");
		return ptr;
	}


	void BPOnAttackEnd(int* AttackIndex);
	void BPOnAttackStart(int* AttackIndex);
	void ExecuteUbergraph_DinoAttackState_LiquidBomb(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
