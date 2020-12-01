#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Titan_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Titan.DinoTamedInventoryComponent_Titan_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_Titan_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Titan.DinoTamedInventoryComponent_Titan_C");
		return ptr;
	}


	bool BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController** PC, class UPrimalItem** anItemToTransfer);
	void BPNotifyItemAdded(class UPrimalItem** anItem, bool* bEquipItem);
	bool BPAllowUseInInventory(class UPrimalItem** theItem, bool* bIsRemoteInventory, class AShooterPlayerController** ByPC);
	void ExecuteUbergraph_DinoTamedInventoryComponent_Titan(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
