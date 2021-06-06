#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_CropPlot_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_CropPlot_Tek.Structure_CropPlot_Tek_C
// 0x0018 (0x0F18 - 0x0F00)
class AStructure_CropPlot_Tek_C : public ACropPlotBaseBP_C
{
public:
	class UPrimalInventoryBP_CropPlot_Tek_C*           PrimalInventoryBP_CropPlot_Tek_C1;                        // 0x0F00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x0F08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PoweredGrowthModifier;                                    // 0x0F10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnpoweredGrowthModifier;                                  // 0x0F14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_CropPlot_Tek.Structure_CropPlot_Tek_C");
		return ptr;
	}


	void ResetRefreshInterval();
	void BPInventoryItemUsed(class UObject** InventoryItemObject);
	void CheckInstantGrow();
	void BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem);
	float BPGetAdditionalGrowthMultiplier();
	void UserConstructionScript();
	void ExecuteUbergraph_Structure_CropPlot_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
