#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedSniper_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapMachinedSniper.WeapMachinedSniper_C
// 0x0000 (0x0DC8 - 0x0DC8)
class AWeapMachinedSniper_C : public AShooterWeapon_Instant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapMachinedSniper.WeapMachinedSniper_C");
		return ptr;
	}


	bool ForceDisableCameraOverrides();
	void UserConstructionScript();
	void ExecuteUbergraph_WeapMachinedSniper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
