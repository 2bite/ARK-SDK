#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_BossDragon_Easy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_BossDragon_Easy.DinoDropInventoryComponent_BossDragon_Easy_C
// 0x0000 (0x0570 - 0x0570)
class UDinoDropInventoryComponent_BossDragon_Easy_C : public UDinoDropInventoryComponent_Carnivore_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_BossDragon_Easy.DinoDropInventoryComponent_BossDragon_Easy_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_BossDragon_Easy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
