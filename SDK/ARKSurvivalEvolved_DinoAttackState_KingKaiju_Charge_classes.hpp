#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_KingKaiju_Charge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_KingKaiju_Charge.DinoAttackState_KingKaiju_Charge_C
// 0x0020 (0x00C0 - 0x00A0)
class UDinoAttackState_KingKaiju_Charge_C : public UPrimalAIStateBPBase
{
public:
	bool                                               EndingCharge;                                             // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x00A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x00A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore_RefProperty;// 0x00B0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_KingKaiju_Charge.DinoAttackState_KingKaiju_Charge_C");
		return ptr;
	}


	void BPOnAttackEnd(int* AttackIndex);
	void BPOnAttackStart(int* AttackIndex);
	void OnTickEvent(float* DeltaSeconds);
	void FinishCharge();
	void FinishChargeHitKaiju();
	void ExecuteUbergraph_DinoAttackState_KingKaiju_Charge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
