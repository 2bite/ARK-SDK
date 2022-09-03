#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChalicoThrowRockState_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChalicoThrowRockState.ChalicoThrowRockState_C
// 0x0000 (0x00A0 - 0x00A0)
class UChalicoThrowRockState_C : public UPrimalAIStateDinoRangedState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChalicoThrowRockState.ChalicoThrowRockState_C");
		return ptr;
	}


	void STATIC_BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity);
	void ExecuteUbergraph_ChalicoThrowRockState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
