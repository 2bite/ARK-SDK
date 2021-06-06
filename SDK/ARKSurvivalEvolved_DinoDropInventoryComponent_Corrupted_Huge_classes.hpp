#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_Corrupted_Huge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Corrupted_Huge.DinoDropInventoryComponent_Corrupted_Huge_C
// 0x0000 (0x0590 - 0x0590)
class UDinoDropInventoryComponent_Corrupted_Huge_C : public UDinoDropInventoryComponent_Carnivore_Huge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Corrupted_Huge.DinoDropInventoryComponent_Corrupted_Huge_C");
		return ptr;
	}


	bool BPAllowUseInInventory(class UPrimalItem** theItem, bool* bIsRemoteInventory, class AShooterPlayerController** ByPC);
	bool BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController** PC, class UPrimalItem** anItemToTransfer);
	void ExecuteUbergraph_DinoDropInventoryComponent_Corrupted_Huge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
