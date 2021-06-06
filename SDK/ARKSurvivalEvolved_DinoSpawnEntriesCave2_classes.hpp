#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCave2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesCave2.DinoSpawnEntriesCave2_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesCave2_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCave2.DinoSpawnEntriesCave2_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesCave2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
