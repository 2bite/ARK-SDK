#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_BaseAutoGenerateItems_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_BaseAutoGenerateItems.PrimalInventoryBP_BaseAutoGenerateItems_C
// 0x0025 (0x0595 - 0x0570)
class UPrimalInventoryBP_BaseAutoGenerateItems_C : public UPrimalInventoryComponent
{
public:
	TArray<class UClass*>                              AutoGenerateItems;                                        // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              AutoGenerateItemsTimeInterval;                            // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0584(0x0004) MISSED OFFSET
	double                                             LastAddItemTime;                                          // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoGenerateItemsMultiplier;                              // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSetAutoGenerateItemsMultiplier;                        // 0x0594(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_BaseAutoGenerateItems.PrimalInventoryBP_BaseAutoGenerateItems_C");
		return ptr;
	}


	void GeneratedItems();
	void BPInitializeInventory();
	void BPInventoryRefresh();
	void ExecuteUbergraph_PrimalInventoryBP_BaseAutoGenerateItems(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
