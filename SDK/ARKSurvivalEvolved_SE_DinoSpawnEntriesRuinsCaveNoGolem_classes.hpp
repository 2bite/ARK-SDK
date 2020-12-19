#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesRuinsCaveNoGolem_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SE_DinoSpawnEntriesRuinsCaveNoGolem.SE_DinoSpawnEntriesRuinsCaveNoGolem_C
// 0x0000 (0x0050 - 0x0050)
class USE_DinoSpawnEntriesRuinsCaveNoGolem_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SE_DinoSpawnEntriesRuinsCaveNoGolem.SE_DinoSpawnEntriesRuinsCaveNoGolem_C");
		return ptr;
	}


	void ExecuteUbergraph_SE_DinoSpawnEntriesRuinsCaveNoGolem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
