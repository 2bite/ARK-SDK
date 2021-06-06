#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_EggIncubator_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C
// 0x0020 (0x05B0 - 0x0590)
class UPrimalInventoryBP_EggIncubator_C : public UPrimalInventoryBP_StorageBox_Base_C
{
public:
	struct FScriptMulticastDelegate                    OnFertilizedEggAdded;                                     // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFertilizedEggRemoved;                                   // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C");
		return ptr;
	}


	bool BPCustomRemoteInventoryAllowAddItems(class AShooterPlayerController** PC, class UPrimalItem** anItem, int* anItemQuantityOverride, bool* bRequestedByPlayer);
	bool BPCustomRemoteInventoryAllowRemoveItems(class AShooterPlayerController** PC, class UPrimalItem** anItemToTransfer, int* RequestedQuantity, bool* bRequestedByPlayer, bool* bRequestDropping);
	bool InventoryCustomSortPredicate(class UPrimalItem** LeftItem, class UPrimalItem** RightItem);
	bool BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController** PC, class UPrimalItem** anItemToTransfer);
	void BPNotifyItemRemoved(class UPrimalItem** anItem);
	void BPNotifyItemAdded(class UPrimalItem** anItem, bool* bEquipItem);
	void ExecuteUbergraph_PrimalInventoryBP_EggIncubator(int EntryPoint);
	void OnFertilizedEggRemoved__DelegateSignature(class UPrimalItemConsumable_Egg_C* EggItem);
	void OnFertilizedEggAdded__DelegateSignature(class UPrimalItemConsumable_Egg_C* EggItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
