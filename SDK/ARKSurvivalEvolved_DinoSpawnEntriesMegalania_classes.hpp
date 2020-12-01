#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesMegalania_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesMegalania.DinoSpawnEntriesMegalania_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesMegalania_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesMegalania.DinoSpawnEntriesMegalania_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesMegalania(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
