#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootCrate_Explosion_Green_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootCrate_Explosion_Green.LootCrate_Explosion_Green_C
// 0x0000 (0x0518 - 0x0518)
class ALootCrate_Explosion_Green_C : public ASupplyCrateExplosion_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootCrate_Explosion_Green.LootCrate_Explosion_Green_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_LootCrate_Explosion_Green(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
