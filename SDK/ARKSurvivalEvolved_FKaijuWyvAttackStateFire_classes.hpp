#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FKaijuWyvAttackStateFire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FKaijuWyvAttackStateFire.FKaijuWyvAttackStateFire_C
// 0x0000 (0x0090 - 0x0090)
class UFKaijuWyvAttackStateFire_C : public UPrimalAIStateDinoMeleeState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FKaijuWyvAttackStateFire.FKaijuWyvAttackStateFire_C");
		return ptr;
	}


	void BPOnHitActor(struct FHitResult* HitResult);
	void ExecuteUbergraph_FKaijuWyvAttackStateFire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
