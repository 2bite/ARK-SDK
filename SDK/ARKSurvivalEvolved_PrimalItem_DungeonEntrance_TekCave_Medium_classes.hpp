#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_DungeonEntrance_TekCave_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_DungeonEntrance_TekCave_Medium.PrimalItem_DungeonEntrance_TekCave_Medium_C
// 0x0000 (0x0AEC - 0x0AEC)
class UPrimalItem_DungeonEntrance_TekCave_Medium_C : public UPrimalItem_DungeonEntrance_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_DungeonEntrance_TekCave_Medium.PrimalItem_DungeonEntrance_TekCave_Medium_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_DungeonEntrance_TekCave_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
