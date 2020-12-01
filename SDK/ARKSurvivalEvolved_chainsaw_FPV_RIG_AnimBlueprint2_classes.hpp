#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_chainsaw_FPV_RIG_AnimBlueprint2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass chainsaw_FPV_RIG_AnimBlueprint2.chainsaw_FPV_RIG_AnimBlueprint2_C
// 0x0000 (0x09B0 - 0x09B0)
class Uchainsaw_FPV_RIG_AnimBlueprint2_C : public UFPVMeleeWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass chainsaw_FPV_RIG_AnimBlueprint2.chainsaw_FPV_RIG_AnimBlueprint2_C");
		return ptr;
	}


	void ExecuteUbergraph_chainsaw_FPV_RIG_AnimBlueprint2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
