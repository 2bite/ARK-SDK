#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesCanyonCave_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SE_DinoSpawnEntriesCanyonCave.SE_DinoSpawnEntriesCanyonCave_C
// 0x0000 (0x0050 - 0x0050)
class USE_DinoSpawnEntriesCanyonCave_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SE_DinoSpawnEntriesCanyonCave.SE_DinoSpawnEntriesCanyonCave_C");
		return ptr;
	}


	void ExecuteUbergraph_SE_DinoSpawnEntriesCanyonCave(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
