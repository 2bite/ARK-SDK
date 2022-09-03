#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventory_DedicatedStorage_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C
// 0x0010 (0x05A0 - 0x0590)
class UPrimalInventory_DedicatedStorage_C : public UPrimalInventoryBP_StorageBox_Base_C
{
public:
	class UClass*                                      SelectedResourceType;                                     // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentResourceCount;                                     // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxResourceStacks;                                        // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C");
		return ptr;
	}


	void BPOnTransferAll(class UPrimalInventoryComponent** toInventory);
	void BPGetExtraItemDisplay(bool* bShowExtraItem, class FString* Description, class FString* CustomString, class UTexture2D** EntryIcon, class UMaterialInterface** EntryMaterial);
	bool BPAllowAddInventoryItem(class UPrimalItem** Item, int* RequestedQuantity, bool* bOnlyAddAll);
	int BPRemoteInventoryGetMaxVisibleSlots(int* NumItems, class AShooterPlayerController** PC, bool* bIsLocal);
	void ExecuteUbergraph_PrimalInventory_DedicatedStorage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
