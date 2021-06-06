#pragma once

// ARKSurvivalEvolved (329.9) SDK

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
// 0x0018 (0x0AF8 - 0x0AE0)
class UPrimalItemConsumable_Egg_C : public UPrimalItemConsumableEatable_C
{
public:
	struct FVector                                     IncubatorDisplay3DScale;                                  // 0x0AE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     IncubatorLocationOffset;                                  // 0x0AEC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
