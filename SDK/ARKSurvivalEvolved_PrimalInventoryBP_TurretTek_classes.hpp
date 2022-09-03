#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TurretTek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_TurretTek.PrimalInventoryBP_TurretTek_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_TurretTek_C : public UPrimalInventoryBP_StorageBox_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TurretTek.PrimalInventoryBP_TurretTek_C");
		return ptr;
	}


	bool BPCustomRemoteInventoryAllowAddItems(class AShooterPlayerController** PC, class UPrimalItem** anItem, int* anItemQuantityOverride, bool* bRequestedByPlayer);
	void ExecuteUbergraph_PrimalInventoryBP_TurretTek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
