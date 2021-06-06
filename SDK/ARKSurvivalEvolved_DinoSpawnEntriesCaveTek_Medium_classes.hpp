#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCaveTek_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesCaveTek_Medium.DinoSpawnEntriesCaveTek_Medium_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesCaveTek_Medium_C : public UDinoSpawnEntriesCaveTek_Easy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCaveTek_Medium.DinoSpawnEntriesCaveTek_Medium_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesCaveTek_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
