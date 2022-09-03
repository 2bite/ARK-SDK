#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChalicoThrowMudState_Friendly_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChalicoThrowMudState_Friendly.ChalicoThrowMudState_Friendly_C
// 0x0000 (0x00A0 - 0x00A0)
class UChalicoThrowMudState_Friendly_C : public UDinoAttackStateRanged_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChalicoThrowMudState_Friendly.ChalicoThrowMudState_Friendly_C");
		return ptr;
	}


	void STATIC_BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity);
	void ExecuteUbergraph_ChalicoThrowMudState_Friendly(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
