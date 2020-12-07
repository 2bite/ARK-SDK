#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_City_Trench_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntries_City_Trench.DinoSpawnEntries_City_Trench_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntries_City_Trench_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntries_City_Trench.DinoSpawnEntries_City_Trench_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntries_City_Trench(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
