#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesQuetz_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesQuetz.DinoSpawnEntriesQuetz_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesQuetz_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesQuetz.DinoSpawnEntriesQuetz_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesQuetz(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
