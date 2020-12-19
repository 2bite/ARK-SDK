#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventory_DinoLeash_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventory_DinoLeash.PrimalInventory_DinoLeash_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventory_DinoLeash_C : public UPrimalInventoryBP_StorageBox_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventory_DinoLeash.PrimalInventory_DinoLeash_C");
		return ptr;
	}


	void BPPreInitDefaultInventory();
	void ExecuteUbergraph_PrimalInventory_DinoLeash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
