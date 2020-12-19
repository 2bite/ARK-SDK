#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceKaiju_AttackState_Leap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C
// 0x0000 (0x00A0 - 0x00A0)
class UIceKaiju_AttackState_Leap_C : public UPrimalAIStateBPBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C");
		return ptr;
	}


	void BPOnClearAttackState();
	void BPOnAttackEnd(int* AttackIndex);
	void BPOnAttackStart(int* AttackIndex);
	void ExecuteUbergraph_IceKaiju_AttackState_Leap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
