#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCaveTek_Easy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesCaveTek_Easy.DinoSpawnEntriesCaveTek_Easy_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesCaveTek_Easy_C : public UDinoSpawnEntriesCaveTek_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCaveTek_Easy.DinoSpawnEntriesCaveTek_Easy_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesCaveTek_Easy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
