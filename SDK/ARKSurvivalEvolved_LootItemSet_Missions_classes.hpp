#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_Missions_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSet_Missions.LootItemSet_Missions_C
// 0x0000 (0x0068 - 0x0068)
class ULootItemSet_Missions_C : public UPrimalSupplyCrateItemSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_Missions.LootItemSet_Missions_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSet_Missions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
