#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArtifactCrate_Explosion_11_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArtifactCrate_Explosion_11.ArtifactCrate_Explosion_10_C
// 0x0000 (0x0518 - 0x0518)
class AArtifactCrate_Explosion_10_C : public ASupplyCrateExplosion_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArtifactCrate_Explosion_11.ArtifactCrate_Explosion_10_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ArtifactCrate_Explosion_11(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
