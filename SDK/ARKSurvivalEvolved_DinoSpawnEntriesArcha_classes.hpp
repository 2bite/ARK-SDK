#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesArcha_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesArcha.DinoSpawnEntriesArcha_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesArcha_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesArcha.DinoSpawnEntriesArcha_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesArcha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
