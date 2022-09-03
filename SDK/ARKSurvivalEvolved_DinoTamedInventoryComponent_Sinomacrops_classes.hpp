#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Sinomacrops_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Sinomacrops.DinoTamedInventoryComponent_Sinomacrops_C
// 0x0000 (0x0590 - 0x0590)
class UDinoTamedInventoryComponent_Sinomacrops_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Sinomacrops.DinoTamedInventoryComponent_Sinomacrops_C");
		return ptr;
	}


	bool OverrideUseItem(class UPrimalItem** theItem);
	bool BPAllowUseInInventory(class UPrimalItem** theItem, bool* bIsRemoteInventory, class AShooterPlayerController** ByPC);
	void ExecuteUbergraph_DinoTamedInventoryComponent_Sinomacrops(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
