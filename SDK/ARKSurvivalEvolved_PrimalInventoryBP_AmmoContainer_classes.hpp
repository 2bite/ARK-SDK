#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_AmmoContainer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C
// 0x0004 (0x0594 - 0x0590)
class UPrimalInventoryBP_AmmoContainer_C : public UPrimalInventoryBP_StorageBox_Base_C
{
public:
	float                                              RadiusToCheckForStructures;                               // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C");
		return ptr;
	}


	void BPNotifyItemQuantityUpdated(class UPrimalItem** anItem, int* amount);
	void BPNotifyItemRemoved(class UPrimalItem** anItem);
	void BPNotifyItemAdded(class UPrimalItem** anItem, bool* bEquipItem);
	void ExecuteUbergraph_PrimalInventoryBP_AmmoContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
