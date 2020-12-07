#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_Wasteland_DesertBuffer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntries_Wasteland_DesertBuffer.DinoSpawnEntries_Wasteland_DesertBuffer_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntries_Wasteland_DesertBuffer_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntries_Wasteland_DesertBuffer.DinoSpawnEntries_Wasteland_DesertBuffer_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntries_Wasteland_DesertBuffer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
