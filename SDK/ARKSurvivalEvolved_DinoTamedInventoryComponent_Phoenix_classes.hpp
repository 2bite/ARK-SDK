#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Phoenix_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Phoenix.DinoTamedInventoryComponent_Phoenix_C
// 0x0010 (0x0580 - 0x0570)
class UDinoTamedInventoryComponent_Phoenix_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:
	TArray<class UClass*>                              ForcedAllowUseItemClasses;                                // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Phoenix.DinoTamedInventoryComponent_Phoenix_C");
		return ptr;
	}


	bool BPAllowUseInInventory(class UPrimalItem** theItem, bool* bIsRemoteInventory, class AShooterPlayerController** ByPC);
	bool OverrideUseItem(class UPrimalItem** theItem);
	void ExecuteUbergraph_DinoTamedInventoryComponent_Phoenix(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
