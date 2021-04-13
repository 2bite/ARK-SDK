#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTekClaws_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItem_WeaponTekClaws_C : public UPrimalItem_WeaponBaseClub_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C");
		return ptr;
	}


	void BPAddedAttachments();
	void CanRunCosmeticEvents(bool* CanRun);
	void BlueprintUnequipped();
	void BlueprintOwnerPosssessed(class AController** PossessedByController);
	void BlueprintEquipped(bool* bIsFromSaveGame);
	void ExecuteUbergraph_PrimalItem_WeaponTekClaws(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
