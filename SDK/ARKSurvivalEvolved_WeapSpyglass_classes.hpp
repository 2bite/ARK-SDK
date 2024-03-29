#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSpyglass_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapSpyglass.WeapSpyglass_C
// 0x0000 (0x0D88 - 0x0D88)
class AWeapSpyglass_C : public AShooterWeapon_Melee
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSpyglass.WeapSpyglass_C");
		return ptr;
	}


	bool ForceDisableCameraOverrides();
	bool BPCanToggleAccessory();
	void UserConstructionScript();
	void ExecuteUbergraph_WeapSpyglass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
