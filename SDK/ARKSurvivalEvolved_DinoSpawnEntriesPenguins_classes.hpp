#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesPenguins_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesPenguins.DinoSpawnEntriesPenguins_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesPenguins_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesPenguins.DinoSpawnEntriesPenguins_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesPenguins(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
