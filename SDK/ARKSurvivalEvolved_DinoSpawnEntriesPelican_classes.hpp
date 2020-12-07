#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesPelican_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesPelican.DinoSpawnEntriesPelican_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesPelican_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesPelican.DinoSpawnEntriesPelican_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesPelican(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
