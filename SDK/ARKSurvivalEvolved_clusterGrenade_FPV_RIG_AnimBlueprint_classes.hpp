#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_clusterGrenade_FPV_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass clusterGrenade_FPV_RIG_AnimBlueprint.clusterGrenade_FPV_RIG_AnimBlueprint_C
// 0x0000 (0x0719 - 0x0719)
class UclusterGrenade_FPV_RIG_AnimBlueprint_C : public UFPVGrenadeWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass clusterGrenade_FPV_RIG_AnimBlueprint.clusterGrenade_FPV_RIG_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_clusterGrenade_FPV_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
