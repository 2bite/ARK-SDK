#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_XenomorphPheromone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_XenomorphPheromone.Buff_XenomorphPheromone_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_XenomorphPheromone_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_XenomorphPheromone.Buff_XenomorphPheromone_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_XenomorphPheromone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
