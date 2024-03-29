#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFlareGun_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapFlareGun.WeapFlareGun_C
// 0x0000 (0x0E30 - 0x0E30)
class AWeapFlareGun_C : public AShooterWeapon_Projectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapFlareGun.WeapFlareGun_C");
		return ptr;
	}


	bool BPWeaponCanFire();
	void UserConstructionScript();
	void ExecuteUbergraph_WeapFlareGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
