#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_Dragon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMelee_Dragon.DinoAttackStateMelee_Dragon_C
// 0x0000 (0x0090 - 0x0090)
class UDinoAttackStateMelee_Dragon_C : public UDinoAttackStateMelee_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMelee_Dragon.DinoAttackStateMelee_Dragon_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateMelee_Dragon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
