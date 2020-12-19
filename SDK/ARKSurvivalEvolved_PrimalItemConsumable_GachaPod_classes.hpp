#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_GachaPod_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C
// 0x0010 (0x0A00 - 0x09F0)
class UPrimalItemConsumable_GachaPod_C : public UPrimalItemConsumableGeneric_C
{
public:
	class USoundCue*                                   ResourceOpen_Cue;                                         // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ItemOpen_Cue;                                             // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C");
		return ptr;
	}


	void BPOnItemConsumed(class UPrimalInventoryComponent** inventory, int* remainingQuantity);
	void STATIC_RollLoot(class UPrimalInventoryComponent* Inv);
	void ShowHUDNotification(class UPrimalItem* Item, class UClass* Resource, int Quanity, class UPrimalInventoryComponent* Inv);
	void BPPostInitializeItem(class UWorld** OptionalInitWorld);
	void BlueprintUsed();
	void ExecuteUbergraph_PrimalItemConsumable_GachaPod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
