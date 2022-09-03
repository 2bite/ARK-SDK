#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ext_DinoSpawnEntries_DesertMountain_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ext_DinoSpawnEntries_DesertMountain.Ext_DinoSpawnEntries_DesertMountain_C
// 0x0000 (0x0050 - 0x0050)
class UExt_DinoSpawnEntries_DesertMountain_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ext_DinoSpawnEntries_DesertMountain.Ext_DinoSpawnEntries_DesertMountain_C");
		return ptr;
	}


	void ExecuteUbergraph_Ext_DinoSpawnEntries_DesertMountain(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
