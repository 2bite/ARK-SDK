#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_GachaMelee_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_GachaMelee.DinoAttackState_GachaMelee_C
// 0x0000 (0x0090 - 0x0090)
class UDinoAttackState_GachaMelee_C : public UDinoAttackStateMelee_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_GachaMelee.DinoAttackState_GachaMelee_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackState_GachaMelee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
