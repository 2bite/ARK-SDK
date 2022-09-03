#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTekSword_Mjolnir_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C
// 0x0010 (0x0AF8 - 0x0AE8)
class UPrimalItem_WeaponTekSword_Mjolnir_C : public UPrimalItem_WeaponTekSword_C
{
public:
	class FString                                      MjolnirNotWorthyString;                                   // 0x0AE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C");
		return ptr;
	}


	bool BPPreventWeaponEquip();
	void BPOnLocalUse(class AShooterCharacter** forCharacter);
	void ExecuteUbergraph_PrimalItem_WeaponTekSword_Mjolnir(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
