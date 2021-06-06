#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateSpiderAcid_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateSpiderAcid.DinoAttackStateSpiderAcid_C
// 0x0000 (0x0070 - 0x0070)
class UDinoAttackStateSpiderAcid_C : public UPrimalAIStateDinoSpiderRangedAcidState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateSpiderAcid.DinoAttackStateSpiderAcid_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateSpiderAcid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
