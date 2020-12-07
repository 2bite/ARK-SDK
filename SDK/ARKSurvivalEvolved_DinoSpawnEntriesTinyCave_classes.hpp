#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesTinyCave_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesTinyCave.DinoSpawnEntriesTinyCave_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesTinyCave_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesTinyCave.DinoSpawnEntriesTinyCave_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesTinyCave(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
