#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_flamethrower_FPV_RIG_Skeleton_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass flamethrower_FPV_RIG_Skeleton_AnimBlueprint.flamethrower_FPV_RIG_Skeleton_AnimBlueprint_C
// 0x0000 (0x1218 - 0x1218)
class Uflamethrower_FPV_RIG_Skeleton_AnimBlueprint_C : public UFPVWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass flamethrower_FPV_RIG_Skeleton_AnimBlueprint.flamethrower_FPV_RIG_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_flamethrower_FPV_RIG_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
