#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_T_Ext_DinoSpawnEntriesSnow_2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass T_Ext_DinoSpawnEntriesSnow_2.T_Ext_DinoSpawnEntriesSnow_1_C
// 0x0000 (0x0050 - 0x0050)
class UT_Ext_DinoSpawnEntriesSnow_1_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass T_Ext_DinoSpawnEntriesSnow_2.T_Ext_DinoSpawnEntriesSnow_1_C");
		return ptr;
	}


	void ExecuteUbergraph_T_Ext_DinoSpawnEntriesSnow_2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif