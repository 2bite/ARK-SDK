#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_T_Ext_DinoSpawnEntriesSnow_TEMP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass T_Ext_DinoSpawnEntriesSnow_TEMP.T_Ext_DinoSpawnEntriesSnow_TEMP_C
// 0x0000 (0x0050 - 0x0050)
class UT_Ext_DinoSpawnEntriesSnow_TEMP_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass T_Ext_DinoSpawnEntriesSnow_TEMP.T_Ext_DinoSpawnEntriesSnow_TEMP_C");
		return ptr;
	}


	void ExecuteUbergraph_T_Ext_DinoSpawnEntriesSnow_TEMP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
