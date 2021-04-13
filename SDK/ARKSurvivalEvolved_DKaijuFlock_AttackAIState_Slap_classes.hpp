#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DKaijuFlock_AttackAIState_Slap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C
// 0x0012 (0x00B2 - 0x00A0)
class UDKaijuFlock_AttackAIState_Slap_C : public UPrimalAIStateBPBase
{
public:
	float                                              CheckForAttackHitFrequency;                               // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	double                                             LastTime_CheckForAttackHitFrequency;                      // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndAttack;                                                // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HitSomeone;                                               // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C");
		return ptr;
	}


	void OnBeginEvent(class UPrimalAIState** InParentState);
	void BPOnAttackStart(int* AttackIndex);
	bool BPShouldEndAttack();
	void STATIC_OnTickEvent(float* DeltaSeconds);
	void ExecuteUbergraph_DKaijuFlock_AttackAIState_Slap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
