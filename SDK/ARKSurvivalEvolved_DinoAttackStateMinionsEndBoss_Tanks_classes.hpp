#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsEndBoss_Tanks_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMinionsEndBoss_Tanks.DinoAttackStateMinionsEndBoss_Tanks_C
// 0x0000 (0x00D0 - 0x00D0)
class UDinoAttackStateMinionsEndBoss_Tanks_C : public UPrimalAIStateDinoSpiderMinions
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMinionsEndBoss_Tanks.DinoAttackStateMinionsEndBoss_Tanks_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Tanks(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
