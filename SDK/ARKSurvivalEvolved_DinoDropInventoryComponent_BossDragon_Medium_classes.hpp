#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_BossDragon_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_BossDragon_Medium.DinoDropInventoryComponent_BossDragon_Medium_C
// 0x0000 (0x0570 - 0x0570)
class UDinoDropInventoryComponent_BossDragon_Medium_C : public UDinoDropInventoryComponent_Carnivore_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_BossDragon_Medium.DinoDropInventoryComponent_BossDragon_Medium_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_BossDragon_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
