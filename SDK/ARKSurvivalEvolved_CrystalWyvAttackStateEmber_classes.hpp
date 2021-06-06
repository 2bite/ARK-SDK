#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvAttackStateEmber_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CrystalWyvAttackStateEmber.CrystalWyvAttackStateEmber_C
// 0x0000 (0x0090 - 0x0090)
class UCrystalWyvAttackStateEmber_C : public UPrimalAIStateDinoMeleeState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvAttackStateEmber.CrystalWyvAttackStateEmber_C");
		return ptr;
	}


	void ExecuteUbergraph_CrystalWyvAttackStateEmber(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
