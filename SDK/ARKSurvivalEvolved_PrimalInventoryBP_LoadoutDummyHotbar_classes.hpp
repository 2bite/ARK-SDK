#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_LoadoutDummyHotbar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_LoadoutDummyHotbar.PrimalInventoryBP_LoadoutDummyHotbar_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_LoadoutDummyHotbar_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_LoadoutDummyHotbar.PrimalInventoryBP_LoadoutDummyHotbar_C");
		return ptr;
	}


	bool BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController** PC, class UPrimalItem** anItemToTransfer);
	bool BPAllowAddInventoryItem(class UPrimalItem** Item, int* RequestedQuantity, bool* bOnlyAddAll);
	void ExecuteUbergraph_PrimalInventoryBP_LoadoutDummyHotbar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
