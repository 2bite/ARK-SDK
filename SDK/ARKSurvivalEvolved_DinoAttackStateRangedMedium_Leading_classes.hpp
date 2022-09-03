#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateRangedMedium_Leading_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateRangedMedium_Leading.DinoAttackStateRangedMedium_Leading_C
// 0x0000 (0x00A0 - 0x00A0)
class UDinoAttackStateRangedMedium_Leading_C : public UPrimalAIStateDinoRangedState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateRangedMedium_Leading.DinoAttackStateRangedMedium_Leading_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateRangedMedium_Leading(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
