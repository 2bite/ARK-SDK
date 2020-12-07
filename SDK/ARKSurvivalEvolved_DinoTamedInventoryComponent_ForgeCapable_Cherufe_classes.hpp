#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_ForgeCapable_Cherufe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C
// 0x0010 (0x0580 - 0x0570)
class UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C : public UDinoTamedInventoryComponent_ForgeCapable_C
{
public:
	TArray<class UClass*>                              ForceAllowUseItemClasses;                                 // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C");
		return ptr;
	}


	bool BPAllowUseInInventory(class UPrimalItem** theItem, bool* bIsRemoteInventory, class AShooterPlayerController** ByPC);
	bool OverrideUseItem(class UPrimalItem** theItem);
	void ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable_Cherufe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
