#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_GenericFishing_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSet_GenericFishing.LootItemSet_GenericFishing_C
// 0x0000 (0x0068 - 0x0068)
class ULootItemSet_GenericFishing_C : public UPrimalSupplyCrateItemSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_GenericFishing.LootItemSet_GenericFishing_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSet_GenericFishing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
