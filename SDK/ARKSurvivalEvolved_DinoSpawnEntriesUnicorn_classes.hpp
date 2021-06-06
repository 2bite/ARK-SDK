#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesUnicorn_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesUnicorn.DinoSpawnEntriesUnicorn_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesUnicorn_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesUnicorn.DinoSpawnEntriesUnicorn_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesUnicorn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
