#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSawedOffShotgun_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapSawedOffShotgun.WeapSawedOffShotgun_C
// 0x0000 (0x0D90 - 0x0D90)
class AWeapSawedOffShotgun_C : public AShooterWeapon_Instant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSawedOffShotgun.WeapSawedOffShotgun_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapSawedOffShotgun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
