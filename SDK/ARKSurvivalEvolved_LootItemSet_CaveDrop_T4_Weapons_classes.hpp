#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_CaveDrop_T4_Weapons_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSet_CaveDrop_T4_Weapons.LootItemSet_CaveDrop_T4_Weapons_C
// 0x0000 (0x0068 - 0x0068)
class ULootItemSet_CaveDrop_T4_Weapons_C : public UPrimalSupplyCrateItemSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_CaveDrop_T4_Weapons.LootItemSet_CaveDrop_T4_Weapons_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSet_CaveDrop_T4_Weapons(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif