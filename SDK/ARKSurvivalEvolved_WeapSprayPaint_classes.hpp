#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0000 (0x0E30 - 0x0E30)
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
