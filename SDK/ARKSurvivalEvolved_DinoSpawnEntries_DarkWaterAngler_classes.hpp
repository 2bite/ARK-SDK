#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_DarkWaterAngler_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntries_DarkWaterAngler.DinoSpawnEntries_DarkWaterAngler_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntries_DarkWaterAngler_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntries_DarkWaterAngler.DinoSpawnEntries_DarkWaterAngler_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntries_DarkWaterAngler(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
