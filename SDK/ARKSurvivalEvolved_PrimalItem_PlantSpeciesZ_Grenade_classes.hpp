#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_PlantSpeciesZ_Grenade_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_PlantSpeciesZ_Grenade.PrimalItem_PlantSpeciesZ_Grenade_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItem_PlantSpeciesZ_Grenade_C : public UPrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_PlantSpeciesZ_Grenade.PrimalItem_PlantSpeciesZ_Grenade_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_PlantSpeciesZ_Grenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
