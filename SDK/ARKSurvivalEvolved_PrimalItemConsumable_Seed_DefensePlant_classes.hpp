#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_DefensePlant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Seed_DefensePlant.PrimalItemConsumable_Seed_DefensePlant_C
// 0x0004 (0x0AEC - 0x0AE8)
class UPrimalItemConsumable_Seed_DefensePlant_C : public UPrimalItemConsumableSeed_C
{
public:
	int                                                NumTurrets;                                               // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Seed_DefensePlant.PrimalItemConsumable_Seed_DefensePlant_C");
		return ptr;
	}


	bool STATIC_BPAllowRemoteAddToInventory(class UPrimalInventoryComponent** invComp, class AShooterPlayerController** ByPC, bool* bRequestedByPlayer);
	bool BPCanAddToInventory(class UPrimalInventoryComponent** toInventory);
	void ExecuteUbergraph_PrimalItemConsumable_Seed_DefensePlant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
