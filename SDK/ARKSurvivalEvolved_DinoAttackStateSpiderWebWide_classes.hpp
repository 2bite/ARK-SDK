#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateSpiderWebWide_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateSpiderWebWide.DinoAttackStateSpiderWebWide_C
// 0x0000 (0x00D0 - 0x00D0)
class UDinoAttackStateSpiderWebWide_C : public UPrimalAIStateDinoSpiderRangedWebState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateSpiderWebWide.DinoAttackStateSpiderWebWide_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateSpiderWebWide(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
