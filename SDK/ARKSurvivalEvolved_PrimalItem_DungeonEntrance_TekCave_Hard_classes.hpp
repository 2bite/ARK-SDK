#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_DungeonEntrance_TekCave_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_DungeonEntrance_TekCave_Hard.PrimalItem_DungeonEntrance_TekCave_Hard_C
// 0x0000 (0x0A0C - 0x0A0C)
class UPrimalItem_DungeonEntrance_TekCave_Hard_C : public UPrimalItem_DungeonEntrance_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_DungeonEntrance_TekCave_Hard.PrimalItem_DungeonEntrance_TekCave_Hard_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_DungeonEntrance_TekCave_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
