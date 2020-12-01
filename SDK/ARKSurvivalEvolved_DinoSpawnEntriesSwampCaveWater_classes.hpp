#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesSwampCaveWater_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesSwampCaveWater.DinoSpawnEntriesSwampCaveWater_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesSwampCaveWater_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesSwampCaveWater.DinoSpawnEntriesSwampCaveWater_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesSwampCaveWater(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
