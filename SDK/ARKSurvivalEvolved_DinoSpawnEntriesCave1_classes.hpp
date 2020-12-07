#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCave1_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesCave1.DinoSpawnEntriesCave1_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesCave1_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCave1.DinoSpawnEntriesCave1_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesCave1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
