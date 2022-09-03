#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_TekCanteenCraftable_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C
// 0x0090 (0x0B78 - 0x0AE8)
class UPrimalItemConsumable_TekCanteenCraftable_C : public UPrimalItemConsumableEatable_WaterContainer_C
{
public:
	float                                              MaxShardPower;                                            // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PowerCostPerUse;                                          // 0x0AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              UnpoweredBuffsToGive;                                     // 0x0AF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              PoweredBuffsToGive_Cold;                                  // 0x0B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              PoweredBuffsToGive_Hot;                                   // 0x0B10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       DefaultWaterMode;                                         // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HotWaterBuffClearTag;                                     // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ColdWaterBuffClearTag;                                    // 0x0B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HotWaterModeTextColor;                                    // 0x0B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ColdWaterModeTextColor;                                   // 0x0B48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                NormalWaterModeTextColor;                                 // 0x0B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseShardPowerCost;                                        // 0x0B68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B69(0x0007) MISSED OFFSET
	class UWorld*                                      K2Node_Event_OptionalInitWorld;                           // 0x0B70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C");
		return ptr;
	}


	bool IsCustomContextMenuItemEnabled(struct FName* ContextItem);
	struct FColor BPGetCustomInventoryWidgetTextColor();
	void HasEnoughPowerForUse(bool* bHasEnoughPower);
	void ApplyUnpoweredBuffs();
	void TryClearBuffs();
	void GetCurrentWaterMode(struct FName* WaterMode);
	class FString BPGetCustomInventoryWidgetText();
	void SetWaterMode(const struct FName& NewWaterMode);
	void SelectedCustomContextMenuItem(class AShooterPlayerController** ForPC, struct FName* ContextItem);
	void TryConsumeWithPower();
	void BlueprintUsed();
	void STATIC_SetShardDescription();
	void STATIC_GetElementShardValue(bool* HasData, float* Value);
	void BPPostInitializeItem(class UWorld** OptionalInitWorld);
	void ExecuteUbergraph_PrimalItemConsumable_TekCanteenCraftable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
