#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSprayPaint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapSprayPaint.WeapSprayPaint_C
// 0x0000 (0x0DD8 - 0x0DD8)
class AWeapSprayPaint_C : public AShooterWeapon_Projectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSprayPaint.WeapSprayPaint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapSprayPaint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
