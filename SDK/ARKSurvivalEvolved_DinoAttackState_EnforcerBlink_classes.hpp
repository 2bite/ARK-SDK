#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_EnforcerBlink_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C
// 0x0008 (0x00A8 - 0x00A0)
class UDinoAttackState_EnforcerBlink_C : public UPrimalAIStateBPBase
{
public:
	double                                             StartTime;                                                // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C");
		return ptr;
	}


	void BPDoAttack();
	void OnEndEvent();
	void OnBeginEvent(class UPrimalAIState** InParentState);
	bool BPShouldEndAttack();
	void ExecuteUbergraph_DinoAttackState_EnforcerBlink(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
