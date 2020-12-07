#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BasiliskAttackStateRangedPoison_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BasiliskAttackStateRangedPoison.BasiliskAttackStateRangedPoison_C
// 0x0000 (0x00A0 - 0x00A0)
class UBasiliskAttackStateRangedPoison_C : public UPrimalAIStateDinoRangedState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BasiliskAttackStateRangedPoison.BasiliskAttackStateRangedPoison_C");
		return ptr;
	}


	void ExecuteUbergraph_BasiliskAttackStateRangedPoison(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
