#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_ArtifactCrate_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_ArtifactCrate.PrimalInventoryBP_ArtifactCrate_C
// 0x0008 (0x0540 - 0x0538)
class UPrimalInventoryBP_ArtifactCrate_C : public UPrimalInventoryComponent
{
public:
	class UClass*                                      SingleplayerDefaultItemToRemove;                          // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_ArtifactCrate.PrimalInventoryBP_ArtifactCrate_C");
		return ptr;
	}


	void BPPreInitDefaultInventory();
	void BPRequestedInventoryItems(class AShooterPlayerController** ForPC);
	void BPInventoryRefresh();
	void ExecuteUbergraph_PrimalInventoryBP_ArtifactCrate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
