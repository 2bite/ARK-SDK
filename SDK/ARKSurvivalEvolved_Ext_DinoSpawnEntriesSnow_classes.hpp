#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ext_DinoSpawnEntriesSnow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ext_DinoSpawnEntriesSnow.Ext_DinoSpawnEntriesSnow_C
// 0x0000 (0x0050 - 0x0050)
class UExt_DinoSpawnEntriesSnow_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ext_DinoSpawnEntriesSnow.Ext_DinoSpawnEntriesSnow_C");
		return ptr;
	}


	void ExecuteUbergraph_Ext_DinoSpawnEntriesSnow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
