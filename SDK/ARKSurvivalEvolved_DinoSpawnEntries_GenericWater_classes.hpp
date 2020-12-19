#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_GenericWater_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntries_GenericWater.DinoSpawnEntries_GenericWater_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntries_GenericWater_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntries_GenericWater.DinoSpawnEntries_GenericWater_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntries_GenericWater(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
