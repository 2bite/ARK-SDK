#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCaveMegalo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesCaveMegalo.DinoSpawnEntriesCaveMegalo_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesCaveMegalo_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCaveMegalo.DinoSpawnEntriesCaveMegalo_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesCaveMegalo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
