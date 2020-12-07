#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_MekPistolShoot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C
// 0x0000 (0x00A0 - 0x00A0)
class UDinoAttackState_MekPistolShoot_C : public UPrimalAIStateBPBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C");
		return ptr;
	}


	void STATIC_BPOnAttackTick(float* DeltaTime);
	void BPOnAttackStart(int* AttackIndex);
	void GetMuzzleInfo(struct FVector* Location, struct FVector* Direction);
	void ExecuteUbergraph_DinoAttackState_MekPistolShoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
