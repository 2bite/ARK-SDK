#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateSpiderWeb_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateSpiderWeb.DinoAttackStateSpiderWeb_C
// 0x0000 (0x00D0 - 0x00D0)
class UDinoAttackStateSpiderWeb_C : public UPrimalAIStateDinoSpiderRangedWebState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateSpiderWeb.DinoAttackStateSpiderWeb_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateSpiderWeb(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
