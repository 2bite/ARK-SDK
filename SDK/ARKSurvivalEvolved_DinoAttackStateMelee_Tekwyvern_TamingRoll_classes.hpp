#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_Tekwyvern_TamingRoll_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMelee_Tekwyvern_TamingRoll.DinoAttackStateMelee_Tekwyvern_TamingRoll_C
// 0x0000 (0x0090 - 0x0090)
class UDinoAttackStateMelee_Tekwyvern_TamingRoll_C : public UDinoAttackStateMelee_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMelee_Tekwyvern_TamingRoll.DinoAttackStateMelee_Tekwyvern_TamingRoll_C");
		return ptr;
	}


	void STATIC_BPOnHitActor(struct FHitResult* HitResult);
	void ExecuteUbergraph_DinoAttackStateMelee_Tekwyvern_TamingRoll(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
