#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateRangedWide_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateRangedWide.DinoAttackStateRangedWide_C
// 0x0000 (0x00A0 - 0x00A0)
class UDinoAttackStateRangedWide_C : public UPrimalAIStateDinoRangedState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateRangedWide.DinoAttackStateRangedWide_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateRangedWide(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
