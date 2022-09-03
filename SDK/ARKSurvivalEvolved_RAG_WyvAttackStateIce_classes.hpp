#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RAG_WyvAttackStateIce_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RAG_WyvAttackStateIce.RAG_WyvAttackStateIce_C
// 0x0000 (0x0090 - 0x0090)
class URAG_WyvAttackStateIce_C : public UPrimalAIStateDinoMeleeState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RAG_WyvAttackStateIce.RAG_WyvAttackStateIce_C");
		return ptr;
	}


	void ExecuteUbergraph_RAG_WyvAttackStateIce(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
