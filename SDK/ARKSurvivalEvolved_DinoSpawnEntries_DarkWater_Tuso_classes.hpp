#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_DarkWater_Tuso_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntries_DarkWater_Tuso.DinoSpawnEntries_DarkWater_Tuso_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntries_DarkWater_Tuso_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntries_DarkWater_Tuso.DinoSpawnEntries_DarkWater_Tuso_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntries_DarkWater_Tuso(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
