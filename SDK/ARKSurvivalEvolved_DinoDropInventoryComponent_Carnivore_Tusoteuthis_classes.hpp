#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_Carnivore_Tusoteuthis_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Tusoteuthis.DinoDropInventoryComponent_Carnivore_Tusoteuthis_C
// 0x0000 (0x0570 - 0x0570)
class UDinoDropInventoryComponent_Carnivore_Tusoteuthis_C : public UDinoDropInventoryComponent_Carnivore_Huge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Tusoteuthis.DinoDropInventoryComponent_Carnivore_Tusoteuthis_C");
		return ptr;
	}


	bool BPAllowUseInInventory(class UPrimalItem** theItem, bool* bIsRemoteInventory, class AShooterPlayerController** ByPC);
	bool BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController** PC, class UPrimalItem** anItemToTransfer);
	void ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Tusoteuthis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
