#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedPistol_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapMachinedPistol.WeapMachinedPistol_C
// 0x0000 (0x0D90 - 0x0D90)
class AWeapMachinedPistol_C : public AShooterWeapon_Instant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapMachinedPistol.WeapMachinedPistol_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapMachinedPistol(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
