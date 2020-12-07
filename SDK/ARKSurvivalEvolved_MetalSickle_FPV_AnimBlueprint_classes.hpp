#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MetalSickle_FPV_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass MetalSickle_FPV_AnimBlueprint.MetalSickle_FPV_AnimBlueprint_C
// 0x0000 (0x09B0 - 0x09B0)
class UMetalSickle_FPV_AnimBlueprint_C : public UFPVMeleeWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MetalSickle_FPV_AnimBlueprint.MetalSickle_FPV_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_MetalSickle_FPV_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
