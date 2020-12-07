#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ext_DinoSpawnEntries_DesertCave_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ext_DinoSpawnEntries_DesertCave.Ext_DinoSpawnEntries_DesertCave_C
// 0x0000 (0x0050 - 0x0050)
class UExt_DinoSpawnEntries_DesertCave_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ext_DinoSpawnEntries_DesertCave.Ext_DinoSpawnEntries_DesertCave_C");
		return ptr;
	}


	void ExecuteUbergraph_Ext_DinoSpawnEntries_DesertCave(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
