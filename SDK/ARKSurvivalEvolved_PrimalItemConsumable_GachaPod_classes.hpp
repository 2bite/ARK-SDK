#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0010 (0x09A0 - 0x0990)
class UPrimalItemConsumable_GachaPod_C : public UPrimalItemConsumableGeneric_C
{
public:
	class USoundCue*                                   ResourceOpen_Cue;                                         // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ItemOpen_Cue;                                             // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C");
		return ptr;
	}


	void STATIC_ShowHUDNotification(class UPrimalItem* Item, class UClass* Resource, int Quanity);
	void STATIC_BPPostInitializeItem(class UWorld** OptionalInitWorld);
	void STATIC_BlueprintUsed();
	void ExecuteUbergraph_PrimalItemConsumable_GachaPod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
