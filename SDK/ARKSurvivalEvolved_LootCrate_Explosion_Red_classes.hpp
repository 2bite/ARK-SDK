#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootCrate_Explosion_Red_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootCrate_Explosion_Red.LootCrate_Explosion_Red_C
// 0x0000 (0x0518 - 0x0518)
class ALootCrate_Explosion_Red_C : public ASupplyCrateExplosion_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootCrate_Explosion_Red.LootCrate_Explosion_Red_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_LootCrate_Explosion_Red(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
