#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootCrate_Explosion_Yellow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootCrate_Explosion_Yellow.LootCrate_Explosion_Yellow_C
// 0x0000 (0x0500 - 0x0500)
class ALootCrate_Explosion_Yellow_C : public ASupplyCrateExplosion_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootCrate_Explosion_Yellow.LootCrate_Explosion_Yellow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_LootCrate_Explosion_Yellow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
