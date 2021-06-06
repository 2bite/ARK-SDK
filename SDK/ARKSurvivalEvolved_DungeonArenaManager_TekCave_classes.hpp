#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DungeonArenaManager_TekCave_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DungeonArenaManager_TekCave.DungeonArenaManager_TekCave_C
// 0x0000 (0x063D - 0x063D)
class ADungeonArenaManager_TekCave_C : public ADungeonArenaManager_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DungeonArenaManager_TekCave.DungeonArenaManager_TekCave_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DungeonArenaManager_TekCave(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
