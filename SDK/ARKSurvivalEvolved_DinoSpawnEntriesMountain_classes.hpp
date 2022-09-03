#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesMountain_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesMountain.DinoSpawnEntriesMountain_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesMountain_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesMountain.DinoSpawnEntriesMountain_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesMountain(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
