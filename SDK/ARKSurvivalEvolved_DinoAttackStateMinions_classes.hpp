#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinions_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMinions.DinoAttackStateMinions_C
// 0x0000 (0x00D0 - 0x00D0)
class UDinoAttackStateMinions_C : public UPrimalAIStateDinoSpiderMinions
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMinions.DinoAttackStateMinions_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateMinions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
