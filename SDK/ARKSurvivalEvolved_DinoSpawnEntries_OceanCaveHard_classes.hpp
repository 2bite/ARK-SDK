#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_OceanCaveHard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntries_OceanCaveHard.DinoSpawnEntries_OceanCaveHard_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntries_OceanCaveHard_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntries_OceanCaveHard.DinoSpawnEntries_OceanCaveHard_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntries_OceanCaveHard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
