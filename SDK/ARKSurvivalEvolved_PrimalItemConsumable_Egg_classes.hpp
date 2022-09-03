#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C
// 0x0018 (0x0B00 - 0x0AE8)
class UPrimalItemConsumable_Egg_C : public UPrimalItemConsumableEatable_C
{
public:
	struct FVector                                     IncubatorDisplay3DScale;                                  // 0x0AE8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     IncubatorLocationOffset;                                  // 0x0AF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C");
		return ptr;
	}


	bool BPAllowRemoteAddToInventory(class UPrimalInventoryComponent** invComp, class AShooterPlayerController** ByPC, bool* bRequestedByPlayer);
	class FString BPGetCustomInventoryWidgetText();
	void ExecuteUbergraph_PrimalItemConsumable_Egg(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
