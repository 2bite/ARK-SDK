#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesQuetz_EX_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesQuetz_EX.DinoSpawnEntriesQuetz_EX_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesQuetz_EX_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesQuetz_EX.DinoSpawnEntriesQuetz_EX_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesQuetz_EX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
