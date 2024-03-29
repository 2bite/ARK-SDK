#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_ChargeBattery_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C
// 0x0020 (0x0B08 - 0x0AE8)
class UPrimalItem_ChargeBattery_C : public UPrimalItem_Base_Battery_C
{
public:
	struct FName                                       Icon_Parameter_Name;                                      // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minDurability;                                            // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AF4(0x0004) MISSED OFFSET
	TArray<class UTexture2D*>                          batteryIcons;                                             // 0x0AF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C");
		return ptr;
	}


	float BPGetItemDurabilityPercentage();
	class UTexture2D* BPGetItemIcon(class AShooterPlayerController** ForPC);
	class FString BPGetCustomInventoryWidgetText();
	void AddDurabilitySafe(float amountToAdd, float* AmountAdded);
	void BPUsedOntoItem(class UPrimalItem** DestinationItem, int* AdditionalData);
	void ExecuteUbergraph_PrimalItem_ChargeBattery(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
