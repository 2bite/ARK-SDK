#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeaponFistsAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass WeaponFistsAnimBlueprint.WeaponFistsAnimBlueprint_C
// 0x0000 (0x18CE - 0x18CE)
class UWeaponFistsAnimBlueprint_C : public UFPVWeaponAnimBP_Base_Carrying_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass WeaponFistsAnimBlueprint.WeaponFistsAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_WeaponFistsAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
