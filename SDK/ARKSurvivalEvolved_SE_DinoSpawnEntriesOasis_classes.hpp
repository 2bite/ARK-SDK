#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesOasis_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SE_DinoSpawnEntriesOasis.SE_DinoSpawnEntriesOasis_C
// 0x0000 (0x0050 - 0x0050)
class USE_DinoSpawnEntriesOasis_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SE_DinoSpawnEntriesOasis.SE_DinoSpawnEntriesOasis_C");
		return ptr;
	}


	void ExecuteUbergraph_SE_DinoSpawnEntriesOasis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
