#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_CaveDrop_Weapons_EX_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSet_CaveDrop_Weapons_EX.LootItemSet_CaveDrop_Weapons_EX_C
// 0x0000 (0x0068 - 0x0068)
class ULootItemSet_CaveDrop_Weapons_EX_C : public UPrimalSupplyCrateItemSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_CaveDrop_Weapons_EX.LootItemSet_CaveDrop_Weapons_EX_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSet_CaveDrop_Weapons_EX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
