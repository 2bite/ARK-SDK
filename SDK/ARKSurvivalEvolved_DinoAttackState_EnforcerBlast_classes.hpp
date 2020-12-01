#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_EnforcerBlast_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_EnforcerBlast.DinoAttackState_EnforcerBlast_C
// 0x0010 (0x00B0 - 0x00A0)
class UDinoAttackState_EnforcerBlast_C : public UPrimalAIStateBPBase
{
public:
	class UClass*                                      BlastAttackDamageType;                                    // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlastAttackDamage;                                        // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlastAttackImpulse;                                       // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_EnforcerBlast.DinoAttackState_EnforcerBlast_C");
		return ptr;
	}


	void BPOnAttackStart(int* AttackIndex);
	void ExecuteUbergraph_DinoAttackState_EnforcerBlast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
