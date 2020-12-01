#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryComponentBP_CityTerminal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryComponentBP_CityTerminal.PrimalInventoryComponentBP_CityTerminal_C
// 0x0000 (0x0538 - 0x0538)
class UPrimalInventoryComponentBP_CityTerminal_C : public UPrimalInventoryComponent_Static
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryComponentBP_CityTerminal.PrimalInventoryComponentBP_CityTerminal_C");
		return ptr;
	}


	bool BPIsCraftingAllowed(class UPrimalItem** anItem);
	bool BPRemoteInventoryAllowCrafting(class AShooterPlayerController** PC);
	bool BPIsValidCraftingResource(class UPrimalItem** theItem);
	void ExecuteUbergraph_PrimalInventoryComponentBP_CityTerminal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
