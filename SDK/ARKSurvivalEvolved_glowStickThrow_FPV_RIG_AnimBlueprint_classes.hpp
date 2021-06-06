#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_glowStickThrow_FPV_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass glowStickThrow_FPV_RIG_AnimBlueprint.glowStickThrow_FPV_RIG_AnimBlueprint_C
// 0x0000 (0x0719 - 0x0719)
class UglowStickThrow_FPV_RIG_AnimBlueprint_C : public UFPVGrenadeWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass glowStickThrow_FPV_RIG_AnimBlueprint.glowStickThrow_FPV_RIG_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_glowStickThrow_FPV_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
