#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsGorilla_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMinionsGorilla.DinoAttackStateMinionsGorilla_C
// 0x0000 (0x00D0 - 0x00D0)
class UDinoAttackStateMinionsGorilla_C : public UPrimalAIStateDinoSpiderMinions
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMinionsGorilla.DinoAttackStateMinionsGorilla_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateMinionsGorilla(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
