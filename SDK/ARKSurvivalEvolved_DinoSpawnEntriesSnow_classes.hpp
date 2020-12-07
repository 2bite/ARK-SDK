#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesSnow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesSnow.DinoSpawnEntriesSnow_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesSnow_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesSnow.DinoSpawnEntriesSnow_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesSnow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
