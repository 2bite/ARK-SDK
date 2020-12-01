#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsEndBoss_Drones_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMinionsEndBoss_Drones.DinoAttackStateMinionsEndBoss_Drones_C
// 0x0000 (0x00D0 - 0x00D0)
class UDinoAttackStateMinionsEndBoss_Drones_C : public UPrimalAIStateDinoSpiderMinions
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMinionsEndBoss_Drones.DinoAttackStateMinionsEndBoss_Drones_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Drones(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
