#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ZiplineMotor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C
// 0x0010 (0x0AF0 - 0x0AE0)
class UPrimalItemArmor_ZiplineMotor_C : public UPrimalItemSkinGeneric_C
{
public:
	float                                              MaxGasoline;                                              // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AE4(0x0004) MISSED OFFSET
	class UPrimalItem*                                 ParentItem;                                               // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C");
		return ptr;
	}


	bool STATIC_GetGasolineValueFromItem(class UPrimalItem* TargetItem, float* Value);
	class FString BPGetCustomInventoryWidgetText();
	class FString BPGetSkinnedCustomInventoryWidgetText();
	void STATIC_SetGasolineDescription(class UPrimalItem* Item, float Value);
	void BPInitFromItemNetInfo();
	void STATIC_RemovedSkinFromItem(class UPrimalItem** FromOwnerItem, bool* bIsFirstTime);
	void SkinEquippedBlueprintTick(class UPrimalItem** OwnerItem, float* DeltaSeconds);
	void STATIC_ApplyingSkinOntoItem(class UPrimalItem** ToOwnerItem, bool* bIsFirstTime);
	void ExecuteUbergraph_PrimalItemArmor_ZiplineMotor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
