#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesGigant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesGigant.DinoSpawnEntriesGigant_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesGigant_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesGigant.DinoSpawnEntriesGigant_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesGigant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
