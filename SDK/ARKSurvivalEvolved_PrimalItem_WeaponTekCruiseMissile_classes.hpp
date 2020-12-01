#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTekCruiseMissile_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeaponTekCruiseMissile_C : public UPrimalItem_CruiseMissile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C");
		return ptr;
	}


	bool BPProcessEditText(class AShooterPlayerController** ForPC, class FString* TextToUse);
	void Set_Scout_Character_Status_Values(TArray<float>* Stats);
	void Missile_Released_Possessing_Survivor(bool delay_for_zoom_out);
	void Missile_Possessed_by_Survivor();
	void ExecuteUbergraph_PrimalItem_WeaponTekCruiseMissile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
