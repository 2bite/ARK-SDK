#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateExplosionArtifact_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrateExplosionArtifact.SupplyCrateExplosionArtifact_C
// 0x0000 (0x0500 - 0x0500)
class ASupplyCrateExplosionArtifact_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateExplosionArtifact.SupplyCrateExplosionArtifact_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrateExplosionArtifact(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
