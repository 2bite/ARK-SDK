#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesBadlands_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SE_DinoSpawnEntriesBadlands.SE_DinoSpawnEntriesBadlands_C
// 0x0000 (0x0050 - 0x0050)
class USE_DinoSpawnEntriesBadlands_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SE_DinoSpawnEntriesBadlands.SE_DinoSpawnEntriesBadlands_C");
		return ptr;
	}


	void ExecuteUbergraph_SE_DinoSpawnEntriesBadlands(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
