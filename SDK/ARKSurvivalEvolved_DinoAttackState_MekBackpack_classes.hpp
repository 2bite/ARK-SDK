#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_MekBackpack_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C
// 0x0000 (0x00A0 - 0x00A0)
class UDinoAttackState_MekBackpack_C : public UPrimalAIStateBPBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C");
		return ptr;
	}


	void BPOnAttackTick(float* DeltaTime);
	void BPOnAttackStart(int* AttackIndex);
	void GetMuzzleInfo(struct FVector* Location, struct FVector* Direction);
	void ExecuteUbergraph_DinoAttackState_MekBackpack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
