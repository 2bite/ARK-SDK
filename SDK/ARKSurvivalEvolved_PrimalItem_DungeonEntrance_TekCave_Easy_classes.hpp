#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_DungeonEntrance_TekCave_Easy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_DungeonEntrance_TekCave_Easy.PrimalItem_DungeonEntrance_TekCave_Easy_C
// 0x0000 (0x09BC - 0x09BC)
class UPrimalItem_DungeonEntrance_TekCave_Easy_C : public UPrimalItem_DungeonEntrance_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_DungeonEntrance_TekCave_Easy.PrimalItem_DungeonEntrance_TekCave_Easy_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_DungeonEntrance_TekCave_Easy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
