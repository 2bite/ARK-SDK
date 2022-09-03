#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_boomerang_FPV_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass boomerang_FPV_RIG_AnimBlueprint.boomerang_FPV_RIG_AnimBlueprint_C
// 0x0000 (0x0891 - 0x0891)
class Uboomerang_FPV_RIG_AnimBlueprint_C : public UFPVThrowWeaponAnimBP_Returner_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass boomerang_FPV_RIG_AnimBlueprint.boomerang_FPV_RIG_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_boomerang_FPV_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
