#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvAttackStateRangedPoison_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WyvAttackStateRangedPoison.WyvAttackStateRangedPoison_C
// 0x0000 (0x00A0 - 0x00A0)
class UWyvAttackStateRangedPoison_C : public UPrimalAIStateDinoRangedState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WyvAttackStateRangedPoison.WyvAttackStateRangedPoison_C");
		return ptr;
	}


	void ExecuteUbergraph_WyvAttackStateRangedPoison(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
