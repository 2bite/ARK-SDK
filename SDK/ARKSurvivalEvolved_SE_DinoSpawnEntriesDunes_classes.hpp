#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesDunes_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SE_DinoSpawnEntriesDunes.SE_DinoSpawnEntriesDunes_C
// 0x0000 (0x0050 - 0x0050)
class USE_DinoSpawnEntriesDunes_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SE_DinoSpawnEntriesDunes.SE_DinoSpawnEntriesDunes_C");
		return ptr;
	}


	void ExecuteUbergraph_SE_DinoSpawnEntriesDunes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
