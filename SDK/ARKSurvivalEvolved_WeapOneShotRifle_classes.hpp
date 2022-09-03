#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapOneShotRifle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapOneShotRifle.WeapOneShotRifle_C
// 0x0000 (0x0DC0 - 0x0DC0)
class AWeapOneShotRifle_C : public AShooterWeapon_Instant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapOneShotRifle.WeapOneShotRifle_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapOneShotRifle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
