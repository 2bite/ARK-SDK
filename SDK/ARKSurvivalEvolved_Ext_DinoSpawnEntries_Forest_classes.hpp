#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ext_DinoSpawnEntries_Forest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ext_DinoSpawnEntries_Forest.Ext_DinoSpawnEntries_Forest_C
// 0x0000 (0x0050 - 0x0050)
class UExt_DinoSpawnEntries_Forest_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ext_DinoSpawnEntries_Forest.Ext_DinoSpawnEntries_Forest_C");
		return ptr;
	}


	void ExecuteUbergraph_Ext_DinoSpawnEntries_Forest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
