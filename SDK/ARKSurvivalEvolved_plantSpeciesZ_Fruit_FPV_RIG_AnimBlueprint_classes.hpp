#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_plantSpeciesZ_Fruit_FPV_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass plantSpeciesZ_Fruit_FPV_RIG_AnimBlueprint.plantSpeciesZ_Fruit_FPV_RIG_AnimBlueprint_C
// 0x0000 (0x0689 - 0x0689)
class UplantSpeciesZ_Fruit_FPV_RIG_AnimBlueprint_C : public UFPVGrenadeWeaponAnimBP_NoCooking_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass plantSpeciesZ_Fruit_FPV_RIG_AnimBlueprint.plantSpeciesZ_Fruit_FPV_RIG_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_plantSpeciesZ_Fruit_FPV_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
