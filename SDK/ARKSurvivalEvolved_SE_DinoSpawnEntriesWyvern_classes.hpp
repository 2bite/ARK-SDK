#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesWyvern_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SE_DinoSpawnEntriesWyvern.SE_DinoSpawnEntriesWyvern_C
// 0x0000 (0x0050 - 0x0050)
class USE_DinoSpawnEntriesWyvern_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SE_DinoSpawnEntriesWyvern.SE_DinoSpawnEntriesWyvern_C");
		return ptr;
	}


	void ExecuteUbergraph_SE_DinoSpawnEntriesWyvern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
