#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HandcuffsWeaponAnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass HandcuffsWeaponAnimBP.HandcuffsWeaponAnimBP_C
// 0x0000 (0x1218 - 0x1218)
class UHandcuffsWeaponAnimBP_C : public UFPVWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass HandcuffsWeaponAnimBP.HandcuffsWeaponAnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_HandcuffsWeaponAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
