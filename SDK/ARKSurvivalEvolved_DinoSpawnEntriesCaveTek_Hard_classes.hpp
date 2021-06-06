#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCaveTek_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesCaveTek_Hard.DinoSpawnEntriesCaveTek_Hard_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesCaveTek_Hard_C : public UDinoSpawnEntriesCaveTek_Medium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCaveTek_Hard.DinoSpawnEntriesCaveTek_Hard_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesCaveTek_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
