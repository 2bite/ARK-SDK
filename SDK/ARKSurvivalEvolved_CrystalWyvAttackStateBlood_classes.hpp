#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvAttackStateBlood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CrystalWyvAttackStateBlood.CrystalWyvAttackStateBlood_C
// 0x0000 (0x0090 - 0x0090)
class UCrystalWyvAttackStateBlood_C : public UPrimalAIStateDinoMeleeState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvAttackStateBlood.CrystalWyvAttackStateBlood_C");
		return ptr;
	}


	void ExecuteUbergraph_CrystalWyvAttackStateBlood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
