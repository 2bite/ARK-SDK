#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsEndBoss_Drones_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMinionsEndBoss_Drones_Hard.DinoAttackStateMinionsEndBoss_Drones_Hard_C
// 0x0000 (0x00D0 - 0x00D0)
class UDinoAttackStateMinionsEndBoss_Drones_Hard_C : public UDinoAttackStateMinionsEndBoss_Drones_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMinionsEndBoss_Drones_Hard.DinoAttackStateMinionsEndBoss_Drones_Hard_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Drones_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
