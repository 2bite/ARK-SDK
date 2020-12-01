#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PersistentGameplaySublevel_Biomes_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PersistentGameplaySublevel_Biomes.PersistentGameplaySublevel_Biomes_C
// 0x0000 (0x0468 - 0x0468)
class APersistentGameplaySublevel_Biomes_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PersistentGameplaySublevel_Biomes.PersistentGameplaySublevel_Biomes_C");
		return ptr;
	}


	void ExecuteUbergraph_PersistentGameplaySublevel_Biomes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
