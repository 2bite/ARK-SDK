#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DKaijuFlock_AttackAIState_BasicAttack_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C
// 0x0168 (0x0208 - 0x00A0)
class UDKaijuFlock_AttackAIState_BasicAttack_C : public UPrimalAIStateBPBase
{
public:
	float                                              CheckForAttackHitFrequency;                               // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	double                                             LastTime_CheckForAttackHitFrequency;                      // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndAttack;                                                // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HitSomeone;                                               // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET
	struct FDinoAttackInfo                             AttackInfo;                                               // 0x00B8(0x0130) (Edit, BlueprintVisible, DisableEditOnInstance)
	double                                             LastTimeHitSomeone;                                       // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopScanning;                                             // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x01F8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DKaijuFlock_AttackAIState_BasicAttack.DKaijuFlock_AttackAIState_BasicAttack_C");
		return ptr;
	}


	void OnBeginEvent(class UPrimalAIState** InParentState);
	void BPOnAttackStart(int* AttackIndex);
	bool BPShouldEndAttack();
	void STATIC_OnTickEvent(float* DeltaSeconds);
	void ExecuteUbergraph_DKaijuFlock_AttackAIState_BasicAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
