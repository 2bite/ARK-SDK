#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesBee_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesBee.DinoSpawnEntriesBee_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesBee_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesBee.DinoSpawnEntriesBee_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesBee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
