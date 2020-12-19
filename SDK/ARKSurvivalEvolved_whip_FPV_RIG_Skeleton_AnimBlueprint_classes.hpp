#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_whip_FPV_RIG_Skeleton_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass whip_FPV_RIG_Skeleton_AnimBlueprint.whip_FPV_RIG_Skeleton_AnimBlueprint_C
// 0x0000 (0x09B0 - 0x09B0)
class Uwhip_FPV_RIG_Skeleton_AnimBlueprint_C : public UFPVMeleeWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass whip_FPV_RIG_Skeleton_AnimBlueprint.whip_FPV_RIG_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_whip_FPV_RIG_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
