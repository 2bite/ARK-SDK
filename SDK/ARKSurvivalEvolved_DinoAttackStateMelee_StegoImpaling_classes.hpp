#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_StegoImpaling_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMelee_StegoImpaling.DinoAttackStateMelee_StegoImpaling_C
// 0x0000 (0x0090 - 0x0090)
class UDinoAttackStateMelee_StegoImpaling_C : public UDinoAttackStateMelee_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMelee_StegoImpaling.DinoAttackStateMelee_StegoImpaling_C");
		return ptr;
	}


	void BPOnHitActor(struct FHitResult* HitResult);
	void ExecuteUbergraph_DinoAttackStateMelee_StegoImpaling(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
