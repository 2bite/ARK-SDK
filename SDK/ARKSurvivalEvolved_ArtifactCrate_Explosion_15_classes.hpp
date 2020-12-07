#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArtifactCrate_Explosion_15_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArtifactCrate_Explosion_15.ArtifactCrate_Explosion_14_C
// 0x0000 (0x0518 - 0x0518)
class AArtifactCrate_Explosion_14_C : public ASupplyCrateExplosion_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArtifactCrate_Explosion_15.ArtifactCrate_Explosion_14_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ArtifactCrate_Explosion_15(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
