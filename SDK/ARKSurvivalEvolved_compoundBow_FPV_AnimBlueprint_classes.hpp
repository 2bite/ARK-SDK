#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_compoundBow_FPV_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass compoundBow_FPV_AnimBlueprint.compoundBow_FPV_AnimBlueprint_C
// 0x0000 (0x09F1 - 0x09F1)
class UcompoundBow_FPV_AnimBlueprint_C : public UFPVBowWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass compoundBow_FPV_AnimBlueprint.compoundBow_FPV_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_compoundBow_FPV_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
