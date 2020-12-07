#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0008 (0x0578 - 0x0570)
class UPrimalInventory_DedicatedStorage_C : public UPrimalInventoryBP_StorageBox_Base_C
{
public:
	class UClass*                                      SelectedResourceType;                                     // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C");
		return ptr;
	}


	void BPGetExtraItemDisplay(bool* bShowExtraItem, class FString* Description, class FString* CustomString, class UTexture2D** EntryIcon, class UMaterialInterface** EntryMaterial);
	bool BPAllowAddInventoryItem(class UPrimalItem** Item, int* RequestedQuantity, bool* bOnlyAddAll);
	int BPRemoteInventoryGetMaxVisibleSlots(int* NumItems, class AShooterPlayerController** PC, bool* bIsLocal);
	void ExecuteUbergraph_PrimalInventory_DedicatedStorage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
