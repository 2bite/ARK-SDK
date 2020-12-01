#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesJungle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesJungle.DinoSpawnEntriesJungle_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesJungle_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesJungle.DinoSpawnEntriesJungle_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesJungle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
