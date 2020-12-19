#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCave5_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesCave5.DinoSpawnEntriesCave5_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesCave5_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCave5.DinoSpawnEntriesCave5_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesCave5(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
