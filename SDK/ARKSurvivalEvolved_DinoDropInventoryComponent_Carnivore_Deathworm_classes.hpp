#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_Carnivore_Deathworm_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Deathworm.DinoDropInventoryComponent_Carnivore_Deathworm_C
// 0x0000 (0x0538 - 0x0538)
class UDinoDropInventoryComponent_Carnivore_Deathworm_C : public UDinoDropInventoryComponent_Carnivore_Huge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Deathworm.DinoDropInventoryComponent_Carnivore_Deathworm_C");
		return ptr;
	}


	bool BPAllowUseInInventory(class UPrimalItem** theItem, bool* bIsRemoteInventory, class AShooterPlayerController** ByPC);
	bool BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController** PC, class UPrimalItem** anItemToTransfer);
	void ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Deathworm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif