#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesGreenDesert_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SE_DinoSpawnEntriesGreenDesert.SE_DinoSpawnEntriesGreenDesert_C
// 0x0000 (0x0050 - 0x0050)
class USE_DinoSpawnEntriesGreenDesert_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SE_DinoSpawnEntriesGreenDesert.SE_DinoSpawnEntriesGreenDesert_C");
		return ptr;
	}


	void ExecuteUbergraph_SE_DinoSpawnEntriesGreenDesert(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
