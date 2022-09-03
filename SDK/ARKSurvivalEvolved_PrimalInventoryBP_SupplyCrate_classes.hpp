#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_SupplyCrate_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C
// 0x0008 (0x0598 - 0x0590)
class UPrimalInventoryBP_SupplyCrate_C : public UPrimalInventoryComponent
{
public:
	class UClass*                                      SingleplayerDefaultItemToRemove;                          // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C");
		return ptr;
	}


	void BPPreInitDefaultInventory();
	void BPRequestedInventoryItems(class AShooterPlayerController** ForPC);
	void BPInventoryRefresh();
	void ExecuteUbergraph_PrimalInventoryBP_SupplyCrate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
