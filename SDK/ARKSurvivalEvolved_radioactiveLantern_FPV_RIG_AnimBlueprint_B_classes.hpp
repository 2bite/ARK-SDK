#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_radioactiveLantern_FPV_RIG_AnimBlueprint_B_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass radioactiveLantern_FPV_RIG_AnimBlueprint_B.radioactiveLantern_FPV_RIG_AnimBlueprint_B_C
// 0x0000 (0x1218 - 0x1218)
class UradioactiveLantern_FPV_RIG_AnimBlueprint_B_C : public UFPVWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass radioactiveLantern_FPV_RIG_AnimBlueprint_B.radioactiveLantern_FPV_RIG_AnimBlueprint_B_C");
		return ptr;
	}


	void ExecuteUbergraph_radioactiveLantern_FPV_RIG_AnimBlueprint_B(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
