#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTekGrenadeLauncher_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponTekGrenadeLauncher.PrimalItem_WeaponTekGrenadeLauncher_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItem_WeaponTekGrenadeLauncher_C : public UPrimalItemWeaponGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponTekGrenadeLauncher.PrimalItem_WeaponTekGrenadeLauncher_C");
		return ptr;
	}


	class FString STATIC_BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC);
	class FString BPGetCustomInventoryWidgetText();
	void ExecuteUbergraph_PrimalItem_WeaponTekGrenadeLauncher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
