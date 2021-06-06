#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCaveIceWater_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesCaveIceWater.DinoSpawnEntriesCaveIceWater_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesCaveIceWater_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCaveIceWater.DinoSpawnEntriesCaveIceWater_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesCaveIceWater(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
