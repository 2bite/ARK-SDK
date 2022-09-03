#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvAttackStateWater_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CrystalWyvAttackStateWater.CrystalWyvAttackStateWater_C
// 0x0000 (0x0090 - 0x0090)
class UCrystalWyvAttackStateWater_C : public UPrimalAIStateDinoMeleeState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvAttackStateWater.CrystalWyvAttackStateWater_C");
		return ptr;
	}


	void ExecuteUbergraph_CrystalWyvAttackStateWater(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
