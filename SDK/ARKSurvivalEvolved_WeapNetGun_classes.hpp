#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapNetGun_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapNetGun.WeapNetGun_C
// 0x0000 (0x0E38 - 0x0E38)
class AWeapNetGun_C : public AShooterWeapon_Projectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapNetGun.WeapNetGun_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapNetGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
